#ifndef _ANALYSIS3DMEASUREHEIGHTPARAM_H_
#define _ANALYSIS3DMEASUREHEIGHTPARAM_H_

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
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureHeightParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DMeasureHeightParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DMeasureHeightParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DMeasureHeightParam();	
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setOriginPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getOriginPoint();
ev_private:

					class  CCmdCalcuStyle : public EarthView::World::Core::CParamCommand //计算类型
					{
					public:
						CCmdCalcuStyle();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdOriginPointLon : public EarthView::World::Core::CParamCommand //经度
					{
					public:
						CCmdOriginPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdOriginPointLat : public EarthView::World::Core::CParamCommand //纬度
					{
					public:
						CCmdOriginPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdOriginPointAlt : public EarthView::World::Core::CParamCommand //高程
					{
					public:
						CCmdOriginPointAlt();
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

					static CCmdCalcuStyle msCalcuStyleCmd;
					static CCmdOriginPointLon msOriginPointLonCmd;
					static CCmdOriginPointLat msOriginPointLatCmd;
					static CCmdOriginPointAlt msOriginPointAltCmd;
					static CCmdPointSize msPointSizeCmd;
					static CCmdPointColor msPointColorCmd;
					static CCmdLineWidth msLineWidthCmd;
					static CCmdLineColor msLineColorCmd;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mOriginPoint;
				};
			}
		}
	}
}

#endif