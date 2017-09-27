#ifndef __RenderQueueSortingGrouping_H__
#define __RenderQueueSortingGrouping_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/memoryallocatedobject.h>
#include <core/iteratorwrapper.h>
#include "radixsort.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderable;
            class CPass;
            class CCamera;
            class CRenderQueueGroup;
            class CTechnique;
            class CRenderQueue;
            class CTechnique;
            /// <summary>
            /// 联系单个通路和单个渲染接口的类
            ///通过深度对实体分类而不是通过通路分类
            /// </summary>
            /*struct RenderablePass*/
            class EV_GRAPHIC_DLL RenderablePass: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderablePass(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                EarthView::World::Graphic::CRenderable *renderable;
                EarthView::World::Graphic::CPass *pass;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderablePass();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rend">渲染接口</param>
                /// <param name="p">通路</param>
                /// <returns></returns>
                RenderablePass( EarthView::World::Graphic::CRenderable *ref_rend,  EarthView::World::Graphic::CPass *ref_p);
            };
            /// <summary>
            /// CVisitor接口服务于EarthView::World::Graphic::CQueuedRenderableCollection中的消息
            /// </summary>
            /// <param name=""></param>
            /// <returns></returns>
            class EV_GRAPHIC_DLL CQueuedRenderableVisitor : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CQueuedRenderableVisitor(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CQueuedRenderableVisitor();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CQueuedRenderableVisitor();
                /// <summary>
                /// 当访问渲染通路时被调用，消息在一个分类的集合里，但不是通过通路分类的
                /// </summary>
                /// <param name="rp">渲染通路</param>
                /// <returns></returns>
                virtual void visit(EarthView::World::Graphic::RenderablePass *rp);
                /// <summary>
                ///当访问一个通过通路分类的集合，当通路改变时，这个函数被调用
                /// </summary>
                /// <param name="p">通路</param>
                /// <returns></returns>
                virtual ev_bool visit(const EarthView::World::Graphic::CPass *p);
                /// <summary>
                /// 在集合里面的每个渲染接口调用一次访问方法
                /// </summary>
                /// <param name="r">渲染接口</param>
                /// <returns></returns>
                virtual void visit( EarthView::World::Graphic::CRenderable *r);


            };
            /// <summary>
            /// 最低级水平的渲染接口集合
            /// </summary>
            class EV_GRAPHIC_DLL CQueuedRenderableCollection : public EarthView::World::Core::CAllocatedObject
            {
            public:

                ///集合必须的组织模型
                enum OrganisationMode
                {
                    ///根据通路分组
                    OM_PASS_GROUP = 1,

                    ///虚拟相机递减的距离分类
                    OM_SORT_DESCENDING = 2,

                    ///虚拟相机递增的距离分类
                    OM_SORT_ASCENDING = 6
                };
            protected:
                ///排列通路组
                struct PassGroupLess
                {
                    ev_bool EV_GRAPHIC_DLL operator()(const EarthView::World::Graphic::CPass *a, const EarthView::World::Graphic::CPass *b) const;
                };
                ///通过虚拟相机的递减距离对实体进行分类
                struct DepthSortDescendingLess
                {
                    const EarthView::World::Graphic::CCamera *camera;
                    DepthSortDescendingLess(const EarthView::World::Graphic::CCamera *cam)
                        : camera(cam)
                    {
                    }
                    ev_bool EV_GRAPHIC_DLL operator()(const EarthView::World::Graphic::RenderablePass &a, const EarthView::World::Graphic::RenderablePass &b) const;
                };
                ///EarthView::World::Graphic::RenderablePass实体的容器
                typedef vector<EarthView::World::Graphic::RenderablePass> RenderablePassList;
                typedef vector<EarthView::World::Graphic::CRenderable *> RenderableList;
                /** Map of pass to renderable lists, this is a grouping by pass. */
                typedef map<EarthView::World::Graphic::CPass *, RenderableList *, PassGroupLess> PassGroupRenderableMap;
                //// Functor for accessing sort value 1 for radix sort (EarthView::World::Graphic::CPass)
                struct RadixSortFunctorPass
                {
                    ev_uint32 operator()(const EarthView::World::Graphic::RenderablePass &p) const;
                };
                //// Radix sorter for accessing sort value 1 (EarthView::World::Graphic::CPass)
                static CRadixSort<RenderablePassList, RenderablePass, ev_uint32> msRadixSorter1;
                //// Functor for descending sort value 2 for radix sort (distance)
                struct RadixSortFunctorDistance
                {
                    const EarthView::World::Graphic::CCamera *camera;
                    RadixSortFunctorDistance(const EarthView::World::Graphic::CCamera *cam)
                        : camera(cam)
                    {
                    }
                    ev_real32 operator()(const EarthView::World::Graphic::RenderablePass &p) const;
                };
                //// Radix sorter for sort value 2 (distance)
                static CRadixSort<RenderablePassList, RenderablePass, ev_real32> msRadixSorter2;
                //// Bitmask of the organisation modes requested
                ev_uint8 mOrganisationMode;
                //// Grouped
                PassGroupRenderableMap mGrouped;
                //// Sorted descending (can iterate backwards to get ascending)
                RenderablePassList mSortedDescending;
                //// Internal visitor implementation
                void acceptVisitorGrouped( EarthView::World::Graphic::CQueuedRenderableVisitor *visitor) const;
                //// Internal visitor implementation
                void acceptVisitorDescending( EarthView::World::Graphic::CQueuedRenderableVisitor *visitor) const;
                //// Internal visitor implementation
                void acceptVisitorAscending( EarthView::World::Graphic::CQueuedRenderableVisitor *visitor) const;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CQueuedRenderableCollection(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CQueuedRenderableCollection();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CQueuedRenderableCollection();
                /// <summary>
                /// 清空集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 去除掉已给通路组的入口
                /// </summary>
                /// <param name="p">通路指针</param>
                /// <returns></returns>
                void removePassGroup( EarthView::World::Graphic::CPass *p);
                /// <summary>
                /// 重新设置集合需要的organisation模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetOrganisationModes();
                /// <summary>
                ///当下一次用到时，添加一个必须的分类模型
                /// </summary>
                /// <param name="om"></param>
                /// <returns></returns>
                void addOrganisationMode(OrganisationMode om);
                /// <summary>
                ///使用给的通路添加一个渲染接口到集合中
                /// </summary>
                /// <param name="pass">通路</param>
                /// <param name="rend">渲染</param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CPass *ref_pass, EarthView::World::Graphic::CRenderable *ref_rend);
                /// <summary>
                ///执行这个集合需要的各种分类
                /// </summary>
                /// <param name="cam"></param>
                /// <returns></returns>
                void sort(const EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                ///接受对结合内容的访问者
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="om"></param>
                /// <returns></returns>
                void acceptVisitor(EarthView::World::Graphic::CQueuedRenderableVisitor *visitor, EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om) const;

                /// <summary>
                ///渲染结合的融合
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                void merge( const EarthView::World::Graphic::CQueuedRenderableCollection &rhs );
            };
            /// <summary>
            ///这个类简化了渲染接口，所有的接口包含同一个EarthView::World::Graphic::CRenderQueueGroup和一样的属性
            /// </summary>
            /// <param name=""></param>
            /// <returns></returns>
            class EV_GRAPHIC_DLL CRenderPriorityGroup : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                //// Parent queue group
                EarthView::World::Graphic::CRenderQueueGroup *mParent;
                ev_bool mSplitPassesByLightingType;
                ev_bool mSplitNoShadowPasses;
                ev_bool mShadowCastersNotReceivers;
                //// Solid pass list, used when no shadows, modulative shadows, or ambient passes for additive
                EarthView::World::Graphic::CQueuedRenderableCollection mSolidsBasic;
                //// Solid per-light pass list, used with additive shadows
                EarthView::World::Graphic::CQueuedRenderableCollection mSolidsDiffuseSpecular;
                //// Solid decal (texture) pass list, used with additive shadows
                EarthView::World::Graphic::CQueuedRenderableCollection mSolidsDecal;
                //// Solid pass list, used when shadows are enabled but shadow receive is turned off for these passes
                EarthView::World::Graphic::CQueuedRenderableCollection mSolidsNoShadowReceive;
                //// Unsorted transparent list
                EarthView::World::Graphic::CQueuedRenderableCollection mTransparentsUnsorted;
                //// Transparent list
                EarthView::World::Graphic::CQueuedRenderableCollection mTransparents;
                /// <summary>
                ///从集合中去除掉一个通路入口
                /// </summary>
                /// <param name="p">通路</param>
                /// <returns></returns>
                void removePassEntry( EarthView::World::Graphic::CPass *p);
                /// <summary>
                ///内部方法添加一个实体渲染对象
                /// </summary>
                /// <param name="pTech"></param>
                /// <param name="rend"></param>
                /// <param name="toNoShadowMap"></param>
                /// <returns></returns>
                void addSolidRenderable( EarthView::World::Graphic::CTechnique *ref_pTech,  EarthView::World::Graphic::CRenderable *ref_rend, ev_bool toNoShadowMap);
                /// <summary>
                ///内部方法添加一个实体渲染对象
                /// </summary>
                /// <param name="pTech"></param>
                /// <param name="rend"></param>
                /// <returns></returns>
                void addSolidRenderableSplitByLightType( EarthView::World::Graphic::CTechnique *ref_pTech,  EarthView::World::Graphic::CRenderable *ref_rend);
                /// <summary>
                ///内部方法添加一个未分类的透明渲染对象
                /// </summary>
                /// <param name="pTech"></param>
                /// <param name="rend"></param>
                /// <returns></returns>
                void addUnsortedTransparentRenderable(EarthView::World::Graphic::CTechnique *ref_pTech,  EarthView::World::Graphic::CRenderable *ref_rend);
                /// <summary>
                ///内部方法添加一个透明渲染对象
                /// </summary>
                /// <param name="pTech"></param>
                /// <param name="rend"></param>
                /// <returns></returns>
                void addTransparentRenderable( EarthView::World::Graphic::CTechnique *ref_pTech,  EarthView::World::Graphic::CRenderable *ref_rend);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderPriorityGroup(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <param name="splitPassesByLightingType"></param>
                /// <param name="splitNoShadowPasses"></param>
                /// <param name="shadowCastersNotReceivers"></param>
                /// <returns></returns>
                CRenderPriorityGroup(EarthView::World::Graphic::CRenderQueueGroup *ref_parent,
                                     ev_bool splitPassesByLightingType,
                                     ev_bool splitNoShadowPasses,
                                     ev_bool shadowCastersNotReceivers);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRenderPriorityGroup();
                /// <summary>
                /// 获取没有阴影的通路,或者调制阴影模式下开启阴影接收功能的通路，或者在
                /// 加成阴影下的环境光照(ambient)渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getSolidsBasic() const;
                /// <summary>
                /// 获取加成阴影模式下的漫反射和镜面反射通路中的渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getSolidsDiffuseSpecular() const;
                /// <summary>
                /// 获得加成阴影模式下贴花渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getSolidsDecal() const;
                /// <summary>
                /// 获得阴影功能开启但是阴影接受功能关闭的渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getSolidsNoShadowReceive() const;
                /// <summary>
                /// 获得未排序的透明物体渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getTransparentsUnsorted() const;
                /// <summary>
                /// 获得排序的透明物体渲染通路及其关联的可渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CQueuedRenderableCollection &getTransparents() const;
                /// <summary>
                /// 在组中重新设置实体需要的组织模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetOrganisationModes();
                /// <summary>
                /// 在组中添加一个必须得实体分组模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void addOrganisationMode(EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);

                /// <summary>
                /// 在组中设置对实体设置默认的分组模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void defaultOrganisationMode();

                /// <summary>
                /// 在组中添加一个渲染接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CRenderable *ref_pRend,  EarthView::World::Graphic::CTechnique *ref_pTech);
                /// <summary>
                /// 对添加到队列中的实体进行分类
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void sort(const EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 清空组中的渲染接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 设置队列是否需要通过它们的光照类型划分通路
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitPassesByLightingType(ev_bool split);
                /// <summary>
                /// 设置是否接收阴影不成功的通路应该被分离
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitNoShadowPasses(ev_bool split);
                /// <summary>
                /// 设置是否投掷阴影的实体应该被看作没有接收阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setShadowCastersCannotBeReceivers(ev_bool ind);
                /// <summary>
                /// 融合组中的渲染接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void merge( const EarthView::World::Graphic::CRenderPriorityGroup *rhs );

            };
            /// <summary>
            /// EarthView::World::Graphic::CRenderQueue下的分组标准，EarthView::World::Graphic::CRenderQueue聚集了渲染接口大概同一时间发布到renderer
            /// </summary>
            /// <param name=""></param>
            /// <returns></returns>
            class EV_GRAPHIC_DLL CRenderQueueGroup : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /*typedef map<ev_uint16, EarthView::World::Graphic::CRenderPriorityGroup*, std::less<ev_uint16> > EarthView::World::Graphic::CRenderQueueGroup::PriorityMap;*/
                class EV_GRAPHIC_DLL PriorityMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PriorityMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PriorityMap() {}

                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::CRenderPriorityGroup *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const ev_uint16 &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup*& operator[](const ev_uint16 &key)
                    {
                        return get(key);
                    }
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup*& get(const ev_uint16 &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const ev_uint16 &key);
                    /// <summary>
                    /// 返回容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_uint16, EarthView::World::Graphic::CRenderPriorityGroup *, std::less<ev_uint16> > InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(const value_type &val);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    iterator find(const ev_uint16 &key);

                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const ev_uint16 &key) const;
                private:
                    InternalList mList;
                };

                /* typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CRenderQueueGroup::PriorityMap> EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator;*/
                class EV_GRAPHIC_DLL PriorityMapPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PriorityMapPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PriorityMapPair();

                    ev_uint16 first;
                    EarthView::World::Graphic::CRenderPriorityGroup *second;
                };
                class EV_GRAPHIC_DLL PriorityMapIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CRenderQueueGroup::PriorityMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    PriorityMapIterator(const_iterator first, const_iterator last);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    PriorityMapIterator(PriorityMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    PriorityMapIterator(const PriorityMapIterator &other);
                ev_private:
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~PriorityMapIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator &operator=(_in const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator &other);
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    PriorityMapIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mBeginPair;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mCurrentPair;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mEndPair;
                    EarthView::World::Graphic::CRenderPriorityGroup *mptr;
                    ValueType mvt;
                };
                /* typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRenderQueueGroup::PriorityMap> EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator;*/
                class EV_GRAPHIC_DLL ConstPriorityMapIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRenderQueueGroup::PriorityMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ConstPriorityMapIterator(const_iterator first, const_iterator last);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    ConstPriorityMapIterator(PriorityMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ConstPriorityMapIterator(const ConstPriorityMapIterator &other);
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator &operator=(_in const EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ConstPriorityMapIterator();
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ConstPriorityMapIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderPriorityGroup *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mBeginPair;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mCurrentPair;
                    EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair mEndPair;
                    EarthView::World::Graphic::CRenderPriorityGroup *mptr;
                    ValueType mvt;
                };
            protected:
                EarthView::World::Graphic::CRenderQueue *mParent;
                ev_bool mSplitPassesByLightingType;
                ev_bool mSplitNoShadowPasses;
                ev_bool mShadowCastersNotReceivers;
                //// Map of EarthView::World::Graphic::CRenderPriorityGroup objects
                EarthView::World::Graphic::CRenderQueueGroup::PriorityMap mPriorityGroups;
                //// Whether shadows are enabled for this queue
                ev_bool mShadowsEnabled;
                //// Bitmask of the organisation modes requested (for new priority groups)
                ev_uint8 mOrganisationMode;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderQueueGroup(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <param name="splitPassesByLightingType"></param>
                /// <param name="splitNoShadowPasses"></param>
                /// <param name="shadowCastersNotReceivers"></param>
                /// <returns></returns>
                CRenderQueueGroup(CRenderQueue *ref_parent,
                                  ev_bool splitPassesByLightingType,
                                  ev_bool splitNoShadowPasses,
                                  ev_bool shadowCastersNotReceivers);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRenderQueueGroup();
                /// <summary>
                /// 获得一个通过子内容浏览的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator getIterator();
                /// <summary>
                /// 获得一个通过子内容浏览的常量迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator getIterator() const;
                /// <summary>
                /// 运用已给的属性在组中添加一个渲染接口
                /// </summary>
                /// <param name="pRend"></param>
                /// <param name="pTech"></param>
                /// <param name="priority"></param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CRenderable *pRend, EarthView::World::Graphic::CTechnique *pTech, ev_uint16 priority);
                /// <summary>
                /// 清空组中的渲染接口
                /// </summary>
                /// <param name="destory"></param>
                /// <returns></returns>
                void clear(ev_bool destroy);
                /// <summary>
                /// 清空组中的渲染接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 指出是否对已给队列组做阴影设置
                /// </summary>
                /// <param name="destory"></param>
                /// <returns></returns>
                void setShadowsEnabled(ev_bool enabled);
                /// <summary>
                /// 获得阴影对这个队列是否可用
                /// </summary>
                /// <param name=""></param>
                /// <returns>可用返回true，否则返回false</returns>
                ev_bool getShadowsEnabled() const;
                /// <summary>
                /// 队列中是否对通过光照类型进行划分的通路进行设置
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitPassesByLightingType(ev_bool split);
                /// <summary>
                /// 队列中是否对接收阴影已经关闭的通路进行划分设置
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitNoShadowPasses(ev_bool split);
                /// <summary>
                /// 对投射阴影的实体是否不再接收阴影进行设置
                /// </summary>
                /// <param name="ind"></param>
                /// <returns></returns>
                void setShadowCastersCannotBeReceivers(ev_bool ind);
                /// <summary>
                /// 重新设置实体需要的组织模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetOrganisationModes();

                /// <summary>
                /// 给实体添加一个分组模型
                /// </summary>
                /// <param name="om"></param>
                /// <returns></returns>
                void addOrganisationMode(EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /// <summary>
                /// 设置实体的分组模型为默认值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void defaultOrganisationMode();
                /// <summary>
                /// 融合渲染接口
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                void merge( const EarthView::World::Graphic::CRenderQueueGroup *rhs );
            };
            /** @} */
            /** @} */

        }
    }
}

#endif


