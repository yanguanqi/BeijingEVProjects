#include "WaterManager.h"
#include "spatial3dproxy\kmltreemanager.h"
#include "mathengine\vector3.h"
#include "spatial3dengine\kmldataset.h"
#include "xld\WaterConservancyManager.h"
#include "spatial3dlayer\featuregrouplayer.h"
#include "kmlserializer\kmldocument.h"
#include "WaterConservancyDataEngine.h"
#include "kmlserializer\geoobjectextension.h"
#include "spatial3dengine\geoscenemanager.h"
#include "spatial3dengine\kmlgrouplayer.h"
#include "spatial3dengine\kmllayer.h"
#include "spatialframeworkproxy\appdatasource.h"
#include "spatialframeworkproxy\appatlas.h"
#include "spatialframeworkproxy\datasourceoption.h"
#include "globecontrol\globecontrol.h"
#include "BillboardManager.h"


using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial3DProxy::KmlManager;
using namespace EarthView::World::Spatial::Math;
using namespace EarthView::World::Spatial3D;
using namespace EarthView::World::Spatial::Kml;

EarthView::Xld::RenderLib::CWaterManager* EarthView::Xld::RenderLib::CWaterManager::mpSingleton = NULL;

EarthView::Xld::RenderLib::CWaterManager::CWaterManager()
{
	this->mpEnvelope = NULL;
	this->mpKmlLayer = NULL;
	this->mpKMLWaterSurface = NULL;
	this->mWaterCreated = false;
}

EarthView::Xld::RenderLib::CWaterManager::~CWaterManager()
{
}

void EarthView::Xld::RenderLib::CWaterManager::CreateWaterSurface(const ev_real64 & waterHeight)
{
	if (this->mWaterCreated) return;
	EarthView::World::Spatial::Math::VertexList * vl = CWaterConservancyDataEngine::CreateWaterSurfaceBounds(CWorldSetting::GetSingtonPtr()->mRiverRangeShpName);
	CreateKMLWaterSurface(CWorldSetting::GetSingtonPtr()->mWaterSurfaceKMLObjectName, vl, waterHeight);
	delete vl;
}

void EarthView::Xld::RenderLib::CWaterManager::DeleteWaterSurface(const ev_bool & isSure)
{
	this->DeleteKMLWaterSurface(isSure);
}

void EarthView::Xld::RenderLib::CWaterManager::CreateFloodWaterSurface(const ev_real64& waterHeight)
{

}

void EarthView::Xld::RenderLib::CWaterManager::CreateKMLWaterSurface(EVString kmlName, EarthView::World::Spatial::Math::VertexList* lstVert, const ev_real64 & waterHeight)
{
	if (!this->mWaterCreated)
	{
		/*if (this->mpKmlTreeManager == NULL)
		{
			this->mpKmlTreeManager = new EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager();
		}*/
		EarthView::World::Spatial3D::Atlas::CKmlGroupLayer* gl = ((EarthView::World::Spatial3D::CGeoSceneManager*)(CWorldSetting::GetSingtonPtr()->mpGlobeControl->getSceneManager()))->getKmlGroupLayer();
		if (gl != NULL)
		{
			for (int i = 0; i < gl->getLayerCount(); i++)
			{
				EarthView::World::Spatial3D::Atlas::CKmlLayer* mkmllayer = gl->getLayer(i);
				if (mkmllayer->getName() == CWorldSetting::GetSingtonPtr()->mWaterSurfaceKMLName)
				{
					this->mpKmlLayer = mkmllayer;
					EVString systemwatersurfaceName = kmlName;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* kmlDS = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)mkmllayer->getDataset();
					EarthView::World::Spatial::Kml::CKmlDocument* rootParent = kmlDS->mKmlDocument;
					this->mpKMLRootDocument = rootParent;
					ev_int32 kmlObjCount = rootParent->getGeoObjects().size();
					ev_bool isExistWaterFace = false;
					for (ev_int32 j = 0; j < kmlObjCount; j++)
					{
						EVString kmlObjName = rootParent->getGeoObjects().at(j)->GeoObjectExtAttr.getName();
						if (kmlObjName == systemwatersurfaceName)
						{
							this->mpKMLWaterSurface = rootParent->getGeoObjects().at(j);
							this->mpKMLWaterSurface->GeoObjectExtAttr.setVisible(true);
							EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->updateKmlObject(mpKMLWaterSurface, rootParent);
							isExistWaterFace = true;
						}
					}
					if (!isExistWaterFace)
					{
						EarthView::World::Spatial::Kml::CGeoObjectExtension* polygon = new EarthView::World::Spatial::Kml::CGeoObjectExtension();
						EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& attribute = polygon->GeoObjectExtAttr;
						this->mpKMLWaterSurface = polygon;
						attribute.setKmlType(GXT_SURFACEPOLYGON);
						attribute.setName(systemwatersurfaceName);
						VertexList* v = new VertexList();
						for (int i = 0; i < lstVert->size(); i++)
						{
							CVector3 tv = lstVert->at(i);
							tv.z = 218;
							v->push_back(CVector3(tv));
						}
						attribute.setPoints(*v);
						attribute.setAltitudeMode(EarthView::World::Spatial::Utility::AM_Absolute);
						attribute.setExtrude(false);
						attribute.setHeigth(waterHeight);
						
						EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->setCurrentLayer(mkmllayer);
						EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->addKmlObject(polygon, rootParent);
						EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->updateKmlObject(polygon, rootParent);
						EVString kmlPath = rootParent->mKmlPath;
						rootParent->save(kmlPath);
						delete v;
					}
				}
			}
		}
		mWaterCreated = true;
	}
}

void EarthView::Xld::RenderLib::CWaterManager::SetWaterSurfaceVisible(const ev_bool& isVisible)
{
	if (!mWaterCreated) return;
	this->mpKMLWaterSurface->GeoObjectExtAttr.setVisible(isVisible);
	EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->updateKmlObject(this->mpKMLWaterSurface, this->mpKMLRootDocument);
}

void EarthView::Xld::RenderLib::CWaterManager::DeleteKMLWaterSurface(const ev_bool & isSure)
{
	if (mWaterCreated)
	{
		EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->removeKmlObject(this->mpKMLWaterSurface, this->mpKMLRootDocument);
		this->mpKMLRootDocument->save(this->mpKMLRootDocument->mKmlPath);
		mWaterCreated = false;
	}
}

void EarthView::Xld::RenderLib::CWaterManager::DeleteFloodWaterSurface(const ev_bool & isSure)
{
}

void EarthView::Xld::RenderLib::CWaterManager::SetWaterSurfaceHeight(const ev_real64 waterHeight)
{
	if (!mWaterCreated) return;
	EarthView::World::Spatial3D::KmlManager::CKmlDataSet* kmlDS = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)this->mpKmlLayer->getDataset();
	EarthView::World::Spatial::Kml::CKmlDocument* rootParent = kmlDS->mKmlDocument;
	ev_int32 kmlObjCount = rootParent->getGeoObjects().size();
	for (ev_int32 j = 0; j < kmlObjCount; j++)
	{
		EVString kmlObjName = rootParent->getGeoObjects().at(j)->GeoObjectExtAttr.getName();
		if (kmlObjName == CWorldSetting::GetSingtonPtr()->mWaterSurfaceKMLObjectName)
		{
			EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->setCurrentLayer(this->mpKmlLayer);
			rootParent->getGeoObjects().at(j)->GeoObjectExtAttr.setAltitude(waterHeight);
			EarthView::Xld::CWorldSetting::GetSingtonPtr()->mpKmlTreeManager->updateKmlObject(this->mpKMLWaterSurface, rootParent);
		}
	}
}

EarthView::Xld::RenderLib::CWaterManager * EarthView::Xld::RenderLib::CWaterManager::GetSingletonPtr()
{
	if (!mpSingleton)
	{
		mpSingleton = new EarthView::Xld::RenderLib::CWaterManager();
	}
	return mpSingleton;
}


