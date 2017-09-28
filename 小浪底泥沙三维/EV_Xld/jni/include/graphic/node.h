#ifndef _Node_H__
#define _Node_H__
#include "graphic/graphic_config.h"
#include <mathengine/matrix3.h>
#include <mathengine/matrix4.h>
#include "renderable.h"
#include <core/iteratorwrapper.h>
#include "mesh.h"
#include "core/ev_string.h"


//#define EV_NODE_NOT_SUPPORTED_MULTITHREAD

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;
				class CMatrix4;
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
            /// <summary>
            /// 节点类
            /// 此类展示了节点的关系图
            /// </summary>
            class EV_GRAPHIC_DLL CNode : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 定义空间转换关系
                /// </summary>
                enum TransformSpace
                {
                    TS_LOCAL,			///相对于当地空间变换
                    TS_PARENT,			///相对于父节点空间变换
                    TS_WORLD 			///相对于世界空间变换
                };
                /// <summary>
                /// 子节点地图
                /// </summary>
                class EV_GRAPHIC_DLL ChildNodeMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ChildNodeMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ChildNodeMap();
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CNode *const &ref_val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::CNode*& operator[](const EVString &key);
                    EarthView::World::Graphic::CNode*& get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef EarthView::World::Core::hashmap<EVString, EarthView::World::Graphic::CNode *, _StringHash> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                /// <summary>
                /// 子节点对
                /// </summary>
                class EV_GRAPHIC_DLL StringChildNodePair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    StringChildNodePair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    StringChildNodePair();
                    EVString first;
                    EarthView::World::Graphic::CNode *second;
                };
                /// <summary>
                /// 子节点迭代器
                /// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> EarthView::World::Graphic::CNode::ChildNodeIterator;
                /// </summary>
                class EV_GRAPHIC_DLL ChildNodeIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ChildNodeIterator(iterator first, iterator last);

                    ~ChildNodeIterator();
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
                    /// <param name="other">EarthView::World::Graphic::CNode::ChildNodeIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CNode::ChildNodeIterator &operator=(_in const EarthView::World::Graphic::CNode::ChildNodeIterator &other);
                public:
                    ChildNodeIterator(EarthView::World::Graphic::CNode::ChildNodeMap &lst);
                    ChildNodeIterator(const ChildNodeIterator &other);
                ev_private:
                    ChildNodeIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::CNode *nextValue() const;
                    EarthView::World::Graphic::CNode **nextValuePtr();
                    EarthView::World::Graphic::CNode *next();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getBegin();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getEnd();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CNode::StringChildNodePair mBeginPair;
                    EarthView::World::Graphic::CNode::StringChildNodePair mCurrentPair;
                    EarthView::World::Graphic::CNode::StringChildNodePair mEndPair;
                    EarthView::World::Graphic::CNode *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 子节点迭代器
                /// typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> EarthView::World::Graphic::CNode::ConstChildNodeIterator;
                /// </summary>
                class EV_GRAPHIC_DLL ConstChildNodeIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CNode::ChildNodeMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ConstChildNodeIterator(const_iterator first, const_iterator last);

                    ~ConstChildNodeIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();

                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CNode::ConstChildNodeIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CNode::ConstChildNodeIterator &operator=(_in const EarthView::World::Graphic::CNode::ConstChildNodeIterator &other);
                public:
                    ConstChildNodeIterator(EarthView::World::Graphic::CNode::ChildNodeMap &lst);
                    ConstChildNodeIterator(const ConstChildNodeIterator &other);
                ev_private:
                    ConstChildNodeIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::CNode *nextValue() const;
                    EarthView::World::Graphic::CNode **nextValuePtr();
                    EarthView::World::Graphic::CNode *next();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getBegin();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getEnd();
                    const EarthView::World::Graphic::CNode::StringChildNodePair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CNode::StringChildNodePair mBeginPair;
                    EarthView::World::Graphic::CNode::StringChildNodePair mCurrentPair;
                    EarthView::World::Graphic::CNode::StringChildNodePair mEndPair;
                    EarthView::World::Graphic::CNode *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 节点监听器                
                /// </summary>
                class EV_GRAPHIC_DLL CNodeListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CNodeListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CNodeListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CNodeListener();
                    /// <summary>
                    /// 更新节点
                    /// </summary>
                    /// <param name="pNode"></param>
                    /// <returns></returns>
                    virtual void nodeUpdated(_in const EarthView::World::Graphic::CNode *pNode);
                    /// <summary>
                    /// 销毁节点
                    /// </summary>
                    /// <param name="pNode"></param>
                    /// <returns></returns>
                    virtual void nodeDestroyed(_in const EarthView::World::Graphic::CNode *pNode);
                    /// <summary>
                    /// 挂接节点
                    /// </summary>
                    /// <param name="pNode"></param>
                    /// <returns></returns>
                    virtual void nodeAttached(_in const EarthView::World::Graphic::CNode *pNode);
                    /// <summary>
                    /// 脱钩节点
                    /// </summary>
                    /// <param name="pNode"></param>
                    /// <returns></returns>
                    virtual void nodeDetached(_in const EarthView::World::Graphic::CNode *pNode);
					/// <summary>
					/// 移动节点
					/// </summary>
					/// <param name="pNode"></param>
					/// <returns></returns>
					virtual void nodeMoved(_in const EarthView::World::Graphic::CNode *pNode);
                };
				/// <summary>
				/// 节点监听器容器
				/// 
				/// </summary>
				class EV_GRAPHIC_DLL NodeListenerVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Graphic::CNode::CNodeListener*> InternalList;
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
					/// <param name="pos">迭代器</param>
					/// <param name="t">Handle标识</param>
					/// <returns>插入后的键值对</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Graphic::CNode::CNodeListener* const &ref_t);

				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					NodeListenerVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					NodeListenerVector();
					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Graphic::CNode::CNodeListener* const &ref_t);
					/// <summary>
					/// 删除最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回第一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个元素值</returns>
					EarthView::World::Graphic::CNode::CNodeListener*& front();
					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Graphic::CNode::CNodeListener*& back();
					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Graphic::CNode::CNodeListener*& at(_in ev_uint32 pos);

					EarthView::World::Graphic::CNode::CNodeListener* const &at(_in ev_uint32 pos) const;
					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CNode::CNodeListener* const &ref_t);
					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 返回容器中元素数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器中元素数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器大小
					/// </summary>
					/// <param name="newSize">容器大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					void reserve(ev_size_t count);
				};
                /** Inner class for displaying debug renderable for CNode. */
                /// <summary>
                /// 内部类
                /// 显示调试渲染节点信息
                /// </summary>
                class EV_GRAPHIC_DLL CDebugRenderable : public EarthView::World::Graphic::CRenderable
                {
                protected:
                    EarthView::World::Graphic::CNode *mParent;
                    CMeshPtr mMeshPtr;
                    EarthView::World::Graphic::CMaterialPtr mMat;
                    Real mScaling;
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent"></param>
                    /// <returns></returns>
                    CDebugRenderable( EarthView::World::Graphic::CNode *ref_parent);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~CDebugRenderable();
                    /// <summary>
                    /// 获得材质信息
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>材质</returns>
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    /// <summary>
                    /// 获得渲染操作信息
                    /// </summary>
                    /// <param name="op">渲染操作</param>
                    /// <returns></returns>
                    void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                    /// <summary>
                    /// 获得世界坐标转换矩阵信息
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    /// <summary>
                    /// 获得摄像机视场的大小
                    /// </summary>
                    /// <param name="cam">摄像机视场</param>
                    /// <returns>视场大小的值</returns>
                    Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                    /// <summary>
                    /// 获得光照信息
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>光照列表</returns>
                    const EarthView::World::Graphic::LightList &getLights() const;
                    /// <summary>
                    /// 设置比例
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void setScaling(_in Real s);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CDebugRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    /// <summary>
                    /// 初始化
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void init();
                };
				//public:
				//	mutable EarthView::World::Spatial::Math::CMatrix4 mMatrix;
				//mutable EarthView::World::Spatial::Math::CMatrix4 mDerivedMatrix;
            protected:
				ev_bool mbIsXSpecialVersion;
				//ev_bool mbHasSetLocalMatrix;
                //// Pointer to parent node
                EarthView::World::Graphic::CNode *mParent;
                //// Collection of pointers to direct children; EarthView::World::Core::hashmap for efficiency
                EarthView::World::Graphic::CNode::ChildNodeMap mChildren;
                typedef set<EarthView::World::Graphic::CNode *> ChildUpdateSet;
                //// List of children which need updating, used if self is not out of date but children are
                mutable ChildUpdateSet mChildrenToUpdate;
                //// Flag to indicate own transform from parent is out of date
                mutable ev_bool mNeedParentUpdate;
                //// Flag indicating that all children need to be updated
                mutable ev_bool mNeedChildUpdate;
                //// Flag indicating that parent has been notified about update request
                mutable ev_bool mParentNotified ;
                //// Flag indicating that the node has been queued for update
                mutable ev_bool mQueuedForUpdate;
                //// Friendly name of this node, can be automatically generated if you don't care
                EVString mName;
                //// Incremented count for next name extension
                static CNameGenerator msNameGenerator;
                //// Stores the orientation of the node relative to it's parent.
                EarthView::World::Spatial::Math::CQuaternion mOrientation;
                //// Stores the position/translation of the node relative to its parent.
                EarthView::World::Spatial::Math::CVector3 mPosition;
                //// Stores the scaling factor applied to this node
                EarthView::World::Spatial::Math::CVector3 mScale;
                //// Stores whether this node inherits orientation from it's parent
                ev_bool mInheritOrientation;
                //// Stores whether this node inherits scale from it's parent
                ev_bool mInheritScale;

				mutable EarthView::World::Core::CRecursiveMutex mListenerLocker;

                /** Cached combined orientation.
                @par
                This member is the orientation derived by combining the
                local transformations and those of it's parents.
                This is updated when _updateFromParent is called by the
                CSceneManager or the nodes parent.
                */
                mutable EarthView::World::Spatial::Math::CQuaternion mDerivedOrientation;
                /** Cached combined position.
                @par
                This member is the position derived by combining the
                local transformations and those of it's parents.
                This is updated when _updateFromParent is called by the
                CSceneManager or the nodes parent.
                */
                mutable EarthView::World::Spatial::Math::CVector3 mDerivedPosition;
                /** Cached combined scale.
                @par
                This member is the position derived by combining the
                local transformations and those of it's parents.
                This is updated when _updateFromParent is called by the
                CSceneManager or the nodes parent.
                */
                mutable EarthView::World::Spatial::Math::CVector3 mDerivedScale;

				static  EarthView::World::Core::CRecursiveMutex msQueuedUpdatesLocker;
				static  EarthView::World::Core::CRecursiveMutex mThreadLocker;

				static  ev_bool mbSupportedMultiThread;
				ev_bool mbLockClassForThread;				

            ev_internal:
                /** Triggers the node to update it's combined transforms.
                @par
                This method is called internally by EV_World to ask the node
                to update it's complete transformation based on it's parents
                derived transform.
                */
                virtual void _updateFromParent() const;
                //// Only available internally - notification of parent.
                virtual void setParent( EarthView::World::Graphic::CNode *ref_parent);
                /** Class-specific implementation of _updateFromParent.
                @remarks
                Splitting the implementation of the update away from the update call
                itself allows the detail to be overridden without disrupting the
                general sequence of updateFromParent (e.g. raising events)
                */
                virtual void updateFromParentImpl() const;

                /** Internal method for creating a new child node - must be overridden per subclass. */
                virtual EarthView::World::Graphic::CNode *createChildImpl();
                /** Internal method for creating a new child node - must be overridden per subclass. */
                virtual EarthView::World::Graphic::CNode *createChildImpl(_in const EVString &name);

				virtual void notifyMoved() const;
            protected:
                //// The position to use as a base for keyframe animation
                EarthView::World::Spatial::Math::CVector3 mInitialPosition;
                //// The orientation to use as a base for keyframe animation
                EarthView::World::Spatial::Math::CQuaternion mInitialOrientation;
                //// The scale to use as a base for keyframe animation
                EarthView::World::Spatial::Math::CVector3 mInitialScale;
                //// Cached derived transform as a 4x4 matrix
                mutable EarthView::World::Spatial::Math::CMatrix4 mCachedTransform;
                mutable ev_bool mCachedTransformOutOfDate;
                /** EarthView::World::Graphic::CNode listener - only one allowed (no list) for size & performance reasons. */
                //EarthView::World::Graphic::CNode::CNodeListener *mListener;
				NodeListenerVector mListenerVec;
                typedef vector<EarthView::World::Graphic::CNode *> QueuedUpdates;
                static QueuedUpdates msQueuedUpdates;
                EarthView::World::Graphic::CNode::CDebugRenderable *mDebug;
                //// User objects binding.
                EarthView::World::Graphic::CUserObjectBindings mUserObjectBindings;
				ev_bool mbFocusedByCamera;
            public:
                /// <summary>
                /// 构造函数
                /// 定义一个节点名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CNode();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">分配的节点名称</param>
                /// <returns></returns>
                CNode(_in const EVString &name);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNode(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CNode();

                /// <summary>
                /// 获取节点名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回节点名称</returns>
                const EVString &getName() const;
                /// <summary>
                /// 获取父节点
                /// 如果父节点为空，表示此节点为根节点
                /// </summary>
                /// <param name=""></param>
                /// <returns>父节点名称</returns>
                virtual EarthView::World::Graphic::CNode *getParent() const;
                /** Returns a quaternion representing the nodes orientation.
                */
                /// <summary>
                /// 获取四元数
                /// 表示此节点的方向
                /// </summary>
                /// <param name=""></param>
                /// <returns>四元数值</returns>
                virtual const EarthView::World::Spatial::Math::CQuaternion &getOrientation() const;
                /// <summary>
                /// 设置方向
                /// 通过四元数设置
                /// </summary>
                /// <param name="q">四元数值，节点旋转围绕着节点原点</param>
                /// <returns></returns>
                virtual void setOrientation( _in const EarthView::World::Spatial::Math::CQuaternion &q )
				{
					setOrientation(q,true);
				}
				virtual void setOrientation( _in const EarthView::World::Spatial::Math::CQuaternion &q,ev_bool notify );
                /// <summary>
                /// 设置方向
                /// 通过四元数设置
                /// </summary>
                /// <param name="w">从四个实数构造</param>
                /// <param name="x">从四个实数构造</param>
                /// <param name="y">从四个实数构造</param>
                /// <param name="z">从四个实数构造</param>
                /// <returns></returns>
                virtual void setOrientation( Real w, Real x, Real y, Real z)
				{
					setOrientation(w,x,y,z,true);
				}
				virtual void setOrientation( Real w, Real x, Real y, Real z,ev_bool notify );
                /// <summary>
                /// 重置四元数
                /// 本地坐标轴为世界坐标轴，不旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetOrientation();
                /// <summary>
                /// 设置节点位置
                /// </summary>
                /// <param name="pos">三维向量</param>
                /// <returns></returns>
                virtual void setPosition( _in const EarthView::World::Spatial::Math::CVector3 &pos)
				{
					setPosition(pos,true);
				}
				virtual void setPosition( _in const EarthView::World::Spatial::Math::CVector3 &pos,ev_bool notify);
                /// <summary>
                /// 设置节点位置
                /// </summary>
                /// <param name="x">从三个实数构造三维向量</param>
                /// <param name="y">从三个实数构造三维向量</param>
                /// <param name="z">从三个实数构造三维向量</param>
                /// <returns></returns>
                virtual void setPosition(Real x, Real y, Real z)
				{
					setPosition(x,y,z,true);
				}
				virtual void setPosition(Real x, Real y, Real z,ev_bool notify);
                /// <summary>
                /// 获得节点位置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
                /// <summary>
                ///设置缩放因子
                /// </summary>
                /// <param name="scale"></param>
                /// <returns></returns>
                virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3 &scale)
				{
					setScale(scale,true);
				}
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3 &scale,ev_bool notify);
                /// <summary>
                ///设置缩放因子
                /// </summary>
                /// <param name="x">实数</param>
                /// <param name="y">实数</param>
                /// <param name="z">实数</param>
                /// <returns></returns>
                virtual void setScale(Real x, Real y, Real z)
				{
					setScale(x,y,z,true);
				}
				virtual void setScale(Real x, Real y, Real z,ev_bool notify);
                /// <summary>
                ///获取缩放因子
                /// </summary>
                /// <param name></param>
                /// <returns>缩放因子</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getScale() const;
                /// <summary>
                /// 设置是否继承父节点的方向属性
                /// </summary>
                /// <param name="inherit">继承</param>
                /// <returns></returns>
                virtual void setInheritOrientation(ev_bool inherit);
                /// <summary>
                /// 判断是否继承父节点的方向属性
                /// </summary>
                /// <param name=""></param>
                /// <returns>继承返回true，不继承则否则返回false</returns>
                virtual ev_bool getInheritOrientation() const;
                /// <summary>
                /// 设置是否继承父节点的缩放因子
                /// </summary>
                /// <param name="inherit">继承</param>
                /// <returns></returns>
                virtual void setInheritScale(ev_bool inherit);
                /// <summary>
                /// 判断是否继承父节点的缩放因子
                /// </summary>
                /// <param name=""></param>
                /// <returns>继承返回true，不继承则否则返回false</returns>
                virtual ev_bool getInheritScale() const;
                /// <summary>
                /// 缩放因子                
                /// </summary>
                /// <param name="scale">缩放向量</param>
                /// <returns></returns>
                virtual void scale(const EarthView::World::Spatial::Math::CVector3 &scale);
                /// <summary>
                /// 缩放因子                
                /// </summary>
                /// <param name="x">常数</param>
                /// <param name="y">常数</param>
                /// <param name="z">常数</param>
                /// <returns></returns>
                virtual void scale(Real x, Real y, Real z);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="d">三维矢量</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CVector3 &d, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="d">三维矢量</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CVector3 &d);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="x">实数</param>
                /// <param name="y">实数</param>
                /// <param name="z">实数</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void translate(Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="x">实数</param>
                /// <param name="y">实数</param>
                /// <param name="z">实数</param>
                /// <returns></returns>
                virtual void translate(Real x, Real y, Real z);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="axes">三维矩阵</param>
                /// <param name="move">三维矢量</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CMatrix3 &axes, const EarthView::World::Spatial::Math::CVector3 &move, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="axes">三维矩阵</param>
                /// <param name="move">三维矢量</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CMatrix3 &axes, const EarthView::World::Spatial::Math::CVector3 &move);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="axes">三维矩阵</param>
                /// <param name="x">实数</param>
                /// <param name="y">实数</param>
                /// <param name="z">实数</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CMatrix3 &axes, Real x, Real y, Real z, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                /// <summary>
                /// 平移节点
                /// </summary>
                /// <param name="axes">三维矩阵</param>
                /// <param name="x">实数</param>
                /// <param name="y">实数</param>
                /// <param name="z">实数</param>
                /// <returns></returns>
                virtual void translate(const EarthView::World::Spatial::Math::CMatrix3 &axes, Real x, Real y, Real z);
                /// <summary>
                /// 沿Z轴旋转节点
                /// </summary>
                /// <param name="angle">弧度，角度</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void roll(const EarthView::World::Spatial::Math::CRadian &angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void roll(const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 沿X轴旋转节点
                /// </summary>
                /// <param name="angle">弧度，角度</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void pitch(const EarthView::World::Spatial::Math::CRadian &angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void pitch(const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 沿Y轴旋转节点
                /// </summary>
                /// <param name="angle">弧度，角度</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void yaw(const EarthView::World::Spatial::Math::CRadian &angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void yaw(const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 根据指定的坐标轴旋转节点
                /// </summary>
                /// <param name="axis">三维矩阵</param>
                /// <param name="angle">角度，弧度</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void rotate(const EarthView::World::Spatial::Math::CVector3 &axis, const EarthView::World::Spatial::Math::CRadian &angle, EarthView::World::Graphic::CNode::TransformSpace relativeTo);
                virtual void rotate(const EarthView::World::Spatial::Math::CVector3 &axis, const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 使用指定的四元数旋转节点
                /// </summary>
                /// <param name="q">四元数</param>
                /// <param name="relativeTo">选择哪种空间关系转换，共三种</param>
                /// <returns></returns>
                virtual void rotate(const EarthView::World::Spatial::Math::CQuaternion &q, EarthView::World::Graphic::CNode::TransformSpace relativeTo );
                virtual void rotate(const EarthView::World::Spatial::Math::CQuaternion &q);

				/// <summary>
				/// 设置世界变换矩阵
				/// </summary>
				/// <param name="mat">世界变换矩阵</param>				
				/// <returns></returns>
                virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat);
				/// <summary>
				/// 获得世界变换矩阵
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()const;

				/// <summary>
				/// 设置相对于父节点的局部变换矩阵
				/// </summary>
				/// <param name="mat">局部变换矩阵</param>				
				/// <returns></returns>
				virtual void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat);
				/// <summary>
				/// 获得相对于父节点的局部变换矩阵
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>

				virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix()const;

                /// <summary>
                /// 获取本地坐标轴
                /// 获取一个矩阵，其列是基于当前坐标系，它的节点继承他的父类。
                /// </summary>                
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const;

				/// <summary>
				/// 获取更新队列状态
				/// </summary>                
				/// <returns></returns>
				virtual ev_bool getQueuedForUpdate() const;

				/// <summary>
				/// 设置更新队列状态
				/// </summary>                
				/// <returns></returns>
				virtual ev_void setQueuedForUpdate(ev_bool bFlag);

				ev_void setThreadLockFlag(ev_bool bNeedLock);

				static EarthView::World::Core::CRecursiveMutex* getThreadLock();

				/// <summary>
				/// 针对mChildren访问的异步锁-加锁
				/// </summary>                
				/// <returns></returns>
				virtual ev_void syncVisitChildrenLock();

				/// <summary>
				/// 针对mChildren访问的异步锁-解锁
				/// </summary>                
				/// <returns></returns>
				virtual ev_void syncVisitChildrenUnLock();

                /// <summary>
                /// 创建子节点
                /// 创建一个新的节点作为当前节点的子节点
                /// </summary>
                /// <param name="translate">平移量</param>
                /// <param name="rotate">旋转四元数</param>
                /// <returns>节点</returns>
                virtual EarthView::World::Graphic::CNode *createChild(const EarthView::World::Spatial::Math::CVector3 &translate, const EarthView::World::Spatial::Math::CQuaternion &rotate);
                virtual EarthView::World::Graphic::CNode *createChild(const EarthView::World::Spatial::Math::CVector3 &translate);
                virtual EarthView::World::Graphic::CNode *createChild();
                /// <summary>
                /// 创建子节点
                /// 创建一个新的节点作为当前节点的子节点
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="translate">平移量</param>
                /// <param name="rotate">旋转四元数</param>
                /// <returns>节点</returns>
                virtual EarthView::World::Graphic::CNode *createChild(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &translate, const EarthView::World::Spatial::Math::CQuaternion &rotate);
                virtual EarthView::World::Graphic::CNode *createChild(const EVString &name, const EarthView::World::Spatial::Math::CVector3 &translate);
                virtual EarthView::World::Graphic::CNode *createChild(const EVString &name);
                
				/// <summary>
                /// 添加子节点                
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual void addChild(EarthView::World::Graphic::CNode *ref_child);

                /// <summary>
                /// 子节点数量
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>无符号的双字节整型</returns>
                virtual ev_uint16 numChildren() const;

                /// <summary>
                /// 获取子节点
                /// 获取子节点指针
                /// </summary>
                /// <param name="index">指针</param>
                /// <returns>节点指针</returns>
                virtual EarthView::World::Graphic::CNode *getChild(ev_uint16 index) const;
                /// <summary>
                /// 获取子节点
                /// 为指定名称的节点获取指针
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>节点指针</returns>
                virtual EarthView::World::Graphic::CNode *getChild(const EVString &name) const;
				
				/// <summary>
				/// 判断子节点是否存在				
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual ev_bool existChild(const EVString &name) const;

                /// <summary>
                /// 获取一个迭代器遍历此节点的所有子节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode::ChildNodeIterator getChildIterator();
                /// <summary>
                /// 获取一个迭代器遍历此节点的所有子节点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode::ConstChildNodeIterator getChildIterator() const;

                /// <summary>
                /// 检索将指定子节点从父节点分离
                /// 没有删除此子节点，在其他地方也许继续挂接
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode *removeChild(ev_uint16 index);
                /// <summary>
                /// 将指定子节点从父节点分离
                /// 没有删除此子节点，在其他地方也许继续挂接
                /// </summary>
                /// <param name="child"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode *removeChild(EarthView::World::Graphic::CNode *child);
                /// <summary>
                /// 通过名称将指定子节点从父节点分离
                /// 没有删除此子节点，在其他地方也许继续挂接
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode *removeChild(const EVString &name);
                /// <summary>
                /// 移除所有子节点
                /// 没有删除此子节点，在其他地方也许继续挂接
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void removeAllChildren();

                /// <summary>
                /// 直接设置节点累积的世界坐标                
                /// </summary>
                /// <param name="pos"></param>
                /// <returns></returns>
                virtual void _setDerivedPosition(const EarthView::World::Spatial::Math::CVector3 &pos)
				{
					_setDerivedPosition(pos,true);
				}
				virtual void _setDerivedPosition(const EarthView::World::Spatial::Math::CVector3 &pos,ev_bool notify);
                /// <summary>
                /// 直接设置节点累积的世界方向                
                /// </summary>
                /// <param name="q"></param>
                /// <returns></returns>
                virtual void _setDerivedOrientation(const EarthView::World::Spatial::Math::CQuaternion &q)
				{
					_setDerivedOrientation(q,true);
				}
				virtual void _setDerivedOrientation(const EarthView::World::Spatial::Math::CQuaternion &q,ev_bool notify);
                /// <summary>
                /// 获取节点累积的方向                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CQuaternion &_getDerivedOrientation() const;
                /// <summary>
                /// 获取节点累积的坐标                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &_getDerivedPosition() const;
                /// <summary>
                /// 获取节点累积的缩放比例                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &_getDerivedScale() const;

                /// <summary>
                /// 获取该节点累积的世界变换矩阵                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &_getFullTransform() const;
                /// <summary>
                /// 更新节点
                /// 内部方法
                /// </summary>
                /// <param name="updateChildren">为真，逐级更新所有子节点</param>
                /// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
                /// <returns></returns>
                virtual void _update(ev_bool updateChildren, ev_bool parentHasChanged);

                /// <summary>
                /// 为节点设置监听器
                /// </summary>
                /// <param name="listener"></param>
                /// <returns></returns>
                virtual void addListener(EarthView::World::Graphic::CNode::CNodeListener *listener);

				/// <summary>
				/// 移除监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual void removeListener(EarthView::World::Graphic::CNode::CNodeListener *listener);

                /// <summary>
                /// 获取节点当前的监听器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode::CNodeListener *getListener(ev_uint32 index) ;

				/// <summary>
				/// 获取监听器数目
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint32 getNumListener(ev_uint32 index) ;

                /// <summary>
                /// 设置初始状态
                /// 当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例
                /// 除非你想初始化节点，不然你可以不调用此方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setInitialState();
                /** Resets the position / orientation / scale of this node to it's initial state, see setInitialState for more info. */
                /// <summary>
                /// 重置初始状态
                /// 当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例
                /// 除非你想初始化节点，不然你可以不调用此方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetToInitialState();
                /// <summary>
                /// 设置节点初始位置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getInitialPosition() const;
                /// <summary>
                /// 世界坐标转换当地坐标
                /// 获得当前位置在所给空间中相对于这个节点的位置
                /// </summary>
                /// <param name="worldPos"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector3 convertWorldToLocalPosition( const EarthView::World::Spatial::Math::CVector3 &worldPos );
                /// <summary>
                /// 当地坐标转换世界坐标
                /// 获得当前空间下的节点的世界坐标进行简单转换，不需要此节点的子节点
                /// </summary>
                /// <param name="localPos"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector3 convertLocalToWorldPosition( const EarthView::World::Spatial::Math::CVector3 &localPos );
                /// <summary>
                /// 世界方向向量转换当地方向向量
                /// 获得当前位置方向在所给空间中相对于这个节点的位置方向
                /// </summary>
                /// <param name="worldOrientation"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CQuaternion convertWorldToLocalOrientation( const EarthView::World::Spatial::Math::CQuaternion &worldOrientation );
                /// <summary>
                /// 当前方向向量转换世界方向向量
                /// 获得当前空间下的节点的世界方向向量进行简单转换，不需要此节点的子节点
                /// </summary>
                /// <param name="worldOrientation"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CQuaternion convertLocalToWorldOrientation( const EarthView::World::Spatial::Math::CQuaternion &localOrientation );
                /// <summary>
                /// 获取节点初始方向向量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CQuaternion &getInitialOrientation() const;
                /// <summary>
                /// 获取节点初始缩放比例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getInitialScale() const;
                /// <summary>
                /// 获得摄像机视场深度的平方
                /// 帮助方法
                /// </summary>
                /// <param name="cam">摄像机视场</param>
                /// <returns>视场大小的值</returns>
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                /// <summary>
                /// 通知节点更新
                /// </summary>
                /// <param name="forceParentUpdate">默认为false，是否更新标识</param>
                /// <returns></returns>
                virtual void needUpdate(ev_bool forceParentUpdate);
                virtual void needUpdate();
                /// <summary>
                /// 通知父节点更新子节点
                /// </summary>
                /// <param name=""></param>
                /// <param name="child"></param>
                /// <param name="forceParentUpdate">默认问false</param>
                /// <returns></returns>
                virtual void requestUpdate(EarthView::World::Graphic::CNode *ref_child, ev_bool forceParentUpdate/* = false*/);
                virtual void requestUpdate(EarthView::World::Graphic::CNode *ref_child);
                /// <summary>
                /// 停止更新
                /// </summary>
                /// <param name=""></param>
                /// <param name="child"></param>
                /// <returns></returns>
                virtual void cancelUpdate(EarthView::World::Graphic::CNode *child);
                /// <summary>
                /// 获取渲染节点的渲染调试
                /// </summary>
                /// <param name="scaling"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CNode::CDebugRenderable *getDebugRenderable(Real scaling);
                /// <summary>
                /// 队列更新
                /// 场景图更新时候不能调用needUpdate()
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                static void queueNeedUpdate(EarthView::World::Graphic::CNode *ref_n);
                /// <summary>
                /// 处理队列更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void processQueuedUpdates();

                /// <summary>
                /// 返回用户对象绑定的类的一个实例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings();
                /// <summary>
                /// 返回用户对象绑定的类的一个实例
                /// 更详细见CUserObjectBindings::setUserAny
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings() const;

				/// <summary>
				/// 在当前节点下挂接一个移动对象
				/// </summary>
				/// <param name="obj">移动对象</param>
				/// <returns></returns>
				virtual void attachObject(EarthView::World::Graphic::CMovableObject *obj);
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
				/// 反挂接指定的移动对象
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
				/// 反挂接所有对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual void detachAllObjects();

				/// <summary>
				/// 通过名称删除并销毁指定子节点
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual void removeAndDestroyChild(const EVString &name);
				/// <summary>
				/// 通过检索删除并销毁指定子节点
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
				/// 设置该节点被相机聚焦，即该节点及其所有子节点上挂接的物体都不会被相机近裁剪面裁剪
				/// </summary>
				/// <param name="focused">是否被聚焦</param>
				/// <returns></returns>
				void focusByCamera(ev_bool focused);
				/// <summary>
				/// 该节点是否被相机聚焦
				/// </summary>
				/// <returns>是否被相机聚焦</returns>
				ev_bool isFocusedByCamera();
				/// <summary>
				/// 该节点是否是XSpcialVersion版本的骨骼动画节点
				/// </summary>
				/// <param name="focused">是否是XSpcialVersion版本</param>
				/// <returns></returns>
				ev_void setIsXSpecialVersionBoneNode(ev_bool isXSpecialVer);
				/// <summary>
				/// 该节点是否是XSpcialVersion版本的骨骼动画节点
				/// </summary>
				/// <returns>是否是XSpcialVersion版本</returns>
				ev_bool isXSpecialVersionBoneNode();
            ev_private:
                /// <summary>
                /// 获取在该对象上设置的任意用户值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Core::CAny &getUserAny() const;
                /// <summary>
                /// 在该对象上设置任意用户值
                /// </summary>
                /// <param name="anything"></param>
                /// <returns></returns>
                virtual void setUserAny(const EarthView::World::Core::CAny &anything);
            };
        }
    }
}

#endif

