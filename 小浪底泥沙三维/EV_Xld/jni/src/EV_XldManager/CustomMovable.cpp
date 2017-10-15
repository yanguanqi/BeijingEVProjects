#include "CustomMovable.h"
#include "graphic\root.h"
#include "graphic\hardwarevertexbuffer.h"
#include "graphic\renderqueue.h"
#include "graphic\camera.h"
#include "graphic\renderable.h"
#include "geometry3d\vertex.h"

EarthView::Xld::RenderableObject::CCustomMovable::CCustomMovable(EVString terrainName,EarthView::World::Spatial3D::Controls::CGlobeControl * control)
{
	this->mpGlobeControl = control;
	this->mpSceneManager = this->mpGlobeControl->getSceneManager();
	mpTestSurfaceRenderable = new CCustomRenderable(mName + "_TestSurfaceRenderable", this);
}

EarthView::Xld::RenderableObject::CCustomMovable::~CCustomMovable()
{
	//mpGlobeControl->getScene()->getS
	this->mpGlobeControl = NULL;
	if (mpTestSurfaceRenderable)
	{
		delete mpTestSurfaceRenderable;
		mpTestSurfaceRenderable = NULL;
	}
}

void EarthView::Xld::RenderableObject::CCustomMovable::_notifyCurrentCamera(CCamera * cam)
{
	CMovableObject::_notifyCurrentCamera(cam);
	mCurrentCamera = cam;
}

void EarthView::Xld::RenderableObject::CCustomMovable::_updateRenderQueue(CRenderQueue * queue)
{
	queue->addRenderable(mpTestSurfaceRenderable, 90);
}

void EarthView::Xld::RenderableObject::CCustomMovable::visitRenderables(CRenderable::CVisitor * visitor, ev_bool debugRenderables)
{
	visitor->visit(mpTestSurfaceRenderable, 0, true);
}

void EarthView::Xld::RenderableObject::CCustomMovable::visitRenderables(CRenderable::CVisitor * visitor)
{
	visitRenderables(visitor, false);
}

EVString EarthView::Xld::RenderableObject::CCustomMovable::getMovableType() const
{
	static EVString movType = "CTerrainMovable";
	return movType;
}


//EVString EarthView::Xld::RenderableObject::CTerrainMovable::getMaterial() const
//{
//	return EVString();
//}

void EarthView::Xld::RenderableObject::CCustomMovable::buildSurfaceBuffer(const CVertexVector & vertexVector, const CIndexVector & indexVector)
{
	EV_ASSERT(vertexVector.getCount() > 0 && indexVector.getCount() > 0);
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexCount = vertexVector.getCount();
	size_t offset = 0;
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexDeclaration->addElement(0, offset, VET_FLOAT3, VES_POSITION);
	offset += CVertexElement::getTypeSize(VET_FLOAT3);
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexDeclaration->addElement(0, offset, VET_FLOAT3, VES_NORMAL);
	offset += CVertexElement::getTypeSize(VET_FLOAT3);
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexDeclaration->addElement(0, offset, VET_FLOAT2, VES_TEXTURE_COORDINATES);
	offset += CVertexElement::getTypeSize(VET_FLOAT2);
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexDeclaration->addElement(0, offset, VET_COLOUR, VES_DIFFUSE);
	offset += CVertexElement::getTypeSize(VET_COLOUR);

	CHardwareVertexBufferSharedPtr boardVertexBuffer = CHardwareBufferManager::getSingleton().createVertexBuffer(
		mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexDeclaration->getVertexSize(0), mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexCount,
		CHardwareBuffer::HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE);
	mpTestSurfaceRenderable->getRenderOperation()->vertexData->vertexBufferBinding->setBinding(0, boardVertexBuffer);

	float* lockPtr = static_cast<float*>(boardVertexBuffer->lock(0, boardVertexBuffer->getSizeInBytes(), CHardwareBuffer::HBL_DISCARD));
	//RGBA* pCol;
	CVector3 pos;
	CVector3 normal;
	for (int i = 0; i < vertexVector.getCount(); i++)
	{
		pos = vertexVector[i].getPostion();
		*lockPtr++ = pos.x;
		*lockPtr++ = pos.y;
		*lockPtr++ = pos.z;

		normal = vertexVector[i].getNormal();
		*lockPtr++ = normal.x;
		*lockPtr++ = normal.y;
		*lockPtr++ = normal.z;

		*lockPtr++ = vertexVector[i].getTexCoord().x;
		*lockPtr++ = vertexVector[i].getTexCoord().y;

		RGBA * pColor = (RGBA *)(lockPtr);

		CRoot::getSingletonPtr()->convertColourValue(vertexVector[i].getColour(), pColor);

		lockPtr = (float *)(pColor + 1);
	}
	boardVertexBuffer->unlock();

	mpTestSurfaceRenderable->getRenderOperation()->indexData->indexCount = indexVector.getCount();
	mpTestSurfaceRenderable->getRenderOperation()->indexData->indexBuffer = CHardwareBufferManager::getSingleton().createIndexBuffer(
		CHardwareIndexBuffer::IT_32BIT,
		mpTestSurfaceRenderable->getRenderOperation()->indexData->indexCount,
		CHardwareBuffer::HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE);

	int count = indexVector.getCount();
	ev_int32* pSurfaceIndex = new ev_int32[count];
	for (int i = 0; i < count; i++)
	{
		pSurfaceIndex[i] = indexVector[i];
	}
	mpTestSurfaceRenderable->getRenderOperation()->indexData->indexBuffer->writeData(0, mpTestSurfaceRenderable->getRenderOperation()->indexData->indexBuffer->getSizeInBytes(), pSurfaceIndex, true);
	if (pSurfaceIndex)
	{
		delete[] pSurfaceIndex;
		pSurfaceIndex = NULL;
	}
	mBox.setInfinite();
	mRadius = CMath::boundingRadiusFromAABB(mBox);
}

void EarthView::Xld::RenderableObject::CCustomMovable::setSurfaceMaterial(const EVString & matName)
{
	mpTestSurfaceRenderable->setMaterial(matName);
}


