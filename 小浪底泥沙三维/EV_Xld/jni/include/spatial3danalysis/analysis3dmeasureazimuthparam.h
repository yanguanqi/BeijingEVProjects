#ifndef _ANALYSIS3DMEASUREAZIMUTHPARAM_H_
#define _ANALYSIS3DMEASUREAZIMUTHPARAM_H_

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
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureAzimuthParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DMeasureAzimuthParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DMeasureAzimuthParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DMeasureAzimuthParam();	
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setCurrentPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getCurrentPoint();
ev_private:

					class  CCmdCurrentPointLon : public EarthView::World::Core::CParamCommand //经度
					{
					public:
						CCmdCurrentPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdCurrentPointLat : public EarthView::World::Core::CParamCommand //纬度
					{
					public:
						CCmdCurrentPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdCurrentPointAlt : public EarthView::World::Core::CParamCommand //高程
					{
					public:
						CCmdCurrentPointAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdClockwise : public EarthView::World::Core::CParamCommand //true代表顺时针，false代表逆时针
					{
					public:
						CCmdClockwise();
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

					class  CCmdNorthPoleLineColor : public EarthView::World::Core::CParamCommand //指北线颜色
					{
					public:
						CCmdNorthPoleLineColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdTargetLineColor : public EarthView::World::Core::CParamCommand //目标线颜色
					{
					public:
						CCmdTargetLineColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdAngleArcLineColor : public EarthView::World::Core::CParamCommand //角度线颜色
					{
					public:
						CCmdAngleArcLineColor();
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

					static CCmdCurrentPointLon msCurrentPointLonCmd;
					static CCmdCurrentPointLat msCurrentPointLatCmd;
					static CCmdCurrentPointAlt msCurrentPointAltCmd;
					static CCmdClockwise msClockwiseCmd;
					static CCmdUseHighestDem msUseHighestDemCmd;
					static CCmdInterval msIntervalCmd;
					static CCmdPointSize msPointSizeCmd;
					static CCmdPointColor msPointColorCmd;
					static CCmdLineWidth msLineWidthCmd;
					static CCmdNorthPoleLineColor msNorthPoleLineColorCmd;
					static CCmdTargetLineColor msTargetLineColorCmd;
					static CCmdAngleArcLineColor msAngleArcLineColorCmd;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mCurrentPoint;
				};
			}
		}
	}
}

#endif