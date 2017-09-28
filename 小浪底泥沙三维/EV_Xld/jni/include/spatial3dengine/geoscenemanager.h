#ifndef _GEOSCENEMANAGER_H_
#define _GEOSCENEMANAGER_H_

#include "core/global.h"
#include "core/threaddefines.h"

#include "core/readwritelock.h"

#include "spatial3dengine/spatial3dengineconfig.h"

#include "core/stdheaders.h"
#include "core/threaddefines.h"
#include "core/thread.h"
#include "core/string_array.h"

#include "mathengine/earthradius.h"

#include "spatialobject/coordinatesystem/coordinatesysenumtype.h"
#include "spatialobject/coordinatesystem/coordinatefactory.h"
#include "spatialobject/coordinatesystem/spatialreference.h"

#include "tileutility/tilereference.h"

#include "spatial3dengine/terrainrevisor.h"

#include "spatial3dengine/terraincolorinfo.h"

#include "plugin_octreescenemanager/octreescenemanager.h"

#include "tileutility/tiledata.h"
#include <effect3d/atmosphere.h>

#include "spatial3dengine/globeflypath.h"

#include "geometry3d/iglobelayer.h"
#include "spatial3dengine/globecamera.h"

#include "rasteranalysis/rastertilemosaic.h"
#include "graphic/rendertargetlistener.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CRay;
			}
		}
		namespace Graphic
		{
			class CMovableObject;
			class CRectangle2D;
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CScene;
				class CFeatureGroupLayer;
				class CTerrainGroupLayer;
				class CImageGroupLayer;		
				class CKmlGroupLayer;
				class CTempGroupLayer;
			}
			namespace ModelManager
			{
				class CModelObjectManager;
			}
			namespace Dataset
			{
				class CModelDataSource;
			}
		}
	}
}



namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CGisQuadNode;
			class CSeaQuadnode;
			class CSeaQuadTree;
			class CGisQuadTree;
			class CQuadMap;
			class CQuadTreeBackgroundQueue;  

			class COceanSurface;

			namespace Atlas
			{
				class ITerrainLayer;
			}

            class CGeoCameraListener;

            class CAerosphere;

			class CMyRenderListener;

			enum SceneTileType
			{
				STT_DEFAULT,
				STT_WEBMERCATOR,
				STT_WGS84
			};

			enum ImageTileDivisionMode
			{
				TDM_LevelByLevel,//依数据逐级分裂，若断级，则停止分裂
				TDM_BypassLevel	 //数据若断级，依然可以继续分裂
			};

			enum SeaType
			{
				NORMAL = 0,
				WAVE = 1,
				FFTSea = 2
			};

			enum FFTSeaType 
			{
				FFT_TESSENDORF,  
				FFT_PIERSON_MOSKOWITZ, 
				FFT_JONSWAP
			};

			enum SeaExcludeRenderQueueGroupIDType
			{
				REFLECTION_UP_WATER = 0,
				REFLECTION_DOWN_WATER = 1,
				REFRACTION_UP_WATER = 2,
				REFRACTION_DOWN_WATER = 3
			};

			/// <summary>
			/// 数字地球场景管理器
			/// </summary>
			class EV_Spatial3DEngine_DLL CGeoSceneManager : public EarthView::World::Graphic::COctreeSceneManager
			{
			public: 
				/// <summary>
				/// 构造函购
				/// </summary>
				/// <param name="name">名字</param>
				/// <returns></returns>
				CGeoSceneManager(const EVString &name);

				/// <summary>
				/// 构造函购
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="box">场景包围盒</param>
				/// <param name="max_depth">八叉树最大深度</param>
				/// <returns></returns>
				CGeoSceneManager(const EVString &name, EarthView::World::Spatial::Math::CAxisAlignedBox &box, int max_depth );
				/// <summary>
				/// 遍历裁剪场景树
				/// </summary>
				/// <param name="cam">相机</param>
				/// <param name="visibleBounds">所有可见对象的包围盒</param>
				/// <param name="onlyShadowCasters">是否只包含投射阴影的对象</param>
				/// <returns></returns>
				virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds, ev_bool onlyShadowCasters);

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoSceneManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 设置场景中瓦片的类型
				/// </summary>
				/// <param name="type">瓦片类型</param>
				/// <returns></returns>
				ev_bool setSceneTileType(EarthView::World::Spatial3D::SceneTileType type);
				/// <summary>
				/// 返回场景的瓦片类型
				/// </summary>
				/// <returns>瓦片的类型</returns>
				EarthView::World::Spatial3D::SceneTileType getSceneTileType()const;

				/// <summary>
				/// 设置影像瓦片分裂模式
				/// </summary>
				/// <param name="mode">分裂模式</param>
				/// <returns></returns>
				ev_void setImageTileDivisionMode(EarthView::World::Spatial3D::ImageTileDivisionMode mode);

				/// <summary>
				/// 获取影像瓦片分裂模式
				/// </summary>
				/// <param name="mode">分裂模式</param>
				/// <returns></returns>
				EarthView::World::Spatial3D::ImageTileDivisionMode getImageTileDivisionMode();

				/// <summary>
				/// 返回海水类型
				/// </summary>
				/// <returns>海水的类型</returns>
				EarthView::World::Spatial3D::SeaType getSeaType()const;
				/// <summary>
				/// 设置FFT海水的波浪类型
				/// </summary>
				/// <param name="type">FFT海水的波浪类型</param>
				/// <returns></returns>
				ev_void setFFTSeaType(FFTSeaType type);
				/// <summary>
				/// 设置海水的类型
				/// </summary>
				/// <param name="type">海水的类型</param>
				/// <returns></returns>
				ev_void setSeaType(SeaType type);
				/// <summary>
				/// 设置每个海水瓦片的每行(列)的顶点数量(必须为奇数)
				/// </summary>
				/// <param name="vertexnum">顶点数</param>
				/// <returns></returns>
				ev_void setSeaVertexNum(ev_uint32 vertexnum);
				/// <summary>
				/// 获取每个海水瓦片的每行(列)的顶点数量
				/// </summary>
				/// <returns>顶点数</returns>
				ev_uint32 getSeaVertexNum()const;
				/// <summary>
				/// 根据名字创建相机
				/// </summary>
				/// <param name="name">相机的名字</param>
				/// <returns>数字地球相机</returns>
				virtual EarthView::World::Graphic::CCamera *createCamera( const EVString &name );
				/// <summary>
				/// 返回场景管理器类型名
				/// </summary>
				/// <returns>场景管理器类型名</returns>
				virtual EVString getTypeName() const;
				/// <summary>
				/// 更新场景图
				/// </summary>
				/// <param name="cam">相机</param>
				/// <returns></returns>
				void _updateSceneGraph( EarthView::World::Graphic::CCamera *cam );
				/// <summary>
				/// 内部方法，更新相机信息
				/// </summary>
				/// <param name="cam">相机</param>
				/// <returns></returns>
				void update(EarthView::World::Graphic::CCamera *cam );
				/// <summary>
				/// 根据射线返回与场景相交的点，首先要通过相机裁剪
				/// </summary>
				/// <param name="ray">射线</param>
				/// <param name="intersectPoint">传出参数，射线与场景的焦点</param>
				/// <param name="camera">参与裁剪的相机</param>
				/// <returns>有交点返回true，否则返回false</returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera)
				{
					return intersect(ray,intersectPoint,camera,true,false,true,false);
				}
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param>
				/// <param name="intersectPoint">传出参数，射线与场景的焦点</param>
				/// <returns>有交点返回true，否则返回false</returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint)
				{
					return intersect(ray,intersectPoint,NULL,true,false,true,false);
				}
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 
				/// <param name="intersectPoint">传出参数，射线与场景的焦点</param>
				/// <param name="camera">参与裁剪的相机</param>
				/// <param name="intersectModel">是否与模型求交</param>
				/// <returns>有交点返回true，否则返回false</returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera,bool intersectModel)
				{
					return intersect(ray,intersectPoint,camera,intersectModel,false,true,false);
				}
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 
				/// <param name="intersectPoint">传出参数，射线与场景的焦点</param>
				/// <param name="camera">参与裁剪的相机</param>
				/// <param name="intersectModel">是否与模型求交</param>
				/// <param name="intersectSeaMap">是否与海水求交</param>
				/// <param name="positiveSide">是否正面求交</param>
				/// <param name="negativeSide">是否反面求交</param>
				/// <returns>有交点返回true，否则返回false</returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera,ev_bool intersectModel,ev_bool intersectSeaMap,ev_bool positiveSide, ev_bool negativeSide);
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 
				/// <param name="intersectPoint">射线相交中点</param>
				/// <param name="camera">相机</param>
				/// <param name="intersectModel">与模型求交</param>
				/// <param name="intersectSeaMap">与海水求交</param>
				/// <param name="positiveSide">正面求交</param>
				/// <param name="negativeSide">反面求交</param>
				/// <param name="modelIntersected">射中的是否为模型</param>
				/// <returns></returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera,ev_bool intersectModel,ev_bool intersectSeaMap,ev_bool positiveSide, ev_bool negativeSide,ev_bool& modelIntersected);
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 
				/// <param name="intersectPoint">射线相交中点</param>
				/// <param name="camera">相机</param>
				/// <param name="intersectModel">与模型求交</param>
				/// <param name="intersectSeaMap">与海水求交</param>
				/// <param name="positiveSide">正面求交</param>
				/// <param name="negativeSide">反面求交</param>
				/// <param name="modelIntersected">射中的是否为模型</param>
				/// <param name="seaIntersected">射中的是否为海面</param>
				/// <returns></returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera,ev_bool intersectModel,ev_bool intersectSeaMap,ev_bool positiveSide, ev_bool negativeSide,ev_bool& modelIntersected,ev_bool& seaIntersected);
				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 
				/// <param name="intersectPoint">射线相交中点</param>
				/// <param name="camera">相机</param>
				/// <param name="intersectModel">与模型求交</param>
				/// <param name="intersectSeaMap">与海水求交</param>
				/// <param name="positiveSide">正面求交</param>
				/// <param name="negativeSide">反面求交</param>
				/// <param name="modelIntersected">射中的是否为模型</param>
				/// <param name="seaIntersected">射中的是否为海面</param>
				/// <param name="groundIntersected">射中的是否为地面</param>
				/// <returns></returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint,EarthView::World::Graphic::CCamera* camera,ev_bool intersectModel,ev_bool intersectSeaMap,ev_bool positiveSide, ev_bool negativeSide,ev_bool& modelIntersected,ev_bool& seaIntersected,ev_bool& groundIntersected);

				enum IntersectType
				{
					ITT_NULL   = 0,
					ITT_Ground = 1,
					ITT_Model  = 2,
					ITT_Sea    = 4,
					ITT_OBQ    = 8
				};				

				/// <summary>
				/// 根据射线返回与场景相交的点
				/// </summary>
				/// <param name="ray">射线</param> 				
				/// <param name="camera">相机</param>
				/// <param name="intersectType">求交类别 IntersectType计算掩码</param>
				/// <param name="positiveSide">正面求交</param>
				/// <param name="negativeSide">反面求交</param>
				/// <param name="intersectPoint">射线相交中点</param>
				/// <param name="intersectResult">求交结果</param>
				/// <returns></returns>
				ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray	
								,_out EarthView::World::Spatial::Math::CVector3& intersectPoint
								,EarthView::World::Graphic::CCamera* camera
								,ev_uint16 intersectType
								,ev_bool positiveSide, ev_bool negativeSide								
								,_out IntersectType& intersectResult);

				/// <summary>
				/// 取得相机的位置信息
				/// </summary>
				/// <param name="latitude">纬度</param> 
				/// <param name="longitude">经度</param>
				/// <param name="heading">偏航角</param>
				/// <param name="tilt">倾角</param>
				/// <param name="altitude">海拔</param>
				/// <returns></returns>
				ev_void getCameraPostion(EarthView::World::Spatial::Math::CDegree& latitude, EarthView::World::Spatial::Math::CDegree& longitude, EarthView::World::Spatial::Math::CDegree& heading, EarthView::World::Spatial::Math::CDegree& tilt, ev_real64& altitude)
				{
					ev_real64 modititAltitude;
					getCameraPostion(latitude,longitude,heading,tilt,altitude,modititAltitude);
				}
				/// <summary>
				/// 取得相机的位置信息
				/// </summary>
				/// <param name="latitude">纬度</param> 
				/// <param name="longitude">经度</param>
				/// <param name="heading">偏航角</param>
				/// <param name="tilt">倾角</param>
				/// <param name="altitude">海拔</param>
				/// <param name="moditifAltitude">观察点处的海拔</param>
				/// <returns></returns>
				ev_void getCameraPostion( EarthView::World::Spatial::Math::CDegree& latitude, EarthView::World::Spatial::Math::CDegree& longitude, EarthView::World::Spatial::Math::CDegree& heading, EarthView::World::Spatial::Math::CDegree& tilt, ev_real64& altitude, ev_real64& moditifAltitude)
				{
					latitude = mlatitude;
					longitude = mlongitude;
					heading = mheading;
					tilt = mtilt;
					altitude = maltitude;
					moditifAltitude = mmoditifAltitude;
				}
				/// <summary>
				/// 取得地下镜头的相关信息
				/// </summary>
				/// <param name="isUnderGround">是否开启地下模式</param> 
				/// <param name="isPlaneBased">是否基于平面</param>
				/// <param name="cameraControlDepth">相机的基准深度</param>
				/// <returns></returns>
				ev_void getCameraUnderGroundMode(ev_bool& isUnderGround,ev_bool& isPlaneBased,ev_real64& cameraControlDepth)
				{
					isUnderGround = misUnderGroundMode;
					isPlaneBased = misPlaneBased;
					cameraControlDepth = mcameraControlDepth;
				}

// 				ev_void setCameraPostion(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude)
// 				{
// 					setCameraPostion(latitude,longitude,heading,tilt,altitude,0);
// 				}
// 
// 				ev_void setCameraPostion(_in const EarthView::World::Spatial::Math::CDegree& latitude,_in const EarthView::World::Spatial::Math::CDegree& longitude,_in const EarthView::World::Spatial::Math::CDegree& heading,_in const EarthView::World::Spatial::Math::CDegree& tilt,_in ev_real64 altitude,_in ev_real64 moditifAltitude)
// 				{
// 					mlatitude = latitude;
// 					mlongitude = longitude;
// 					mheading = heading;
// 					mtilt = tilt;
// 					maltitude = altitude;
// 					mmoditifAltitude = moditifAltitude;
// 				}
				/// <summary>
				/// 增加飞行线路
				/// </summary>
				/// <param name="flyPath">飞行线路</param> 
				/// <returns></returns>
				ev_void addFlyPath(_in const EarthView::World::Spatial3D::CGlobeFlyPathPtr& flyPath);
				/// <summary>
				/// 判断是否存在线路
				/// </summary>
				/// <param name="name">飞行线路的名字</param> 
				/// <returns>存在返回true，否则返回false</returns>
				ev_bool hasFlyPath(_in const EVString& name);
				/// <summary>
				/// 移除飞行线路
				/// </summary>
				/// <param name="name">飞行线路的名字</param> 
				/// <returns></returns>
				ev_void removeFlyPath(_in const EVString& name);
				/// <summary>
				/// 根据名字取得飞行线路
				/// </summary>
				/// <param name="name">飞行线路的名字</param> 
				/// <param name="flyPath">飞行线路对象</param> 
				/// <returns>成功返回true，否则返回false</returns>
				ev_bool getFlyPath(_in const EVString& name, EarthView::World::Spatial3D::CGlobeFlyPathPtr& flyPath);
				/// <summary>
				/// 根据索引取得飞行线路的名称
				/// </summary>
				/// <param name="index">飞行线路的索引</param> 
				/// <returns>飞行路线的名称</returns>
				EVString getFlyPathName(_in int index);
				/// <summary>
				/// 获取飞行线路的数量
				/// </summary>
				/// <returns>飞行线路的数量</returns>
				ev_int32 getFlyPathCount();
				/// <summary>
				/// 根据飞行线路的名称取得索引
				/// </summary>
				/// <param name="flyPathName">飞行线路的名称</param> 
				/// <returns>飞行路线的索引</returns>
				ev_int32 getFlyPathIndex(const EVString& flyPathName);
				/// <summary>
				/// 是否启用谷歌方式的相机漫游器
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_void setGoogleCameraManipulatorEnabled(_in ev_bool enable);
				/// <summary>
				/// 获取是否启用谷歌方式的相机漫游器
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_bool getGoogleCameraManipulatorEnabled() const;
				/// <summary>
				/// 设置是否允许相机漫游器与模型相交
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_void setEnableManipulatorIntersectModel(_in ev_bool enable);
				/// <summary>
				/// 获取是否允许相机漫游器与模型相交
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
			    ev_bool getEnableManipulatorIntersectModel() const;

				/// <summary>
				/// 设置是否允许相机漫游器与地面相交
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_void setEnableManipulatorIntersectFloor(_in ev_bool enable);
				/// <summary>
				/// 获取是否允许相机漫游器与地面相交
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_bool getEnableManipulatorIntersectFloor() const;

				/// <summary>
				/// 设置相机近裁剪面距离的比例系数
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_void setCameraNearClipRate(_in ev_real64 cameraNearClipRate);
				/// <summary>
				/// 获取相机近裁剪面距离的比例系数
				/// </summary>
				/// <param name="enable"></param> 
				/// <returns></returns>
				ev_real64 getCameraNearClipRate() const;
ev_private:
				/// <summary>
				/// 创建影像瓦片地图
				/// </summary>
				/// <param name="name">名称</param> 
				/// <param name="startLevel">开始级别</param> 
				/// <param name="endLevel">终止级别</param> 
				/// <param name="north">瓦片的北边界</param> 
				/// <param name="south">瓦片的南边界</param> 
				/// <param name="west">瓦片的西边界</param> 
				/// <param name="east">瓦片的东边界</param> 
				/// <param name="vertexNumberPerSide">瓦片每个边上的顶点数</param> 
				/// <param name="mapRadius">半径</param> 
				/// <returns></returns>
				CQuadMap* createImageQuadMap(const EVString& name,int startLevel,int endLevel,double north,double south,double west,double east,int vertexNumberPerSide = 41,double mapRadius=  EV_EARTHRADIUS);
				/// <summary>
				/// 创建影像瓦片
				/// </summary>
				/// <returns></returns>
				CQuadMap* createImageQuadMap();
				/// <summary>
				/// 创建海水瓦片地图
				/// </summary>
				/// <param name="type">海水的类型</param> 
				/// <param name="camera">开始级别/param> 
				/// <param name="viewport">终止级别/param> 
				/// <returns></returns>
				CQuadMap* createSeaQuadMap(EarthView::World::Spatial3D::SeaType type,EarthView::World::Graphic::CCamera* camera,EarthView::World::Graphic::CViewport* viewport);
				/// <summary>
				/// 获取海水瓦片地图
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取海水瓦片地图</returns>
				CQuadMap* getSeaQuadMap();

				/// <summary>
				/// 获取影像瓦片地图
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取影像瓦片地图</returns>
				CQuadMap* getImageQuadMap();
				/// <summary>
				/// 获取波浪海水瓦片地图
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取波浪海水瓦片地图</returns>
				CQuadMap* getWaveSeaQuadMap();
				/// <summary>
				/// 设置海水瓦片地图相机
				/// </summary>
				/// <param name="camera">相机</param>
				/// <returns></returns>
				ev_void   setWaveSeaQuadMapCamera(EarthView::World::Graphic::CCamera* camera);
				/// <summary>
				/// 设置海水瓦片地图视口
				/// </summary>
				/// <param name="viewport">视口</param>
				/// <returns></returns>
				ev_void   setWaveSeaQuadMapViewport(EarthView::World::Graphic::CViewport* viewport);
				/// <summary>
				/// 销毁海水瓦片地图
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void destroyQuadMaps();

					/// <summary>
				/// </summary>
				/// <returns>返回地形修改器中是否有关于倾斜模型的修改器,含判断</returns>
				ev_bool hasOBQTerrainRevisors();
				/// <summary>
				/// </summary>
				/// <returns>返回地形修改器中是否有关于倾斜模型的修改器,不含判断</returns>
				ev_bool existObqTerrainRevisors()
				{
					return mHasObqReviser;
				}

			public:
				/// <summary>
				/// 内部方法，更新自然环境视口
				/// </summary>
				/// <param name="viewport">视口</param>
				/// <returns></returns>
				void updateAtmosphereViewport(EarthView::World::Graphic::CViewport *ref_viewport);
				/// <summary>
				/// 获取自然环境
				/// </summary>
				/// <returns>自然环境对象</returns>
				EarthView::World::Spatial::Effect3D::CGlobeAtmosphere *getGlobeAtmosphere();

				EarthView::World::Spatial::Math::CVector3 getSunPosition();
				ev_void setAtmosphereVisible(const ev_bool& visible);
				ev_void storeAtmosphereVisibleState();
				ev_void restoreAtmosphereVisibleState();	
				ev_void setSunVisible(ev_bool flag);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CGeoSceneManager();

			private:
				ev_bool mOldFlatCloudVisible;
				ev_bool mOldRealCloudVisible;
				ev_bool mOldMoonVisible;
				ev_bool mOldSkyDomeVisible;
				ev_bool mOldStarsVisible;
				ev_bool mOldSunVisible;
				ev_bool mOldPrecipitationVisible;

			protected:
				static ev_void   tryToInitializeQuadQueue();
				static ev_void tryToUninitializeQuadQueue();

				void abortQuadRequests();
			public:
				virtual void setShadowTextureConfig(ev_size_t shadowIndex, const EarthView::World::Graphic::ShadowTextureConfig &config);
				virtual void prepareShadowTextures(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::LightList *lightList);
			    virtual void checkShadowCasterInFrustum(EarthView::World::Graphic::CCamera *camera);
				virtual bool getTerrainCastShadow() const;
				virtual void setTerrainCastShadow(bool flag);
			public:
				void addReflectionViewportListener();
				void removeReflectionViewportListener();
			private:
				class CReflectionViewPortListener : public EarthView::World::Graphic::CRenderTargetListener
				{
				public:
					CReflectionViewPortListener(CGeoSceneManager *sceneManager);
					~CReflectionViewPortListener();

					void preViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt);
					void postViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt);
				private:
					CGeoSceneManager *mSceneManager;
					Real mOldRefRate;
					EarthView::World::Graphic::CTexturePtr mTexture;
					EarthView::World::Graphic::CTexturePtr mOldTexture;
				};
				CReflectionViewPortListener *mReflectionViewPortListener;

            public: //add by zhaowei
				/// <summary>
				/// 获取kml图层组
				/// </summary>
				/// <returns>kml图层组</returns>
                EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*     getKmlGroupLayer()const; 
				/// <summary>
				/// 获取特征层图层组
				/// </summary>
				/// <returns>特征层图层组</returns>
                EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* getFeatureGroupLayer()const;
				/// <summary>
				/// 获取影像图层组
				/// </summary>
				/// <returns>影像图层组</returns>
                EarthView::World::Spatial3D::Atlas::CImageGroupLayer*   getImageGroupLayer()const;
				/// <summary>
				/// 获取地形图层组
				/// </summary>
				/// <returns>地形图层组</returns>
                EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer* getTerrainGroupLayer()const; 
				/// <summary>
				/// 获取临时层图层组
				/// </summary>
				/// <returns>临时层图层组</returns>
				EarthView::World::Spatial3D::Atlas::CTempGroupLayer* getTempGroupLayer()const;

				/// <summary>
				/// 获取场景是否为活动场景
				/// </summary>
				/// <returns>场景是否为活动场景</returns>
				ev_bool isActive()const
				{
					return mActive;
				}
				/// <summary>
				/// 设置场景是否为活动场景
				/// </summary>
				/// <param name="active">是否活动</param>
				/// <returns></returns>
				ev_void setActive(ev_bool active)
				{
					mActive = active;
				}
				
				/// <summary>
				/// 增加临时图层
				/// </summary>
				/// <param name="layer">临时图层</param>
				/// <returns>是否成功</returns>
				virtual ev_bool addTempLayer( EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				/// <summary>
				/// 删除临时图层
				/// </summary>
				/// <param name="layer">临时图层</param>
				/// <returns>是否成功</returns>
				virtual ev_bool removeTempLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
				/// <summary>
				/// 获取临时图层瓦片
				/// </summary>
				/// <param name="level">瓦片级别</param>
				/// <param name="row">瓦片行号</param>
				/// <param name="col">瓦片列号</param>
				/// <param name="tile">返回的瓦片数据信息</param>
				/// <returns>是否成功</returns>
				ev_bool getTempLayersTile(ev_int32 level,ev_int32 row,ev_int32 col, EarthView::World::Spatial::CTileData& tile);
				/// <summary>
				/// 将场景信息序列化成xml文本
				/// </summary>
				/// <param name=""></param>   
				/// <returns>xml文本</returns>	
                EVString toXML()const;
				/// <summary>
				/// 获取指定经纬度所在可见的最高级别瓦片的平均高程
				/// </summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <returns>高程</returns>
				virtual ev_real64 getTileAverageAltitude(ev_real64 latitude,ev_real64 longitude);
				/// <summary>
				/// 获取当前缓存中最高精度的高程
				/// </summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <returns>高程</returns>
				virtual Real getBestHeightAt(Real latitude,Real longitude);
				/// <summary>
				/// 通过经纬度和精度获取高程
				/// </summary>
				/// <param name="longitude">经度</param>
				/// <param name="latitude">纬度</param>		
				/// <param name="targetSamplesPerDegrees">每度采样数，-1表示最高精度</param>
				/// <returns>高程值</returns>
				virtual Real getHeightAt(Real latitude,Real longitude,ev_real32 targetSamplesPerDegrees);

				/// <summary>
				/// 获取给定经纬度点所在瓦片使用的影像图层的名称、级别、行列号。
				/// 输出参数的各集合的元素数量是一致的。
				/// 如果显示的是纯色地形或者没有可见的影像图层，则输出参数都为空;
				/// 如果开启了卷帘，则输出参数的各集合中的元素数量可能大于1;
				/// 否则各集合中只有1个元素。
				/// LayerNames中的第i个元素代表的瓦片的级别、行号、列号分别为levels[i]、rows[i]、cols[i]。
				/// </summary>
				/// <param name="longitude">经度</param>
				/// <param name="latitude">纬度</param>				
				/// <param name="LayerNames">图层名称的集合</param> 
				/// <param name="levels">级别的集合，从0级开始</param>
				/// <param name="rows">行号的集合</param>
				/// <param name="cols">列号的集合</param>				
				/// <returns></returns>
				void getTileInfo(ev_real64 longitude,ev_real64 latitude,_out EarthView::World::Core::CStringArray& LayerNames, _out EarthView::World::Core::IntVector& levels, _out EarthView::World::Core::IntVector& rows, _out EarthView::World::Core::IntVector& cols);
				/// <summary>
				/// 获取给定经纬度点所在瓦片使用的影像图层的名称、级别、行列号。				
				/// </summary>
				/// <param name="longitude">经度</param>
				/// <param name="latitude">纬度</param>		
				/// <param name="pixelX">像素坐标X,取值范围[-1.0,1.0],用来过滤卷帘图层</param>
				/// <param name="piexlY">像素坐标Y,取值范围[-1.0,1.0],用来过滤卷帘图层</param>	
				/// <param name="LayerName">图层名称</param> 
				/// <param name="level">级别，从0级开始</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>				
				/// <returns></returns>
				void getTileInfo(ev_real64 longitude,ev_real64 latitude,ev_real32 pixelX,ev_real32 piexlY,EVString& LayerName,ev_int32& level,ev_int32& row, ev_int32& col);
				/// <summary>
				/// 从瓦片中获取高程
				/// </summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <returns>高程</returns>
				virtual Real getHeightAtTile(Real latitude,Real longitude);

				/// <summary>
				/// 内部函数，瓦片的每个顶点获取高程的时候都会通过这个函数修正
				/// </summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <param name="altitude">原高程</param>
				/// <returns>修正后的高度</returns>
				Real modifyHeightByTerrainRevisors(Real latitude,Real longitude,Real altitude);

				/// <summary>
				/// 内部函数，瓦片的每个顶点获取高程的时候都会通过这个函数修正 加上特征层的修正高度
				/// </summary>
				/// <param name="latitude">纬度</param>
				/// <param name="longitude">经度</param>
				/// <param name="altitude">原高程</param>
				/// <returns>修正后的高度</returns>
				Real modifyHeightByTerrainRevisors(Real latitude,Real lontitude,Real altitude,Real featureAtitude);


			
				/// <summary>
				/// 获取高程瓦片数据流
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <returns>高程瓦片数据流</returns>
				virtual EarthView::World::Core::MemoryDataStreamPtr getTerrain(ev_int32 level,ev_int32 row,ev_int32 col);
				virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromMemoryCache(ev_int32 row, ev_int32 col, ev_int32 level);
				virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromDBCache(ev_int32 row, ev_int32 col, ev_int32 level);
				virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromServer(ev_int32 row, ev_int32 col, ev_int32 level);

				/// <summary>
				/// 判断场景是否使用摩卡托投影
				/// </summary>
				/// <param name=""></param>   
				/// <returns>是否摩卡托投影</returns>	
				/// <summary>
				ev_bool usingWebMercator() const;
				/// 获取瓦片经纬度包围盒
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns>是否成功</returns>
                virtual ev_bool getTileEnvelope(ev_int32 level,ev_uint32 row,ev_uint32 col,Real& minX,Real& maxX,Real& minY,Real& maxY);
				/// <summary>
				/// 获取影像透明度
				/// </summary>
				/// <param name=""></param>   
				/// <returns>影像透明度</returns>
                Real getImageTransparency() const {return mImageTransparency;}
				/// <summary>
				/// 设置影像透明度
				/// </summary>
				/// <param name="alpha">影像透明度</param>   
				/// <returns></returns>
                void setImageTransparency(Real alpha);

				/// <summary>
				/// 获取影像是否接收阴影
				/// </summary>
				/// <param name="alpha">影像透明度</param>   
				/// <returns></returns>
				ev_bool getImageReceiveShadows()const{ return mImageReceiveShadows;}
				/// <summary>
				/// 设置影像是否接收阴影
				/// </summary>
				/// <param name="enabled"></param>   
				/// <returns></returns>
				void setImageReceiveShadows(ev_bool enabled){ mImageReceiveShadows = enabled;}

				/// <summary>
				/// 设置是否应用纯色地形
				/// </summary>
				/// <param name="valid">是否应用纯色地形</param>   
				/// <returns></returns>
				ev_void usePureColorTexture(ev_bool valid);
				/// <summary>
				/// 设置是否网格纹理
				/// </summary>
				/// <param name="valid">是否网格纹理</param>   
				/// <returns></returns>
				ev_void useGridTexture(ev_bool valid);
				/// <summary>
				/// 获取是否应用纯色地形
				/// </summary>
				/// <param name=""></param>   
				/// <returns>是否应用纯色地形</returns>
				ev_bool isUsingPureColorTexture()const{return mUsingPureColorTexture;}
				/// <summary>
				/// 获取是否使用网格纹理
				/// </summary>
				/// <param name=""></param>   
				/// <returns>是否使用网格纹理</returns>
				ev_bool isUsingGridTexture() const {return mUsingGridTexture;}
				/// <summary>
				/// 获取纯色地形信息
				/// </summary>
				/// <param name=""></param>   
				/// <returns>纯色地形信息</returns>
				const EarthView::World::Spatial3D::CTerrainColorInfo& getPureColorInfo()const{return mColorInfo;}
				/// <summary>
				/// 设置纯色地形信息
				/// </summary>
				/// <param name="colorInfo">纯色地形信息</param>   
				/// <returns></returns>
				ev_void setPureColorInfo(const EarthView::World::Spatial3D::CTerrainColorInfo& colorInfo);
				/// <summary>
				/// 设置大气圈是否可见
				/// </summary>
				/// <param name="visible">大气圈是否可见</param>   
				/// <returns></returns>
				ev_void setAerosphereVisible(ev_bool visible);			

				/// <summary>
				/// 获取大气圈是否可见
				/// </summary>
				/// <param name=""></param>   
				/// <returns>大气圈是否可见</returns>
                ev_bool getAerosphereVisible()const
                {
                    return mShowAerosphere;
                }	

				/// <summary>
				/// 设置大气圈厚度，默认厚度是1200km，厚度范围为20km到1500km之间
				/// </summary>
				/// <param name="thickness">大气圈厚度，默认厚度是1200km</param>
				/// <returns></returns>
				void setAerosphereThickness(Real thickness);
				/// <summary>
				/// 获取大气圈显示厚度
				/// </summary>
				/// <returns>大气圈厚度</returns>
				Real getAerosphereThickness();

				/// <summary>
				/// 二三维编辑一体化的时候，二维编辑保存之后需要调用该函数通知场景更新数据集
				/// </summary>
				/// <param name="strDataSourceName">数据源名</param>  
				/// <param name="strDatasetName">数据集名</param> 
				/// <param name="pEvent">事件</param> 
				/// <returns></returns>
                ev_void notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
				
				/// <summary>
				/// 刷新瓦片纹理
				/// </summary>
				/// <param name="updateImageGroup">是否更新影像层</param>  
				/// <param name="updateFeatureGroup">是否更新特征层</param> 
				/// <param name="updateKmlGroup">是否更新kml层</param> 
				/// <returns></returns>
				ev_void updateQuadImage(bool updateImageGroup,bool updateFeatureGroup,bool updateKmlGroup);

				/// <summary>
				/// 刷新瓦片纹理<只刷新指定范围内的瓦片>
				/// </summary>
				/// <param name="updateImageGroup">是否更新影像层</param>  
				/// <param name="updateFeatureGroup">是否更新特征层</param> 
				/// <param name="updateKmlGroup">是否更新kml层</param> 
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns></returns>
				ev_void updateQuadImage(bool updateImageGroup,bool updateFeatureGroup,bool updateKmlGroup,Real minX,Real maxX,Real minY,Real maxY);
				
				/// <summary>
				/// 刷新地形
				/// </summary>
				/// <param name=""></param> 
				/// <returns></returns>
				ev_void updateQuadAltitude();
				/// <summary>
				/// 刷新地形
				/// </summary>
				/// <param name="downloadAltitude">是否需要重新获取高程</param> 
				/// <returns></returns>
				ev_void updateQuadAltitude(ev_bool downloadAltitude);

				/// <summary>
				/// 刷新地形<只刷新指定范围内的瓦片>
				/// </summary>
				/// <param name=""></param> 
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns></returns>
				ev_void updateQuadAltitude(Real minX,Real maxX,Real minY,Real maxY);
				/// <summary>
				/// 刷新地形<只刷新指定范围内的瓦片>
				/// </summary>
				/// <param name="downloadAltitude">是否需要重新获取高程</param> 
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns></returns>
				ev_void updateQuadAltitude(ev_bool downloadAltitude,Real minX,Real maxX,Real minY,Real maxY);

				/// <summary>
				/// 刷新瓦片(纹理及高程)
				/// </summary>
				/// <param name=""></param> 
				/// <returns></returns>
                ev_void updateQuadmap();

				/// <summary>
				/// 刷新瓦片(纹理及高程)<只刷新指定范围内的瓦片>
				/// </summary>
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns></returns>
				ev_void updateQuadmap(Real minX,Real maxX,Real minY,Real maxY);

				/// <summary>
				/// 刷新非贴地图层
				/// </summary>
				/// <param name="updateType">刷新类型</param> 
				/// <returns></returns>
				ev_void updateRelativeLayers(EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
				/// <summary>
				/// 刷新非贴地图层
				/// </summary>
				/// <param name=""></param> 
				/// <returns></returns>
				ev_void updateRelativeLayers();

				/// <summary>
				/// 刷新摄影测量纹理
				/// </summary>
				/// <returns></returns>
				ev_void updateOBQ(ev_bool bUpdateVectorTexture,ev_bool bUpdateKmlTexture, ev_bool bUpdateTemporaryTexture, ev_bool bUpdateTerrain);

				/// <summary>
				/// 通知图层刷新
				/// </summary>
				/// <param name="cam">相机</param> 
				/// <param name="updateType">刷新类型</param> 
				/// <returns></returns>
				ev_void _notifyLayersRefresh(EarthView::World::Graphic::CCamera* cam,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
				/// <summary>
				/// 通知图层刷新
				/// </summary>
				/// <param name="cam">相机</param> 
				/// <returns></returns>
				ev_void _notifyLayersRefresh(EarthView::World::Graphic::CCamera* cam);

				/// <summary>
				/// 增加地形修改器
				/// </summary>
				/// <param name="tr">地形修改器</param> 
				/// <returns>是否成功</returns>
                ev_bool addTerrainRevisor(EarthView::World::Spatial3D::ITerrainRevisor* tr);
				/// <summary>
				/// 删除地形修改器
				/// </summary>
				/// <param name="key">地形修改器主键</param> 
				/// <returns>是否成功</returns>
                ev_bool removeTerrainRevisor(const EVString& key);

				/// <summary>
				/// 交换地形修改器顺序
				/// </summary>
				/// <param name="front">第一个位置</param>
				/// <param name="back">第二个位置</param> 
				/// <returns>是否成功</returns>
				ev_bool swapTerrainRevisor(ev_uint32 first,ev_uint32 second);
				/// <summary>
				/// 清除地形修改器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_void clearTerrainRevisors();
				/// <summary>
				/// 获取地形修改器数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>地形修改器数量</returns>
                ev_uint32 getTerrainRevisorCount();
				/// <summary>
				/// 获取地形修改器
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>地形修改器</returns>
                EarthView::World::Spatial3D::ITerrainRevisor* getTerrianRevisor(ev_uint32 index);
				/// <summary>
				/// 获取地形修改器
				/// </summary>
				/// <param name="key">主键</param>
				/// <returns>地形修改器</returns>
                EarthView::World::Spatial3D::ITerrainRevisor* getTerrainRevisor(const EVString& key);

				/// <summary>
				/// 设置是否显示影像
				/// </summary>
				/// <param name="visible">是否显示影像</param>
				/// <returns></returns>
				ev_void showImage(ev_bool visible);
				/// <summary>
				/// 获取是否显示影像
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否显示影像</returns>
				ev_bool getImageVisible() const;
				/// <summary>
				/// 获取影像是否有负的高程
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否有负的高程</returns>
				ev_bool getImageQuadMapHasNegativeHeight() const;

				/// <summary>
				/// 设置影像亮度
				/// </summary>
				/// <param name="rate">倍数,取值范围(0.8,1.2)</param>
				/// <param name="detla">偏移,取值范围(-0.2,0.2)</param>
				/// <returns></returns>
				ev_void setImageLighteness(ev_real32 rate,ev_real32 delta);
				/// <summary>
				/// 获取影像亮度
				/// </summary>
				/// <param name="rate">倍数,取值范围(0.8,1.2)</param>
				/// <param name="detla">偏移,取值范围(-0.2,0.2)</param>
				/// <returns></returns>
				ev_void getImageLighteness(ev_real32& rate,ev_real32& delta)const;

				/// <summary>
				/// 设置是否显示海水
				/// </summary>
				/// <param name="visible">是否显示海水</param>
				/// <returns></returns>
				ev_void showOcean(ev_bool visible);
				/// <summary>
				/// 获取是否显示海水
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否显示海水</returns>
				ev_bool getOceanVisible()const;	
				/// <summary>
				/// 设置海水波浪长度
				/// </summary>
				/// <param name="waveStrength">海水波浪长度</param>
				/// <returns></returns>
				ev_void setWaveStrength(Real waveStrength);
				/// <summary>
				/// 获取海水波浪长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水波浪长度</returns>
				Real getWaveStrength()const;
				/// <summary>
				/// 设置海水浪花透明度
				/// </summary>
				/// <param name="foamTransparency">海水浪花透明度</param>
				/// <returns></returns>
				ev_void setFoamTransparency(Real foamTransparency);
				/// <summary>
				/// 获取海水浪花透明度
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水浪花透明度</returns>
				Real getFoamTransparency()const;
				/// <summary>
				/// 设置海水浪花范围
				/// </summary>
				/// <param name="foamRange">海水浪花范围</param>
				/// <returns></returns>
				ev_void setFoamRange(Real foamRange);
				/// <summary>
				/// 获取海水浪花范围
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水浪花范围</returns>
				Real getFoamRange()const;
				/// <summary>
				/// 设置海水浪花最大可视距离
				/// </summary>
				/// <param name="foamMaxVisibleDistance">海水浪花最大可视距离</param>
				/// <returns></returns>
				ev_void setFoamMaxVisibleDistance(Real foamMaxVisibleDistance);
				/// <summary>
				/// 获取海水浪花最大可视距离
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水浪花最大可视距离</returns>
				Real getFoamMaxVisibleDistance()const;
				/// <summary>
				/// 设置海水波浪最大可视距离
				/// </summary>
				/// <param name="distance">海水波浪最大可视距离</param>
				/// <returns></returns>
				ev_void setWaveMaxVisibleDistance(const Real& distance);
				/// <summary>
				/// 获取海水波浪最大可视距离
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水波浪最大可视距离</returns>
				const Real getWaveMaxVisibleDistance()const;
				/// <summary>
				/// 设置海水颜色
				/// </summary>
				/// <param name="color">海水颜色</param>
				/// <returns></returns>
				ev_void setWaterColor(EarthView::World::Graphic::CColourValue color);
				/// <summary>
				/// 获取海水颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>海水颜色</returns>
				EarthView::World::Graphic::CColourValue getWaterColor()const;
				/// <summary>
				/// 设置海水波浪振幅
				/// </summary>
				/// <param name="waveScale">波浪振幅</param>
				/// <returns></returns>
				ev_void setWaveScale(Real waveScale);
				/// <summary>
				/// 获取海水波浪振幅
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪振幅</returns>
				Real getWaveScale()const;
				/// <summary>
				/// 设置海水波浪落差
				/// </summary>
				/// <param name="waveFallOff">波浪落差</param>
				/// <returns></returns>
				ev_void setWaveFallOff(Real waveFallOff);
				/// <summary>
				/// 获取海水波浪落差
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪落差</returns>
				Real getWaveFallOff()const;
				/// <summary>
				/// 设置海水波浪透明度
				/// </summary>
				/// <param name="waveFrequency">波浪透明度</param>
				/// <returns></returns>
				ev_void setWaveFrequency(Real waveFrequency);
				/// <summary>
				/// 获取海水波浪透明度
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪透明度</returns>
				Real getWaveFrequency()const;
				/// <summary>
				/// 设置海水波浪时间间隔
				/// </summary>
				/// <param name="waveTimeMulti">波浪时间间隔</param>
				/// <returns></returns>
				ev_void setWaveTimeMulti(Real waveTimeMulti);
				/// <summary>
				/// 获取海水波浪时间间隔
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪时间间隔</returns>
				Real getWaveTimeMulti()const;
				/// <summary>
				/// 设置海水波浪反射因子
				/// </summary>
				/// <param name="factor">波浪反射因子</param>
				/// <returns></returns>
				ev_void setWaveReflectFactor(const Real& factor);
				/// <summary>
				/// 获取海水波浪反射因子
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪反射因子</returns>
				Real getWaveReflectFactor()const;
				/// <summary>
				/// 设置海水波浪折射因子
				/// </summary>
				/// <param name="factor">波浪折射因子</param>
				/// <returns></returns>
				ev_void setWaveRefractFactor(const Real& factor);
				/// <summary>
				/// 获取海水波浪折射因子
				/// </summary>
				/// <param name=""></param>
				/// <returns>波浪折射因子</returns>
				Real getWaveRefractFactor()const;
				/// <summary>
				/// 获取海水高度
				/// </summary>
				/// <param name="lat">纬度</param>
				/// <param name="lon">经度</param>
				/// <returns>高度</returns>
				Real getWaveHeight(const Real& lat,const Real& lon)const;
				/// <summary>
				/// 设置海水是否显示海底光环
				/// </summary>
				/// <param name="caustics">是否显示海底光环</param>
				/// <returns></returns>
				ev_void setWaveIsCaustics(ev_bool caustics);
				/// <summary>
				/// 获取海水是否显示海底光环
				/// </summary>
				/// <returns>是否显示海底光环</returns>
				ev_bool getWaveIsCaustics()const;
				/// <summary>
				/// 设置海水是否显示泡沫效果
				/// </summary>
				/// <param name="foam">是否显示泡沫效果</param>
				/// <returns></returns>
				ev_void setWaveIsFoam(ev_bool foam);
				/// <summary>
				/// 获取海水是否显示泡沫效果
				/// </summary>
				/// <returns>是否显示泡沫效果</returns>
				ev_bool getWaveIsFoam()const;
				/// <summary>
				/// 设置海水是否显示海底阳光照射效果
				/// </summary>
				/// <param name="sunRay">是否显示海底阳光照射效果</param>
				/// <returns></returns>
				ev_void setWaveIsSunRay(ev_bool sunRay);
				/// <summary>
				/// 获取海水是否显示海底阳光照射效果
				/// </summary>
				/// <returns>是否显示海底阳光照射效果</returns>
				ev_bool getWaveIsSunRay()const;
				
				ev_void addExcludeRenderQueues(EarthView::World::Spatial3D::SeaExcludeRenderQueueGroupIDType type,const ev_uint8& renderQueueGroupID);
				ev_void removeExcludeRenderQueues(EarthView::World::Spatial3D::SeaExcludeRenderQueueGroupIDType type,const ev_uint8& renderQueueGroupID);

				/// <summary>
				/// 设置影像的分裂因子，分裂因子为-1到1之间，0表示保持默认的分裂方式，1表示维持当前级别情况下所有瓦片都是同一级别,-1表示整体降低一个级别
				/// </summary>
				/// <param name="factor">分裂因子</param>
				/// <returns></returns>
				ev_void setImageDivideFactor(_in Real factor);

				/// <summary>
				/// 获取影像的分裂因子
				/// </summary>
				/// <returns></returns>
				Real getImageDivideFactor()const ;

				/// <summary>
				/// 设置影像默认材质
				/// </summary>
				/// <param name="matPtr">材质</param>
				/// <returns></returns>
				ev_void setImageDefaultMaterial(const EarthView::World::Graphic::CMaterialPtr& matPtr);
				/// <summary>
				/// 设置是否应用影像默认材质
				/// </summary>
				/// <param name="useDefaultMat">是否应用影像默认材质</param>
				/// <returns></returns>
				ev_void setImageUseDefaultMaterial(const ev_bool& useDefaultMat);
				/// <summary>
				/// 获取模型管理器
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型管理器</returns>
				EarthView::World::Spatial3D::ModelManager::CModelObjectManager* getModelObjectManager();
				/// <summary>
				/// 设置影像滤镜颜色
				/// </summary>
				/// <param name="filter">影像滤镜颜色</param>
				/// <returns></returns>
				void setImageColorFilter(_in const EarthView::World::Graphic::CColourValue& filter);
				/// <summary>
				/// 获取影像滤镜颜色
				/// </summary>
				/// <returns>影像滤镜颜色</returns>
				const EarthView::World::Graphic::CColourValue& getImageColorFilter()const;
				/// <summary>
				/// 设置是否启用影像颜色滤镜
				/// </summary>
				/// <param name="enable">是否启用影像颜色滤镜</param>
				/// <returns></returns>
				void enableImageColorFilter(_in ev_bool enable);
				/// <summary>
				/// 获取影像颜色滤镜是否启用了
				/// </summary>
				/// <param name=""></param>
				/// <returns>启用了返回true，否则返回false</returns>
				ev_bool isImageColorFilterEnabled()const;


				/// <summary>
				/// 将影像或者矢量瓦片输出到一张图片上
				/// </summary>
				/// <param name="strOutPath">输出图片的路径</param>
				/// <param name="minLon">输出范围经度的最小值</param>
				/// <param name="minLat">输出范围纬度的最小值</param>
				/// <param name="maxLon">输出范围经度的最大值</param>
				/// <param name="maxLat">输出范围纬度的最大值</param>
				/// <param name="pixelWidth">输出的像素宽度</param>
				/// <param name="pixelHeight">输出的像素高度</param>
				/// <param name="exportImage">是否输出影像</param>
				/// <param name="exportVector">是否输出矢量</param>
				/// <returns></returns>
				ev_bool exportTiles(const EVString& strOutPath,ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat, ev_uint32 pixelWidth,ev_uint32 pixelHeight,ev_bool exportImage,ev_bool exportVector,EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* pListener);

				/// <summary>
				/// 获取地形当前经纬度矩形框
				/// </summary>
				/// <returns></returns>
				const EarthView::World::Spatial::Geometry::CEnvelope& getTerrainEnvlope() const;
				
				/// <summary>
				/// 获取地形当前经纬度矩形框
				/// </summary>
				///<param name="minX">获取范围框最小X值</param>
				///<param name="maxX">获取范围框最大X值</param>
				///<param name="minY">获取范围框最小Y值</param>
				///<param name="maxY">获取范围框最大Y值</param>
				/// <returns></returns>
				void getTerrainEnvlope(double& minX, double& maxX, double& minY, double& maxY );
ev_private:
				/// <summary>
				/// 获取地形信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>地形信息</returns>
				virtual EVString getTerrainLayerInfo() const;
            protected:
				void initialize();

				ev_void fromXML(const EVString& strXML);
                ev_void setName(const EVString& name);

                friend class CGeoCameraListener;               			


                EarthView::World::Spatial::CTileReference* createWebMercatorTileRef()const;
                EarthView::World::Spatial::CTileReference* createWGS84TileRef()const;

				ev_void showAerosphere();
				ev_void hideAerosphere();
                
			protected:
				//EV_MUTEX(mMutex)
                EV_MUTEX(mTileRefMutex);

				CQuadMap* mGisQuadMap;
				CQuadMap* mSeaQuadMap;

				EarthView::World::Core::CReadWriteLock mQuadMapLock;
#if defined(USE_FFT_OCEAN)
				COceanSurface *mOceanSurface;
#endif
                Real mImageTransparency;
				ev_real32 mImageLightingRate;
				ev_real32 mImageLightingDelta;

                CAerosphere* mpAerosphere;
                ev_bool mShowAerosphere;

				ev_bool mImageReceiveShadows;

				EarthView::World::Spatial3D::SceneTileType mTileType;
				EarthView::World::Spatial3D::ImageTileDivisionMode mImageDivisionMode;

				ev_bool mUsingPureColorTexture;

				ev_bool mUsingGridTexture;

				ev_bool mActive;

				CMyRenderListener* mRenderListener;

				ev_bool mIsCastingShadowDepth;
				bool mIsTerrainCastShadow;
				EarthView::World::Spatial3D::CGlobeCamera* mShadowMapCam;
				ev_bool mFadeInOutEnabled;
				ev_real64 mFadeInOutTime;
				EarthView::World::Graphic::CViewport* mFadeInOutViewport;
				bool mHasObqReviser;

           ev_private:
                void getTrueTargetInfo(_in ev_int32& hasTrueDistanceInfo,_in EarthView::World::Spatial::Math::CVector3& realTarget,_in ev_real64& trueDistance,_in ev_real64& targetAltitude,_in ev_real64& altitudeUnderCamera,_in EarthView::World::Spatial::Math::CDegree& trueViewRange);

				virtual void setFadeInOutEnabled(ev_bool flag);
				virtual void setFadeInOutTime(double time);
				virtual void setFadeInOutViewport(EarthView::World::Graphic::CViewport* viewport);

            protected: //add by zhaowei               
                EarthView::World::Spatial3D::Atlas::CKmlGroupLayer*     mpKmlGroupLayer;
                EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* mpFeatureGroupLayer;
                EarthView::World::Spatial3D::Atlas::CImageGroupLayer*   mpImageGroupLayer;
                EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer* mpTerrainGroupLayer;
				EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* mpAtmosphere;

                EarthView::World::Spatial::CTileReference* mTRWebMecarto;
                EarthView::World::Spatial::CTileReference* mTRWGS84;

                typedef list<EarthView::World::Spatial3D::ITerrainRevisor*> TerrainRevisors;
                TerrainRevisors mTerrainRevisors;
                mutable EarthView::World::Core::CReadWriteLock mTerrainLock;
                EarthView::World::Spatial::Utility::CSpatialReference* mSR;

				EarthView::World::Spatial3D::CTerrainColorInfo mColorInfo;

				EarthView::World::Spatial3D::Atlas::CTempGroupLayer* mpTempGroupLayer;

				mutable EarthView::World::Spatial::Math::CDegree mlatitude;
				mutable EarthView::World::Spatial::Math::CDegree mlongitude;
				mutable EarthView::World::Spatial::Math::CDegree mheading;
				mutable EarthView::World::Spatial::Math::CDegree mtilt;
				mutable ev_real64 maltitude;
				mutable ev_real64 mmoditifAltitude;
				mutable ev_bool misUnderGroundMode;
				mutable ev_bool misPlaneBased;
				mutable ev_real64 mcameraControlDepth;

				mutable ev_int32 mHasTrueDistanceInfo;
				mutable EarthView::World::Spatial::Math::CVector3 mRealTarget;
				mutable ev_real64 mTrueDistance ;
				mutable ev_real64 mTargetAltiude;
				mutable ev_real64 mAltitudeUnderCamera;
				mutable EarthView::World::Spatial::Math::CDegree mTrueViewRange;
				
				CQuadMap* createNormalSeaQuadMap();
				CQuadMap* createWaveSeaQuadMap(EarthView::World::Graphic::CCamera* camera,EarthView::World::Graphic::CViewport* viewport);
				ev_void createOceanSurface();

				ev_void   initializeNormalSeaQuadMap();
				ev_void   initializeWaveSeaQuadMap();

				EarthView::World::Spatial3D::SeaType mSeaType;
				ev_int32							 mSeaVertexNum;
				ev_bool mSeaVisible;

				friend class EarthView::World::Spatial3D::Atlas::CScene;

				EarthView::World::Spatial::Math::CMatrix4  mlastViewMatrix;

				ev_bool mGoogleCameraManipulatorEnabled;

				ev_bool mEnableManipulatorIntersectModel;

				ev_bool mEnableManipulatorIntersectFloor;

				ev_real64 mCameraNearClipRate;

			ev_private:
				ev_real64 mGotoTimeRatio;

				ev_bool mAutoCalculateCameraFov;

				mutable ev_real64 mCameraFov;

			private:
				static CQuadTreeBackgroundQueue* g_QuadQueue;
				///zhangjunfeng add
				EarthView::World::Graphic::CColourValue mWaterColor;
				EarthView::World::Graphic::CColourValue mOceanRefractColor;
				EarthView::World::Graphic::CColourValue mOceanDoubleRefractColor;
				EarthView::World::Graphic::CColourValue mOceanFogColor;
				ev_bool mOceanDetailEnable;
				float mOceanStrength;
				ev_real32 mTransparency;
				Real mWaveStrength;
				Real mWaveMaxVisibleDistance;
				Real mFoamTransparency;
				Real mFoamRange;
				Real mFoamMaxVisibleDistance;
				Real mWaveScale;
				Real mWaveFallOff;
				Real mWaveFrequency;
				Real mWaveTimeMulti;
				Real mFoamBlend;
				ev_bool mWAVEUnderWaterEnable;
				ev_bool mFFTUnderWaterEnable;
				Real mOceanMaxVisibleDistance;

				ev_bool mWaveIsCaustics;
				ev_bool mWaveIsFoam;
				ev_bool mWaveIsSunRay;

				EarthView::World::Spatial3D::ModelManager::CModelObjectManager* mpObjectManager;

				Real mRefractFactor;
				Real mReflectFactor;


				CGlobeFlyPathVector mglobeFlyPathVector;
				EarthView::World::Graphic::CColourValue mImageColor;
				ev_bool mImageColorEnabled;

				Real mImageDivideFactor;
				mutable ev_uint32 mNextFrameNumber;

				//ev_void createWindowSurface();
				EarthView::World::Graphic::CTexturePtr mLeftEyeTex;
				EarthView::World::Graphic::CTexturePtr mRightEyeTex;
				ev_uint32 m;
				ev_bool mIs3DGlassesMode;

				EarthView::World::Graphic::CRectangle2D* mLeftEyeRect;
				EarthView::World::Graphic::CRectangle2D* mRightEyeRect;
				EarthView::World::Spatial3D::CGlobeCamera* mLeftEyeCam;
				EarthView::World::Spatial3D::CGlobeCamera* mRightEyeCam;
				EarthView::World::Graphic::CMaterialPtr mLeftEyeMaterialPtr;
				EarthView::World::Graphic::CMaterialPtr mRightEyeMaterialPtr;
				ev_real32 mDistanceOfTwoEyes;
		ev_private:
				//ev_void setWindowSurfaceRenderableMaterial(const EarthView::World::Graphic::CMaterialPtr& material);
#if defined(USE_FFT_OCEAN)
				inline COceanSurface *getOceanSurface()
				{
					return mOceanSurface;
				}
#endif
		public:
				/// <summary>
				/// 进入该模式后将支持3D显示器，可通过3D眼镜看到立体效果，必须在全屏状态下调用该接口
				/// </summary>
				void enter3DGlassesMode();
				/// <summary>
				/// 离开3D模式
				/// </summary>
				void leave3DGlassesMode();

				/// <summary>
				/// 返回是否是3D眼镜模式
				/// </summary>
				ev_bool is3DGlassesMode();

				/// <summary>
				/// 设置3D模式下两眼间距离，默认是0.12米，距离越大3D效果越明显但看起来越难受
				/// </summary>
				/// <param name="distance">两眼间距离，单位是米，默认值：0.12</param>
				void setDistanceOfTwoEyes(ev_real32 distance);

				/// <summary>
				/// 返回3D模式下两眼间距离
				/// </summary>
				/// <returns>以米为单位的两眼间距离，默认值：0.12</returns>
				ev_real32 getDistanceOfTwoEyes();

				/// <summary>
				/// 类似于CRoot::getNextFrameNumber()，但CRoot::getNextFrameNumber()是每帧不管绘不绘制场景都自增，而这个是真正绘制场景才自增
				/// </summary>
				ev_uint32 getNextFrameNumber()
			    {
					return mNextFrameNumber;
			    }
				inline ev_void setHeightMapRendering(ev_bool flag)
				{
					mIsHeightMapRendering = flag;
				}
				inline ev_void setOceanDepthRendering(ev_bool flag)
				{
					mIsOceanDepthRendering = flag;
				}
				inline ev_real32 getOceanFoamBlend()
				{
					return mFoamBlend;
				}
				ev_void setOceanFoamBlend(ev_real32 foamblend);
				ev_bool getFFTOceanEnable();
				EarthView::World::Graphic::CColourValue getOceanRafractionColor();			
				ev_void setOceanRafractionColor(EarthView::World::Graphic::CColourValue color);			
				EarthView::World::Graphic::CColourValue getOceanDoubleRafractionColor();
				ev_void setOceanDoubleRafractionColor(EarthView::World::Graphic::CColourValue color);
				EarthView::World::Graphic::CColourValue getOceanFogColor();
				ev_void setOceanFogColor(EarthView::World::Graphic::CColourValue color);
				ev_bool getOceanDetailEnable();
				ev_void setOceanDetailEnable(ev_bool flag);
				ev_bool getOceanUnderWaterEnable();
				ev_void setOceanUnderWaterEnable(ev_bool flag);
				ev_bool getOceanStrength(){return mOceanStrength;}
				ev_void setOceanStrength(ev_real32 strength);
				ev_void setOceanTransparency(ev_real32 transparency);

				Real getOceanPointHeight(Real lat, Real lon);
			};

			/// <summary>
			/// 场景管理器类工厂
			/// 
			/// </summary>
			class EV_Spatial3DEngine_DLL CGeoSceneManagerFactory : public EarthView::World::Graphic::CSceneManagerFactory
			{
			protected:
				void initMetaData() const;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeoSceneManagerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CGeoSceneManagerFactory();
				//// Factory type name
				static const EVString FACTORY_TYPE_NAME;
				/// <summary>
				/// 创建一个实例
				/// </summary>
				/// <param name="instanceName">实例的名字</param>
				/// <returns>工厂的产品</returns>
				EarthView::World::Graphic::CSceneManager *createInstance(const EVString &instanceName);
				/// <summary>
				/// 销毁一个实例
				/// </summary>
				/// <param name="layer">销毁工厂的产品</param>
				/// <returns>是否成功</returns>
				void destroyInstance(EarthView::World::Graphic::CSceneManager *instance);
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoSceneManagerFactory(_in EarthView::World::Core::CNameValuePairList *pList);

			};
		}
	}
}

#endif
