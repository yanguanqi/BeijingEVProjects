#ifndef __PlaneBoundedVolume_H_
#define __PlaneBoundedVolume_H_
#pragma once
#include "plane.h"
#include "mathengine_config.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				class CAxisAlignedBox;
				/// <summary>
				/// 凸多面体
				/// 定义了射线操作
				/// </summary>
				class EV_MATHENGINE_DLL CPlaneBoundedVolume : public EarthView::World::Core::CBaseObject
				{
				public:
					///typedef vector<CPlane> EarthView::World::Spatial::Math::PlaneList;
					//// Publicly accessible plane list, you can modify this direct
					EarthView::World::Spatial::Math::PlaneList planes;
					EarthView::World::Spatial::Math::CPlane::Side outside;
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPlaneBoundedVolume();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="theOutside">外向面类型</param>
					/// <returns></returns>
					CPlaneBoundedVolume(EarthView::World::Spatial::Math::CPlane::Side theOutside);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPlaneBoundedVolume(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 判断是否与平行轴线框盒相交
					/// </summary>
					/// <param name="box">线框盒对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					ev_bool intersects(const EarthView::World::Spatial::Math::CAxisAlignedBox &box) const;
					/// <summary>
					/// 判断是否与球体相交
					/// </summary>
					/// <param name="sphere">球体对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					ev_bool intersects(const EarthView::World::Spatial::Math::CSphere &sphere) const;
					/// <summary>
					/// 判断是否与射线相交
					/// </summary>
					/// <param name="ray">射线对像</param>
					/// <returns>返回是否相交，和若相交其距离</returns>
					EarthView::World::Spatial::Math::IntersectResPair intersects(const EarthView::World::Spatial::Math::CRay &ray);
				};
				///typedef vector<EarthView::World::Spatial::Math::CPlaneBoundedVolume> PlaneBoundedVolumeList;
				/// <summary>
				/// 图多面体集合类
				/// </summary>
				class EV_MATHENGINE_DLL PlaneBoundedVolumeList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Math::CPlaneBoundedVolume> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Math::CPlaneBoundedVolume const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					PlaneBoundedVolumeList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					PlaneBoundedVolumeList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Math::CPlaneBoundedVolume const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Math::CPlaneBoundedVolume const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
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
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Math::CPlaneBoundedVolume const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Math::CPlaneBoundedVolume &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Math::CPlaneBoundedVolume const &at(_in ev_size_t n) const;
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
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};
			}
		}    
	}
}

#endif

