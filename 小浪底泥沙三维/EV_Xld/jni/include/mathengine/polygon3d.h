#ifndef __Polygon_H__
#define __Polygon_H__
#pragma once
#include "vector3.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				/// <summary>
				/// 多边形类,
				/// 定义了三维空间中多边形操作
				/// </summary>
				class EV_MATHENGINE_DLL CPolygon3D: public EarthView::World::Core::CBaseObject
				{
				public:

					///typedef multimap<CVector3, CVector3>		EdgeMap;
					/// <summary>
					/// 多边形边界集合类
					/// </summary>
					class EV_MATHENGINE_DLL EdgeMap : public EarthView::World::Core::CBaseObject
					{
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						EdgeMap(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						/// <summary>
						/// 默认构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						EdgeMap();
					/// <summary>
						/// 增加动画集合元素
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="val">值</param>
						/// <returns>成功增加true，否则false</returns>
						void push( _in const EarthView::World::Spatial::Math::CVector3 &key, _in EarthView::World::Spatial::Math::CVector3 const &val);
						/// <summary>
						/// 判断元素是否存在
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>存在true，否则false</returns>
						ev_bool exist( _in const EarthView::World::Spatial::Math::CVector3 &key);
						/// <summary>
						/// 删除键对应的值
						/// </summary>
						/// <param name="key">键</param>
						/// <returns></returns>
						void erase( _in const EarthView::World::Spatial::Math::CVector3 &key);
					/// <summary>
						/// 返回集合的大小
						/// </summary>
						/// <param name=""></param>
						/// <returns>集合的大小</returns>
						ev_size_t size() const;
						/// <summary>
						/// 返回键对应值的数量
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>键对应值的数量</returns>
						ev_size_t count( _in const EarthView::World::Spatial::Math::CVector3 &key);
					/// <summary>
						/// 获得指定键值的第几项值
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="index">指定键值的第几项</param>
						/// <returns>返回指定键值的第几项值</returns>
						EarthView::World::Spatial::Math::CVector3 &get( _in const EarthView::World::Spatial::Math::CVector3 &key, _in ev_size_t index);
						/// <summary>
						/// 删除指定键值的第几项
						/// </summary>
						/// <param name="key">键</param>
						/// <param name="index">指定键值的第几项</param>
						/// <returns></returns>
						void erase( _in const EarthView::World::Spatial::Math::CVector3 &key, _in ev_size_t index);
						/// <summary>
						/// 清空集合
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						void clear();
					/// <summary>
						/// 判断集合是否为空
						/// </summary>
						/// <param name=""></param>
						/// <returns>集合为空返回true，否则false</returns>
						ev_bool empty() const;
ev_private:
						typedef multimap<EarthView::World::Spatial::Math::CVector3, EarthView::World::Spatial::Math::CVector3> InternalList;
						typedef InternalList::iterator iterator;
						typedef InternalList::const_iterator const_iterator;
						typedef InternalList::reverse_iterator reverse_iterator;
						typedef InternalList::const_reverse_iterator const_reverse_iterator;
						typedef InternalList::mapped_type mapped_type;
						typedef InternalList::key_type key_type;
						typedef InternalList::value_type value_type;
						typedef pair<iterator, bool> _Pairib;
						RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);
						/// <summary>
						/// 集合插入元素
						/// </summary>
						/// <param name="val">值</param>
						/// <returns>插入后的键值对</returns>
						iterator insert( _in const value_type &val);
						/// <summary>
						/// 查找元素
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>查找后返回对应迭代器</returns>
						iterator find( _in const EarthView::World::Spatial::Math::CVector3 &key);
						/// <summary>
						/// 查找元素
						/// </summary>
						/// <param name="key">键</param>
						/// <returns>查找后返回对应迭代器</returns>
						const_iterator find( _in const EarthView::World::Spatial::Math::CVector3 &key) const;
					private:
						InternalList mList;
					};
					///typedef std::pair< CVector3, CVector3>		Edge;
					/// <summary>
					/// 多边形边界集合对应键值对类
					/// </summary>
					class EV_MATHENGINE_DLL Edge: public EarthView::World::Core::CBaseObject
					{
					public:
						EarthView::World::Spatial::Math::CVector3 first;
						EarthView::World::Spatial::Math::CVector3 second;
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="fir">键</param>
						/// <param name="sec">值</param>
						/// <returns></returns>
						Edge(_in EarthView::World::Spatial::Math::CVector3 fir, _in EarthView::World::Spatial::Math::CVector3 sec);
						/// <summary>
						/// 重载"="操作符
						/// </summary>
						/// <param name="other">其它键值对类对象</param>
						/// <returns>赋值结果</returns>
						EarthView::World::Spatial::Math::CPolygon3D::Edge &operator=( _in const EarthView::World::Spatial::Math::CPolygon3D::Edge &other);
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						/// <returns></returns>
						Edge(_in EarthView::World::Core::CNameValuePairList *pList);
					};
				protected:
					VertexList		mVertexList;
					mutable EarthView::World::Spatial::Math::CVector3	mNormal;
					mutable ev_bool	mIsNormalSet;
					/// <summary>
					/// 更新面法线
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void updateNormal() const;

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPolygon3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CPolygon3D();
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="cpy"></param>
					/// <returns></returns>
					CPolygon3D( _in const CPolygon3D &cpy );
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPolygon3D(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 插入顶点坐标和索引（必须共面）
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <param name="vertexIndex">顶点索引</param>
					/// <returns></returns>
					void insertVertex(_in const EarthView::World::Spatial::Math::CVector3 &vdata, _in ev_size_t vertexIndex);
					/// <summary>
					/// 插入顶点坐标
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <returns></returns>
					void insertVertex(_in const EarthView::World::Spatial::Math::CVector3 &vdata);
					/// <summary>
					/// 根据顶点索引返回顶点数据
					/// </summary>
					/// <param name="vertex">顶点索引</param>
					/// <returns>顶点数据</returns>
					const EarthView::World::Spatial::Math::CVector3 &getVertex(_in ev_size_t vertex) const;
					/// <summary>
					/// 根据顶点索引设置顶点坐标
					/// </summary>
					/// <param name="vdata">顶点数据</param>
					/// <param name="vertexIndex">顶点索引</param>
					/// <returns></returns>
					void setVertex(_in const EarthView::World::Spatial::Math::CVector3 &vdata, _in ev_size_t vertexIndex);
					/// <summary>
					/// 移除相等的坐标点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void removeDuplicates();
					/// <summary>
					///获得顶点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回顶点数量</returns>
					ev_size_t getVertexCount() const;
					/// <summary>
					///获得平面法线
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回平面法线向量</returns>
					const EarthView::World::Spatial::Math::CVector3 &getNormal() const;
					/// <summary>
					/// 根据顶点索引删除顶点数据
					/// </summary>
					/// <param name="vertex">顶点索引</param>
					/// <returns></returns>
					void deleteVertex(_in ev_size_t vertex);
					/// <summary>
					/// 判断点是否在多边形内
					/// </summary>
					/// <param name="point">点数据</param>
					/// <returns>在多边形内返回true，否则false</returns>
					ev_bool isPointInside(_in const EarthView::World::Spatial::Math::CVector3 &point) const;
					/// <summary>
					/// 按逆时针方向存储多边形边
					/// </summary>
					/// <param name="edgeMap">多边形边集合</param>
					/// <returns></returns>
					void storeEdges( EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *edgeMap) const;
					/// <summary>
					/// 重置多边形对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reset();
					/// <summary>
					/// 判断多边形是否相等
					/// </summary>
					/// <param name="rhs">多边形对象</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator == (_in const EarthView::World::Spatial::Math::CPolygon3D &rhs) const;
						/// <summary>
					/// 判断多边形是否非相等
					/// </summary>
					/// <param name="rhs">多边形对象</param>
					/// <returns>非相等返回true，否则false</returns>
					ev_bool operator != (_in EarthView::World::Spatial::Math::CPolygon3D &rhs) const
					{
						return !( *this == rhs );
					}
					/// <summary>
					///重载<<操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="mat">输出矩阵</param>
					/// <returns>输出流对象</returns>
					EV_MATHENGINE_DLL friend std::ostream &operator<< ( _out std::ostream &strm, _in const EarthView::World::Spatial::Math::CPolygon3D &poly );
				};
			}
		}    
	}
}

#endif

