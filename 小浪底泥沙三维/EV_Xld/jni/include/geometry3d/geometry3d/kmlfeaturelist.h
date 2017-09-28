#ifndef EV_KMLFEATURELIST_H
#define EV_KMLFEATURELIST_H
#include <core/memoryallocatedobject.h>

/////#include "spatialobject/geoobject.h"

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/visibleobject.h"
#include "geometry3d/featureuserdata.h"
#include "kmlserializer/geoobjectextension.h"
#include "geometry3d/geometry3dextension/multipolyline3dextension.h"


namespace EarthView{
	namespace World{

		namespace Spatial
		{
			class CGeoObject;
		}

	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CPoint;
			}

			namespace Display
			{
				class CBillboard3DSymbol;
			}

		}
		
		namespace Graphic
		{
			class CSceneManager;
		}
		namespace Geometry3D
		{
			class CImageOverlayer;			
			class CMultiPoint3DExtension;
			class CMultiPolyline3DExtension;
			class CMultiPolygon3DExtension;
			class CGeoPolygonEx;

			///placemark容器类
			/// </summary>
			class EV_GEOMETRY3D_DLL CPlaceMarkList: public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CPlaceMarkList(EarthView::World::Core::CNameValuePairList* pList);
			public:
				CPlaceMarkList(EarthView::World::Graphic::CSceneManager* ref_scenemanager);

				
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CPlaceMarkList();
				ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );
				

				void setSelfAdaptGeoRange(EarthView::World::Spatial::Math::CVector3 center,Real r,Real targetSamplesPerDegrees);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);

				EarthView::World::Geometry3D::CVisibleobjectVector getVisibleObjects(EarthView::World::Spatial::CGeoObject* ref_geo);

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToScene();

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool detachFromScene();

				virtual ev_bool update();
				virtual ev_bool update(EarthView::World::Spatial::CGeoObject* ref_geo);
			    void update(const EarthView::World::Graphic::CCamera* camera);
				void update(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial::Math::CDegree& rangeView);
				void setVisible(EarthView::World::Spatial::CGeoObject* ref_geo,ev_bool visible);
				void setLabelVisibleDistance(Real val);
				void setReduceDistance(Real val);


				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				virtual ev_void setSelectable(ev_bool selectable);

ev_private:	
				ev_void initGeometrySymobl(EarthView::World::Spatial::Kml::CGeoObjectExtension* geo);
				
				map<EarthView::World::Spatial::Kml::CGeoObjectExtension* ,EarthView::World::Geometry3D::CMultiPoint3DExtension*> mGeoMap;
				vector<EarthView::World::Geometry3D::CMultiPoint3DExtension*> mExtensionVec;

				map<EVString,EarthView::World::Core::MemoryDataStreamPtr> mIconResources;
				ev_void add(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);
				ev_void remove(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);
			
				EarthView::World::Graphic::CSceneManager* mpSceneMgr;
				ev_bool mIsAttached;
				ev_bool mIsLoaded;
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
				ev_bool mSelectable;
				Real mLabelVisibleDistance;
				Real mReduceDistance;
			
				Real mTargetSamplesPerDegrees;
				EarthView::World::Spatial::Math::CVector3 mCenter;
				Real mRadius;
				EarthView::World::Graphic::CCamera* mpCamera;
				EarthView::World::Spatial::Math::CDegree mpViewRange;
				ev_bool mIsRegionFeatureList;
				EarthView::World::Spatial::Atlas::ILayer* mpLayer ;
				EarthView::World::Graphic::CColourValue mSelectionColour;


			



			};
			///polyline容器类
			class EV_GEOMETRY3D_DLL CPolylineList: public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CPolylineList(EarthView::World::Core::CNameValuePairList* pList);
			public:
				CPolylineList(EarthView::World::Graphic::CSceneManager* ref_scenemanager);


				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CPolylineList();

				void setLineInterpolationMode(EarthView::World::Geometry3D::CMultiPolyline3DExtension::LineInterpolationMode liMode);
				
				void setLineInterPolationDis(ev_real32 dis);
			

				ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );
				

				void update(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial::Math::CDegree& rangeView);

				
				void setSelfAdaptGeoRange(EarthView::World::Spatial::Math::CVector3 center,Real r,Real targetSamplesPerDegrees);

				EarthView::World::Geometry3D::CVisibleobjectVector getVisibleObjects(EarthView::World::Spatial::CGeoObject* ref_geo);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToScene();

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool detachFromScene();

				virtual ev_bool update();
				virtual ev_bool update(EarthView::World::Spatial::CGeoObject* ref_geo);
				void setVisible(EarthView::World::Spatial::CGeoObject* ref_geo,ev_bool visible);

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				virtual ev_void setSelectable(ev_bool selectable);

ev_private:	
				EarthView::World::Spatial::CGeoObject* initGeometrySymobl(EarthView::World::Spatial::Kml::CGeoObjectExtension* geo);
				
				map<EarthView::World::Spatial::CGeoObject* ,EarthView::World::Geometry3D::CMultiPolyline3DExtension*> mGeoMap;
				vector<EarthView::World::Geometry3D::CMultiPolyline3DExtension*> mExtensionVec;
				map<EarthView::World::Spatial::Kml::CGeoObjectExtension* ,EarthView::World::Spatial::CGeoObject*> mGeoExtrudeMap;

				map<EVString,EarthView::World::Core::MemoryDataStreamPtr> mIconResources;
				ev_void add(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);
				ev_void remove(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);

				EarthView::World::Graphic::CSceneManager* mpSceneMgr;
				ev_bool mIsAttached;
				ev_bool mIsLoaded;
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
				ev_bool mSelectable;
				
				Real mTargetSamplesPerDegrees;
				EarthView::World::Spatial::Math::CVector3 mCenter;
				Real mRadius;
				EarthView::World::Graphic::CCamera* mpCamera;
				EarthView::World::Spatial::Math::CDegree mpViewRange;
				ev_bool mIsRegionFeatureList;
				EarthView::World::Spatial::Atlas::ILayer* mpLayer ;
				EarthView::World::Graphic::CColourValue mSelectionColour;

				EarthView::World::Geometry3D::CMultiPolyline3DExtension::LineInterpolationMode mLineInterpolationMode;
				ev_real32 mInterpolationDis;





			};

			///polygon容器类
			/// </summary>
			class EV_GEOMETRY3D_DLL CPolygonList: public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CPolygonList(EarthView::World::Core::CNameValuePairList* pList);
			public:
				CPolygonList(EarthView::World::Graphic::CSceneManager* ref_scenemanager);


				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CPolygonList();

				ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );
				
				void setSelfAdaptGeoRange(EarthView::World::Spatial::Math::CVector3 center,Real r,Real targetSamplesPerDegrees);

				EarthView::World::Geometry3D::CVisibleobjectVector getVisibleObjects(EarthView::World::Spatial::CGeoObject* ref_geo);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToScene();

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool detachFromScene();

				virtual ev_bool update();
				virtual ev_bool update(EarthView::World::Spatial::CGeoObject* ref_geo);
				void update(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial::Math::CDegree& rangeView);
				void setVisible(EarthView::World::Spatial::CGeoObject* ref_geo,ev_bool visible);

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();


				virtual ev_void setSelectable(ev_bool selectable);

ev_private:	
				ev_void initGeometrySymobl(EarthView::World::Spatial::Kml::CGeoObjectExtension* geo);

				map<EarthView::World::Spatial::Kml::CGeoObjectExtension* ,EarthView::World::Geometry3D::CGeoPolygonEx*> mGeoMap;
				vector<EarthView::World::Geometry3D::CGeoPolygonEx*> mExtensionVec;

				map<EVString,EarthView::World::Core::MemoryDataStreamPtr> mIconResources;
				ev_void add(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);
				ev_void remove(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo);

				EarthView::World::Graphic::CSceneManager* mpSceneMgr;
				ev_bool mIsAttached;
				ev_bool mIsLoaded;
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
				ev_bool mSelectable;
				Real mMinLon;
				Real mMaxLon;
				Real mMinLat;
				Real mMaxLat;
				Real mTargetSamplesPerDegrees;

				EarthView::World::Spatial::Math::CVector3 mCenter;
				Real mRadius;
				EarthView::World::Graphic::CCamera* mpCamera;
				EarthView::World::Spatial::Math::CDegree mpViewRange;
				ev_bool mIsRegionFeatureList;
				EarthView::World::Spatial::Atlas::ILayer* mpLayer ;
				EarthView::World::Graphic::CColourValue mSelectionColour;
			};

			///
			///kml对象容器
			///
			class EV_GEOMETRY3D_DLL CKmlFeatureList:public EarthView::World::Core::CBaseObject
			{
ev_private:
				CKmlFeatureList(_in EarthView::World::Core::CNameValuePairList *pList);
			
			public:
				EarthView::World::Geometry3D::CPlaceMarkList* mpPlaceMarkList;
				EarthView::World::Geometry3D::CPolylineList* mpPolylineList;
				EarthView::World::Geometry3D::CPolygonList*  mpPolygonList;
				EarthView::World::Spatial::Kml::CKmlWorkQueueState WorkState;

				
			
				///<summary>
				///构造函数
				///</summary>
				CKmlFeatureList(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				
				///<summary>
				///析造函数
				///</summary>
				~CKmlFeatureList();
				void setVisible(EarthView::World::Spatial::CGeoObject* ref_geo,ev_bool visible);
				void setVisible(ev_bool visible);
				void setLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
				EarthView::World::Spatial::Atlas::ILayer* getLayer();
				void rebuild(EarthView::World::Spatial::CGeoObject* ref_geo);
				virtual ev_void setSelectable(ev_bool selectable);
				EarthView::World::Geometry3D::CVisibleobjectVector getVisibleObjects(EarthView::World::Spatial::CGeoObject* ref_geo);
				//void setSelfAdaptGeoRange(Real minLon,Real maxLon,Real minLat,Real maxLat,Real targetSamplesPerDegrees);
				void setSelfAdaptGeoRange(EarthView::World::Spatial::Math::CVector3 center,Real r,Real targetSamplesPerDegrees);

			    void setIsRegionFeatureList(ev_bool val);
				ev_bool IsRegionFeatureList();

			private:
				ev_bool mIsSelectable;
				ev_bool mIsRegionFeatureList;
				EarthView::World::Spatial::Atlas::ILayer* mpLayer;
		
			};
		
		}
	}
}
#endif

