#ifndef CKMLRENDERABLEMANAGER_H
#define CKMLRENDERABLEMANAGER_H
#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "geometry3d/geometry3dfactoryenum.h"
#include "geometry3d/visibleobject.h"
#include "kmlserializer/geoobjectextension.h"
#include <kmlserializer/kmlnetworklink.h>
#include <spatial3dlayer/neovectorwebscenelayer.h>
#include "spatial3dengine/panoramatile.h"
#include "vectormovableedittool.h"

#include <stack>


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlDocument;
				class GeoObjects;
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				class IGlobeLayer;
				class  EV_Spatial3DEngine_DLL CKmlRequestData : public EarthView::World::Core::CAllocatedObject 
				{
				public:
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObject;
					EarthView::World::Spatial::Kml::CKmlDocument* mpKmlDoc;
					EarthView::World::Spatial::Kml::CKmlDocument* mpParentKmlDoc;
					const EarthView::World::Graphic::CCamera* mpCamera;

					////图层指针
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* mpLayer;
					CKmlRequestData()
					{
						mpGeoObject = NULL;
						mpKmlDoc = NULL;
						mpParentKmlDoc = NULL;
						mpCamera = NULL;
					}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlRequestData(_in EarthView::World::Core::CNameValuePairList* plist)
					{
						mpGeoObject = NULL;
						mpKmlDoc = NULL;
						mpParentKmlDoc = NULL;
						mpCamera = NULL;
					}

					~CKmlRequestData()
					{
					}
				};
				class EV_Spatial3DEngine_DLL CKmlRenderableManager : public EarthView::World::Core::CEventObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlRenderableManager(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					CKmlRenderableManager(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer,EarthView::World::Graphic::CSceneManager* scenemanager);
					~CKmlRenderableManager();
					EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,const EarthView::World::Graphic::CCamera *camera);
					ev_void destoryRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					//ev_void loadRenderables(EarthView::World::Spatial::Kml::GeoObjects& objs);
					//ev_void destoryRenderables(EarthView::World::Spatial::Kml::GeoObjects& objs);
					EarthView::World::Geometry3D::VisibleObjects getVisibleObjects(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);


					ev_bool hasVisibleObjects(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					void addVisibleObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, EarthView::World::Geometry3D::VisibleObjects &objs);
					void removeVisibleObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					ev_void disposeCGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					ev_void recreateRenderable(const EarthView::World::Graphic::CCamera *camera);
					ev_void refreshVisible(ev_bool layerVisible,const EarthView::World::Graphic::CCamera *camera);
					ev_bool refreshImageOverlayer(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile,int& flag);
					ev_bool refreshImageOverlayer(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile,int& flag);
					ev_void refreshSelectable(ev_bool selectable);
					ev_void refreshSelectable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,ev_bool selectable);
					ev_void iterateRefreshVisible(ev_bool layerVisible,const EarthView::World::Graphic::CCamera *camera,EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_bool checkEmpty(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);					
					ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					EarthView::World::Geometry3D::VisibleObjects getPanoramaTiles();
					ev_void processBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_void initBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc,EarthView::World::Spatial::Kml::CKmlDocument* rootDoc,const EarthView::World::Graphic::CCamera* cam);
					void destoryBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_bool isBatchObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo,ev_bool enableEditingCheck);
					ev_void rebuild(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);
					void synDestoryBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_bool isRunningInThread();
					ev_void synBuildBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_void initNewBatchObject( EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc,EarthView::World::Spatial::Kml::CKmlDocument* rootDoc,const EarthView::World::Graphic::CCamera* cam );
					ev_void processNewObject( EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc );
					void destoryNewBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					void destoryRegionBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					void synDestoryRegionBatchObject(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_bool isSwitch();
					ev_void iterateRefreshBatchObjects(ev_bool layerVisible,const EarthView::World::Graphic::CCamera *camera,EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc );
					ev_void iterateRefreshDynamicObjects(ev_bool layerVisible,const EarthView::World::Graphic::CCamera *camera,EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_void iterateRefreshBatchObjects(ev_bool layerVisible ,const EarthView::World::Graphic::CCamera *camera);
					ev_bool checkBatchVisible(ev_bool layerVisible,const EarthView::World::Graphic::CCamera *camera,ev_bool isBatch);
					ev_void refreshDynamicBatchVisible(ev_bool layerVisible ,const EarthView::World::Graphic::CCamera *camera);
					ev_void refreshDynamicGeoObjectVisible(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc,EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo,ev_bool visible);
					ev_void calculatePixel(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& attribute, const EarthView::World::Graphic::CCamera* camera ,_out ev_real64& num);
					ev_bool checkPixelVisible(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& attr,const EarthView::World::Graphic::CCamera* camera);
					EarthView::World::Spatial::Kml::CKmlDocument* findBatchDocument(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc);
					ev_bool checkDocLodPass(EarthView::World::Spatial::Kml::CKmlDocument* kmlDoc,const EarthView::World::Graphic::CCamera *camera);
					ev_bool checkNetLinkLodPass(EarthView::World::Spatial::Kml::CKmlNetworkLink* netlink,const EarthView::World::Graphic::CCamera *camera);
					void waitResponses();

ev_internal:					 
					/// <summary>
					/// 定时器事件处理函数，可重载
					/// </summary>
					/// <param name="e">定时器事件，内有定时器id</param>
					/// <returns></returns>
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent *e);


ev_private:

					ev_void iterateCGeoObjects(EarthView::World::Spatial::Kml::CKmlDocument* kmlDocument, const EarthView::World::Graphic::CCamera* camera,ev_bool isCreate);
					ev_uint32 mBatchCount;
					ev_bool mIsChanged;
					ev_bool mIsNewBath;
					ev_bool mIsNeedSwitch;
					std::stack<EarthView::World::Spatial3D::Atlas::CKmlRequestData> newBatchStack;
					ev_map<EarthView::World::Spatial::Kml::CKmlDocument*,EarthView::World::Spatial::Kml::CKmlNetworkLink*> mNetLinkDocMap;
					ev_list<EarthView::World::Spatial::Kml::CKmlDocument*> mNetLinkDocList;

				private:
					//
					//
					ev_void internalCreateRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					ev_void internalDestoryRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					//

					//ev_void loadAddUnloadLink(LinkMap& loadLinkMap,LinkMap& unloadLinkMap,const EarthView::World::Graphic::CCamera *camera);
					//ev_void  updateSubNetLinkVisibleState(EarthView::World::Spatial::Kml::CKmlDocument* document,const EarthView::World::Graphic::CCamera *camera,LinkMap& loadLinkMap,LinkMap& unloadLinkMap);
					//
					//ev_void calculateGeoobjectpixel(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, const EarthView::World::Graphic::CCamera* camera ,_out ev_real64& num);
					//ev_void calculateKmlNetworkLinkpixel(EarthView::World::Spatial::Kml::CKmlNetworkLink* net, const EarthView::World::Graphic::CCamera* camera ,_out ev_real64& num);
					//ev_void updateNetLinkVisibleState(const EarthView::World::Graphic::CCamera *camera,LinkMap& loadLinkMap,LinkMap& unloadLinkMap);
					EarthView::World::Core::DataStreamPtr drawImages(list<EarthView::World::Core::DataStreamPtr> images);
					//
					EarthView::World::Core::CReadWriteLock mRenderableMapLock;
					ev_map<EarthView::World::Spatial::Kml::CGeoObjectExtension*,EarthView::World::Geometry3D::VisibleObjects> mRenderableMap;
					ev_map<ev_uint32,EarthView::World::Spatial::Kml::CGeoObjectExtension*> mOverlayRenderableMap;
					

					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum* m_pGeometry3DFactoryEnum;
					EarthView::World::Graphic::CSceneManager* m_pScenemanager;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* m_pLayer;
					//
					ev_map<EVString,int> m_tempGeoMap;
					typedef pair<EVString,int> TempGeoMapPair;
					ev_list<EVString> m_imageoverlayerID;
					ev_list<EarthView::World::Spatial3D::CGlobeCamera*> mCloneCamList;

					//
					EarthView::World::Geometry3D::VisibleObjects mPanorama360Vec;
					ev_int32 mTimeId;
					const EarthView::World::Graphic::CCamera* mpCamera;
					//EarthView::World::Spatial::Kml::GeoObjects* mDynamicGeoObjecs;
					ev_bool checkPixelVisible(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute attribute,ev_real64& num);

					void iterateSubDocementVisible(EarthView::World::Spatial::Kml::CKmlDocument* doc,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible);
					void refreshGeoObjects(EarthView::World::Spatial::Kml::CKmlDocument* doc,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible );
					void refreshSubDocments(EarthView::World::Spatial::Kml::CKmlDocument* doc,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible );
					void refreshNetLinks(EarthView::World::Spatial::Kml::CKmlDocument* doc,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible );
					void refreshGeoObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible);
					void refreshNetLink(EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink,EarthView::World::Spatial::Kml::CKmlDocument* parentDoc,const EarthView::World::Graphic::CCamera* camera,ev_bool layerVisible );
					

				};
			}
		}
	}
}
#endif