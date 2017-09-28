#ifndef _SceneNode_H__
#define _SceneNode_H__
#include "graphic/graphic_config.h"
#include <mathengine/axisalignedbox.h>
#include "node.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class VisibleObjectsBoundsInfo;
            class CWireBoundingBox;
            /// <summary>
            /// 场景节点类
            /// 此类处理移动、缩放、旋转等于空间相关的行为，每个场景节点可以挂接各自场景元素。
            /// </summary>
            class EV_GRAPHIC_DLL CSceneNode : public EarthView::World::Graphic::CNode
            {
            public:
                /// <summary>
                /// 对象地图类
                /// typedef EarthView::World::Core::hashmap<EVString, EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::CSceneNode::ObjectMap;
                /// </summary>
                class EV_GRAPHIC_DLL ObjectMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ObjectMap();
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CMovableObject *const &ref_val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::CMovableObject*& operator[](const EVString &key);
                    EarthView::World::Graphic::CMovableObject*& get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CMovableObject *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };

                class EV_GRAPHIC_DLL ObjectIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    ObjectIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CMovableObject *second;
                ev_private:
                    ObjectIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 对象地图迭代器类
                /// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> EarthView::World::Graphic::CSceneNode::ObjectIterator;
                /// </summary>
                class EV_GRAPHIC_DLL ObjectIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ObjectIterator(const_iterator first, const_iterator last);
                    ~ObjectIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();

                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneNode::ObjectIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneNode::ObjectIterator &operator=(_in const EarthView::World::Graphic::CSceneNode::ObjectIterator &other);
                ev_private:
                    ObjectIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

                    ObjectIterator(EarthView::World::Graphic::CSceneNode::ObjectMap &lst);
                    ObjectIterator(const ObjectIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::CMovableObject *nextValue() const;
                    EarthView::World::Graphic::CMovableObject **nextValuePtr();
                    EarthView::World::Graphic::CMovableObject *next();
                    const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneNode::ObjectIteratorPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneNode::ObjectIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneNode::ObjectIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneNode::ObjectIteratorPair mEndPair;
                    EarthView::World::Graphic::CMovableObject *mptr;
                    ValueType mvt;
                };
                class EV_GRAPHIC_DLL ConstObjectIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    ConstObjectIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CMovableObject *second;
                ev_private:
                    ConstObjectIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 对象迭代器类
                /// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> EarthView::World::Graphic::CSceneNode::ConstObjectIterator;
                /// </summary>
                class EV_GRAPHIC_DLL ConstObjectIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CSceneNode::ObjectMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ConstObjectIterator(const_iterator first, const_iterator last);
                    ~ConstObjectIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();

                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneNode::ConstObjectIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneNode::ConstObjectIterator &operator=(_in const EarthView::World::Graphic::CSceneNode::ConstObjectIterator &other);
                ev_private:
                    ConstObjectIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ConstObjectIterator(EarthView::World::Graphic::CSceneNode::ObjectMap &lst);
                    ConstObjectIterator(const ConstObjectIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::CMovableObject *nextValue() const;
                    EarthView::World::Graphic::CMovableObject **nextValuePtr();
                    EarthView::World::Graphic::CMovableObject *next();
                    const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneNode::ConstObjectIteratorPair mEndPair;
                    EarthView::World::Graphic::CMovableObject *mptr;
                    ValueType mvt;
                };
            protected:
				ev_bool mbVisible;
                EarthView::World::Graphic::CSceneNode::ObjectMap mObjectsByName;
				//mutable EarthView::World::Core::CRecursiveMutex mObjectsLocker;
                /// <summary>
                /// 指向当前节点的线框盒
                /// </summary>
                CWireBoundingBox *mWireBoundingBox;

				EarthView::World::Graphic::CMaterialPtr mMaterialPtr;

                ev_bool mShowBoundingBox;
                ev_bool mHideBoundingBox;
                /// <summary>
                /// 节点创建者
                /// </summary>
                EarthView::World::Graphic::CSceneManager *mCreator;
                /// <summary>
                /// 世界坐标系与边界盒对其
                /// </summary>
                EarthView::World::Spatial::Math::CAxisAlignedBox mWorldAABB;
                /// <summary>
                /// 是否围绕裁剪面旋转
                /// </summary>
                ev_bool mYawFixed;

                EarthView::World::Spatial::Math::CVector3 mYawFixedAxis;
                /// <summary>
                /// 定义制动追踪目标
                /// </summary>
                EarthView::World::Graphic::CSceneNode *mAutoTrackTarget;

                /// <summary>
                /// 追踪微小偏移
                /// </summary>
                EarthView::World::Spatial::Math::CVector3 mAutoTrackOffset;

                EarthView::World::Spatial::Math::CVector3 mAutoTrackLocalDirection;

                /// <summary>
                /// 是否在场景图中
                /// </summary>
                ev_bool mIsInSceneGraph;

				ev_bool mIsOceanNode;
            ev_internal:
                void updateFromParentImpl() const;
                EarthView::World::Graphic::CNode *createChildImpl();
                EarthView::World::Graphic::CNode *createChildImpl(const EVString &name);
                void setParent(EarthView::World::Graphic::CNode *ref_parent);
                /// <summary>
                /// 设置节点是否在场景图中
                /// 内部方法
                /// </summary>
                /// <param name="inGraph">是否在场景图中</param>
                /// <returns></returns>
                virtual void setInSceneGraph(ev_bool inGraph);

				virtual void notifyMoved() const;

            public:
                /// <summary>
                /// 构造函数
                /// 创建一个节点，使用生成的名字
                /// </summary>
                /// <param name="creator"></param>
                /// <returns></returns>
                CSceneNode(EarthView::World::Graphic::CSceneManager *ref_creator);
                /// <summary>
                /// 构造函数
                /// 创建一个节点，使用指定的名字
                /// </summary>
                /// <param name="creator"></param>
                /// <param name="name"></param>
                /// <returns></returns>
                CSceneNode(EarthView::World::Graphic::CSceneManager *ref_creator, const EVString &name);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CSceneNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CSceneNode();
                /// <summary>
                /// 在当前节点下挂接一个移动对象
                /// </summary>
                /// <param name="obj">移动对象</param>
                /// <returns></returns>
                virtual void attachObject(EarthView::World::Graphic::CMovableObject *ref_obj);
                /// <summary>
                /// 挂接在当前节点下的对象个数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint16 numAttachedObjects() const;
                /// <summary>
                /// 按索引号获取挂接对象
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMovableObject *getAttachedObject(ev_uint16 index);
                /// <summary>
                /// 按名称获取挂接对象
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMovableObject *getAttachedObject(const EVString &name);
                /// <summary>
                /// 反挂接指定索引号的移动对象
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMovableObject *detachObject(ev_uint16 index);
                /// <summary>
                /// 反挂接指定节点的移动对象
                /// </summary>
                /// <param name="obj">移动对象</param>
                /// <returns></returns>
                virtual void detachObject(EarthView::World::Graphic::CMovableObject *obj);
                /// <summary>
                /// 反挂接指定名称的移动对象
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMovableObject *detachObject(const EVString &name);
                /// <summary>
                /// 反挂接指定节点的所有对象
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual void detachAllObjects();
                /// <summary>
                /// 确定此节点是否在场景图中
                /// 此节点是否继承自根场景节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isInSceneGraph() const;
                /// <summary>
                /// 通知此节点作为场景根节点
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyRootNode();
                /// <summary>
                /// 更新场景节点                
                /// 内部方法
                /// </summary>
                /// <param name="updateChildren">为true，逐级更新子节点</param>
                /// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
                /// <returns></returns>
                virtual void _update(ev_bool updateChildren, ev_bool parentHasChanged);
                /// <summary>
                /// 通知场景节点更新包围盒
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _updateBounds();
                /// <summary>
                /// 查找可见对象添加到当前节点和渲染队列
                /// 内部方法，只能被场景管理实现调用
                /// </summary>
                /// <param name="cam">动态摄像机</param>
                /// <param name="queue">场景管理的渲染队列</param>
                /// <param name="visibleBounds">摄像机创建所有可见对象飞行盒的边界信息</param>
                /// <param name="includeChildren">为true，逐级自动检查所有子节点</param>
                /// <param name="displayNodes">为true，设置一个三维坐标渲染节点</param>
                /// <param name="onlyShadowCasters">阴影摄像机</param>
                /// <returns></returns>
                virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds,
                                                 ev_bool includeChildren , ev_bool displayNodes, ev_bool onlyShadowCasters);
                virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds,
                                                 ev_bool includeChildren, ev_bool displayNodes);
                virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds,
                                                 ev_bool includeChildren);
                virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds);
                /// <summary>
                /// 获取指定节点的世界坐标系下的边框盒
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &_getWorldAABB() const;
                /// <summary>
                /// 获取一个迭代器遍历节点上的附属物
                /// </summary>
                /// <param name=""></param>
                /// <returns>对象迭代器</returns>
                virtual EarthView::World::Graphic::CSceneNode::ObjectIterator getAttachedObjectIterator();
                /// <summary>
                /// 获取一个迭代器遍历节点上的附属物
                /// </summary>
                /// <param name=""></param>
                /// <returns>对象迭代器</returns>
                virtual EarthView::World::Graphic::CSceneNode::ConstObjectIterator getAttachedObjectIterator() const;
                /// <summary>
                /// 获取场景节点的创建者
                /// 可以用于销毁这个节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManager *getCreator() const;
                /// <summary>
                /// 通过名称删除指定子节点及其它的字节点
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual void removeAndDestroyChild(const EVString &name);
                /// <summary>
                /// 通过检索删除指定子节点及其它的字节点
                /// </summary>
                /// <param name="index">检索</param>
                /// <returns></returns>
                virtual void removeAndDestroyChild(ev_uint16 index);
                /// <summary>
                /// 删除此节点的所有子节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void removeAndDestroyAllChildren();
                /// <summary>
                /// 显示此节点的边界盒
                /// </summary>
                /// <param name="bShow">是否显示</param>
                /// <returns></returns>
                virtual void showBoundingBox(ev_bool bShow);
				virtual void showBoundingBox(ev_bool bShow,EarthView::World::Graphic::CMaterialPtr redPtr);

                /// <summary>
                /// 隐藏此节点的包围盒
                /// </summary>
                /// <param name="bHide">是否隐藏</param>
                /// <returns></returns>
                virtual void hideBoundingBox(ev_bool bHide);
                /// <summary>
                /// 将边界盒添加到渲染队列
				/// 内部方法
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                virtual void _addBoundingBoxToQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 获取此节点的包围盒是否显示
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getShowBoundingBox() const;
                /// <summary>
                /// 从当前节点创建子节点
                /// 系统自动为子节点命名
                /// </summary>
                /// <param name="translate">子节点相对当前节点的位移，默认为EarthView::World::Spatial::Math::CVector3::ZERO</param>
                /// <param name="rotate">子节点相对当前节点的旋转，默认为EarthView::World::Spatial::Math::CQuaternion::IDENTITY</param>
                /// <returns>返回子节点</returns>
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode(const EarthView::World::Spatial::Math::CVector3 &translate, const EarthView::World::Spatial::Math::CQuaternion &rotate);
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode(const EarthView::World::Spatial::Math::CVector3 &translate);
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode();
                /// <summary>
                /// 从当前节点创建子节点
                /// 系统自动为子节点命名
                /// </summary>
                /// <param name="name">子节点的名称</param>
                /// <param name="translate">子节点相对当前节点的位移</param>
                /// <param name="rotate">子节点相对当前节点的旋转</param>
                /// <returns>返回子节点</returns>
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &translate, const EarthView::World::Spatial::Math::CQuaternion &rotate);
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &translate);
                virtual EarthView::World::Graphic::CSceneNode *createChildSceneNode(const EVString &name);

                /// <summary>
                /// 查找里场景节点中心最近的光源
                /// CMovableObject::queryLights and CRenderable::getLights可以使用检索的光源
                /// </summary>
                /// <param name="destList">有序的填充光源</param>
                /// <param name="radius">半径</param>
                /// <param name="lightMask">光源是否设置模糊</param>
                /// <returns></returns>
                virtual void findLights(EarthView::World::Graphic::LightList &destList, Real radius, ev_uint32 lightMask) const;
                virtual void findLights(EarthView::World::Graphic::LightList &destList, Real radius) const;
                /// <summary>
                /// 选择节点绕Y轴旋转地坐标系
                /// </summary>
                /// <param name="useFixed">为false，使用默认轴</param>
                /// <param name="fixedAxis">是否使用坐标系</param>
                /// <returns></returns>
                virtual void setFixedYawAxis( ev_bool useFixed, const EarthView::World::Spatial::Math::CVector3 &fixedAxis);
                virtual void setFixedYawAxis( ev_bool useFixed);
                /// <summary>
                /// 绕Y轴旋转节点
                /// </summary>
                /// <param name="angle">角度</param>
                /// <param name="relativeTo">空间缩放关系</param>
                /// <returns></returns>
                virtual void yaw(const EarthView::World::Spatial::Math::CRadian &angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void yaw(const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 设置节点方向矢量
                /// </summary>
                /// <param name="x"></param>
                /// <param name="y"></param>
                /// <param name="z"></param>
                /// <param name="relativeTo">空间缩放关系</param>
                /// <param name="localDirectionVector">当前方向矢量，默认为-Z</param>
                /// <returns></returns>
                virtual void setDirection(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3 &localDirectionVector);
                virtual void setDirection(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void setDirection(Real x, Real y, Real z);
                /// <summary>
                /// 设置节点方向矢量
                /// </summary>
                /// <param name="vec">方向矢量</param>
                /// <param name="relativeTo">空间缩放关系</param>
                /// <param name="localDirectionVector">当前方向矢量，默认为-Z</param>
                /// <returns></returns>
                virtual void setDirection(const EarthView::World::Spatial::Math::CVector3 &vec, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3 &localDirectionVector);
                virtual void setDirection(const EarthView::World::Spatial::Math::CVector3 &vec, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void setDirection(const EarthView::World::Spatial::Math::CVector3 &vec);
                
				/// <summary>
                /// 调整节点方向使其朝向某点
                /// </summary>
                /// <param name="targetPoint">目标点</param>
                /// <param name="relativeTo">变换空间类型</param>
                /// <param name="localDirectionVector">当前方向矢量</param>
                /// <returns></returns>
                virtual void lookAt( const EarthView::World::Spatial::Math::CVector3 &targetPoint, EarthView::World::Graphic::CNode::TransformSpace relativeTo, const EarthView::World::Spatial::Math::CVector3 &localDirectionVector );
                virtual void lookAt( const EarthView::World::Spatial::Math::CVector3 &targetPoint, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                
				/// <summary>
                /// 是否设置自动追踪
                /// </summary>
                /// <param name="enabled">是否自动追踪</param>
                /// <param name="ref_target">追踪的场景节点目标</param>
                /// <param name="localDirectionVector">当前方向矢量</param>
                /// <param name="offset">偏移量</param>
                /// <returns></returns>
                virtual void setAutoTracking(ev_bool enabled);
                virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode *const ref_target);
                virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode *const ref_target,
                                             const EarthView::World::Spatial::Math::CVector3 &localDirectionVecto);
                virtual void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode *const ref_target,
                                             const EarthView::World::Spatial::Math::CVector3 &localDirectionVector,
                                             const EarthView::World::Spatial::Math::CVector3 &offset);

                /// <summary>
                /// 获取此节点自动追踪的节点
                /// </summary>
                /// <param name=""></param>
                /// <returns>节点</returns>
                virtual EarthView::World::Graphic::CSceneNode *getAutoTrackTarget();

                /// <summary>
                /// 如果自动追踪，获取相对于被跟踪节点的偏移量
                /// </summary>
                /// <param name=""></param>
                /// <returns>矢量值</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getAutoTrackOffset();

                /// <summary>
                /// 如果自动追踪，获取节点当前方向矢量
                /// </summary>
                /// <param name=""></param>
                /// <returns>矢量值</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getAutoTrackLocalDirection();
                /// <summary>
                /// 如果自动跟踪，则更新此节点的姿态
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _autoTrack();
                /// <summary>
                /// 获取场景节点的父节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneNode *getParentSceneNode() const;
                /// <summary>
                /// 设置挂接在节点上的对象是否可见
                /// </summary>
                /// <param name="visible">对象是否可见</param>
                /// <param name="cascade">是否递归设置子节点，默认为true</param>
                /// <returns></returns>
                virtual void setVisible(ev_bool visible, ev_bool cascade);
                virtual void setVisible(ev_bool visible);
				/// <summary>
				/// 获取挂接在节点上的对象是否可见
				/// </summary>
				virtual ev_bool getVisible();
				/// <summary>
				/// 判断是否挂接了可见的MovableObject(判断Visible属性)
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_bool hasAnyVisibleObject()const;
				/// <summary>
				/// 判断是否挂接了可见的MovableObject(判断VisibilityFlags属性)
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_bool hasAnyVisibleObject2()const;
				/// <summary>
				/// 判断是否挂接了可见的投射阴影的MovableObject(判断Visible属性)
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_bool hasAnyVisibleShadowCaster()const;
				/// <summary>
				/// 判断是否挂接了可见的投射阴影的MovableObject(判断VisibilityFlags属性)
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_bool hasAnyVisibleShadowCaster2()const;

                /// <summary>
                /// 反向设置挂接在节点上的对象可见性(可见的变为不可见，不可见的变为可见)
                /// </summary>
                /// <param name="cascade">是否递归设置子节点，默认为true</param>
                /// <returns></returns>
                virtual void flipVisibility(ev_bool cascade);
                virtual void flipVisibility();
                /// <summary>
                /// 设置所有对象的节点是否显示他们的调试信息
                /// </summary>
                /// <param name="enabled">是否所有的对象显示调试信息</param>
                /// <param name="cascade">是否逐级检查子节点</param>
                /// <returns></returns>
                virtual void setDebugDisplayEnabled(ev_bool enabled, ev_bool cascade);
                virtual void setDebugDisplayEnabled(ev_bool enabled);
                /// <summary>
                /// 获得调试用的可渲染对象                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode::CDebugRenderable *getDebugRenderable();

				/// <summary>
				/// 针对mChildren访问的异步锁-加锁
				/// </summary>                
				/// <returns></returns>
				virtual ev_void syncVisitObjectsLock();

				/// <summary>
				/// 针对mChildren访问的异步锁-解锁
				/// </summary>                
				/// <returns></returns>
				virtual ev_void syncVisitObjectsUnLock();

				inline ev_bool getIsOceanNode()
				{
					return mIsOceanNode;
				}
				inline ev_void setIsOceanNode(ev_bool flag)
				{
					mIsOceanNode = flag;
				}
            };
        }
    }
}

#endif

