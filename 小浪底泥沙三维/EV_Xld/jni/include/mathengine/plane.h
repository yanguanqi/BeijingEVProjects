#ifndef __Plane_H__
#define __Plane_H__
#pragma once
#include "vector3.h"
#include "mathengine_config.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				/// <summary>
				/// 平面类
				/// 定义了平面操作
				/// </summary>
				class EV_MATHENGINE_DLL CPlane: public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPlane ();
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="rhs"></param>
					/// <returns></returns>
					CPlane ( _in const CPlane &rhs);
					/// <summary>
					/// 根据平面法线和平移常量构造平面
					/// </summary>
					/// <param name="rkNormal">法线向量</param>
					/// <param name="fConstant">常量</param>
					/// <returns></returns>
					CPlane ( _in const EarthView::World::Spatial::Math::CVector3 &rkNormal, _in Real fConstant);
					/// <summary>
					/// 从四个常量构造平面
					/// </summary>
					/// <param name="a">常量</param>
					/// <param name="b">常量</param>
					/// <param name="c">常量</param>
					/// <param name="d">常量</param>
					/// <returns></returns>
					CPlane (_in Real fa, _in Real fb, _in Real fc, _in Real fd);
					/// <summary>
					/// 根据平面法线和点坐标构造平面
					/// </summary>
					/// <param name="rkNormal">法线向量</param>
					/// <param name="rkPoint">点坐标</param>
					/// <returns></returns>
					CPlane ( _in const EarthView::World::Spatial::Math::CVector3 &rkNormal, _in const EarthView::World::Spatial::Math::CVector3 &rkPoint);
					/// <summary>
					/// 从三个空间点构造平面
					/// </summary>
					/// <param name="rkPoint0">点坐标</param>
					/// <param name="rkPoint1">点坐标</param>
					/// <param name="rkPoint2">点坐标</param>
					/// <returns></returns>
					CPlane ( _in const EarthView::World::Spatial::Math::CVector3 &rkPoint0, _in const EarthView::World::Spatial::Math::CVector3 &rkPoint1, _in const EarthView::World::Spatial::Math::CVector3 &rkPoint2);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPlane(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					enum Side
					{
						NO_SIDE,
						POSITIVE_SIDE,
						NEGATIVE_SIDE,
						BOTH_SIDE
					};
					/// <summary>
					/// 根据到点的距离返回平面的类型
					/// </summary>
					/// <param name="rkPoint">点坐标</param>
					/// <returns>平面类型</returns>
					CPlane::Side getSide ( _in const EarthView::World::Spatial::Math::CVector3 &rkPoint) const;
					/// <summary>
					/// 根据平行轴边框盒返回平面的类型
					/// </summary>
					/// <param name="rkBox">边框盒对象</param>
					/// <returns>平面类型</returns>
					CPlane::Side getSide ( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &rkBox) const;
					/// <summary>
					/// 根据平行轴边框盒中心点和大小返回平面的类型
					/// </summary>
					/// <param name="centre">边框盒对象中心点</param>
					/// <param name="halfSize">边框盒半边长</param>
					/// <returns>平面类型</returns>
					CPlane::Side getSide ( _in const EarthView::World::Spatial::Math::CVector3 &centre, _in const EarthView::World::Spatial::Math::CVector3 &halfSize) const;
					/// <summary>
					/// 计算点到平面的距离
					/// </summary>
					/// <param name="rkPoint">点坐标</param>
					/// <returns>距离</returns>
					Real getDistance ( _in const EarthView::World::Spatial::Math::CVector3 &rkPoint) const;
					/// <summary>
					/// 从三个空间点重新构建平面
					/// </summary>
					/// <param name="rkPoint0">点坐标</param>
					/// <param name="rkPoint1">点坐标</param>
					/// <param name="rkPoint2">点坐标</param>
					/// <returns>距离</returns>
					void redefine( _in const EarthView::World::Spatial::Math::CVector3 &rkPoint0, _in const EarthView::World::Spatial::Math::CVector3 &rkPoint1,
						_in const EarthView::World::Spatial::Math::CVector3 &rkPoint2);
					/// <summary>
					/// 根据平面法线和点坐标构造平面
					/// </summary>
					/// <param name="rkNormal">法线向量</param>
					/// <param name="rkPoint">点坐标</param>
					/// <returns></returns>
					void redefine( _in const EarthView::World::Spatial::Math::CVector3 &rkNormal, _in const EarthView::World::Spatial::Math::CVector3 &rkPoint);
					/// <summary>
					/// 在平面上构建一个点
					/// </summary>
					/// <param name="v">垂直平面法线的向量</param>
					/// <returns>点坐标</returns>
					EarthView::World::Spatial::Math::CVector3 projectVector( _in const EarthView::World::Spatial::Math::CVector3 &v) const;
					/// <summary>
					/// 标准化平面法线
					/// </summary>
					/// <param name=""></param>
					/// <returns>法线的模</returns>
					Real normalise();
					EarthView::World::Spatial::Math::CVector3 normal;
					Real d;
					/// <summary>
					/// 重载"=="
					/// </summary>
					/// <param name="rhs">平面对象</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator==( _in const CPlane &rhs) const;
					/// <summary>
					/// 重载"!="
					/// </summary>
					/// <param name="rhs">平面对象</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator!=( _in const CPlane &rhs) const;
					/// <summary>
					///重载输出流操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="p">平面对象</param>
					/// <returns>输出流对象</returns>
					EV_MATHENGINE_DLL friend std::ostream &operator<< (_out std::ostream &o, _in const CPlane &p);
				};
				///typedef vector<CPlane> EarthView::World::Spatial::Math::PlaneList;
				/// <summary>
				/// 平面vector集合类
				/// </summary>
				class EV_MATHENGINE_DLL PlaneList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<CPlane> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in CPlane const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					PlaneList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					PlaneList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in CPlane const &t);
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
					CPlane &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					CPlane &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in CPlane const &t);
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
					CPlane &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					CPlane const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					CPlane &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					CPlane const &at(_in ev_size_t n) const;
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="other">其它平面集合</param>
					/// <returns>非等返回true，否则false</returns>
					ev_bool operator!=(_in const EarthView::World::Spatial::Math::PlaneList &other) const;
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="other">其它平面集合</param>
					/// <returns>非等返回true，否则false</returns>
					ev_bool operator==(_in const EarthView::World::Spatial::Math::PlaneList &other) const;
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
				/// <summary>
				/// 平面list集合类
				/// </summary>
				class EV_MATHENGINE_DLL Planes : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef list<CPlane> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in CPlane const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					Planes(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					Planes();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in CPlane const &t);
					/// <summary>
					/// 在容器头部增加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_front(_in CPlane const   &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 删除容器头部元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_front();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					CPlane &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					CPlane &back();
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					CPlane &at(_in ev_uint32 pos);
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos,  _in CPlane const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 删除容器元素
					/// </summary>
					/// <param name="val">元素值</param>
					/// <returns></returns>
					void remove( _in CPlane const &val);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
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

