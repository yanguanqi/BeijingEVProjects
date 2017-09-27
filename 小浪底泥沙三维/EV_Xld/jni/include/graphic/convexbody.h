#ifndef __ConvexBody_H__
#define __ConvexBody_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/polygon3d.h>
#include <mathengine/axisalignedbox.h>
#include <core/threaddefines.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CPolygon3D;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CFrustum;
            /// <summary>
            /// 凸面体类
            /// 定义一些图面体的操作
            /// </summary>
            class EV_GRAPHIC_DLL CConvexBody : public EarthView::World::Core::CBaseObject
            {
            public:

                class EV_GRAPHIC_DLL PolygonList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Spatial::Math::CPolygon3D *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    /// <summary>
                    /// 插入元素
                    /// </summary>
                    /// <param name="pos">插入元素的位置</param>
                    /// <param name="t">插入的元素</param>
                    /// <returns>返回插入元素位置索引</returns>
                    iterator insert(_in iterator pos, _in EarthView::World::Spatial::Math::CPolygon3D *const &ref_t);
                private:
                    InternalList mList;
                public:
                    /// <summary>
                    /// 在容器后面追加对象
                    /// </summary>
                    /// <param name="t">需要追加的对象</param>
                    /// <returns></returns>
                    void push_back(_in EarthView::World::Spatial::Math::CPolygon3D  *const &ref_t) ;
                    /// <summary>
                    /// 从容器后面取出对象
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void pop_back();
                    /// <summary>
                    /// 检查发生变化的第一个元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回第一个元素</returns>
                    EarthView::World::Spatial::Math::CPolygon3D*& front();
                    /// <summary>
                    /// 检查发生变化的最后一个元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回最后一个元素</returns>
                    EarthView::World::Spatial::Math::CPolygon3D*& back();
                    /// <summary>
                    /// 替换容器中的对象
                    /// </summary>
                    /// <param name="rhs">用作替换的对象</param>
                    /// <returns></returns>
                    void swap(_inout EarthView::World::Graphic::CConvexBody::PolygonList &rhs);
                    /// <summary>
                    /// 插入元素
                    /// </summary>
                    /// <param name="pos">插入元素的位置</param>
                    /// <param name="t">插入的元素</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Math::CPolygon3D *const &ref_t);
                    /// <summary>
                    /// 移除元素
                    /// </summary>
                    /// <param name="pos">需要移除元素的位置</param>
                    /// <returns></returns>
                    void remove(_in ev_size_t pos);
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                    /// <summary>
                    /// 数组下标"[]"重载
                    /// </summary>
                    /// <param name="n">下标</param>
                    /// <returns>返回对应下标的数组中的值</returns>
                    EarthView::World::Spatial::Math::CPolygon3D*& operator[](_in ev_size_t n);
                    /// <summary>
                    /// 数组下标"[]"重载
                    /// </summary>
                    /// <param name="n">下标</param>
                    /// <returns>返回对应下标的数组中的值</returns>
                    EarthView::World::Spatial::Math::CPolygon3D *const &operator[](_in ev_size_t n) const;
                    /// <summary>
                    /// 检查发生变化的下标
                    /// </summary>
                    /// <param name="n">下标</param>
                    /// <returns>返回对应下标的位置</returns>
                    EarthView::World::Spatial::Math::CPolygon3D*& at(_in ev_size_t n);
                    /// <summary>
                    /// 检查没有变化的下标
                    /// </summary>
                    /// <param name="n">下标</param>
                    /// <returns>返回对应下标的位置</returns>
                    EarthView::World::Spatial::Math::CPolygon3D *const &at(ev_size_t n) const ;
                    /// <summary>
                    /// 容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 调整容器的大小
                    /// </summary>
                    /// <param name="n">调整的大小</param>
                    /// <returns></returns>
                    void resize(_in ev_size_t newSize);
                    /// <summary>
                    /// 检查容器预留的空间
                    /// </summary>
                    /// <param name="t">预留给容器的空间大小</param>
                    /// <returns></returns>
                    void reserve(_inout ev_size_t count);

                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PolygonList();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PolygonList(_in EarthView::World::Core::CNameValuePairList *pList);

                };
            protected:
                EarthView::World::Graphic::CConvexBody::PolygonList mPolygons;
                static EarthView::World::Graphic::CConvexBody::PolygonList msFreePolygons;
                EV_STATIC_MUTEX(msFreePolygonsMutex)
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CConvexBody();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CConvexBody();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="cpy">EarthView::World::Graphic::CConvexBody类的引用</param>
                /// <returns></returns>
                CConvexBody( const CConvexBody &cpy );
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CConvexBody(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 定义截头锥体
                /// </summary>
                /// <param name="frustum">EarthView::World::Graphic::CFrustum的引用</param>
                /// <returns></returns>
                void define(_in const EarthView::World::Graphic::CFrustum &frustum);
                /// <summary>
                /// 定义平行轴边框盒
                /// </summary>
                /// <param name="aab">EarthView::World::Spatial::Math::CAxisAlignedBox的引用</param>
                /// <returns></returns>
                void define(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aab);
                /// <summary>
                /// 用截头锥体裁剪立体
                /// </summary>
                /// <param name="frustum">EarthView::World::Graphic::CFrustum的引用</param>
                /// <returns></returns>
                void clip(_in const EarthView::World::Graphic::CFrustum &frustum );
                /// <summary>
                /// 用平行轴边框盒裁剪立体
                /// </summary>
                /// <param name="aab">EarthView::World::Spatial::Math::CAxisAlignedBox的引用</param>
                /// <returns></returns>
                void clip(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aab );
                /// <summary>
                /// 用一个立体裁剪另一个立体
                /// </summary>
                /// <param name="body">EarthView::World::Graphic::CConvexBody的引用</param>
                /// <returns></returns>
                void clip(_in const EarthView::World::Graphic::CConvexBody &body);
                /// <summary>
                /// 用有效的平面空间裁剪物体
                /// </summary>
                /// <param name="pl">EarthView::World::Spatial::Math::CPlane的引用</param>
                /// <returns></returns>
                void clip(_in const EarthView::World::Spatial::Math::CPlane &pl);
                /// <summary>
                /// 用有效的平面空间裁剪物体
                /// </summary>
                /// <param name="pl">EarthView::World::Spatial::Math::CPlane的引用</param>
                /// <param name="keepNegative">平面有效性的判断</param>
                /// <returns></returns>
                void clip(_in const EarthView::World::Spatial::Math::CPlane &pl, _in ev_bool keepNegative);
                /// <summary>
                /// 放置构成凸面体的输入点的集合
                /// </summary>
                /// <param name="pt">EarthView::World::Spatial::Math::CVector3的引用</param>
                /// <returns></returns>
                void extend(_in const EarthView::World::Spatial::Math::CVector3 &pt);
                /// <summary>
                /// 重置目标物体
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void reset();
                /// <summary>
                /// 得到多边形的个数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回多边形的个数</returns>
                ev_size_t getPolygonCount() const;
                /// <summary>
                /// 得到一个多边形包含顶点个数
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <returns>返回顶点个数</returns>
                ev_size_t getVertexCount(_in ev_size_t poly ) const;
                /// <summary>
                /// 得到一个多边形
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <returns>返回多边形的引用</returns>
                const EarthView::World::Spatial::Math::CPolygon3D &getPolygon(_in ev_size_t poly ) const;
                /// <summary>
                /// 得到一个多边形中的一个特定顶点
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="vertex">目标顶点</param>
                /// <returns>返回三维向量类的引用</returns>
                const EarthView::World::Spatial::Math::CVector3 &getVertex(_in ev_size_t poly, _in ev_size_t vertex ) const;
                /// <summary>
                /// 得到一个标准的多边形
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <returns>返回三维向量类的引用</returns>
                const EarthView::World::Spatial::Math::CVector3 &getNormal(_in ev_size_t poly );
                /// <summary>
                /// 得到一个平行轴边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回平行轴边框盒类的引用</returns>
                EarthView::World::Spatial::Math::CAxisAlignedBox getAABB() const;
                /// <summary>
                /// 检查立体表面是否是闭合的
                /// </summary>
                /// <param name=""></param>
                /// <returns>闭合的返回true，否则返回false</returns>
                ev_bool hasClosedHull() const;
                /// <summary>
                /// 将在同一个平面内的邻近多边形合并
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void mergePolygons();
                /// <summary>
                /// 等号"=="运算符的重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CConvexBody类的引用</param>
                /// <returns>相等则返回true，否则返回false</returns>
                ev_bool operator == (_in const EarthView::World::Graphic::CConvexBody &rhs ) const;
                /// <summary>
                /// 不等号"!="运算符的重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CConvexBody类的引用</param>
                /// <returns>不相等则返回true，否则返回false</returns>
                ev_bool operator != ( const EarthView::World::Graphic::CConvexBody &rhs ) const;
                /// <summary>
                /// 输出符号"<<"运算符的重载
                /// </summary>
                /// <param name="strm">标准库中输出流的引用</param>
                /// <param name="strm">标准库中输出流的引用</param>
                /// <returns>返回输出EarthView::World::Graphic::CConvexBody类中数据成员</returns>
                EV_GRAPHIC_DLL friend std::ostream &operator<< (_inout std::ostream &strm, _in const EarthView::World::Graphic::CConvexBody &body );
                /// <summary>
                /// 记录立体的详细情况
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void logInfo() const;
                /// <summary>
                /// 给内部的多边形集合所使用的最小空间赋初值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void _initialisePool();
                /// <summary>
                /// 释放内部的多边形集合所使用的最小空间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void _destroyPool();

            protected:
                /// <summary>
                /// 从多边形集合中能够得到一个新多边形
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回指向多边形的指针</returns>
                static EarthView::World::Spatial::Math::CPolygon3D *allocatePolygon();
                /// <summary>
                /// 将多边形释放回多边形集合
                /// </summary>
                /// <param name="poly">多边形指针</param>
                /// <returns></returns>
                static void freePolygon(_in EarthView::World::Spatial::Math::CPolygon3D *poly);
                /// <summary>
                /// 在立体的特定点处插入多边形
                /// </summary>
                /// <param name="pdata">指向多边形的指针</param>
                /// <param name="poly">目标多边形</param>
                /// <returns></returns>
                void insertPolygon(_in EarthView::World::Spatial::Math::CPolygon3D *ref_pdata, _in ev_size_t poly);
                /// <summary>
                /// 在末尾处插入多边形
                /// </summary>
                /// <param name="pdata">指向多边形的指针</param>
                /// <returns></returns>
                void insertPolygon(_in EarthView::World::Spatial::Math::CPolygon3D *ref_pdata);
                /// <summary>
                /// 在多边形特定点处插入顶点
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="vdata">EarthView::World::Spatial::Math::CVector3的引用</param>
                /// <param name="vertex">目标顶点</param>
                /// <returns></returns>
                void insertVertex(_in ev_size_t poly, _in const EarthView::World::Spatial::Math::CVector3 &vdata, _in ev_size_t vertex);
                /// <summary>
                /// 在最后给多边形插入一个顶点
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="vdata">EarthView::World::Spatial::Math::CVector3的引用</param>
                /// <returns></returns>
                void insertVertex(_in ev_size_t poly, _in const EarthView::World::Spatial::Math::CVector3 &vdata);
                /// <summary>
                /// 删除特定的多边形
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <returns></returns>
                void deletePolygon(_in ev_size_t poly);
                /// <summary>
                /// 从立体中移动特定的多边形，但不删除它
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <returns>返回多边形的引用</returns>
                EarthView::World::Spatial::Math::CPolygon3D *unlinkPolygon(_in ev_size_t poly);
                /// <summary>
                /// 移动立体中所有的多边形
                /// </summary>
                /// <param name="body">EarthView::World::Graphic::CConvexBody类的引用</param>
                /// <returns></returns>
                void moveDataFromBody(_in EarthView::World::Graphic::CConvexBody &body);
                /// <summary>
                /// 删除特定多边形中的特定顶点
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="vertex">目标顶点</param>
                /// <returns></returns>
                void deleteVertex(_in ev_size_t poly, _in ev_size_t vertex);
                /// <summary>
                /// 替换指定索引出的多边形
                /// </summary>
                /// <param name="pdata">指向多边形的指针</param>
                /// <param name="poly">目标多边形</param>
                /// <returns></returns>
                void setPolygon(_in EarthView::World::Spatial::Math::CPolygon3D *ref_pdata, _inout ev_size_t poly );
                /// <summary>
                /// 替换多边形上指定的顶点
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="vdata">EarthView::World::Spatial::Math::CVector3类的引用</param>
                /// <param name="vertex">目标顶点</param>
                /// <returns></returns>
                void setVertex(_in ev_size_t poly, _in const EarthView::World::Spatial::Math::CVector3 &vdata, _inout ev_size_t vertex );
                /// <summary>
                /// 在边界集合中得到单一的边界
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单一边界的集合</returns>
               EarthView::World::Spatial::Math:: CPolygon3D::EdgeMap getSingleEdges() const;
                /// <summary>
                /// 存储具有特定边界的多边形
                /// </summary>
                /// <param name="poly">目标多边形</param>
                /// <param name="edgeMap">指向边界集合的指针</param>
                /// <returns></returns>
                void storeEdgesOfPolygon(_in ev_size_t poly, _in EarthView::World::Spatial::Math::CPolygon3D::EdgeMap *ref_edgeMap) const;
                /// <summary>
                /// 为具有特定数目顶点的多边形的个数分配空间
                /// </summary>
                /// <param name="numPolygons">目标多边形个数</param>
                /// <param name="numVertices">目标顶点个数</param>
                /// <returns></returns>
                void allocateSpace(_in ev_size_t numPolygons, _in ev_size_t numVertices);
                /// <summary>
                /// 判断边界集合中是否存在经过特定顶点的边界
                /// </summary>
                /// <param name="vec">目标顶点</param>
                /// <param name="intersectionEdges">边界集合的引用</param>
                /// <param name="vNext">存储边界集合迭代器的键或者值（存储哪个取决于键或值哪一个符合vec，如果键符合，则储存值，如果值符合，则储存间）</param>
                /// <returns>找到符合条件的边界返回true，否则返回false</returns>
                ev_bool findAndEraseEdgePair(_in const EarthView::World::Spatial::Math::CVector3 &vec,
                                             _in EarthView::World::Spatial::Math::CPolygon3D::EdgeMap &intersectionEdges, _in EarthView::World::Spatial::Math::CVector3 &vNext ) const;
            };
        }
    }
}

#endif

