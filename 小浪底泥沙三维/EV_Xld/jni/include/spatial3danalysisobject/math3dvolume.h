#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DVOLUME_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DVOLUME_H

#include "spatial3danalysisobject_config.h"
#include "math3dbaseobject.h"
#include "mathengine/vector3.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 体积量算方式
				/// </summary>
				enum VolumeCalcuStyle
				{
					/// <summary>
					/// 挖方
					/// </summary>
					VCS_Excavation,
					/// <summary>
					/// 填方
					/// </summary>
					VCS_Fill,
					/// <summary>
					/// 填挖方
					/// </summary>
					VCS_FillExcavation
				};

				/// <summary>
				/// 动态计算类
				/// 根据平面动态位置计算平面下填方体积，平面上挖方体积
				/// 默认100米为间隔进行拆分
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DVolume : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DVolume(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pAltitude3DListener">高度控件</param>
					CMath3DVolume(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DVolume();
					/// <summary>
					/// 体积计算方式
					/// </summary>
					const VolumeCalcuStyle getCalcuStyle();
					/// <summary>
					/// 设置计算方式
					/// </summary>
					/// <param name="value">计算方式</param>
					ev_void setCalcuStyle(const VolumeCalcuStyle& value);
					/// <summary>
					/// 获取间隔距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>间隔距离</returns>
					ev_real64 getInterval() const;
					/// <summary>
					/// 设置间隔距离
					/// </summary>
					/// <param name="value">间隔距离</param>
					ev_void setInterval(const ev_real64& value);
					/// <summary>
					/// 获取基准面高程
					/// </summary>
					/// <returns>深度</returns>
					const ev_real64 getDepth();
					/// <summary>
					/// 设置基准面高程
					/// </summary>
					/// <param name="value">深度</param>
					ev_void setDepth(const ev_real64& value);
					/// <summary>
					/// 是否根据地形确定基准面高程
					/// </summary>
					/// <returns></returns>
					ev_bool getDefaultDepth();
					/// <summary>
					/// 设置是否根据地形确定基准面高程
					/// </summary>
					/// <param name="value"></param>
					ev_void setDefaultDepth(ev_bool value);
					/// <summary>
					/// 获取是否停止计算
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否停止计算</returns>
					ev_bool getNeedStop();
					/// <summary>
					/// 设置是否停止计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					ev_void setNeedStop(ev_bool value);
					/// <summary>
					/// 获取计算进度值
					/// </summary>
					/// <returns>计算进度值</returns>
					ev_int32 getProgressV();
					/// <summary>
					/// 获取所选范围最低点高程（tool里渲染面扩展用）
					/// </summary>
					/// <returns>所选范围最低点高程</returns>
					ev_real64 getMinAltiPointZ();
					/// <summary>
					/// 土方计算过程
					/// </summary>
					/// <param name="pts">计算范围边界点列表</param>
					/// <param name="fillVolume">填方体积</param>
					/// <param name="digVolume">挖方体积</param>
					/// <returns>贴地面积</returns>
					ev_real64 calcuVolume(_in EarthView::World::Spatial::Math::VertexList& pts,_out ev_real64& fillVolume,_out ev_real64& digVolume);
					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="pts">计算范围边界点列表</param>
					/// <param name="height">相对于海平面的绝对高度值</param>
					/// <param name="fillVolume">填方体积</param>
					/// <param name="digVolume">挖方体积</param>
					/// <param name="groundArea">贴地面积</param>
					ev_void calculateOnServer(_in EarthView::World::Spatial::Math::VertexList& pts,_out ev_real64& fillVolume,_out ev_real64& digVolume,_out ev_real64& groundArea);

				protected:
					/// <summary>
					/// 计算三角形边拆分个数
					/// </summary>
					/// <param name="trianglePoints">三角形三个顶点（经度，纬度，高程）</param>
					/// <returns>三角形边拆分个数</returns>
					ev_int32 calcuInsetNum(const EarthView::World::Spatial::Math::VertexList& trianglePoints);
					/// <summary>
					/// 计算单个三角形总面积及拆分的小三角形面积
					/// </summary>
					/// <param name="spliteGeoPoints">三角形拆分后的顶点列表（经度，纬度，高程）</param>
					/// <param name="indices">三角形拆分后的索引列表</param>
					/// <param name="totalArea">单个三角形总面积</param>
					/// <param name="smallArea">三角形拆分后的小三角形面积</param>
					/// <returns></returns>
					ev_void calcuAreas(_in const EarthView::World::Spatial::Math::VertexList& spliteGeoPoints,_in EarthView::World::Core::IntVector& indices,_out ev_real64& totalArea,_out ev_real64& smallArea);
					/// <summary>
					/// 计算体积
					/// </summary>
					/// <param name="spliteGeoPoints">三角形拆分后的顶点列表（经度，纬度，高程）</param>
					/// <param name="indices">三角形拆分后的索引列表</param>
					/// <param name="smallArea">三角形拆分后的小三角形面积</param>
					/// <param name="altitude">绝对高度</param>
					/// <param name="isExcavate">是否为挖方</param>
					/// <returns>体积值</returns>
					ev_real64 calculateVolume(const EarthView::World::Spatial::Math::VertexList& spliteGeoPoints,EarthView::World::Core::IntVector& indices,ev_real64 smallArea,ev_real64 altitude, ev_bool isExcavate);
					/// <summary>
					/// 计算方式
					/// </summary>
					VolumeCalcuStyle mCalcuStyle;
					/// <summary>
					/// 拆分间隔
					/// </summary>
					ev_real64 mInterval;
					/// <summary>
					/// 深度
					/// </summary>
					ev_real64 mDepth;
					/// <summary>
					/// 是否根据地形确定基准面高程
					/// </summary>
					ev_bool mDefaultDepth;
					/// <summary>
					/// 是否停止计算
					/// </summary>
					ev_bool mNeedStop;
					/// <summary>
					/// 获取所选范围最低点高程（tool里渲染面扩展用）
					/// </summary>
					ev_real64 mMinAltiPointZ;
				};
			}
		}
	}
}
#endif
