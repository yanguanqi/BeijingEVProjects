#include "MoveLine.h"
#include "graphic\manualobject.h"
#include "mathengine\vector3.h"
#include "mathengine\mathutility.h"
#include "RenderLibDataType.h"
#include "spatial3danalysisobject\mathutility3d.h"
#include "mathengine\quaternion.h"

using namespace EarthView::World::Graphic;
using namespace EarthView::World::Spatial::Math;

EarthView::Xld::RenderLib::CMoveLine::CMoveLine(const EVString & name, EarthView::World::Spatial3D::Controls::CGlobeControl * globeControl, CMoveLineType style)
{
	this->mpGlobeControl = globeControl;
	this->mpManualObject = new CManualObject(name);
	this->mLineType = style;
}

EarthView::Xld::RenderLib::CMoveLine::~CMoveLine()
{
	if (mpManualObject)
		delete this->mpManualObject;
	
	if (this->mpSceneNode)
		if (this->mpSceneNode->getParentSceneNode())
			this->mpSceneNode->getParentSceneNode()->removeAndDestroyChild(this->mpSceneNode->getName());
	delete this->mpSceneNode;
}

void EarthView::Xld::RenderLib::CMoveLine::SetCenter(CVector3& point)
{
	if (this->mGeoFirstPoint == EarthView::World::Spatial::Math::CVector3::ZERO)
	{
		this->mGeoFirstPoint.x = point.x;
		this->mGeoFirstPoint.y = point.y;
		this->mGeoFirstPoint.z = point.z;
	}
	this->mGeoCenterPoint.x = point.x;
	this->mGeoCenterPoint.y = point.y;
	this->mGeoCenterPoint.z = point.z;
	this->mPosition = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(point.y, point.x, point.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	if (this->mpSceneNode)
		this->mpSceneNode->setPosition(mPosition);
	this->mpManualObject->clear();
}
void EarthView::Xld::RenderLib::CMoveLine::ChangeCurrent(EarthView::World::Spatial::Math::CVector3 & currentPoint)
{
	if (currentPoint.x - this->mGeoCenterPoint.x > DBL_MIN && currentPoint.y - this->mGeoCenterPoint.y > DBL_MIN)
	{
		mGeoCurrentPoint.x = currentPoint.x;
		mGeoCurrentPoint.y = currentPoint.y;
		mGeoCurrentPoint.z = currentPoint.z;
		this->CreateMesh();
	}
}

void EarthView::Xld::RenderLib::CMoveLine::CreateMesh()
{
	if (!this->mpManualObject)
		return;
	this->mpManualObject->clear();
	this->mpManualObject->setUseIdentityProjection(false);
	this->mpManualObject->setUseIdentityView(false);

	if (this->mLineType == CMoveLineType::StraightLine)
	{
		CVector3 vectors[] = { CVector3::ZERO,CVector3::ZERO };
		vectors[0] = CVector3(0, 0, 0);
		vectors[1] = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(this->mGeoCurrentPoint.y, this->mGeoCurrentPoint.x, this->mGeoCurrentPoint.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS) - this->mPosition;
		this->mpManualObject->begin("", CRenderOperation::OT_LINE_STRIP);
		for (int i = 0; i < vectors->length(); i++)
		{
			this->mpManualObject->position(vectors[i].x, vectors[i].y, vectors[i].z);
			this->mpManualObject->colour(this->mLineColor);
		}
		this->mpManualObject->end();
	}
	else if (this->mLineType == CMoveLineType::Circle) {
		double leng = EarthView::World::Spatial3D::Analysis::CMathUtility3D::lineProjectMeasure(this->mGeoCenterPoint, this->mGeoCurrentPoint);
		EarthView::World::Spatial::Math::VertexList vectors;
		this->mMathUtility3D.splitCircle2WorldPosition(this->mGeoCenterPoint.y, this->mGeoCenterPoint.x, leng, 60, vectors);
		this->mpManualObject->begin("", CRenderOperation::OT_LINE_STRIP);
		for (int i = 0; i < vectors.size(); i++)
		{
			vectors[i] -= this->mPosition;
			this->mpManualObject->position(vectors[i].x, vectors[i].y, vectors[i].z);
			this->mpManualObject->colour(this->mLineColor);
		}
		this->mpManualObject->end();
	}
	else if (this->mLineType == CMoveLineType::Rectangle)
	{
		CVector3 rect[4];
		CVector3 min(DBL_MAX, DBL_MAX, DBL_MAX);
		CVector3 max(DBL_MIN, DBL_MIN, DBL_MIN);
		if (this->mGeoCurrentPoint.x < this->mGeoCenterPoint.x)
		{
			if (this->mGeoCurrentPoint.y > this->mGeoCenterPoint.y)
			{
				min.x = this->mGeoCurrentPoint.x;
				min.y = this->mGeoCenterPoint.y;
				max.x = this->mGeoCenterPoint.x;
				max.y = this->mGeoCurrentPoint.y;
			}
			else if (mGeoCurrentPoint.y < this->mGeoCenterPoint.y)
			{
				min.x = this->mGeoCurrentPoint.x;
				min.y = this->mGeoCurrentPoint.y;
				max.x = this->mGeoCenterPoint.x;
				max.y = this->mGeoCenterPoint.y;
			}
		}
		else if (this->mGeoCurrentPoint.x > this->mGeoCenterPoint.x)
		{
			if (this->mGeoCurrentPoint.y > this->mGeoCenterPoint.y)
			{
				min.x = this->mGeoCenterPoint.x;
				min.y = this->mGeoCenterPoint.y;
				max.x = this->mGeoCurrentPoint.x;
				max.y = this->mGeoCurrentPoint.y;
			}
			else if (this->mGeoCurrentPoint.y < this->mGeoCenterPoint.y)
			{
				min.x = this->mGeoCenterPoint.x;
				min.y = this->mGeoCurrentPoint.y;
				max.x = this->mGeoCurrentPoint.x;
				max.y = this->mGeoCenterPoint.y;
			}
		}
		rect[0] = min;
		rect[1] = CVector3(max.x, min.y, 1);
		rect[2] = max;
		rect[3] = CVector3(min.x, max.y, 1);
		CVector3 vectors[5];
		double terrain = this->mpGlobeControl->getSceneManager()->getHeightAt(rect[0].y, rect[0].x, 1000);
		vectors[0] = CMathUtility::sphericalToCartesian(rect[0].y, rect[0].x, EarthView::World::Spatial::Math::CMath::EARTH_RADIUS + terrain);
		vectors[4] = CMathUtility::sphericalToCartesian(rect[0].y, rect[0].x, EarthView::World::Spatial::Math::CMath::EARTH_RADIUS + terrain);
		terrain = this->mpGlobeControl->getSceneManager()->getHeightAt(rect[1].y, rect[1].x, 1000);
		vectors[1] = CMathUtility::sphericalToCartesian(rect[1].y, rect[1].x, EarthView::World::Spatial::Math::CMath::EARTH_RADIUS + terrain);
		terrain = this->mpGlobeControl->getSceneManager()->getHeightAt(rect[2].y, rect[2].x, 1000);
		vectors[2] = CMathUtility::sphericalToCartesian(rect[2].y, rect[2].x, EarthView::World::Spatial::Math::CMath::EARTH_RADIUS + terrain);
		terrain = this->mpGlobeControl->getSceneManager()->getHeightAt(rect[3].y, rect[3].x, 1000);
		vectors[3] = CMathUtility::sphericalToCartesian(rect[3].y, rect[3].x, EarthView::World::Spatial::Math::CMath::EARTH_RADIUS + terrain);
		//设置顶点参数  
		this->mpManualObject->begin("", CRenderOperation::OT_LINE_STRIP);

		for (int i = 0; i < vectors->length(); i++)
		{
			vectors[i] -= this->mPosition;
			this->mpManualObject->position(vectors[i].x, vectors[i].y, vectors[i].z);

			this->mpManualObject->colour(this->mLineColor);
		}
		this->mpManualObject->end();

	}
	else if (this->mLineType == CMoveLineType::Polygon)
	{
		CVector3 vectors[3];
		vectors[0] = CMathUtility::sphericalToCartesian(mGeoCenterPoint.y, mGeoCenterPoint.x, mGeoCenterPoint.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
		vectors[1] = CMathUtility::sphericalToCartesian(mGeoCurrentPoint.y, mGeoCurrentPoint.x, mGeoCurrentPoint.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
		vectors[2] = CMathUtility::sphericalToCartesian(mGeoFirstPoint.y, mGeoFirstPoint.x, mGeoFirstPoint.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
		//设置顶点参数  
		this->mpManualObject->begin("", CRenderOperation::OT_LINE_STRIP);

		for (int i = 0; i < vectors->length(); i++)
		{
			vectors[i] -= this->mPosition;
			this->mpManualObject->position(vectors[i].x, vectors[i].y, vectors[i].z);
			this->mpManualObject->colour(this->mLineColor);
		}
		this->mpManualObject->end();
	}
	this->mpManualObject->setMaterialName(0, "PositionColor");
	if (!this->mpSceneNode)
	{
		this->mpSceneNode = mpGlobeControl->getSceneManager()->getRootSceneNode()->createChildSceneNode(this->mName);
		this->mpSceneNode->attachObject(this->mpManualObject);
	}
	this->mpSceneNode->setOrientation(CQuaternion::IDENTITY);
	this->mpSceneNode->setPosition(this->mPosition);
	this->mpSceneNode->setScale(CVector3::UNIT_SCALE);


}


