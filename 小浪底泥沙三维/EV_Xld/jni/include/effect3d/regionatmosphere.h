#pragma once;
#include "effect3d_config.h"
#include <graphic/colourvalue.h>
#include <graphic/scenemanager.h>
#include <spatialobject/geometry/envelope.h>
#include "cloud_definitions.h"
#include "cloudlayer.h"
#include "iatmosphere.h"
#include "core/xml.h"
#include "rainsnow_system.h"

#include "effect3d/realcloudlayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CViewport;
		}
		namespace Spatial
		{
			namespace Effect3D
			{
				//                      自定义 晴朗 多云 阴天 细雨 中雨 大雨暴风雨雨夹雪小雪 中雪 大雪暴风雪冰晶 冰粒小冰雹冰雹
				static Real weatherAmbient[17] = {  1,   1, 0.8, 0.7, 0.6, 0.6, 0.4, 0.3, 0.7, 0.6, 0.5, 0.4, 0.3, 0.7, 0.6, 0.5, 0.4};
				//Real cloudDensity1[17]  = {0.5, 0.5, 0.5, 0.5, 0.6, 0.7, 0.8,   1, 0.5, 0.6, 0.7, 0.8,   1, 0.5, 0.6, 0.7,   1};
				static Real cloudDensity1[17]  = {0.5, 0.5, 0.5, 0.6, 0.6, 0.8, 0.9,   1, 0.6, 0.7, 0.8, 0.9,   1, 0.6, 0.7, 0.8,   1};
				//Real cloudDensity2[17]  = {  0,   0, 0.5, 0.6, 0.6, 0.8, 0.9,   1, 0.6, 0.7, 0.8, 0.9,   1, 0.6, 0.7, 0.8,   1};
				static Real preciIntensity[17] = {  0,   0,   0,   0, 0.1, 0.4, 0.6, 0.8, 0.1, 0.2, 0.4, 0.6, 0.8, 0.1, 0.2, 0.4, 0.6};

				/// <summary>
				/// 天气类型
				/// </summary>
				enum EVWeatherType
				{
					/// <summary>
					/// 自定义
					/// </summary>
					WT_CUSTOM,
					/// <summary>
					/// 晴朗
					/// </summary>
					WT_CLEARNESS,
					/// <summary>
					/// 多云
					/// </summary>
					WT_CLOUDY,
					/// <summary>
					/// 阴天
					/// </summary>
					WT_LOWERY,
					/// <summary>
					/// 细雨
					/// </summary>
					WT_DRIZZLE,
					/// <summary>
					/// 中雨
					/// </summary>
					WT_RAIN,
					/// <summary>
					/// 大雨
					/// </summary>
					WT_DRENCHER,
					/// <summary>
					/// 暴风雨
					/// </summary>
					WT_RAINSTORM,
					/// <summary>
					/// 雨夹雪
					/// </summary>
					WT_SLEET,
					/// <summary>
					/// 小雪
					/// </summary>
					WT_FLURRY,
					/// <summary>
					/// 中雪
					/// </summary>
					WT_SNOW,
					/// <summary>
					/// 大雪
					/// </summary>
					WT_HEAVYSNOW,
					/// <summary>
					/// 暴风雪
					/// </summary>
					WT_SNOWSTORM,
					/// <summary>
					/// 冰晶
					/// </summary>
					WT_ICECRYSTALS,
					/// <summary>
					/// 冰粒
					/// </summary>
					WT_ICEPELLETS,
					/// <summary>
					/// 小冰雹
					/// </summary>
					WT_SMALLHAIL,
					/// <summary>
					/// 冰雹
					/// </summary>
					WT_HAIL
				};
				class CWind;
				class CSun;
				class CStars;
				class CMoon;
				class CPrecipitation;
				class CCloudLayer;
				class CGroundFog;
				class CAtmospherePrivate;
				class CLightningManager;				

				/// <summary>
				/// 局部自然环境类
				/// </summary>
				class EV_EFFECT3D_DLL CRegionAtmosphere : public EarthView::World::Spatial::Spatial3D::IAtmosphere
				{
					friend class CAtmosphereInternalStringInterface;
                ev_private:
					CRegionAtmosphere(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 获得属性字符界面类的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回内部类的指针</returns>
					virtual EarthView::World::Core::CStringInterface *getStringInterfacePtr();
					

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CRegionAtmosphere();
					/// <summary>
					/// 获取场景管理器
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CSceneManager *getSceneManager();
					/// <summary>
					/// 帧监听开始
					/// </summary>
					/// <returns></returns>
					ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt);
					/// <summary>
					/// 设置区域范围
					/// </summary>
					/// <returns></returns>
					ev_void setEnvelope(EarthView::World::Spatial::Geometry::CEnvelope &envelope);
					/// <summary>
					/// 获取范围
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelope() const;
					/// <summary>
					/// 设置天气
					/// </summary>
					/// <returns></returns>
					virtual ev_void setWeather(EarthView::World::Spatial::Effect3D::EVWeatherType type);
					/// <summary>
					/// 获取天气
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::EVWeatherType getWeather() const;
					/// <summary>
					/// 设置最小环境光
					/// </summary>
					/// <returns></returns>
					ev_void setMinimumAmbientLight(const EarthView::World::Graphic::CColourValue &colour);
					/// <summary>
					/// 获取最小环境光
					/// </summary>
					/// <returns></returns>
					const EarthView::World::Graphic::CColourValue& getMinimumAmbientLight() const;
					/// <summary>
					/// 设置最小环境光是否可用
					/// </summary>
					/// <returns></returns>
					ev_void setManageAmbientLight(ev_bool manage);
					/// <summary>
					/// 返回环境光可用性
					/// </summary>
					/// <returns></returns>
					ev_bool getManageAmbientLight() const;
					/// <summary>
					/// 设置环境光颜色
					/// </summary>
					/// <returns></returns>
					ev_void setAmbientMultiplier(const EarthView::World::Graphic::CColourValue &colour);
					/// <summary>
					/// 获取环境光颜色
					/// </summary>
					/// <returns></returns>
					const EarthView::World::Graphic::CColourValue& getAmbientMultiplier() const;
					/// <summary>
					/// 在高度范围内创建云层
					/// </summary>
					/// <param name="type">类型</param>
					/// <param name="height">云层高度</param>
					/// <returns>新建云层对象</returns>
					EarthView::World::Spatial::Effect3D::CCloudLayer *createCloudLayer(EarthView::World::Spatial::Effect3D::EVCloudType type,const EarthView::World::Spatial::Effect3D::CHeightRange &height);
					/// <summary>
					/// 销毁云层
					/// </summary>
					/// <returns></returns>
					ev_void destroyCloudLayer(EarthView::World::Spatial::Effect3D::CCloudLayer *cloudlayer);
					/// <summary>
					/// 创建风
					/// </summary>
					/// <returns>新建风对象</returns>
					EarthView::World::Spatial::Effect3D::CWind* createWind();
					/// <summary>
					/// 销毁风
					/// </summary>
					/// <param name="wind">风对象</param>
					/// <returns></returns>
					ev_void destroyWind(EarthView::World::Spatial::Effect3D::CWind *wind);
					/// <summary>
					/// 创建闪电
					/// </summary>
					/// <param name="range">闪电大小</param>
					/// <returns>新建闪电对象</returns>
					EarthView::World::Spatial::Effect3D::CLightningManager* createLightningManager(const EarthView::World::Spatial::Effect3D::CHeightRange &range);
					/// <summary>
					/// 销毁闪电
					/// </summary>
					/// <param name="lightning">闪电对象</param>
					/// <returns></returns>
					ev_void destroyLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);
					/// <summary>
					/// 获取云层数量
					/// </summary>
					/// <returns></returns>
					ev_size_t getCloudLayersCount();
					/// <summary>
					/// 根据索引获取云层
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CCloudLayer *getCloudLayer(ev_uint32 index);
					/// <summary>
					/// 设置雾
					/// </summary>
					/// <returns></returns>
					ev_void setGroundFog(EarthView::World::Spatial::Effect3D::CGroundFog *ref_fog);
					/// <summary>
					/// 获取雾
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CGroundFog *getGroundFog();
			
					/// <summary>
					/// 获取风数量
					/// </summary>
					/// <returns></returns>
					ev_size_t getWindsCount();
					/// <summary>
					/// 根据索引获取风对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CWind *getWind(ev_uint32 index);
			
					/// <summary>
					/// 获取闪电管理对象数量
					/// </summary>
					/// <returns></returns>
					ev_size_t getLightningManagersCount();
					/// <summary>
					/// 根据索引获取闪电管理对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CLightningManager *getLightningManager(ev_uint32 index);
					/// <summary>
					/// 设置太阳
					/// </summary>
					/// <returns></returns>
					ev_void setSun(EarthView::World::Spatial::Effect3D::CSun *ref_sun);
					/// <summary>
					/// 获取太阳
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CSun *getSun();
					/// <summary>
					/// 设置月亮
					/// </summary>
					/// <returns></returns>
					ev_void setMoon(EarthView::World::Spatial::Effect3D::CMoon *ref_moon);
					/// <summary>
					/// 获取月亮
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CMoon *getMoon();
					/// <summary>
					/// 设置星空
					/// </summary>
					/// <returns></returns>
					ev_void setStars(EarthView::World::Spatial::Effect3D::CStars *stars);
					/// <summary>
					/// 获取星空
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CStars *getStars();

					/// <summary>
					/// 设置降水
					/// </summary>
					/// <returns></returns>
					ev_void setPrecipitation(EarthView::World::Spatial::Effect3D::CPrecipitation *ref_precipitation);
					/// <summary>
					/// 获取降水
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Effect3D::CPrecipitation *getPrecipitation();
					/// <summary>
					/// 关闭
					/// </summary>
					/// <returns></returns>
					static void shutdown();
					/// <summary>
					/// 设置雨雪系统(粒子系统)
					/// </summary>
					/// <returns></returns>
                    ev_void setRainSnowSystem(EarthView::World::Spatial::Effect3D::CRainSnowSystem *ref_rainSnowSystem);
					/// <summary>
					/// 获取雨雪系统(粒子系统)
					/// </summary>
					/// <returns></returns>
                    EarthView::World::Spatial::Effect3D::CRainSnowSystem *getRainSnowSystem();
					/// <summary>
					/// 移除雨雪系统
					/// </summary>
					/// <returns></returns>
					ev_void removeRainSnowSystem();
					/// <summary>
					/// 设置名称
					/// </summary>
					/// <returns></returns>
					ev_void setName(const EVString &name);
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns></returns>
					EVString getName() const;
					/// <summary>
					/// 设置观察者参数
					/// </summary>
					/// <returns></returns>
					ev_void setObserverParam(EarthView::World::Spatial::Math::CDegree lon, EarthView::World::Spatial::Math::CDegree lat, ev_real64 alt, EarthView::World::Spatial::Math::CVector3 cameraLookDir);
					/// <summary>
					/// 设置时间
					/// </summary>
					/// <returns></returns>
					ev_void setDateTime(
						ev_int32 year, ev_int32 month, ev_int32 day,
						ev_int32 hour, ev_int32 minute, ev_real64 second, ev_int8 time_zone);
					/// <summary>
					/// 是否启用系统时间
					/// </summary>
					/// <returns></returns>
					ev_void setUseSystemTime(ev_bool system_time);
					/// <summary>
					/// 获取是否启用系统时间
					/// </summary>
					/// <returns></returns>
					ev_bool getUseSystemTime();
					/// <summary>
					/// 获取时间
					/// </summary>
					/// <returns></returns>
					EarthView::World::Core::CCoreTime getDateTime();
					/// <summary>
					/// 获取时区
					/// </summary>
					/// <returns></returns>
					ev_int8 getTimeZone();
					/// <summary>
					/// 设置时间流速
					/// </summary>
					/// <returns></returns>
					ev_void setTimeScale (const Real scale);
					/// <summary>
					/// 获取时间流速
					/// </summary>
					/// <returns></returns>
					Real getTimeScale() const;

					//void onEnterRegion();
					//void onLeaveRegion();
					/// <summary>
					/// 根据视口创建
					/// </summary>
					/// <returns></returns>
					virtual ev_void create(EarthView::World::Graphic::CViewport *ref_viewport);
					/// <summary>
					/// 销毁
					/// </summary>
					/// <returns></returns>
					virtual ev_void destroy();
					/// <summary>
					/// 暂停
					/// </summary>
					/// <returns></returns>
					ev_void pause ();
					/// <summary>
					/// 重置状态
					/// </summary>
					/// <returns></returns>
					ev_void resume();

					/// <summary>
					/// 设置大气圈厚度
					/// </summary>
					/// <returns></returns>
					virtual ev_void setAerosphereThickness(Real thickness);
					/// <summary>
					/// 获取大气圈厚度
					/// </summary>
					/// <returns></returns>
					Real getAerosphereThickness() const;
					/// <summary>
					/// 设置大气云高度
					/// </summary>
					/// <returns></returns>
					virtual ev_void setRealCloudHeight(Real height);
					/// <summary>
					/// 获取全球云高度
					/// </summary>
					/// <returns></returns>
					Real getRealCloudHeight() const;
					/// <summary>
					/// 天气类型到英文字符串转换
					/// </summary>
					/// <returns></returns>
                    EVString EVWeatherTypeToString(EarthView::World::Spatial::Effect3D::EVWeatherType type) const;
					/// <summary>
					/// 天气类型到中文字符串转换
					/// </summary>
					/// <returns></returns>
					EVString EVWeatherTypeToStringCHS(EarthView::World::Spatial::Effect3D::EVWeatherType type) const;
					/// <summary>
					/// 英文字符串到天气类型的转换
					/// </summary>
					/// <returns></returns>
                    EarthView::World::Spatial::Effect3D::EVWeatherType toEVWeatherType(const EVString& type) const;
					/// <summary>
					/// 中文字符串到天气类型转换
					/// </summary>
					/// <returns></returns>
                    EarthView::World::Spatial::Effect3D::EVWeatherType toEVWeatherTypeCHS(const EVString& type) const;
					/// <summary>
					/// 开启关闭天空盒
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSkyDome(ev_bool enable);
					/// <summary>
					/// 获取天空盒开启状态
					/// </summary>
					/// <returns>开启状态</returns>
					ev_bool isSkyDomeEnabled() const;

					/// <summary>
					/// 设置天空盒折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSkyDomeRefractable(ev_bool enable);
					/// <summary>
					/// 获取天空盒折射状态
					/// </summary>
					/// <returns>开启状态</returns>
					ev_bool isSkyDomeRefractable() const;

					/// <summary>
					/// 开启关闭天空盒反射效果
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSkyDomeReflectable(ev_bool enable);
					/// <summary>
					/// 获取天空和反射状态
					/// </summary>
					/// <returns>开启状态</returns>
					ev_bool isSkyDomeReflectable() const;

					/// <summary>
					/// 设置全球云显隐
					/// </summary>
					/// <param name="enable">是否显示 </param>   
					ev_void setRealCloudVisible(ev_bool visible);
					ev_bool isRealCloudVisible() const;
					/// <summary>
					/// 开启关闭全球云
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableRealCloud(ev_bool enable);
					ev_bool isRealCloudEnabled() const;
					/// <summary>
					/// 开启关闭全球云飘动
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableRealCloudFlow(ev_bool enable);
					ev_bool isRealCloudFlowEnabled() const;
					/// <summary>
					/// 开启关闭平面云
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableFlatCloud(ev_bool enable);
					ev_bool isFlatCloudEnabled() const;
					/// <summary>
					/// 开启关闭体积云
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableVolumeCloud(ev_bool enable);
					ev_bool isVolumeCloudEnabled() const;
					/// <summary>
					/// 开启关闭太阳
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSun(ev_bool enable);
					ev_bool isSunEnabled() const;
					/// <summary>
					/// 开启关闭太阳光
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSunLight(ev_bool enable);
					ev_bool isSunLightEnabled() const;
					/// <summary>
					/// 开启关闭月亮
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableMoon(ev_bool enable);
					ev_bool isMoonEnabled() const;
					/// <summary>
					/// 开启关闭月光
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableMoonLight(ev_bool enable);
					ev_bool isMoonLightEnabled() const;
					/// <summary>
					/// 开启关闭星空
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableStars(ev_bool enable);
					ev_bool isStarsEnabled() const;

					/// <summary>
					/// 开启关闭闪电
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableLightning(ev_bool enable);
					ev_bool isLightningEnabled() const;

					/// <summary>
					/// 开启关闭降水效果
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enablePrecipitation(ev_bool enable);
					ev_bool isPrecipitationEnabled() const;

					/// <summary>
					/// 返回可见性
					/// </summary>
					/// <param name="visible">是否显示</param>
					ev_void setVisible(ev_bool visible);
					ev_bool isVisible()const;
			

					/// <summary>
					/// 设置太阳反射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSunReflectable(ev_bool enable);
					ev_bool isSunReflectable() const;
					/// <summary>
					/// 设置太阳折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableSunRefractable(ev_bool enable);
					ev_bool isSunRefractable() const;
					/// <summary>
					/// 设置月亮反射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableMoonReflectable(ev_bool enable);
					ev_bool isMoonReflectable() const;
					/// <summary>
					/// 设置月亮折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableMoonRefractable(ev_bool enable);
					ev_bool isMoonRefractable() const;
					/// <summary>
					/// 设置闪电反射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableLightningReflectable(ev_bool enable);
					ev_bool isLightningReflectable() const;
					/// <summary>
					/// 设置闪电折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableLightningRefractable(ev_bool enable);
					ev_bool isLightningRefractable() const;
					/// <summary>
					/// 设置云层反射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableCloudReflectable(ev_bool enable);
					ev_bool isCloudReflectable() const;
					/// <summary>
					/// 设置云层折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableCloudRefractable(ev_bool enable);
					ev_bool isCloudRefractable() const;
					/// <summary>
					/// 设置星空反射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableStarsReflectable(ev_bool enable);
					ev_bool isStarsReflectable()const;
					/// <summary>
					/// 设置星空折射状态
					/// </summary>
					/// <param name="enable">是否开启</param>   
					/// <returns>之前的开启关闭状态</returns>
					ev_bool enableStarsRefractable(ev_bool enable);
					ev_bool isStarsRefractable() const;

                    /// <summary>
                    /// xml读取
                    /// </summary>
                    /// <param name="element">xml元素</param>   
                    /// <returns></returns>                  
                    virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
                    //virtual ev_void fromXml( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 写入xml
					/// </summary>
					/// <param name="element">xml元素</param>   
					/// <returns></returns>                  
                    virtual EarthView::World::Core::CXmlElement toXmlElement(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 清空
					/// </summary>
					/// <param name="completely">是否完全销毁</param>   
					/// <returns></returns>
					ev_void clear(ev_bool completely);
					/// <summary>
					/// 设置默认风速
					/// </summary>
					/// <returns></returns>
					ev_void setDefaultWindSpeed(Real speed);
					/// <summary>
					/// 获取默认风俗
					/// </summary>
					/// <returns></returns>
					Real getDefaultWindSpeed();
					/// <summary>
					/// 获取太阳位置
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 getSunPosition() const;
					/// <summary>
					/// 获取月亮位置
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 getMoonPosition() const;
					/// <summary>
					/// 设置区域半径大小
					/// </summary>
					/// <param name="radius">半径</param>   
					ev_void setRadius( int radius);
					/// <summary>
					/// 获取区域半径
					/// </summary>
					/// <returns>半径大小</returns>  
					ev_int32 getRadius() const;
					/// <summary>
					/// 判断区域内是否存在云层节点
					/// </summary>
					/// <param name="layer">云层节点</param>   
					/// <returns>是否存在</returns>  
					ev_bool isCloudLayerExist(const EarthView::World::Spatial::Effect3D::CCloudLayer *layer)const;

					/// <summary>
					/// 清理闪电效果(主要用于区域切换)
					/// </summary>
					ev_void clearLightning();	

					/// <summary>
					/// 刷新环境效果对象（调用后渲染效果对象）
					/// </summary>
					/// <param name="obj">效果对象</param>
					/// <returns></returns>
					ev_void updateToRender(EarthView::World::Core::CBaseObject *ref_obj);

					///<summary>
					///设置雾参数
					///<param name="fogmode">雾类型(主要是FOG_EXP(远近雾过渡平滑)、FOG_EXP2(远处雾较浓))</param>
					///<param name="density">雾浓度(0.0~1.0)</param>
					///<summary>
					///<return></return>
					ev_void setFogParameters(EarthView::World::Graphic::FogMode fogmode,Real density);

					///<summary>
					///获取雾类型
					///<summary>
					///<return></return>
					EarthView::World::Graphic::FogMode getFogMode()const;

					///<summary>
					///获取雾浓度
					///<summary>
					///<return>雾浓度</return>
					Real getFogDensity()const;
					///<summary>
					///设置星空亮度
					///</summary>
					///<return></return>
					ev_void setStarsBrightness(ev_real32 brightness);
					///<summary>
					///获取星空亮度
					///</summary>
					///<return>亮度值</return>
					ev_real32 getStarsBrightness()const;  
					///<summary>
					/// 设置过渡层所占大气厚度的比率(0.0~1.0）
					///</summary>
					///<return>高度</return>
					void setAerosphereTransRate(ev_real32 rate);
					///<summary>
					///获取过渡层所占大气厚度比率(0.0~1.0)
					///</summary>
					///<return>高度</return>
					ev_real32 getAerophereTransRate()const;
					///<summary>
					/// 设置是否使用镜头光照模式
					///</summary>
					///<return></return>
					void setIsUseCameraLightMode(ev_bool isUse);
					ev_bool getIsUseCameraLightMode();

					virtual ev_void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);
				ev_internal:
					virtual ev_void update(EarthView::World::Spatial::Math::CDegree lon, EarthView::World::Spatial::Math::CDegree lat, ev_real64 alt, EarthView::World::Spatial::Math::CVector3 cameraLookDir, EarthView::World::Spatial::Math::CVector3 cameraPos, ev_real32 timeSinceLastFrame, EarthView::World::Graphic::CViewport *viewPort, ev_bool mainCamera);
					virtual ev_void onChildAtmosphereCloudLayerAdded(EarthView::World::Spatial::Effect3D::CCloudLayer *layer){}
					virtual ev_void onChildAtmosphereCloudLayerRemoved(EarthView::World::Spatial::Effect3D::CCloudLayer *layer){}
					virtual EarthView::World::Graphic::CColourValue calcAmbientLightMultiplier(){return mAmbientLightMultiplier;}
				protected:
					/// <summary>
					/// 初始化自然环境
					/// </summary>
					/// <returns></returns>
					void init();
					/// <summary>
					/// 初始化stringinterface
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void initParameters();
					void createAtmospherePrivate();
					void setAtmospherePrivate(EarthView::World::Spatial::Effect3D::CAtmospherePrivate *atmosphereprivate);
					list<EarthView::World::Spatial::Effect3D::CWind *> getWinds();
					list<EarthView::World::Spatial::Effect3D::CCloudLayer *> getCloudLayers();
					list<EarthView::World::Spatial::Effect3D::CLightningManager *> getLightningManagers();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CRegionAtmosphere(EarthView::World::Graphic::CSceneManager *ref_sceneMgr, Real cloudVisibilityAlt, EarthView::World::Spatial::Effect3D::EVWeatherType type, CRegionAtmosphere *ref_parent, ev_bool slave);

					/// <summary>
					/// 添加云层
					/// </summary>
					/// <returns></returns>
					ev_void addCloudLayer(EarthView::World::Spatial::Effect3D::CCloudLayer *cloudlayer);
					/// <summary>
					/// 移除云层
					/// </summary>
					/// <returns></returns>
					ev_void removeCloudLayer(EarthView::World::Spatial::Effect3D::CCloudLayer *cloudlayer);

					/// <summary>
					/// 添加闪电管理对象
					/// </summary>
					/// <returns></returns>
					ev_void addLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);
					/// <summary>
					/// 移除闪电管理对象
					/// </summary>
					/// <returns></returns>
					ev_void removeLightningManager(EarthView::World::Spatial::Effect3D::CLightningManager *lightning);

					/// <summary>
					/// 添加风
					/// </summary>
					/// <returns></returns>
					ev_void addWind(EarthView::World::Spatial::Effect3D::CWind *wind);
					/// <summary>
					/// 移除风
					/// </summary>
					/// <returns></returns>
					ev_void removeWind(EarthView::World::Spatial::Effect3D::CWind *wind);

					///<summary>
					/// 返回是否开启雾化效果
					///</summary>
					///<returns></returns>
					ev_bool isFogVisible()const;
					///<summary>
					///设置雾化状态
					///<return></return>
					ev_void setFogVisible(bool visible);

					ev_void updateFog(const EarthView::World::Graphic::CColourValue &fogcolor ,Real rate);
					
					///<summary>
					///检查子环境对象是否有体积云
					///<return></return>
					virtual void checkChildrenVolCloud();
				public:
					///<summary>
					/// 获取全球云
					///</summary>
					///<returns></returns>
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* getRealCloudLayer();
				protected:
					EVString mName;
					ev_bool mbUseSystemTime;
					EarthView::World::Graphic::CColourValue mAdjustiveAmbientLightMultiplier;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere *mpParent;
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
					EarthView::World::Spatial::Effect3D::CAtmospherePrivate *mpAtmospherePrivate;
					ev_bool mbManageAmbientLight;
					EarthView::World::Graphic::CColourValue mMinimumAmbientLight;
					EarthView::World::Graphic::CColourValue mAmbientLightMultiplier;
					EarthView::World::Graphic::CSceneManager *mpSceneMgr;
					EarthView::World::Graphic::CViewport *mpViewport;
					EarthView::World::Spatial::Effect3D::CSun *mpSun;
					EarthView::World::Spatial::Effect3D::CMoon *mpMoon;
					EarthView::World::Spatial::Effect3D::CStars *mpStar;
					list<EarthView::World::Spatial::Effect3D::CLightningManager *> mlistLightningManagers;
					EarthView::World::Spatial::Effect3D::CPrecipitation *mpPrecipitation;
                    EarthView::World::Spatial::Effect3D::CRainSnowSystem *mpRainSnowSystem;
					list<EarthView::World::Spatial::Effect3D::CWind *> mlistWinds;
					EarthView::World::Spatial::Effect3D::CGroundFog *mpFog;
					list<EarthView::World::Spatial::Effect3D::CCloudLayer *> mlistCloudLayers;
					//CRainLayer *mpRainLayer;
					//CSnowLayer *mpSnowLayer;
					//CThunderLayer *mpThunderLayer;
					Real mCloudVisibilityAlt;
					Real mRealCloudAlt;
					Real mDefaultWindSpeed;
					ev_int32 mRadius;
					EarthView::World::Spatial::Effect3D::EVWeatherType mWeatherType;
					ev_bool mbSlave;
					static vector<EarthView::World::Graphic::CParticleEmitterFactory *> mEmitterFactories;
					static vector<EarthView::World::Graphic::CParticleAffectorFactory *> mAffectorFactories;
					friend class CAtmospherePrivate;
					friend class CGlobeAtmosphere;

					ev_int32 mYear;
					ev_int32 mMonth;
					ev_int32 mDay;
					ev_int32 mHour;
					ev_int32 mMinute;
					ev_real64 mSecond;
					ev_int8 mTimezone;
					Real mScale;
					EarthView::World::Core::CCoreTime mCurrentTime;
					ev_real32 mStarsBrightness;

					ev_bool mbSkyDomeEnabled;
					ev_bool mbRealCloudEnabled;
					ev_bool mbRealCloudVisible;
					ev_bool mbRealCloudFlowEnabled;
					ev_bool mbFlatCloudEnabled;
					ev_bool mbVolumeCloudEnabled;
					ev_bool mbSunEnabled;
					ev_bool mbSunLightEnabled;
					ev_bool mbMoonEnabled;
					ev_bool mbMoonLightEnabled;
					ev_bool mbStarsEnabled;
					ev_bool mbLightningEnabled;
					ev_bool mbPrecipitationEnabled;
					ev_bool mbIsVisible;
					ev_bool mbIsUseCameraLightMode;
					
					ev_bool mbSunReflectable;
					ev_bool mbSunRefractable;
					ev_bool mbMoonReflectable;
					ev_bool mbMoonRefractable;
					ev_bool mbStarsReflectable;
					ev_bool mbStarsRefractable;
					ev_bool mbCloudReflectable;
					ev_bool mbCloudRefractable;
					ev_bool mbLightningReflectable;
					ev_bool mbLightningRefractable;
					ev_bool mbSkyDomeReflectable;
					ev_bool mbSkyDomeRefractable;

					Real mFogDensity;
					EarthView::World::Graphic::FogMode mFogMode;
					bool mFogVisible;
					ev_real32 mTransRate;

					EarthView::World::Core::CSharedPtr<CRealCloudLayer> mCloudLayer;
					int mTime;
				private:
					EarthView::World::Core::CStringInterface *mpStringInterface;
				};
			}
		}
	}
}
