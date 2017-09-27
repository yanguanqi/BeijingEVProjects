#pragma once;
#include "effect3d_config.h"
#include "regionatmosphere.h"
#include "cloud_definitions.h"
#include <graphic/colourvalue.h>
#include <graphic/scenemanager.h>
#include "iatmosphere.h"
#include <core/stringinterface.h>
#include <graphic/image.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 天气控制点类
				/// </summary>
				class EV_EFFECT3D_DLL CWeatherControlPoint : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CWeatherControlPoint(EarthView::World::Core::CNameValuePairList *pList);
				public:
					CWeatherControlPoint(const EarthView::World::Core::CCoreTime &time, EarthView::World::Spatial::Effect3D::EVWeatherType type);
					~CWeatherControlPoint();
					EarthView::World::Core::CCoreTime mTime;
					EarthView::World::Spatial::Effect3D::EVWeatherType mWeatherType;
				};
				class EV_EFFECT3D_DLL CWeatherTransformation : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CWeatherTransformation(EarthView::World::Core::CNameValuePairList *pList);
				public:
					CWeatherTransformation();
					~CWeatherTransformation();
					/// <summary>
					/// 新增控制点
					/// </summary>
					/// <param name="controlpoint">控制点对象</param>
					/// <returns>获取控制点索引</returns>
					ev_int32 addControlPoint(const EarthView::World::Spatial::Effect3D::CWeatherControlPoint& controlpoint);
					/// <summary>
					/// 根据索引获取控制点对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="controlpoint">控制点对象</param>
					/// <returns>是否获取成功</returns>
					ev_bool getControlPoint(ev_uint32 index, _out EarthView::World::Spatial::Effect3D::CWeatherControlPoint &controlpoint);
					/// <summary>
					/// 根据索引删除控制点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>删除结果</returns>
					ev_bool removeControlPoint(ev_uint32 index);
					/// <summary>
					/// 获取控制点对象总数
					/// </summary>
					/// <returns>控制点总数</returns>
					ev_uint32 getControlPointCount();
					/// <summary>
					/// 清空
					/// </summary>
					/// <returns></returns>
					ev_void clear();
					/// <summary>
					/// 转换天气
					/// </summary>
					/// <param name="atmosphere">转换对象</param>
					/// <param name="time">时间</param>
					/// <param name="alt">镜头高度</param>
					/// <returns>转换结果</returns>
					ev_bool transformWeather(EarthView::World::Spatial::Effect3D::CRegionAtmosphere *atmosphere, const EarthView::World::Core::CCoreTime &time, Real alt);
					/// <summary>
					/// 设置默认天气
					/// </summary>
					/// <param name="type">天气类型</param>
					/// <returns>设置结果</returns>
					ev_void setDefaultWeather(EarthView::World::Spatial::Effect3D::EVWeatherType type);
					/// <summary>
					/// 设置转换时间差
					/// </summary>
					/// <param name="seconds">时间差</param>
					/// <returns></returns>
					ev_void setStartEndTransitionTime(ev_uint32 seconds);
					/// <summary>
					/// 设置是否需要存储默认状态
					/// </summary>
					/// <param name="restore">是否</param>
					/// <returns></returns>
					ev_void setNeedRestoreToDefault(ev_bool restore);
				protected:
					void  prepareAtmosphere(EarthView::World::Spatial::Effect3D::CRegionAtmosphere *atmosphere);
					ev_int32 calcPosition(const EarthView::World::Core::CCoreTime &time);
					list<EarthView::World::Spatial::Effect3D::CWeatherControlPoint> mlistControlPoints;
					EarthView::World::Spatial::Effect3D::EVWeatherType mDefaultWeather;
					ev_uint32 mStartEndTransitionTime;
					ev_bool mbNeedRestoreToDefault;
				};
				/// <summary>
				/// 全局环境类
				/// </summary>
				class EV_EFFECT3D_DLL CGlobeAtmosphere : public EarthView::World::Spatial::Effect3D::CRegionAtmosphere
				{

ev_private:
					CGlobeAtmosphere(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGlobeAtmosphere(EarthView::World::Graphic::CSceneManager *ref_sceneMgr, Real cloudVisibilityAlt, EarthView::World::Spatial::Effect3D::EVWeatherType type);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGlobeAtmosphere();

					/// <summary>
					/// 设置源点经纬度
					/// </summary>
					/// <returns></returns>
					ev_void setOriginLonLat(const EarthView::World::Spatial::Math::CDegree &lon, const EarthView::World::Spatial::Math::CDegree &lat);

					/// <summary>
					/// 帧监听
					/// </summary>
					/// <returns></returns>
					ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt);
					ev_void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);
					/// <summary>
					/// 创建区域节点
					/// </summary>
					/// <param name="envelope">范围</param>
					/// <param name="type">天气类别</param>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *createRegionAtmosphere(EarthView::World::Spatial::Geometry::CEnvelope envelope, EarthView::World::Spatial::Effect3D::EVWeatherType type);

					/// <summary>
					/// 销毁区域
					/// </summary>
					/// <param name="regionatmosphere">区域</param>
					/// <returns></returns>
					ev_void destroyRegionAtmosphere(EarthView::World::Spatial::Effect3D::CRegionAtmosphere *regionatmosphere);
					/// <summary>
					/// 获取局部区域总数
					/// </summary>
					/// <returns></returns>
					ev_size_t getRegionAtmospheresCount();
					/// <summary>
					/// 根据索引获取区域
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *getRegionAtmosphere(ev_uint32 index);

					/// <summary>
					/// 设置大气层厚度
					/// </summary>
					/// <param name="thickness">大小</param>
					/// <returns></returns>
					ev_void setAerosphereThickness(Real thickness);

					/// <summary>
					/// 读取xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					virtual ev_void fromXML(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>字符串</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 更新云图图片
					/// </summary>
					/// <param name="img">云图图片,图片的groupname为"Caelum"</param>
					/// <returns></returns>
					ev_void setRealCloudMap(const EarthView::World::Graphic::CImage& img);

					/// <summary>
					/// 设置云图的alpha值
					/// </summary>
					/// <param name="alpha">alpha值</param>
					/// <returns></returns>
					ev_void setRealCloudMapAlpha(_in ev_real32 alpha);

					/// <summary>
					/// 设置局部云图的alpha值
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="alpha">alpha值</param>
					/// <returns></returns>
					ev_void setRegionCloudMapAlpha(_in const EVString& name,_in ev_real32 alpha);

					/// <summary>
					/// 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="img">图片</param>
					/// <param name="north">局部区域的北边界。(度为单位)</param>
					/// <param name="west">局部区域的西边界。(度为单位)</param>
					/// <param name="south">局部区域的南边界。(度为单位)</param>
					/// <param name="east">局部区域的东边界。(度为单位)</param>
					/// <returns></returns>
					void addRegionCloudMap(_in const EVString& name,_in const EarthView::World::Graphic::CImage& img,_in ev_real64 north,_in ev_real64 west,_in ev_real64 south,_in ev_real64 east);

					/// <summary>
					/// 添加局部云图.(必须在调用了CRegionAtmosphere::enableRealCloud后再调用才有效)
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="img">图片</param>
					/// <param name="north">局部区域的北边界。(度为单位)</param>
					/// <param name="west">局部区域的西边界。(度为单位)</param>
					/// <param name="south">局部区域的南边界。(度为单位)</param>
					/// <param name="east">局部区域的东边界。(度为单位)</param>
					/// <param name="height">局部云的高度。(度为米)</param>
					/// <returns></returns>
					void addRegionCloudMap(_in const EVString& name,_in const EarthView::World::Graphic::CImage& img,_in ev_real64 north,_in ev_real64 west,_in ev_real64 south,_in ev_real64 east,_in ev_real64 height);

					/// <summary>
					/// 移除局部云图
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void removeRegionCloudMap(_in const EVString& name);
					/// <summary>
					/// 设置局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					void setRegionCloudMapVisible(_in const EVString& name,_in bool visible);
					/// <summary>
					///获取局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					ev_bool getRegionCloudMapVisible(_in const EVString& name);

					/// <summary>
					/// 设置体积云的颜色与图片一致
					/// </summary>
					/// <param name="ev_bool">是否一致</param>
					/// <returns></returns>
					ev_void enableGetCloudColorFromImage(_in ev_bool enable);

					/// <summary>
					///设置风速.（默认速度为（-0.00000015，0.00000015），速度不宜设的过大）
					/// </summary>
					/// <param name="speed">风速</param>
					/// <returns></returns>
					ev_void setWindSpeedForRealCloudMap(_in const EarthView::World::Spatial::Math::CVector2& speed);

					/// <summary>
					/// 设置局部云图的旋转信息
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="centerLat">中心点外的纬度</param>
					/// <param name="centerLon">中心点外的经度</param>
					/// <param name="rotationAngleVelocity">旋转的角速度，以度为单位</param>
					/// <param name="rotationRegionRadius">旋转范围的半径，以米为单位</param>
					/// <returns></returns>
					void setRegionCloudRotationInfomation(_in const EVString& name,_in ev_real64 centerLat,_in ev_real64 centerLon,_in ev_real64 rotationAngleVelocity,_in ev_real64 rotationRegionRadius);

					/// <summary>
					/// 允许旋转局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void enableRotateRegionCloud(_in const EVString& name);
					/// <summary>
					/// 禁止转动局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void disableRotateRegionCloud(_in const EVString& name);

					/// <summary>
					/// 销毁
					/// </summary>
					/// <returns></returns>
					ev_void destroy();
					//void create(CViewport *viewport);
					/// <summary>
					/// 获取天气转换对象
					/// </summary>
					/// <returns>天气控制对象</returns>
					EarthView::World::Spatial::Effect3D::CWeatherTransformation *getWeatherTransformer();
					/// <summary>
					/// 开始天气转换
					/// </summary>
					ev_void startWeatherTransform();
					/// <summary>
					/// 停止天气转换
					/// </summary>
					ev_void stopWeatherTransform();
					/// <summary>
					/// 设置天气
					/// </summary>
					/// <returns></returns>
					ev_void setWeather(EarthView::World::Spatial::Effect3D::EVWeatherType type);
					/// <summary>
					/// 设置转换时间
					/// </summary>
					/// <returns></returns>
					ev_void setWeatherTransitionTime(ev_uint32 seconds);

				protected:
					/// <summary>
					/// 添加区域
					/// </summary>
					/// <param name="regionatmosphere">区域</param>
					/// <returns></returns>
					ev_void addRegionAtmosphere(EarthView::World::Spatial::Effect3D::CRegionAtmosphere *ref_regionatmosphere);

					/// <summary>
					/// 移除区域
					/// </summary>
					/// <param name="regionatmosphere">区域</param>
					/// <returns></returns>
					ev_void removeRegionAtmosphere(EarthView::World::Spatial::Effect3D::CRegionAtmosphere *regionatmosphere);


					ev_void clearMixedAtmospheres();

					virtual ev_void checkChildrenVolCloud();
ev_internal:
					ev_void update(EarthView::World::Spatial::Math::CDegree lon, EarthView::World::Spatial::Math::CDegree lat, ev_real64 alt, EarthView::World::Spatial::Math::CVector3 cameraLookDir, EarthView::World::Spatial::Math::CVector3 cameraPos, ev_real32 timeSinceLastFrame, EarthView::World::Graphic::CViewport *viewPort, ev_bool mainCamera);
					virtual ev_void onChildAtmosphereCloudLayerAdded(EarthView::World::Spatial::Effect3D::CCloudLayer *layer);
					virtual ev_void onChildAtmosphereCloudLayerRemoved(EarthView::World::Spatial::Effect3D::CCloudLayer *layer);
					//virtual EarthView::World::Graphic::CColourValue calcAmbientLightMultiplier();
				protected:
					list<EarthView::World::Spatial::Effect3D::CRegionAtmosphere *> mlistRegionAtmospheres;
					map<vector<EarthView::World::Spatial::Effect3D::CRegionAtmosphere *>, EarthView::World::Spatial::Effect3D::CRegionAtmosphere *> mmapMixedAtmospheres;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *mpCurrentAtmosphere;
					EarthView::World::Spatial::Math::CDegree mOriginLon;
					EarthView::World::Spatial::Math::CDegree mOriginLat;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation mWeatherTransformer;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation mWeatherTransformerInternal;
					ev_bool mbWeatherTransforming;
					ev_uint32 mWeatherTransitionTime;

				};
				/// <summary>
				/// 环境工厂类
				/// </summary>
				class EV_EFFECT3D_DLL CAtmosphereFactory : public EarthView::World::Spatial::Spatial3D::IAtmosphereFactory
				{
ev_private:
					CAtmosphereFactory(EarthView::World::Core::CNameValuePairList *pList);
				public:
					virtual ~CAtmosphereFactory();

					CAtmosphereFactory();
				public:
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Graphic::CSceneManager* pScene);
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(const EVString& strXml, EarthView::World::Graphic::CSceneManager* pScene);
					virtual   EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(EarthView::World::Core::CXmlElement& element, EarthView::World::Graphic::CSceneManager* pScene);
					virtual   ev_void destroyInstance(EarthView::World::Spatial::Spatial3D::IAtmosphere* environment);
				};
			}
		}
	}
}

