#ifndef _ANALYSIS3DVISIBILITYPARAM_H_
#define _ANALYSIS3DVISIBILITYPARAM_H_

#include "analysis3d_config.h"
#include "core/stringinterface.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class EV_ANALYSIS3D_DLL CAnalysis3DVisibilityParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DVisibilityParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DVisibilityParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DVisibilityParam();					
ev_private:
					class  CCmdAnalysis3DVisibilityType : public EarthView::World::Core::CParamCommand //分析类型
					{
					public:
						CCmdAnalysis3DVisibilityType();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointLon : public EarthView::World::Core::CParamCommand //观察点经度
					{
					public:
						CCmdViewPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointLat : public EarthView::World::Core::CParamCommand //观察点纬度
					{
					public:
						CCmdViewPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointAlt : public EarthView::World::Core::CParamCommand //观察点高程
					{
					public:
						CCmdViewPointAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointHei : public EarthView::World::Core::CParamCommand //观察点离地高度
					{
					public:
						CCmdViewPointHei();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdTargetPointLon : public EarthView::World::Core::CParamCommand //目标点经度
					{
					public:
						CCmdTargetPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdTargetPointLat : public EarthView::World::Core::CParamCommand //目标点纬度
					{
					public:
						CCmdTargetPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdTargetPointAlt : public EarthView::World::Core::CParamCommand //目标点高程
					{
					public:
						CCmdTargetPointAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdTargetPointHei : public EarthView::World::Core::CParamCommand //目标点离地高度
					{
					public:
						CCmdTargetPointHei();
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

					class  CCmdUseHighestDem : public EarthView::World::Core::CParamCommand //是否使用最高精度DEM
					{
					public:
						CCmdUseHighestDem();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdInterval : public EarthView::World::Core::CParamCommand //采样间隔距离
					{
					public:
						CCmdInterval();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdRayAngle : public EarthView::World::Core::CParamCommand //射线间隔角度
					{
					public:
						CCmdRayAngle();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdRadius : public EarthView::World::Core::CParamCommand //扫描半径
					{
					public:
						CCmdRadius();
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

					static CCmdAnalysis3DVisibilityType msAnalysis3DVisibilityTypeCmd;
					static CCmdViewPointLon msViewPointLonCmd;
					static CCmdViewPointLat msViewPointLatCmd;
					static CCmdViewPointAlt msViewPointAltCmd;
					static CCmdViewPointHei msViewPointHeiCmd;
					static CCmdTargetPointLon msTargetPointLonCmd;
					static CCmdTargetPointLat msTargetPointLatCmd;
					static CCmdTargetPointAlt msTargetPointAltCmd;
					static CCmdTargetPointHei msTargetPointHeiCmd;
					static CCmdDefaultCalcuMode msDefaultCalcuModeCmd;
					static CCmdUseHighestDem msUseHighestDemCmd;
					static CCmdInterval msIntervalCmd;
					static CCmdRayAngle msRayAngleCmd;
					static CCmdRadius msRadius;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
				};
			}
		}
	}
}

#endif