#include "WaterConservancyDataEngine.h"
#include "core\datastream.h"
#include "core\dir.h"
#include "geometry3d\vertex.h"
#include "mathengine\vector3.h"
#include "graphic\colourvalue.h"
#include "core\file.h"
#include "spatialobject\coordinatesystem\coordinatefactory.h"
#include "spatialobject\geometry\curvering.h"
#include "spatialobject\geometry\point.h"
#include "spatialobject\geometry\polygon.h"
#include "geometry3d\iglobelayer.h"
#include "spatial3dlayer\vectordbclampscenelayer.h"
#include "spatialinterface\ifeature.h"
#include "spatialinterface\ifeatureclass.h"
#include "spatialobject\geometry\polyline.h"
#include "spatial3dlayer\featuregrouplayer.h"
#include "kmlserializer\geoobjectextension.h"
#include "WaterManager.h"
#include "BillboardManager.h"
#include "spatial3dcalculator\spatialcalculator.h"
#include "xld\WaterConservancyManager.h"
#include "WorldSetting.h"
#include "CustomMovable.h"


using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Graphic;
using namespace EarthView::World::Geometry3D;
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial::Utility;
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial3D::Atlas;


void EarthView::Xld::CWaterConservancyDataEngine::WriteProjectModelStencil(ev_real64 longiResolution, ev_real64 latiResolution)
{
	EarthView::World::Spatial::Geometry::CEnvelope* pEnvlope = EarthView::Xld::CWaterConservancyDataEngine::CreateProjectEnvelope();
	EarthView::World::Spatial::Geometry::CPolygon* pPolygon = EarthView::Xld::CWaterConservancyDataEngine::CreateProjectRange();
	CVector2 minPoint(pEnvlope->getMinX(), pEnvlope->getMinY());
	CVector2 maxPoint(pEnvlope->getMaxX(), pEnvlope->getMaxY());
	ev_int64 xCount = (maxPoint.x - minPoint.x) / longiResolution;
	ev_int64 yCount = (maxPoint.y - minPoint.y) / latiResolution;
	ev_real64 xStep = longiResolution;
	ev_real64 yStep = latiResolution;
	CVector3 centerPoint;
	pEnvlope->getCenter(centerPoint.x, centerPoint.y, centerPoint.z);
	ev_real64 centerAlti = EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()->getHeightAt(centerPoint.y, centerPoint.x, -1);
	CVector3 centerPos = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(centerPoint.y, centerPoint.x, centerAlti + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	ev_int64 **tmpIndexes = new ev_int64*[xCount];
	for (int i = 0; i < xCount; ++i)
	{
		tmpIndexes[i] = new ev_int64[yCount];
	}
	vector<CVector3> mVertextList;
	CIndexVector indexVector;
	CVertexVector vertexVector;
	//计算顶点
	ev_int64 index = 0;
	for (ev_uint64 i = 0; i < xCount; i++)
	{
		for (ev_uint64 j = 0; j < yCount; j++)
		{
			EarthView::World::Spatial::Geometry::CPoint point(xStep*i + minPoint.x, yStep*j + minPoint.y, 0);

			if (pPolygon->isContains(&point, EVDimensionType::DT_DIMENSION_2))
			{
				ev_real64 tmpAlti = EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()->getHeightAt(point.getY(), point.getX(), -1);
				ev_real64 x = point.getX();
				ev_real64 y = point.getY();
				if (tmpAlti > 220)
				{
					while (true)
					{
						tmpAlti = tmpAlti - 100;
						if (tmpAlti < 220)
						{
							break;
						}
					}
				}
				else
				{
					tmpAlti = tmpAlti + 100;
				}
				CVector3 tmpPos = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(point.getY(), point.getX(), tmpAlti + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
				CVertex tmpVertex;
				
				CVector3 pos(tmpPos.x - centerPos.x, tmpPos.y - centerPos.y, tmpPos.z - centerPos.z);
				mVertextList.push_back(CVector3(pos.x, pos.y, pos.z));
				tmpVertex.setPostion(pos);
				tmpVertex.setTexCoord(CVector4(0.1*i, 0.1*j, 0, 1));
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
	for (ev_uint64 i = 0; i < xCount - 1; i++)
	{
		for (ev_uint64 j = 0; j < yCount - 1; j++)
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

	EarthView::Xld::CWaterConservancyDataEngine::WriteRenderObjectCache(CWorldSetting::GetSingtonPtr()->mCurrentRuntimePath + "\\Data\\stencil\\BaseTerrain.stl","turang1",&vertexVector, &indexVector);
	

	for (int i = 0; i < xCount; i++)
	{
		delete tmpIndexes[i];
		tmpIndexes[i] = NULL;
	}
	delete[xCount]tmpIndexes;
	tmpIndexes = NULL;
	mVertextList.clear();
	delete pPolygon;
	delete pEnvlope;
}

void EarthView::Xld::CWaterConservancyDataEngine::ReadProjectModelStencil(const EVString& fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector* vertexVector, _out EarthView::World::Geometry3D::CIndexVector* indexVector)
{
	EarthView::Xld::CWaterConservancyDataEngine::ReadTerrainCache(fileName, materialName, vertexVector, indexVector);
	CMaterialPtr TextureMaterial;
	EVString TextureMatName = "TerrainTexture";
	if (!CMaterialManager::getSingleton().resourceExists(TextureMatName))
		TextureMaterial = CMaterialManager::getSingleton().create(TextureMatName, CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
	ev_real64 x = 0;
	ev_real64 y = 0;
	ev_real64 z = 0;
	CVector3 centerPoint;
	EarthView::Xld::CWaterConservancyDataEngine::CreateProjectEnvelope()->getCenter(centerPoint.x, centerPoint.y, centerPoint.z);
	ev_real64 centerAlti = EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()->getHeightAt(centerPoint.y, centerPoint.x, -1);
	CVector3 centerPos = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(centerPoint.y, centerPoint.x, centerAlti + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
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

	EarthView::Xld::RenderableObject::CCustomMovable* mMovable = new EarthView::Xld::RenderableObject::CCustomMovable("test", CWorldSetting::GetSingtonPtr()->mpGlobeControl);
	mMovable->buildSurfaceBuffer(*vertexVector, *indexVector);//创建顶点和索引缓存，并写入数据
	mMovable->setSurfaceMaterial(TextureMatName);//设置材质
	CSceneNode* mNode = CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()->getRootSceneNode()->createChildSceneNode();//挂接节点
	mNode->setPosition(centerPos);																									
	//CVector3 pos(112, 35, pData->MinZ);
	//CMatrix4 matrix = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(centerPoint.y, centerPoint.x, centerPoint.z, CVector3::UNIT_SCALE, CQuaternion::IDENTITY);
	mNode->attachObject(mMovable);
	//mNode->setMatrix(matrix);
	//mNode->yaw(CRadian(CDegree(180)));
	//this->mpGlobeControl->goTo(oriCenter.y, oriCenter.x, 0, 0, 2000);
	//mTerrainList[terrainName] = mMovable;
	//mNodeList[terrainName] = mNode;
	mMovable->setRenderQueueGroup(45);
}

EarthView::World::Spatial::Geometry::CPolygon * EarthView::Xld::CWaterConservancyDataEngine::CreateProjectRange()
{
	EarthView::World::Spatial::Geometry::CPolygon* polygon = new EarthView::World::Spatial::Geometry::CPolygon();
	CCurveRing curvering;
	CFeatureGroupLayer* fg = ((EarthView::World::Spatial3D::CGeoSceneManager*)(EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()))->getFeatureGroupLayer();
	for (ev_int32 i = 0; i < fg->getLayerCount(); i++)
	{
		IGlobeLayer* gl = fg->getLayer(i);
		if (gl->getName() == CWorldSetting::GetSingtonPtr()->mRiverRangeShpName)
		{
			CVectorDBClampSceneLayer* vl = dynamic_cast<CVectorDBClampSceneLayer*>(gl);
			EarthView::World::Spatial::GeoDataset::IDataset* da = vl->getDataset();
			EarthView::World::Spatial::GeoDataset::IFeatureClass* fc = dynamic_cast<EarthView::World::Spatial::GeoDataset::IFeatureClass*>(da);
			EarthView::World::Spatial::GeoDataset::IFeature* feature = fc->getFeature(1);
			const IGeometry* geo = feature->getGeometryRef();
			const EarthView::World::Spatial::Geometry::CPolyline* polyline = dynamic_cast<const EarthView::World::Spatial::Geometry::CPolyline*> (geo);
			CCurvePath* path = polyline->getCurvePath(0);
			CCurve* ring = path->getCurve(0);
			curvering.add(*ring, 0);
			curvering.update();
		}
	}
	polygon->addExteriorRing(curvering);
	polygon->update();
	polygon->setSpatialReferenceRef(CWorldSetting::GetSingtonPtr()->mpGlobeSpatialReference);
	polygon->update();
	return polygon;
}

//void EarthView::Xld::CWaterConservancyDataEngine::CreateStardardTerrain()
//{
	//CMaterialPtr TextureMaterial;
	//EVString TextureMatName = "TerrainTexture";
	//if (!CMaterialManager::getSingleton().resourceExists(TextureMatName))
	//	TextureMaterial = CMaterialManager::getSingleton().create(TextureMatName, CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);



	////设置纹理材质的图片
	//CImage image;
	//image.load("turang1.jpg", "Resource");
	//CTexturePtr mTitleTextTexturePtr = CTextureManager::getSingleton().loadImage("TerrainTexture", "Resource", image);
	////设置纹理材质通道的光照，背面剔除，场景混合，颜色跟踪，阴影
	//TextureMaterial->getTechnique(0)->getPass(0)->setLightingEnabled(true);
	//TextureMaterial->getTechnique(0)->getPass(0)->setCullingMode(EarthView::World::Graphic::CULL_NONE);
	//TextureMaterial->getTechnique(0)->getPass(0)->setSceneBlending(SBT_TRANSPARENT_ALPHA);
	//TextureMaterial->setReceiveShadows(false);
	////设置纹理单元的纹理和缩放比例
	//CTextureUnitState* tus = TextureMaterial->getTechnique(0)->getPass(0)->createTextureUnitState();
	//tus->setTexture(mTitleTextTexturePtr);
	//tus->setTextureUScale(1);
	//tus->setTextureVScale(1);
	//TextureMaterial->load();

	//EarthView::Xld::RenderableObject::CTerrainMovable* mMovable = new EarthView::Xld::RenderableObject::CTerrainMovable("test", CWorldSetting::GetSingtonPtr()->mpGlobeControl);
	//mMovable->buildSurfaceBuffer(vertexVector, indexVector);//创建顶点和索引缓存，并写入数据
	//mMovable->setSurfaceMaterial(TextureMatName);//设置材质
	//mNode = CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()->getRootSceneNode()->createChildSceneNode();//挂接节点
	//mNode->setPosition(centerPos);																									
	////CVector3 pos(112, 35, pData->MinZ);
	////CMatrix4 matrix = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(centerPoint.y, centerPoint.x, centerPoint.z, CVector3::UNIT_SCALE, CQuaternion::IDENTITY);
	//mNode->attachObject(mMovable);
	////mNode->setMatrix(matrix);
	////mNode->yaw(CRadian(CDegree(180)));
	////this->mpGlobeControl->goTo(oriCenter.y, oriCenter.x, 0, 0, 2000);
	////mTerrainList[terrainName] = mMovable;
	////mNodeList[terrainName] = mNode;
	//mMovable->setRenderQueueGroup(45);
//}

void EarthView::Xld::CWaterConservancyDataEngine::WriteRenderObjectCache(const EVString & fileName, const EVString & materialName, _in EarthView::World::Geometry3D::CVertexVector * vertexVector, _in EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	ev_int32 pos = fileName.find_last_of(EVString("/").c_str(), -1);
	if (pos == -1)
		pos = fileName.find_last_of(EVString("\\").c_str(), -1);
	EVString dir = fileName.subString(0, pos);
	if (!CDirectory::exists(dir))
		return;

	CFileHandleDataStream* s = new CFileHandleDataStream(fileName, 2);
	CDataStreamWriter* writer = new CDataStreamWriter(*s);
	
		writer->writeString(materialName);
		ev_size_t vertexCount = vertexVector->getCount();
		writer->writeUInt64(vertexCount);
		for (ev_size_t i= 0;i<vertexCount;++i)
		{
			EarthView::World::Geometry3D::CVertex vx = vertexVector->getVertex(i);
			CVector3 pos = vx.getPostion();
			CVector3 normal = vx.getNormal();
			CVector4 texCoord = vx.getTexCoord();
			CColourValue colourValue = vx.getColour();
			writer->writeReal64(pos.x);
			writer->writeReal64(pos.y);
			writer->writeReal64(pos.z);
			/*writer->writeReal32(colourValue.a);
			writer->writeReal32(colourValue.r);
			writer->writeReal32(colourValue.g);
			writer->writeReal32(colourValue.b);*/
			writer->writeReal64(normal.x);
			writer->writeReal64(normal.y);
			writer->writeReal64(normal.z);
			writer->writeReal64(texCoord.x);
			writer->writeReal64(texCoord.y);
			writer->writeReal64(texCoord.z);
			writer->writeReal64(texCoord.w);
		}


		ev_size_t indexCount = indexVector->getCount();
		writer->writeUInt64(indexCount);
		for (ev_size_t i = 0; i < indexCount; ++i)
		{
			ev_uint32 index = indexVector->getIndices(i);
			writer->writeUInt32(index);
		}
	
	s->close();
	delete s;
	s = NULL;
	delete writer;
	writer = NULL;
	return;
}

void EarthView::Xld::CWaterConservancyDataEngine::ReadTerrainCache(const EVString & fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector * vertexVector, _out EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	if (!CFile::exists(fileName))
	{
		return;
	}
	CFileHandleDataStream* s = new CFileHandleDataStream(fileName, 1);
	CDataStreamReader* reader = new CDataStreamReader(*s);
	reader->readString(materialName);
	ev_uint64 vertexCount = 0;
	reader->readUInt64(vertexCount);
	for (ev_uint64 i = 0; i < vertexCount; i++)
	{
		CVector3 pos;
		CVector3 normal;
		CVector4 texCoord;
		CColourValue colourValue;
		CVertex vertex;
		reader->readReal64(pos.x);
		reader->readReal64(pos.y);
		reader->readReal64(pos.z);
		/*	reader->readReal32(colourValue.a);
			reader->readReal32(colourValue.r);
			reader->readReal32(colourValue.g);
			reader->readReal32(colourValue.b);*/
		reader->readReal64(normal.x);
		reader->readReal64(normal.y);
		reader->readReal64(normal.z);
		reader->readReal64(texCoord.x);
		reader->readReal64(texCoord.y);
		reader->readReal64(texCoord.z);
		reader->readReal64(texCoord.w);
		vertex.setPostion(pos);
		vertex.setColour(colourValue);
		vertex.setNormal(normal);
		vertex.setTexCoord(texCoord);
		vertexVector->addVertex(vertex);
	}
	ev_uint64 indexCount = 0;
	reader->readUInt64(indexCount);
	for (ev_uint64 i = 0; i < indexCount; i++)
	{
		ev_uint32 index = 0;
		reader->readUInt32(index);
		indexVector->addIndices(index);
	}
	s->close();
	delete s;
	s = NULL;
	delete reader;
	reader = NULL;
	return;
}

EarthView::World::Spatial::Geometry::CEnvelope * EarthView::Xld::CWaterConservancyDataEngine::CreateProjectEnvelope()
{
	CFeatureGroupLayer* fg = ((EarthView::World::Spatial3D::CGeoSceneManager*)(EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()))->getFeatureGroupLayer();
	for (ev_uint32 i = 0; i < fg->getLayerCount(); i++)
	{
		IGlobeLayer* gl = fg->getLayer(0);
		if (gl->getName() == "xldextent.shp")
		{
			CVectorDBClampSceneLayer* vl = dynamic_cast<CVectorDBClampSceneLayer*>(gl);
			return new CEnvelope(vl->getGeoExtent());
		}
	}
	return NULL;
}

EarthView::World::Spatial::Math::VertexList* EarthView::Xld::CWaterConservancyDataEngine::CreateProjectBoundPoints(EVString layerName)
{
	CFeatureGroupLayer* fg = ((EarthView::World::Spatial3D::CGeoSceneManager*)(EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()))->getFeatureGroupLayer();
	VertexList* vertextList = new VertexList();
	for (ev_int32 i = 0; i < fg->getLayerCount(); i++)
	{
		IGlobeLayer* gl = fg->getLayer(i);
		if (gl->getName() == layerName)
		{
			CVectorDBClampSceneLayer* vl = dynamic_cast<CVectorDBClampSceneLayer*>(gl);
			EarthView::World::Spatial::GeoDataset::IDataset* da = vl->getDataset();
			EarthView::World::Spatial::GeoDataset::IFeatureClass* fc = dynamic_cast<EarthView::World::Spatial::GeoDataset::IFeatureClass*>(da);
			EarthView::World::Spatial::GeoDataset::IFeature* feature = fc->getFeature(1);
			const IGeometry* geo = feature->getGeometryRef();
			const EarthView::World::Spatial::Geometry::CPolyline* polyline = dynamic_cast<const EarthView::World::Spatial::Geometry::CPolyline*> (geo);
			if (polyline) 
			{
				EarthView::World::Spatial::Geometry::CLineString* linestr = polyline->toLineString(0);
				int pointC = linestr->getCount();
				for (int i = 0; i < pointC; i++)
				{
					CPoint* p = linestr->getPoint(i);
					ev_real64 x = p->getX();
					ev_real64 y = p->getY();
					ev_real64 z = p->getZ();
					CVector3 pos(x, y, z);
					vertextList->push_back(pos);
					delete p;
				}
			}
			
		}
	}
	return vertextList;
}

