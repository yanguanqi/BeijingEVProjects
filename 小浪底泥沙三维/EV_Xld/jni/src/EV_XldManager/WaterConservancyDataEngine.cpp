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


using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Graphic;
using namespace EarthView::World::Geometry3D;
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial::Utility;
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial3D::Atlas;


void EarthView::Xld::CWaterConservancyDataEngine::GenerateTerrainModelStencil()
{
	EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl;
	EarthView::World::Spatial::Geometry::CEnvelope* env = EarthView::Xld::CWaterConservancyDataEngine::GetWaterSurfaceEnvelope();
	EarthView::World::Spatial::Geometry::CPolygon* polygon = EarthView::Xld::CWaterConservancyDataEngine::GetRiverRange();
	CVector3 minPos(env->getMinX(), env->getMinY(), env->getMinZ());
	CVector3 maxPos(env->getMaxX(), env->getMaxY(), env->getMaxZ());
	CVector3 minWrdPos = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(minPos.y, minPos.x, minPos.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	CVector3 maxWrdPos = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(maxPos.y, maxPos.x, maxPos.z + EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
	int longiCount = maxWrdPos.x*0.2 - minWrdPos.x*0.2;
	int latiCount = maxWrdPos.y*0.2 - minWrdPos.y*0.2;
	vector<vector<CVector3*> > wholeGrid(longiCount, vector<CVector3*>(latiCount));
	for (int j = 0; j < longiCount; j++)
		for (int k = 0; k < latiCount; k++)
			wholeGrid[j][k] = new CVector3();

}

void EarthView::Xld::CWaterConservancyDataEngine::ReadTerrainModelStencil(EarthView::World::Spatial::Math::VertexList* verLst)
{

}

EarthView::World::Spatial::Geometry::CPolygon * EarthView::Xld::CWaterConservancyDataEngine::GetRiverRange()
{
	EarthView::World::Spatial::Geometry::CPolygon* polygon = new EarthView::World::Spatial::Geometry::CPolygon();
	CCurveRing curvering;
	EarthView::World::Spatial::Geometry::CLineString linestring;
	/*for (ev_size_t i = 0; i < bounds->size(); i++)
	{
		CPoint point;
		point.setX(bounds->at(i)->x);
		point.setY(bounds->at(i)->y);
		point.setZ(bounds->at(i)->z);
		linestring.add(point, i);
	}*/
	linestring.setSpatialReferenceRef(CWorldSetting::GetSingtonPtr()->mpGlobeSpatialReference);
	linestring.update();
	curvering.add(linestring, 0);
	curvering.update();
	polygon->addExteriorRing(curvering);
	polygon->update();
	polygon->setSpatialReferenceRef(CWorldSetting::GetSingtonPtr()->mpGlobeSpatialReference);
	polygon->update();
	return polygon;
}

void EarthView::Xld::CWaterConservancyDataEngine::CreateStardardTerrain(_in EarthView::GISDataType::CGrdData * pData, _out EarthView::World::Geometry3D::CVertexVector * vertexVector, _out EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	EarthView::World::Spatial::Geometry::CEnvelope* env = EarthView::Xld::CWaterConservancyDataEngine::GetWaterSurfaceEnvelope();
	ev_real64 xStep = pData->GetXPix();
	ev_real64 yStep = pData->GetYPix();

}

void EarthView::Xld::CWaterConservancyDataEngine::WriteTerrainCache(const EVString & fileName, const EVString & materialName, _in EarthView::World::Geometry3D::CVertexVector * vertexVector, _in EarthView::World::Geometry3D::CIndexVector * indexVector)
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
	for (ev_uint64 i = 0; i < vertexCount; i++)
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

EarthView::World::Spatial::Geometry::CEnvelope * EarthView::Xld::CWaterConservancyDataEngine::GetWaterSurfaceEnvelope()
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

EarthView::World::Spatial::Math::VertexList* EarthView::Xld::CWaterConservancyDataEngine::CreateWaterSurfaceBounds(EVString layerName)
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
