#ifndef __RenderQueue_H__
#define __RenderQueue_H__
#include <core/memoryallocatedobject.h>
#include "core/headerprefix.h"
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCamera;
            class CMovableObject;
            class VisibleObjectsBoundsInfo;
            class CRenderQueueGroup;
            class CRenderable;
            class CTechnique;
            /***** Enumeration of queue groups, by which the application may group queued renderables
                so that they are rendered together with events in between
            @remarks
            	When passed into methods these are actually passed as a ev_uint8 to allow you
            	to use values in between if you want to.
            ****/
            enum RenderQueueGroupID
            {
                //// Use this queue for objects which must be rendered first e.g. backgrounds
                RENDER_QUEUE_BACKGROUND = 0,
                //// First queue (after backgrounds), used for skyboxes if rendered first
                RENDER_QUEUE_SKIES_EARLY = 5,
                RENDER_QUEUE_1 = 10,
                RENDER_QUEUE_2 = 20,
                RENDER_QUEUE_WORLD_GEOMETRY_1 = 25,
                RENDER_QUEUE_3 = 30,
                RENDER_QUEUE_4 = 40,
                //// The default render queue
                RENDER_QUEUE_MAIN = 50,
                RENDER_QUEUE_6 = 60,
                RENDER_QUEUE_7 = 70,
                RENDER_QUEUE_WORLD_GEOMETRY_2 = 75,
                RENDER_QUEUE_8 = 80,

				///84 - 87 用于矢量扩展的模板缓冲，用此id会产生影响

                RENDER_QUEUE_9 = 90,
				////透明物体使用的枚举
				RENDER_QUEUE_TRANSPARENT =94,
                //// Penultimate queue(before overlays), used for skyboxes if rendered last
				
                RENDER_QUEUE_SKIES_LATE = 95,
                //// Use this queue for objects which must be rendered last e.g. overlays
                RENDER_QUEUE_OVERLAY = 100,
                //// Final possible render queue, don't exceed this
                RENDER_QUEUE_MAX = 105
            };
#define EV_RENDERABLE_DEFAULT_PRIORITY  100
            /// <summary>
            /// 管理渲染队列中的场景对象
            /// </summary>
            class EV_GRAPHIC_DLL CRenderQueue : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /**** typedef map< ev_uint8, EarthView::World::Graphic::CRenderQueueGroup* > EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap;****/
                /****class EV_GRAPHIC_DLL RenderQueueGroupMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                	// <summary>
                	// 构造函数
                	// </summary>
                	// <param name="pList">构造函数参数键值对表</param>
                	// <returns></returns>
                	RenderQueueGroupMap(_in	EarthView::World::Core::CNameValuePairList*pList);
                public:
                	// <summary>
                	// 默认构造函数
                	// </summary>
                	// <param name=""></param>
                	// <returns></returns>
                	RenderQueueGroupMap();

                	// <summary>
                	// 在map容器中添加元素
                	// </summary>
                	// <param name="key">键</param>
                	// <param name="val">值</param>
                	// <returns>成功增加true，否则false</returns>
                	ev_bool push(const ev_uint8& key,EarthView::World::Graphic::CRenderQueueGroup* const & val);

                	// <summary>
                	// 判断元素是否存在
                	// </summary>
                	// <param name="key">键</param>
                	// <returns>存在true，否则false</returns>
                	ev_bool exist(const ev_uint8& key);

                	// <summary>
                	// 符号"[]"的重载
                	// </summary>
                	// <param name="key">键</param>
                	// <returns>返回键对应的值</returns>
                	EarthView::World::Graphic::CRenderQueueGroup*& operator[](const ev_uint8& key);

                	// <summary>
                	// 获得键对应的值
                	// </summary>
                	// <param name="key">键</param>
                	// <returns>返回键对应的值</returns>
                	EarthView::World::Graphic::CRenderQueueGroup*& get(const ev_uint8& key);

                	// <summary>
                	// 删除键对应的值
                	// </summary>
                	// <param name="key">键</param>
                	// <returns></returns>
                	void erase(const ev_uint8& key);

                	// <summary>
                	// 返回容器的大小
                	// </summary>
                	// <param name=""></param>
                	// <returns>容器的大小</returns>
                	ev_size_t size() const;

                	// <summary>
                	// 清空容器
                	// </summary>
                	// <param name=""></param>
                	// <returns></returns>
                	void clear();

                	// <summary>
                	// 判断容器是否为空
                	// </summary>
                	// <param name=""></param>
                	// <returns>容器为空返回true，否则false</returns>
                	ev_bool empty() const;

                ev_private:
                	typedef map<ev_uint8,EarthView::World::Graphic::CRenderQueueGroup*> InternalList;
                	typedef InternalList::iterator iterator;
                	typedef InternalList::const_iterator const_iterator;
                	typedef InternalList::reverse_iterator reverse_iterator;
                	typedef InternalList::const_reverse_iterator const_reverse_iterator;
                	typedef InternalList::mapped_type mapped_type;
                	typedef InternalList::key_type key_type;
                	typedef InternalList::value_type value_type;
                	typedef pair<InternalList::iterator, bool> _Pairib;

                	RESERVE_CONTAINER_FUNCTION_MAP(mList);// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)

                	// <summary>
                	// 容器中插入元素
                	// </summary>
                	// <param name="val">值</param>
                	// <returns>插入后的键值对</returns>
                	_Pairib insert(const value_type& val);

                	// <summary>
                	// 查找元素
                	// </summary>
                	// <param name="key">键</param>
                	// <returns>返回指向该元素的迭代器</returns>
                	iterator find(const ev_uint8& key);

                	// <summary>
                	// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                	// </summary>
                	// <param name="key">键</param>
                	// <returns>返回指向该元素的迭代器</returns>
                	const_iterator find(const ev_uint8& key) const;

                private:
                	InternalList mList;

                };****/
                ///zxt updatefor v1.8
                class EV_GRAPHIC_DLL RenderQueueGroupMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    RenderQueueGroupMap( _in EarthView::World::Core::CNameValuePairList *pList );
                public:
                    class EV_GRAPHIC_DLL RenderQueueGroupPair : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        RenderQueueGroupPair(_in EarthView::World::Core::CNameValuePairList *pList)
                            : first( pList && pList->Exist("f") ? *(ev_uint8 *)pList->GetAt("f") : 0),
                              second( pList && pList->Exist("ref_s") ? (EarthView::World::Graphic::CRenderQueueGroup *)pList->GetAt("ref_s") : 0)
                        {
                        }
                    public:
                        RenderQueueGroupPair(ev_uint8 f, EarthView::World::Graphic::CRenderQueueGroup *ref_s) : first(f), second(ref_s)
                        {
                        }
                        RenderQueueGroupPair() : first(0), second(0)
                        {
                        }
                        ev_uint8 first;
                        EarthView::World::Graphic::CRenderQueueGroup *second;
                    };
                    class EV_GRAPHIC_DLL RenderQueueGroupIterator : public EarthView::World::Core::CBaseObject
                    {
                        friend class RenderQueueGroupMap;
                    ev_private:
                        RenderQueueGroupIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                            : mRenderQueueGroupMap( pList && pList->Exist("ref_renderQueueGroupMap") ? (RenderQueueGroupMap *)pList->GetAt("ref_renderQueueGroupMap") : 0),
                              mIndex( pList && pList->Exist("index") ? *(ev_uint8 *)pList->GetAt("index") : 0)
                        {
                        }
                    public:
                        RenderQueueGroupIterator() : mRenderQueueGroupMap(0), mIndex(RENDER_QUEUE_MAX)
                        {
                        }
                        RenderQueueGroupIterator(const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *ref_renderQueueGroupMap, ev_uint8 index) : mRenderQueueGroupMap(ref_renderQueueGroupMap), mIndex(index)
                        {
                        }
                    ev_private:
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &operator*() const
                        {
                            assert(this->mRenderQueueGroupMap);
                            return mRenderQueueGroupMap->mGroupVector[mIndex];
                        }
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *operator->() const
                        {
                            assert(this->mRenderQueueGroupMap);
                            return &(mRenderQueueGroupMap->mGroupVector[mIndex]);
                        }
                    public:
                        EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &operator++()
                        {
                            assert(this->mRenderQueueGroupMap);
                            while(mIndex < mRenderQueueGroupMap->mMaxID)
                            {
                                ++mIndex;
                                if(mRenderQueueGroupMap->mGroupVector[mIndex].second != 0)
                                {
                                    break;
                                }
                            }
                            return (*this);
                        }
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &operator++()const
                        {
                            assert(this->mRenderQueueGroupMap);
                            while(mIndex < mRenderQueueGroupMap->mMaxID)
                            {
                                ++mIndex;
                                if(mRenderQueueGroupMap->mGroupVector[mIndex].second != 0)
                                {
                                    break;
                                }
                            }
                            return (*this);
                        }
                        EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator operator++(int)
                        {
                            assert(this->mRenderQueueGroupMap);
                            EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator temp = *this;
                            while(mIndex < mRenderQueueGroupMap->mMaxID)
                            {
                                ++mIndex;
                                if(mRenderQueueGroupMap->mGroupVector[mIndex].second != 0)
                                {
                                    break;
                                }
                            }
                            return (temp);
                        }
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator operator++(int)const
                        {
                            assert(this->mRenderQueueGroupMap);
                            const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator temp = *this;
                            while(mIndex < mRenderQueueGroupMap->mMaxID)
                            {
                                ++mIndex;
                                if(mRenderQueueGroupMap->mGroupVector[mIndex].second != 0)
                                {
                                    break;
                                }
                            }
                            return (temp);
                        }
                        bool operator !=(const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &o)const
                        {
                            assert(mRenderQueueGroupMap);
                            assert(o.mRenderQueueGroupMap);
                            assert(o.mRenderQueueGroupMap == this->mRenderQueueGroupMap);
                            if( o.mIndex != this->mIndex)
                                return true;
                            return false;
                        }
                        bool operator ==(const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &o)const
                        {
                            assert(this->mRenderQueueGroupMap);
                            assert(o.mRenderQueueGroupMap);
                            assert(o.mRenderQueueGroupMap == this->mRenderQueueGroupMap);
                            if(o.mIndex == this->mIndex)
                            {
                                return true;
                            }
                            return false;
                        }
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getValue();

                    protected:
                        const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *mRenderQueueGroupMap;
                        mutable ev_uint8 mIndex;
                    };
                ev_private:
                    typedef EarthView::World::Graphic::CRenderQueueGroup *mapped_type;
                    typedef EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &reference;
                    typedef EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pointer;
                    typedef EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair PairTYpe;
                    typedef EarthView::World::Graphic::CRenderQueueGroup *value_type;
                    typedef ev_uint8 key_type;
                    typedef EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator iterator;
                    typedef const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator const_iterator;
                    typedef const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &const_reference;
                    typedef const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *const_pointer;
                    typedef vector<EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair> GroupVector;
                public:

                    RenderQueueGroupMap() : mMinID(RENDER_QUEUE_MAX), mMaxID(RENDER_QUEUE_MAX)
                    {
                        mGroupVector.resize(RENDER_QUEUE_MAX + 2);
                    }
                    void insert(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair v)
                    {
                        mGroupVector[v.first] = v;
                        if(v.first < mMinID)
                        {
                            mMinID = v.first;
                        }
                        if(v.first >= mMaxID || mMaxID == RENDER_QUEUE_MAX)
                        {
                            mMaxID = v.first + 1;
                        }
                    }
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator find(ev_uint8 key)
                    {
                        if(mGroupVector[key].second == 0)
                        {
                            return RenderQueueGroupIterator(this, mMaxID);
                        }
                        else
                        {
                            return RenderQueueGroupIterator(this, key);
                        }
                    }
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator begin()
                    {
                        return RenderQueueGroupIterator(this, mMinID);
                    }
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator end()
                    {
                        return RenderQueueGroupIterator(this, mMaxID);
                    }
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator begin() const
                    {
                        return RenderQueueGroupIterator(this, mMinID);
                    }
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator end() const
                    {
                        return RenderQueueGroupIterator(this, mMaxID);
                    }
                    void clear()
                    {
                        mGroupVector.reserve(RENDER_QUEUE_MAX + 2);
                        mGroupVector.clear();
                        mGroupVector.resize(RENDER_QUEUE_MAX + 2);
                        mMinID = RENDER_QUEUE_MAX;
                        mMaxID = RENDER_QUEUE_MAX;
                    }
                protected:
                    ev_uint8 mMinID;
                    ev_uint8 mMaxID;
                    GroupVector mGroupVector;
                };

                //// Iterator over queue groups
                /****typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap> EarthView::World::Graphic::CRenderQueue::QueueGroupIterator;****/
                ///class EV_GRAPHIC_DLL RenderQueueGroupPair : public EarthView::World::Core::CBaseObject
                ///{
                ///      ev_private:
                ///	// <summary>
                ///	// 构造函数
                ///	// </summary>
                ///	// <param name="pList">构造函数参数键值对表</param>
                ///	// <returns></returns>
                ///	RenderQueueGroupPair(_in	EarthView::World::Core::CNameValuePairList*pList);
                ///public:
                ///	// <summary>
                ///	// 默认构造函数
                ///	// </summary>
                ///	// <param name=""></param>
                ///	// <returns></returns>
                ///	RenderQueueGroupPair();
                ///	ev_uint8 first;
                ///	EarthView::World::Graphic::CRenderQueueGroup* second;
                ///};
                class EV_GRAPHIC_DLL QueueGroupIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRenderQueue::QueueGroupIterator &operator=(_in const EarthView::World::Graphic::CRenderQueue::QueueGroupIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    QueueGroupIterator(const_iterator first, const_iterator last);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    QueueGroupIterator(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    QueueGroupIterator(const QueueGroupIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~QueueGroupIterator();
                ev_private:
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
                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current()
                    {
                        return mIterator->current();
                    }
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    QueueGroupIterator(_in	EarthView::World::Core::CNameValuePairList *pList);
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
                    EarthView::World::Graphic::CRenderQueueGroup *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CRenderQueueGroup **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderQueueGroup *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mBeginPair;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mCurrentPair;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mEndPair;
                    EarthView::World::Graphic::CRenderQueueGroup *mptr;
                    ValueType mvt;
                };
                /****typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap> EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator;****/
                class EV_GRAPHIC_DLL ConstQueueGroupIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap> InternalIterator;
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
                    ConstQueueGroupIterator(const_iterator first, const_iterator last);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    ConstQueueGroupIterator(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ConstQueueGroupIterator(const ConstQueueGroupIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ConstQueueGroupIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator &operator=(_in const EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator &other);
                ev_private:
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
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ConstQueueGroupIterator(_in EarthView::World::Core::CNameValuePairList *pList);
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
                    EarthView::World::Graphic::CRenderQueueGroup *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CRenderQueueGroup **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderQueueGroup *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mBeginPair;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mCurrentPair;
                    EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair mEndPair;
                    EarthView::World::Graphic::CRenderQueueGroup *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 监听被加入渲染队列中的消息
                /// </summary>
                class EV_GRAPHIC_DLL CRenderableListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CRenderableListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CRenderableListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CRenderableListener();
                    /// <summary>
                    /// 当渲染接口被加到队列中时调用该方法
                    /// </summary>
                    /// <param name="rend">渲染接口</param>
                    /// <param name="groupID">渲染队列的ID号</param>
                    /// <param name="priority">渲染接口给的优先权</param>
                    /// <param name="ppTech">技术指针的指针</param>
                    /// <param name="pQueue">加入对象指向渲染队列的指针</param>
                    /// <returns>允许渲染接口加入队列时返回true，否则返回false</returns>
                    virtual ev_bool renderableQueued(  EarthView::World::Graphic::CRenderable *rend, ev_uint8 groupID,
                                                       ev_uint16 priority, _inout EarthView::World::Graphic::CTechnique **ppTech, EarthView::World::Graphic::CRenderQueue *pQueue);
                };
            protected:
                EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap mGroups;
                //// The current default queue group
                ev_uint8 mDefaultQueueGroup;
                //// The default priority
                ev_uint16 mDefaultRenderablePriority;
                ev_bool mSplitPassesByLightingType;
                ev_bool mSplitNoShadowPasses;
                ev_bool mShadowCastersCannotBeReceivers;
				ev_bool mbExistRenderable;
                EarthView::World::Graphic::CRenderQueue::CRenderableListener *mRenderableListener;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderQueue( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderQueue();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderQueue();
                /// <summary>
                /// 清空队列
                /// </summary>
                /// <param name="destroyPassMaps"></param>
                /// <returns></returns>
                void clear(ev_bool destroyPassMaps);
                /// <summary>
                /// 清空队列
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 获得渲染队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueGroup *getQueueGroup(ev_uint8 qid);
                /// <summary>
                /// 向队列中添加一个渲染对象
                /// </summary>
                /// <param name="pRend">指针指向添加到队列中的对象</param>
                /// <param name="groupID">组的ID号</param>
                /// <param name="priority">队列组中渲染对象的属性</param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CRenderable *ref_pRend, ev_uint8 groupID, ev_uint16 priority);
                /// <summary>
                /// 向队列中添加一个渲染对象
                /// </summary>
                /// <param name="pRend">指针指向添加到队列中的对象</param>
                /// <param name="groupID">组的ID号</param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CRenderable *ref_pRend, ev_uint8 groupId);
                /// <summary>
                /// 向队列中添加一个渲染对象
                /// </summary>
                /// <param name="pRend">指针指向添加到队列中的对象</param>
                /// <returns></returns>
                void addRenderable( EarthView::World::Graphic::CRenderable *ref_pRend);
				/// <summary>
				/// 判断队列中是否存在渲染对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool existRenderable()const
				{
					return mbExistRenderable;
				}
                /// <summary>
                /// 获得当前默认的队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint8 getDefaultQueueGroup() const;
                /// <summary>
                /// 设置当前默认的渲染属性
                /// </summary>
                /// <param name="priority">渲染对象的属性</param>
                /// <returns></returns>
                void setDefaultRenderablePriority(ev_uint16 priority);
                /// <summary>
                /// 获得当前默认的渲染属性
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getDefaultRenderablePriority() const;
                /// <summary>
                /// 设置当前默认的队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setDefaultQueueGroup(ev_uint8 grp);

                /// <summary>
                /// 内部方法，返回一个队列组的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueue::QueueGroupIterator _getQueueGroupIterator();
                EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator _getQueueGroupIterator() const;
                /// <summary>
                /// 设置是否队列通过它们的光照类型划分通路
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitPassesByLightingType(ev_bool split);
                /// <summary>
                /// 获得是否队列通过它们的光照类型划分通路
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getSplitPassesByLightingType() const;
                /// <summary>
                /// 设置队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
                /// </summary>
                /// <param name="split"></param>
                /// <returns></returns>
                void setSplitNoShadowPasses(ev_bool split);
                /// <summary>
                /// 获得队列是否对有当某个阴影技术被使用时需要的阴影而已经关闭的通路进行划分划分
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getSplitNoShadowPasses() const;
                /// <summary>
                /// 设置是否投射阴影的实体被视为不接收阴影
                /// </summary>
                /// <param name="ind"></param>
                /// <returns></returns>
                void setShadowCastersCannotBeReceivers(ev_bool ind);
                /// <summary>
                /// 获得是否投射阴影的实体被视为不接收阴影
                /// </summary>
                /// <param name="ind"></param>
                /// <returns></returns>
                ev_bool getShadowCastersCannotBeReceivers() const;
                /// <summary>
                /// 在队列上设置一个渲染接口监听器
                /// </summary>
                /// <param name="listener">监听器</param>
                /// <returns></returns>
                void setRenderableListener( EarthView::World::Graphic::CRenderQueue::CRenderableListener *ref_listener);
                EarthView::World::Graphic::CRenderQueue::CRenderableListener *getRenderableListener() const;
                /// <summary>
                /// 合并渲染队列
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                void merge( const EarthView::World::Graphic::CRenderQueue *rhs );
                /// <summary>
                /// 获得一个可见的实体添加到队列中
                /// </summary>
                /// <param name="mo"></param>
                /// <param name="cam"></param>
                /// <param name="onlyShadowCasters"></param>
                /// <param name="visibleBounds"></param>
                /// <returns></returns>
                void processVisibleObject( EarthView::World::Graphic::CMovableObject *mo,
                                           EarthView::World::Graphic::CCamera *cam,
                                           ev_bool onlyShadowCasters,
                                           EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds);
            };
        }
    }
}

#include "core/headersuffix.h"
#endif

