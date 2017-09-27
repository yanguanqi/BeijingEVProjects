#ifndef _ANALYSIS3DMEASUREPOINTPARAM_H_
#define _ANALYSIS3DMEASUREPOINTPARAM_H_

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
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasurePointParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DMeasurePointParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DMeasurePointParam(void* parent);
					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CAnalysis3DMeasurePointParam();	
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLocationPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getLocationPoint();
ev_private:

					class  CCmdLocationPointLon : public EarthView::World::Core::CParamCommand //经度
					{
					public:
						CCmdLocationPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdLocationPointLat : public EarthView::World::Core::CParamCommand //纬度
					{
					public:
						CCmdLocationPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdLocationPointAlt : public EarthView::World::Core::CParamCommand //高程
					{
					public:
						CCmdLocationPointAlt();
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

					static CCmdLocationPointLon msLocationPointLonCmd;
					static CCmdLocationPointLat msLocationPointLatCmd;
					static CCmdLocationPointAlt msLocationPointAltCmd;
					static CCmdFontSize msFontSizeCmd;
					static CCmdFontColor msFontColorCmd;

				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mLocationPoint;
				};
			}
		}
	}
}

#endif