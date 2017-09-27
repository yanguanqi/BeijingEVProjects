#ifndef _ANALYSIS3DSLOPEPARAM_H_
#define _ANALYSIS3DSLOPEPARAM_H_

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
				class EV_ANALYSIS3D_DLL CAnalysis3DSlopeParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DSlopeParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DSlopeParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DSlopeParam();	
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setSelectedPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getSelectedPoint();
ev_private:

					class  CCmdSelectedPointLon : public EarthView::World::Core::CParamCommand //经度
					{
					public:
						CCmdSelectedPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdSelectedPointLat : public EarthView::World::Core::CParamCommand //纬度
					{
					public:
						CCmdSelectedPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdSelectedPointAlt : public EarthView::World::Core::CParamCommand //高程
					{
					public:
						CCmdSelectedPointAlt();
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

					class  CCmdSlopeLayerShow : public EarthView::World::Core::CParamCommand //是否显示坡度图层
					{
					public:
						CCmdSlopeLayerShow();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdAspectLayerShow : public EarthView::World::Core::CParamCommand //是否显示坡向图层
					{
					public:
						CCmdAspectLayerShow();
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

					class  CCmdInterval : public EarthView::World::Core::CParamCommand //插值间隔
					{
					public:
						CCmdInterval();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdPointSize : public EarthView::World::Core::CParamCommand //点的大小
					{
					public:
						CCmdPointSize();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdPointColor : public EarthView::World::Core::CParamCommand //点的颜色
					{
					public:
						CCmdPointColor();
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

					static CCmdSelectedPointLon msSelectedPointLonCmd;
					static CCmdSelectedPointLat msSelectedPointLatCmd;
					static CCmdSelectedPointAlt msSelectedPointAltCmd;
					static CCmdDefaultCalcuMode msDefaultCalcuModeCmd;
					static CCmdSlopeLayerShow msSlopeLayerShowCmd;
					static CCmdAspectLayerShow msAspectLayerShowCmd;
					static CCmdUseHighestDem msUseHighestDemCmd;
					static CCmdInterval msIntervalCmd;
					static CCmdPointSize msPointSizeCmd;
					static CCmdPointColor msPointColorCmd;
					static CCmdLineWidth msLineWidthCmd;
					static CCmdLineColor msLineColorCmd;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mSelectedPoint;
				};
			}
		}
	}
}

#endif