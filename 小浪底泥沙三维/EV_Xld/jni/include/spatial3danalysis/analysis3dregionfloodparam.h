#ifndef _ANALYSIS3DREGIONFLOODPARAM_H_
#define _ANALYSIS3DREGIONFLOODPARAM_H_

#include "analysis3d_config.h"
#include "core/stringinterface.h"
#include "mathengine/vector3.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class EV_ANALYSIS3D_DLL CAnalysis3DRegionFloodParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DRegionFloodParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DRegionFloodParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DRegionFloodParam();	
					/// <summary>
					///  设置淹没源
					/// </summary>
					/// <param name="altitude">淹没源</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setCenter(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取淹没源
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回淹没源</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getCenter();
ev_private:

					class  CCmdCenterLon : public EarthView::World::Core::CParamCommand //淹没源经度
					{
					public:
						CCmdCenterLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdCenterLat : public EarthView::World::Core::CParamCommand //淹没源纬度
					{
					public:
						CCmdCenterLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdCenterAlt : public EarthView::World::Core::CParamCommand //淹没源高程
					{
					public:
						CCmdCenterAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdDefaultCalcuMode : public EarthView::World::Core::CParamCommand //默认计算模式
					{
					public:
						CCmdDefaultCalcuMode();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdDefaultFloodAltitude : public EarthView::World::Core::CParamCommand //默认水面海拔
					{
					public:
						CCmdDefaultFloodAltitude();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdFloodAltitude : public EarthView::World::Core::CParamCommand //水面海拔
					{
					public:
						CCmdFloodAltitude();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdUseHighestDem : public EarthView::World::Core::CParamCommand //是否使用最高精度DEM
					{
					public:
						CCmdUseHighestDem();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdSearchInterval : public EarthView::World::Core::CParamCommand //搜索间隔
					{
					public:
						CCmdSearchInterval();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdSearchRadius : public EarthView::World::Core::CParamCommand //搜索半径
					{
					public:
						CCmdSearchRadius();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdReflectionEnable : public EarthView::World::Core::CParamCommand //反射
					{
					public:
						CCmdReflectionEnable();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdRefractionEnable : public EarthView::World::Core::CParamCommand //折射
					{
					public:
						CCmdRefractionEnable();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
				
					class  CCmdReflectWithoutSky : public EarthView::World::Core::CParamCommand //反射天空
					{
					public:
						CCmdReflectWithoutSky();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdUnderWaterEnable : public EarthView::World::Core::CParamCommand //水下效果
					{
					public:
						CCmdUnderWaterEnable();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdLineWidth : public EarthView::World::Core::CParamCommand //线的宽度
					{
					public:
						CCmdLineWidth();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdLineColor : public EarthView::World::Core::CParamCommand //线的颜色
					{
					public:
						CCmdLineColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdFontSize : public EarthView::World::Core::CParamCommand //字体的大小
					{
					public:
						CCmdFontSize();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdFontColor : public EarthView::World::Core::CParamCommand //字体的颜色
					{
					public:
						CCmdFontColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					static CCmdCenterLon msCenterLonCmd;
					static CCmdCenterLat msCenterLatCmd;
					static CCmdCenterAlt msCenterAltCmd;
					static CCmdDefaultCalcuMode msDefaultCalcuModeCmd;
					static CCmdDefaultFloodAltitude msDefaultFloodAltitudeCmd;
					static CCmdFloodAltitude msFloodAltitudeCmd;
					static CCmdUseHighestDem msUseHighestDemCmd;
					static CCmdSearchInterval msSearchIntervalCmd;
					static CCmdSearchRadius msSearchRadiusCmd;
					static CCmdReflectionEnable msReflectionEnableCmd;
					static CCmdRefractionEnable msRefractionEnableCmd;
					static CCmdReflectWithoutSky msReflectWithoutSkyCmd;
					static CCmdUnderWaterEnable msUnderWaterEnableCmd;
					static CCmdLineWidth msLineWidthCmd;
					static CCmdLineColor msLineColorCmd;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mCenter;
				};
			}
		}
	}
}

#endif