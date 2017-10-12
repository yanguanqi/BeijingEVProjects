#include "TerrainManager.h"
#include "GISDataEngine.h"
#include "mathengine\vector3.h"
#include "graphic\colourvalue.h"
#include "geometry3d\vertex.h"
#include "graphic\material.h"
#include "graphic\materialmanager.h"
#include "core\dir.h"
#include "graphic\resourcegroupmanager.h"
#include "graphic\texturemanager.h"
#include "spatial3dcalculator\spatialcalculator.h"
#include "xld\WaterConservancyManager.h"
#include "TerrainMovable.h"
#include "graphic\scenenode.h"
#include "GISDataType.h"
#include "graphic\common.h"
#include "mathengine\mathutility.h"
#include "WaterConservancyDataEngine.h"
#include "spatialobject\coordinatesystem\coordinatefactory.h"
#include "spatialobject/coordinatesystem/transformation.h"
#include "BillboardManager.h"
#include "WorldSetting.h"

using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Geometry3D;
using namespace EarthView::World::Graphic;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial3D::Utility;
using namespace EarthView::Xld::RenderableObject;
using namespace EarthView::World::Spatial::Utility;

EarthView::Xld::RenderLib::CTerrainManager* EarthView::Xld::RenderLib::CTerrainManager::mpSingleton = NULL;
ev_uint64 EarthView::Xld::RenderLib::CTerrainManager::TerrainCount = 0;
ev_real64 EarthView::Xld::RenderLib::CTerrainManager::CenterX = -1;
ev_real64 EarthView::Xld::RenderLib::CTerrainManager::CenterY = -1;
ev_real64 EarthView::Xld::RenderLib::CTerrainManager::CenterZ = -1;


void EarthView::Xld::RenderLib::CTerrainManager::DeleteTerrain(const EVString & name)
{
	if (mTerrainList.find(name) != mTerrainList.end() && mNodeList.find(name) != mNodeList.end())
	{
		CSceneNode* mNode = mNodeList[name];
		CTerrainMovable* mMovable = mTerrainList[name];
		if (mNode)
		{
			if (mMovable)
			{
				mNode->detachObject(mMovable);
				delete mMovable;
				mMovable = NULL;
			}
			this->mpGlobeControl->getSceneManager()->getRootSceneNode()->removeAndDestroyChild(mNode->getName());
			mNode = NULL;
		}
		mNodeList.erase(name);
		mTerrainList.erase(name);
		EarthView::Xld::RenderLib::CTerrainManager::TerrainCount--;
	}

}

EVString EarthView::Xld::RenderLib::CTerrainManager::GetTerrainName(const ev_int32 index)
{
	if (mTerrainList.size() > 0 && mTerrainList.size()>index)
	{
		return mTerrainNameList.at(index);
	}
	else
	{
		return "";
	}
	
}

ev_uint64 EarthView::Xld::RenderLib::CTerrainManager::GetTerrainCount()
{
	return mTerrainList.size();
}

void EarthView::Xld::RenderLib::CTerrainManager::SetTerrainVisible(EVString name, ev_bool isVisible)
{
	if (mNodeList.find(name) != mNodeList.end())
	{
		if (isVisible)
		{
			this->mpGlobeControl->getSceneManager()->getRootSceneNode()->addChild(mNodeList[name]);
		}
		else
		{
			this->mpGlobeControl->getSceneManager()->getRootSceneNode()->removeChild(mNodeList[name]);
		}
	}
}

ev_bool EarthView::Xld::RenderLib::CTerrainManager::GetTerrainVisible(EVString name)
{
	if (mNodeList.find(name) != mNodeList.end())
	{
		return mNodeList[name]->getVisible();
	}
	return false;
}

void EarthView::Xld::RenderLib::CTerrainManager::RaiseTerrain(EVString name, ev_real64 zOffset)
{
	if (mNodeList.find(name) != mNodeList.end())
	{
		CVector3 v = mNodeList[name]->getPosition();
		v.z += zOffset;
		CMatrix4 matrix = CSpatialCalculator::composeWorldMatrix(35, 112, v.z, CVector3::UNIT_SCALE, CQuaternion::IDENTITY);
		mNodeList[name]->setPosition(v);
	}
}

EarthView::Xld::RenderLib::CTerrainManager::CTerrainManager()
{
	mpGlobeControl = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl;

}

EarthView::Xld::RenderLib::CTerrainManager::~CTerrainManager()
{
	for (int i = 0; i < mNodeList.size(); i++)
	{
		CSceneNode* mNode = mNodeList[i];
		if (mNode)
		{
			CTerrainMovable* mMovable = mTerrainList[i];
			if (mMovable)
			{
				mNode->detachObject(mMovable);
				delete mMovable;
				mMovable = NULL;
			}
			this->mpGlobeControl->getSceneManager()->getRootSceneNode()->removeAndDestroyChild(mNode->getName());
			mNode = NULL;
		}
	}
	mNodeList.clear();
	mTerrainList.clear();

	if (CResourceGroupManager::getSingletonPtr()->resourceGroupExists("test"))
	{
		CResourceGroupManager::getSingletonPtr()->destroyResourceGroup("test");
	}
	this->mpGlobeControl = NULL;
	this->mpSingleton = NULL;
	EarthView::Xld::RenderLib::CTerrainManager::TerrainCount = 0;
}

EarthView::Xld::RenderLib::CTerrainManager & EarthView::Xld::RenderLib::CTerrainManager::getSingleton()
{
	if (!mpSingleton)
	{
		mpSingleton = new CTerrainManager();
	}
	return *mpSingleton;
}

EarthView::Xld::RenderLib::CTerrainManager * EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()
{
	if (!mpSingleton)
	{
		mpSingleton = new CTerrainManager();
	}
	return mpSingleton;
}

void EarthView::Xld::RenderLib::CTerrainManager::CreateGrdTerrain(const EVString& grdFileName)
{
	EarthView::GISDataType::CGrdData* pGrdData = EarthView::Xld::CGISDataEngine::ReadGrd(grdFileName);
	ev_int32 startIndex = grdFileName.find_last_of('/')+1;
	ev_int32 endIndex = grdFileName.find_last_of('.') ;
	EVString terrainName = grdFileName.substr(startIndex, endIndex-startIndex);
	CreateTerrain(terrainName, pGrdData);
	delete pGrdData;
}

void EarthView::Xld::RenderLib::CTerrainManager::CreateTerrain(const EVString& terrainName, EarthView::GISDataType::CGrdData * pData)
{
	if (mTerrainList.find(terrainName) != mTerrainList.end())
	{
		return;
	}
	if (!pData || !pData->IsValid) return;

	EarthView::Xld::RenderLib::CTerrainManager::TerrainCount++;
	//计算中心点
	if (EarthView::Xld::RenderLib::CTerrainManager::CenterX == -1)
	{
		EarthView::Xld::RenderLib::CTerrainManager::CenterX = pData->MinX/2+pData->MaxX/2;
	}
	if (EarthView::Xld::RenderLib::CTerrainManager::CenterY == -1)
	{
		EarthView::Xld::RenderLib::CTerrainManager::CenterY = pData->MinY/2+pData->MaxY/2;
	}
	if (EarthView::Xld::RenderLib::CTerrainManager::CenterZ == -1)
	{
		EarthView::Xld::RenderLib::CTerrainManager::CenterZ = pData->MinZ/2+pData->MaxZ/2;
	}
	//坐标系转换北京54平面6度带投影经线110度，投影至北京54经纬度
	CCoordinateSystemFactory objCreateFactory;
	CSpatialReference* pSpatialRef = (CSpatialReference*) EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGISDataSpatialReference;
	CSpatialReference* pSpatialRef2 = (CSpatialReference*)EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeSpatialReference;
	CCoordinateTransformation transformationObj;
	transformationObj.setSourceCS(pSpatialRef);
	transformationObj.setTargetCS(pSpatialRef2);
	CVector3 oriCenter(CenterX,CenterY,CenterZ);
	transformationObj.transform(1, &(oriCenter.x), &(oriCenter.y), &(oriCenter.z));
	CVector3 centerWrd = CSpatialCalculator::sphericalToCartesian(oriCenter.y, oriCenter.x, oriCenter.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	ev_real64 xStep = pData->GetXPix();
	ev_real64 yStep = pData->GetYPix();
	ev_int64 **tmpIndexes = new ev_int64*[pData->RowCount];
	for (int i = 0; i < pData->RowCount; ++i)
	{
		tmpIndexes[i] = new ev_int64[pData->ColumnCount];
	}
	CIndexVector indexVector;
	CVertexVector vertexVector;
	vector<CVector3> mVertextList;
	//计算顶点
	ev_int64 index = 0;
	for (ev_uint64 i = 0; i < pData->RowCount; i++)
	{
		for (ev_uint64 j = 0; j < pData->ColumnCount; j++)
		{
			if (pData->ZValues[i][j] <= pData->MaxZ && pData->ZValues[i][j] >= pData->MinZ)
			{
				CVertex tmpVertex;
				CVector3 pos(yStep*i + pData->MinY - CenterY, (pData->ZValues[i][j] - CenterZ) , xStep*j + pData->MinX - CenterX);
				mVertextList.push_back(CVector3(pos.x,pos.z, pos.y));
				tmpVertex.setPostion(pos);
				//tmpVertex.setColour(CColourValue(0.2*(ev_real32)EarthView::Xld::Terrain::CTerrainManager::TerrainCount, 0.5*(ev_real32)EarthView::Xld::Terrain::CTerrainManager::TerrainCount, 0.25*(ev_real32)EarthView::Xld::Terrain::CTerrainManager::TerrainCount, 1));
				tmpVertex.setTexCoord(CVector4(1 / xStep*j, 1 / yStep*i, 0, 1));
				vertexVector.addVertex(tmpVertex);
				tmpIndexes[i][j] = (index);
				index++;
			}
			else
			{
				tmpIndexes[i][j] = (-1);
			}

		}
	}
	if (vertexVector.getCount() == 0)
	{
		return;
	}
	//计算索引
	for (ev_uint64 i = 0; i < pData->RowCount - 1; i++)
	{
		for (ev_uint64 j = 0; j < pData->ColumnCount - 1; j++)
		{
			if (tmpIndexes[i][j] != -1 && tmpIndexes[i][j + 1] != -1 && tmpIndexes[i + 1][j] != -1)
			{
				indexVector.addIndices(tmpIndexes[i][j]);
				indexVector.addIndices(tmpIndexes[i][j + 1]);
				indexVector.addIndices(tmpIndexes[i + 1][j]);

			}
			if (tmpIndexes[i + 1][j] != -1 && tmpIndexes[i][j + 1] != -1 && tmpIndexes[i + 1][j + 1] != -1)
			{
				indexVector.addIndices(tmpIndexes[i + 1][j]);
				indexVector.addIndices(tmpIndexes[i][j + 1]);
				indexVector.addIndices(tmpIndexes[i + 1][j + 1]);

			}
		}
	}
	//计算法线
	ev_int32 faceCount = indexVector.getCount() / 3;

	for (ev_int32 i = 0; i < faceCount; i++)
	{
		ev_int32 i3 = 3 * i;
		CVector3 va = mVertextList[indexVector[i3]];
		CVector3 vb = mVertextList[indexVector[i3 + 1]];
		CVector3 vc = mVertextList[indexVector[i3 + 2]];
		CVector3 v1 = vb - va;
		CVector3 v2 = vc - va;

		CVector3 v3 = v1.crossProduct(v2);

		for (ev_int32 j = 0; j < 3; j++)
		{
			vertexVector.getVertex(indexVector[i3 + j]).m_normal += v3;
		}

	}

	for (ev_size_t i = 0; i < vertexVector.getCount(); i++)
	{
		CVector3 n = vertexVector.getVertex(i).m_normal.normalisedCopy();
		vertexVector.getVertex(i).setNormal(n);
	}

	CMaterialPtr TextureMaterial;
	EVString TextureMatName = terrainName;
	if (!CMaterialManager::getSingleton().resourceExists(TextureMatName))
		TextureMaterial = CMaterialManager::getSingleton().create(TextureMatName, CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);

	

	//设置纹理材质的图片
	CImage image;
	image.load("turang1.jpg", "Resource");
	CTexturePtr mTitleTextTexturePtr = CTextureManager::getSingleton().loadImage("TerrainTexture", "Resource", image);
	//设置纹理材质通道的光照，背面剔除，场景混合，颜色跟踪，阴影
	TextureMaterial->getTechnique(0)->getPass(0)->setLightingEnabled(true);
	TextureMaterial->getTechnique(0)->getPass(0)->setCullingMode(EarthView::World::Graphic::CULL_NONE);
	TextureMaterial->getTechnique(0)->getPass(0)->setSceneBlending(SBT_TRANSPARENT_ALPHA);
	TextureMaterial->setReceiveShadows(false);
	//设置纹理单元的纹理和缩放比例
	CTextureUnitState* tus = TextureMaterial->getTechnique(0)->getPass(0)->createTextureUnitState();
	tus->setTexture(mTitleTextTexturePtr);
	tus->setTextureUScale(1);
	tus->setTextureVScale(1);
	TextureMaterial->load();

	CTerrainMovable* mMovable = new CTerrainMovable("test", this->mpGlobeControl);
	mMovable->buildSurfaceBuffer(vertexVector, indexVector);//创建顶点和索引缓存，并写入数据
	mMovable->setSurfaceMaterial(TextureMatName);//设置材质
	CSceneNode* mNode = this->mpGlobeControl->getSceneManager()->getRootSceneNode()->createChildSceneNode();//挂接节点
	//CVector3 pos(112, 35, pData->MinZ);
	CMatrix4 matrix = CSpatialCalculator::composeWorldMatrix(oriCenter.y,oriCenter.x, oriCenter.z, CVector3::UNIT_SCALE, CQuaternion::IDENTITY);
	mNode->attachObject(mMovable);
	mNode->setMatrix(matrix);
	mNode->yaw(CRadian(CDegree(180)));
	this->mpGlobeControl->goTo(oriCenter.y,oriCenter.x, 0, 0, 2000);
	mTerrainList[terrainName] = mMovable;
	mNodeList[terrainName] = mNode;
	CWaterConservancyDataEngine::WriteTerrainCache(".\\" + terrainName + ".y", TextureMatName, &vertexVector, &indexVector);
}



 