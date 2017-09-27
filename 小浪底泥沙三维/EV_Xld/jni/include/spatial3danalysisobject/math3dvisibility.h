#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DVISIBILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DVISIBILITY_H

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
				/// 通视分析点结构体
				/// </summary>
				struct VisibilityPoint
				{
					/// <summary>
					/// 是否可见
					/// </summary>
					ev_bool IsVisibility;
					/// <summary>
					/// 点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 Position;
				};

				/// <summary>
				/// 通视分析顶点集合类
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL VisibilityPointList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Analysis::VisibilityPoint> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList);
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::Analysis::VisibilityPoint const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					VisibilityPointList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					VisibilityPointList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					void push_back(_in EarthView::World::Spatial3D::Analysis::VisibilityPoint const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					void insert(_in ev_uint32 pos, _in const EarthView::World::Spatial3D::Analysis::VisibilityPoint& t);
					/// <summary>
					/// 容器中间位置插入列表
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="other">列表</param>
					void insert(_in ev_uint32 pos, _in const EarthView::World::Spatial3D::Analysis::VisibilityPointList& other);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::VisibilityPoint const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					void clear();
				};

				/// <summary>
				/// 三维分析之通视分析类
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMath3DVisibility : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DVisibility(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					CMath3DVisibility(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitude3DListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DVisibility();
					/// <summary>
					/// 获取是否停止计算
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否停止计算</returns>
					ev_bool getNeedStop() const;
					/// <summary>
					/// 设置是否停止计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					ev_void setNeedStop(const ev_bool& value);
					/// <summary>
					/// 判断两点是否通视
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="targetH">目标点离地高度</param>
					/// <param name="number">插值个数</param>
					/// <returns>是否通视</returns>
					ev_bool calcuPointVisibility(_in const EarthView::World::Spatial::Math::CVector3& view, _in const ev_real64& viewH,
						_in const EarthView::World::Spatial::Math::CVector3& target, _in const ev_real64& targetH, _in const ev_int32& number);
					/// <summary>
					/// 计算线通视对象或者面通视的一条线
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="visibilityline">可见线顶点数组,世界坐标</param>
					/// <param name="invisibilityline">不可见线顶点数组,世界坐标</param>
					/// <returns>遮挡率</returns>
					ev_real64 calcuLineVisibility(_in const EarthView::World::Spatial::Math::CVector3& center, _in const ev_real64& centerH, _in const EarthView::World::Spatial::Math::CVector3& target,
						_in const ev_int32& number, _in const ev_bool& isViewShed, _out EarthView::World::Spatial::Math::VertexList &visibilityline, _out EarthView::World::Spatial::Math::VertexList &invisibilityline);
					/// <summary>
					/// 计算线通视对象或者面通视的一条线
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="outputPts">通视分析顶点集合,世界坐标</param>
					/// <returns>遮挡率</returns>
					ev_real64 calcuLineVisibility(_in const EarthView::World::Spatial::Math::CVector3& center, _in const ev_real64& centerH, _in const EarthView::World::Spatial::Math::CVector3& target,
						_in const ev_int32& number, _in const ev_bool& isViewShed,_out EarthView::World::Spatial3D::Analysis::VisibilityPointList &outputPts);
					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="outputPts">通视分析顶点集合,世界坐标</param>
					/// <param name="shadePercent">遮挡率</param>
					ev_void calculateOnServer(_in const EarthView::World::Spatial::Math::CVector3& center, _in const ev_real64& centerH, _in const EarthView::World::Spatial::Math::CVector3& target,
						_in const ev_int32& number, _in const ev_bool& isViewShed,_out EarthView::World::Spatial3D::Analysis::VisibilityPointList &outputPts, _out ev_real64& shadePercent);

				private:					
					/// <summary>
					/// 是否停止计算
					/// </summary>
					ev_bool mNeedStop;
				};
			}
		}
	}
}
#endif
