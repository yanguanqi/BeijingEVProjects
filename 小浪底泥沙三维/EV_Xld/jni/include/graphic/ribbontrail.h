#ifndef __RibbonTrail_H__
#define __RibbonTrail_H__
#pragma once
#include "graphic/graphic_config.h"
#include "billboardchain.h"
#include "node.h"
#include <core/iteratorwrapper.h>
#include "controllermanager.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Subclass of CBillboardChain which automatically leaves a trail behind
            	one or more CNode instances.
            @remarks
            	An instance of this class will watch one or more CNode instances, and
            	automatically generate a trail behind them as they move. Because this
            	class can monitor multiple modes, it generates its own geometry in
            	world space and thus, even though it has to be attached to a CSceneNode
            	to be visible, changing the position of the scene node it is attached to
            	makes no difference to the geometry rendered.
            @par
            	The 'head' element grows smoothly in size until it reaches the required size,
            	then a new element is added. If the segment is full, the tail element
            	shrinks by the same proportion as the head grows before disappearing.
            @par
            	Elements can be faded out on a time basis, either by altering their colour
            	or altering their alpha. The width can also alter over time.
            @par
            	'v' texture coordinates are fixed at 0.0 if used, meaning that you can
            	use a 1D texture to 'smear' a colour pattern along the ribbon if you wish.
            	The 'u' coordinates are by default (0.0, 1.0), but you can alter this
            	using setOtherTexCoordRange if you wish.
            */
            /// <summary>
            /// 链状轨迹类
            /// 节点轨迹一些说明和相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CRibbonTrail : public CBillboardChain			///, public CNode::CNodeListener
            {
                friend class CRibbonTrailListener;
            public:
                /// <summary>
                /// 链状轨迹监听帧类
                /// </summary>
                class EV_GRAPHIC_DLL CRibbonTrailListener : public CNode::CNodeListener
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CRibbonTrailListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">广告板链指针</param>
                    /// <returns></returns>
                    CRibbonTrailListener(CRibbonTrail *ref_parent);
                public:
                    //// @see CNode::CNodeListener::nodeUpdated
                    /// <summary>
                    /// 节点更新
                    /// </summary>
                    /// <param name="node">节点</param>
                    /// <returns></returns>
                    void nodeUpdated(const CNode *node);
                    //// @see CNode::CNodeListener::nodeDestroyed
                    /// <summary>
                    /// 节点销毁
                    /// </summary>
                    /// <param name="node">节点</param>
                    /// <returns></returns>
                    void nodeDestroyed(const CNode *node);
                private:
                    CRibbonTrail *mParent;
                };
                const CRibbonTrailListener *getNodeListenerPtr();
                const CRibbonTrailListener &getNodeListener();
            private:
                CRibbonTrailListener *mpNodeListener;
				ev_uint32 mLastFrameNumber;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRibbonTrail(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                /** Constructor (don't use directly, use factory)
                @param name The name to give this object
                @param maxElements The maximum number of elements per chain
                @param numberOfChains The number of separate chain segments contained in this object,
                	ie the maximum number of nodes that can have trails attached
                @param useTextureCoords If true, use texture coordinates from the chain elements
                @param useVertexColours If true, use vertex colours from the chain elements (must
                	be true if you intend to use fading)
                */
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">元素链的最大存储</param>
                /// <param name="numberOfChains">链中的编号</param>
                /// <param name="useTextureCoords">是否使用纹理坐标</param>
                /// <param name="useColours">是否使用颜色</param>
                /// <returns></returns>
                CRibbonTrail(const EVString &name, ev_size_t maxElements /*= 20*/, ev_size_t numberOfChains /*= 1*/,
                             ev_bool useTextureCoords /*= true*/, ev_bool useColours /*= true*/);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">元素链的最大存储</param>
                /// <param name="numberOfChains">链中的编号</param>
                /// <param name="useTextureCoords">是否使用纹理坐标</param>
                /// <returns></returns>
                CRibbonTrail(const EVString &name, ev_size_t maxElements, ev_size_t numberOfChains,
                             ev_bool useTextureCoords);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">元素链的最大存储</param>
                /// <param name="numberOfChains">链中的编号</param>
                /// <returns></returns>
                CRibbonTrail(const EVString &name, ev_size_t maxElements , ev_size_t numberOfChains);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="maxElements">元素链的最大存储</param>
                /// <returns></returns>
                CRibbonTrail(const EVString &name, ev_size_t maxElements);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CRibbonTrail(const EVString &name);
                //// destructor
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name="nme"></param>
                /// <returns></returns>
                virtual ~CRibbonTrail();
                ///typedef vector<CNode*> NodeList;
                /// <summary>
                /// 节点列表类
                /// </summary>
                class EV_GRAPHIC_DLL NodeList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<CNode *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 在迭代器pos插入节点
                    /// </summary>
                    /// <param name="pos">迭代器标志</param>
                    /// <param name="t">节点</param>
                    /// <returns>迭代器</returns>
                    iterator insert(iterator pos, CNode *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    NodeList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    NodeList();

                    /// <summary>
                    /// 在节点列表后面增加一个节点
                    /// </summary>
                    /// <param name="t">增加的节点</param>
                    /// <returns></returns>
                    void push_back(CNode *const &ref_t);
                    /// <summary>
                    /// 删除当前节点列表最后一个节点
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void pop_back();

                    /// <summary>
                    /// 返回当前节点列表第一个节点的引用
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>第一个节点的引用</returns>
                    CNode*& front();
                    /// <summary>
                    /// 返回当前节点列表最后一个节点的引用
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>最后一个节点的引用</returns>
                    CNode*& back();
                    /// <summary>
                    /// 在当前节点列表第pos元素之后插入节点t
                    /// </summary>
                    /// <param name="pos">迭代器下标</param>
                    /// <param name="t">要插入的节点</param>
                    /// <returns></returns>
                    void insert(ev_uint32 pos, CNode *const &ref_t);
                    /// <summary>
                    /// 移除当前节点列表中的某一个节点
                    /// </summary>
                    /// <param name="pos">该移除节点所在迭代器位置</param>
                    /// <returns></returns>
                    void remove(ev_size_t pos);
                    /// <summary>
                    /// 判断当前节点列表是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>如果为空返回true，否则false</returns>
                    ev_bool empty() const;
                    CNode*& operator[](ev_size_t n);
                    CNode *const &operator[](ev_size_t n) const;
                    CNode*& at(ev_size_t n);
                    CNode *const &at(ev_size_t n) const;

                    /// <summary>
                    /// 当前节点列表存储节点的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前广告版节点的个数</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 调整节点列表存储元素的大小
                    /// </summary>
                    /// <param name="newSize">新的列表存储节点的个数</param>
                    /// <returns></returns>
                    void resize(ev_size_t newSize);
                    /// <summary>
                    /// 重置节点列表存储大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void reserve(ev_size_t count);
                    /// <summary>
                    /// 清空列表中的节点
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                };

                ///typedef EarthView::World::Core::CConstVectorIterator<NodeList> NodeIterator;
                /// <summary>
                /// 节点迭代器类
                /// </summary>
                class EV_GRAPHIC_DLL NodeIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<NodeList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef NodeList::const_iterator IteratorType;
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    NodeIterator &operator=(_in const NodeIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">开始标志</param>
                    /// <param name="last">结束标志</param>
                    /// <returns></returns>
                    NodeIterator(IteratorType start, IteratorType last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~NodeIterator();
                    /// <summary>
                    /// 查看下一个
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>所查看值的类型</returns>
                    ValueType peekNext () const;
                    /* PointerType peekNextPtr () const
                    {
                    return mIterator->peekNextPtr();
                    }*/
                    /// <summary>
                    /// 获取下一个值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>获取值的类型</returns>
                    ValueType getNext ();

                    /// <summary>
                    /// 迭代器开始
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>开始迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 迭代器结束
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>结束迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前迭代器</returns>
                    const IteratorType &current();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">参数列表</param>
                    /// <returns></returns>
                    NodeIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec">节点列表</param>
                    /// <returns></returns>
                    NodeIterator(NodeList &vec);

                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs">节点迭代器</param>
                    /// <returns></returns>
                    NodeIterator(const NodeIterator &rhs);
                    /// <summary>
                    /// 是否有更多的元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>有返回true，否则返回false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    CNode *getCurrent();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    CNode *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    CNode *getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    CNode *getEnd();
                private:
                    InternalIterator *mIterator;
                };

				/// <summary>
				/// 获取是否自动监听父节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getAutoListenToParentNode()const{return mbAutoListenParent;}

				/// <summary>
				/// 设置是否自动监听父节点
				/// 如果为true，相当于自动调用addNode一次;默认为false.
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool setAutoListenToParentNode(ev_bool autoListen);

				virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
				virtual void _notifyAttached(CNode *ref_parent, ev_bool isTagPoint);

                /** Add a node to be tracked.
                @param n The node that will be tracked.
                */
                /// <summary>
                /// 增加节点
                /// </summary>
                /// <param name="n">节点编号</param>
                /// <returns></returns>
                virtual void addNode( CNode *ref_n);
                /** Remove tracking on a given node. */
                /// <summary>
                /// 移除节点
                /// </summary>
                /// <param name="n">节点编号</param>
                /// <returns></returns>
                virtual void removeNode( CNode *n);
                /** Get an iterator over the nodes which are being tracked. */
                /// <summary>
                /// 获取节点迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual NodeIterator getNodeIterator() const;
                /** Get the chain index for a given CNode being tracked. */
                /// <summary>
                /// 对节点获取链的索引
                /// </summary>
                /// <param name="n">节点</param>
                /// <returns>节点的多少</returns>
                virtual ev_size_t getChainIndexForNode(const CNode *n);
                /** Set the length of the trail.
                @remarks
                	This sets the length of the trail, in world units. It also sets how
                	far apart each segment will be, ie length / max_elements.
                @param len The length of the trail in world units
                */
                /// <summary>
                /// 设置一个轨迹的长度
                /// </summary>
                /// <param name="len">长度</param>
                /// <returns></returns>
                virtual void setTrailLength(Real len);
                /** Get the length of the trail. */
                /// <summary>
                /// 获取一个轨迹的长度
                /// </summary>
                /// <param name=""></param>
                /// <returns>长度</returns>
                virtual Real getTrailLength() const;
                /** @copydoc CBillboardChain::setMaxChainElements */
                /// <summary>
                /// 设置最大链的元素大小
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setMaxChainElements(ev_size_t maxElements);
                /** @copydoc CBillboardChain::setNumberOfChains */
                /// <summary>
                /// 设置链的编号
                /// </summary>
                /// <param name="numChains">编号</param>
                /// <returns></returns>
                void setNumberOfChains(ev_size_t numChains);
                /** @copydoc CBillboardChain::clearChain */
                /// <summary>
                /// 清空链中的元素
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <returns></returns>
                void clearChain(ev_size_t chainIndex);

				/// <summary>
				/// 设置判断飘带的节点是否移动的条件。
				/// </summary>
				/// <param name="distance">距离</param>
				/// <returns></returns>
				void setNeedUpdateDistance(_in Real distance);
                /** Set the starting ribbon colour for a given segment.
                @param chainIndex The index of the chain
                @param col The initial colour
                @note
                	Only used if this instance is using vertex colours.
                */
                /// <summary>
                /// 设置最初的颜色
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="col">颜色的值</param>
                /// <returns></returns>
                virtual void setInitialColour(ev_size_t chainIndex, const CColourValue &col);
                /** Set the starting ribbon colour.
                @param chainIndex The index of the chain
                @param r,b,g,a The initial colour
                @note
                	Only used if this instance is using vertex colours.
                */
                /// <summary>
                /// 设置最初的颜色
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="r">最初r颜色</param>
                /// <param name="g">最初g颜色</param>
                /// <param name="b">最初b颜色</param>
                /// <param name="a">最初a颜色</param>
                /// <returns></returns>
                virtual void setInitialColour(ev_size_t chainIndex, Real r, Real g, Real b, Real a/* = 1.0*/);
                /** Get the starting ribbon colour. */
                /// <summary>
                /// 设置最初的颜色
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="r">最初r颜色</param>
                /// <param name="g">最初g颜色</param>
                /// <param name="b">最初b颜色</param>
                /// <returns></returns>
                virtual void setInitialColour(ev_size_t chainIndex, Real r, Real g, Real b);
                /// <summary>
                /// 获取最初的颜色
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <returns></returns>
                virtual const CColourValue &getInitialColour(ev_size_t chainIndex) const;
                /** Enables / disables fading the trail using colour.
                @param chainIndex The index of the chain
                @param valuePerSecond The amount to subtract from colour each second
                */
                /// <summary>
                /// 设置颜色的改变
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="valuePerSecond">第二种颜色的值</param>
                /// <returns></returns>
                virtual void setColourChange(ev_size_t chainIndex, const CColourValue &valuePerSecond);
                /** Set the starting ribbon width in world units.
                @param chainIndex The index of the chain
                @param width The initial width of the ribbon
                */
                /// <summary>
                /// 设置最初宽度
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="width">宽度</param>
                /// <returns></returns>
                virtual void setInitialWidth(ev_size_t chainIndex, Real width);
                /** Get the starting ribbon width in world units. */
                /// <summary>
                /// 获取最初宽度
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <returns>最初宽度</returns>
                virtual Real getInitialWidth(ev_size_t chainIndex) const;

                /** Set the change in ribbon width per second.
                @param chainIndex The index of the chain
                @param widthDeltaPerSecond The amount the width will reduce by per second
                */
                /// <summary>
                /// 设置宽度的改变
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="widthDeltaPerSecond">宽度改变的值</param>
                /// <returns></returns>
                virtual void setWidthChange(ev_size_t chainIndex, Real widthDeltaPerSecond);
                /** Get the change in ribbon width per second. */
                /// <summary>
                /// 获取宽度的改变
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <returns></returns>
                virtual Real getWidthChange(ev_size_t chainIndex) const;
                /** Enables / disables fading the trail using colour.
                @param chainIndex The index of the chain
                @param r,g,b,a The amount to subtract from each colour channel per second
                */
                /// <summary>
                /// 设置颜色的改变
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <param name="r">最初r颜色</param>
                /// <param name="g">最初g颜色</param>
                /// <param name="b">最初b颜色</param>
                /// <param name="a">最初a颜色</param>
                /// <returns></returns>
                virtual void setColourChange(ev_size_t chainIndex, Real r, Real g, Real b, Real a);
                /** Get the per-second fading amount */
                /// <summary>
                /// 获取颜色值的改变
                /// </summary>
                /// <param name="chainIndex">索引</param>
                /// <returns>颜色的值</returns>
                virtual const CColourValue &getColourChange(ev_size_t chainIndex) const;

				/** Get the per-second fading amount */
				/// <summary>
				/// 设置参考速率
				/// </summary>
				/// <param name="velocity">速率</param>
				/// <returns></returns>
				virtual void setVelocity(Real velocity);

				/** Get the per-second fading amount */
				/// <summary>
				/// 获取参考速率
				/// </summary>
				/// <returns>参考速率</returns>
				virtual const Real getVelocity() const;

                //// Perform any fading / width delta required; internal method
                /// <summary>
                /// 时间系统更新
                /// </summary>
                /// <param name="time">时间</param>
                /// <returns></returns>
                virtual void _timeUpdate(Real time);
                /** Overridden from CMovableObject */
                EVString getMovableType() const;
            protected:
                //// List of nodes being trailed
                NodeList mNodeList;
                //// Mapping of nodes to chain segments
                typedef vector<ev_size_t> IndexVector;
                //// Ordered like mNodeList, contains chain index
                IndexVector mNodeToChainSegment;
                /// chains not in use
                IndexVector mFreeChains;
                /// fast lookup node->chain index
                /// we use positional map too because that can be useful
                typedef map<const CNode *, ev_size_t> NodeToChainSegmentMap;
                NodeToChainSegmentMap mNodeToSegMap;
                //// Total length of trail in world units
                Real mTrailLength;
                //// length of each element
                Real mElemLength;
                //// Squared length of each element
                Real mSquaredElemLength;

                Real mVelocity;

                typedef vector<CColourValue> ColourValueList;
                typedef vector<Real> RealList;
                //// Initial colour of the ribbon
                ColourValueList mInitialColour;
                //// fade amount per second
                ColourValueList mDeltaColour;
                //// Initial width of the ribbon
                RealList mInitialWidth;
                //// Delta width of the ribbon
                RealList mDeltaWidth;
                //// controller used to hook up frame time to fader
                CController *mFadeController;
                //// controller value for hooking up frame time to fader
                ControllerValueRealPtr mTimeControllerValue;

				ev_bool mbAutoListenParent;			
				mutable EarthView::World::Spatial::Math::CVector3 mFirstOffset;
				mutable EarthView::World::Spatial::Math::CVector3 mFirstScale;
				mutable EarthView::World::Spatial::Math::CQuaternion mFirstOrient;

				typedef map<const CNode*,ev_uint32> NodeFrameMap;
				NodeFrameMap mNodeFrameMap;

				ev_bool mNeedUpdateElement;

				EarthView::World::Spatial::Math::CVector3 mLastNodePostion;

				Real mNeedUpdateDistance;


            ev_internal:
                //// Manage updates to the time controller
                /// <summary>
                /// 管理控制
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void manageController();
                //// CNode has changed position, update
                /// <summary>
                /// 更新轨迹
                /// </summary>
                /// <param name="index">索引</param>
                /// <param name="node">节点</param>
                /// <returns></returns>
                virtual void updateTrail(ev_size_t index, const CNode *node);
                //// Reset the tracked chain to initial state
                /// <summary>
                /// 重新设置某一个节点的轨迹
                /// </summary>
                /// <param name="index">索引</param>
                /// <param name="node">节点</param>
                /// <returns></returns>
                virtual void resetTrail(ev_size_t index, const CNode *node);
                //// Reset all tracked chains to initial state
                /// <summary>
                /// 重新设置所有节点的轨迹
                /// </summary>
                /// <param name="index">索引</param>
                /// <param name="node">节点</param>
                /// <returns></returns>
                virtual void resetAllTrails();

				virtual void updateVertexBuffer(  CCamera *cam);
            };

            /** Factory object for creating CRibbonTrail instances */
            /// <summary>
            /// CRibbonTrail类工厂
            /// 定义类工厂及相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CRibbonTrailFactory : public CMovableObjectFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRibbonTrailFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">列表</param>
                /// <returns>实例</returns>
                CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRibbonTrailFactory();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CRibbonTrailFactory();

                static EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getType() const;
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">实例</param>
                /// <returns></returns>
                void destroyInstance( CMovableObject *obj);

            };
            /** @} */
            /** @} */
        }
    }
}

#endif
