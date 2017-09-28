#ifndef __Skeleton_H__
#define __Skeleton_H__
#include "graphic/graphic_config.h"
#include "resource.h"
#include <core/iteratorwrapper.h>
#include "animation.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
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
            class CBone;
            class CAnimation;
            class CAnimationStateSet;
            enum SkeletonAnimationBlendMode
            {
                //// Animations are applied by calculating a weighted average of all animations
                ANIMBLEND_AVERAGE = 0,
                //// Animations are applied by calculating a weighted cumulative total
                ANIMBLEND_CUMULATIVE = 1
            };
#define EV_MAX_NUM_BONES 1024

            class LinkedSkeletonAnimationSource;
            
			/// <summary>
			/// 骨骼类
			/// 定义和管理骨头集			
			/// </summary>
            class EV_GRAPHIC_DLL CSkeleton : public EarthView::World::Graphic::CResource
            {
                friend class CSkeletonInstance;

                //// Map to translate bone handle from one skeleton to another skeleton.
            public:
                class EV_GRAPHIC_DLL CSkeletonInternalAnimationContainer : public EarthView::World::Graphic::CAnimationContainer
                {
                private:
                    EarthView::World::Graphic::CSkeleton *mParent;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数的键值对表</param>
                    /// <returns></returns>
                    CSkeletonInternalAnimationContainer(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">构造函数的键值对表</param>
                    /// <returns></returns>
                    CSkeletonInternalAnimationContainer (CSkeleton *ref_parent);
                    /** Gets the number of animations in this container. */
                    virtual ev_uint16 getNumAnimations() const;
                    /** Retrieve an animation by index.  */
                    virtual EarthView::World::Graphic::CAnimation *getAnimation(ev_uint16 index) const;
                    /** Retrieve an animation by name. */
                    virtual EarthView::World::Graphic::CAnimation *getAnimation(const EVString &name) const;
                    /** Create a new animation with a given length owned by this container. */
                    virtual EarthView::World::Graphic::CAnimation *createAnimation(const EVString &name, Real length);
                    /** Returns whether this object contains the named animation. */
                    virtual bool hasAnimation(const EVString &name) const;
                    /** Removes an Animation from this container. */
                    virtual void removeAnimation(const EVString &name);
                };
                virtual  EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *getAnimationContainerPtr() const
                {
                    return m_pAnimationContainer;
                }
                ///virtual const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer& getAnimationContainer() {return *m_pAnimationContainer;}
                class EV_GRAPHIC_DLL BoneHandleMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<ev_uint16> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);

                    iterator insert(_in iterator pos , _in ev_uint16 const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    BoneHandleMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    BoneHandleMap() {}
                    void push_back(_in ev_uint16  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    ev_uint16 &front()
                    {
                        return mList.front();
                    }
                    ev_uint16 &back()
                    {
                        return mList.back();
                    }
                    void insert(_in ev_uint32 pos , _in ev_uint16 const &t)
                    {
                        mList.insert(begin() + pos, t);
                    }
                    void remove(_in ev_size_t pos)
                    {
                        iterator it = mList.begin();
                        it = it + pos;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    ev_uint16 &operator[](_in ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    ev_uint16 const &operator[](_in ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_uint16 &at(_in ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    ev_uint16 const &at(_in ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(_in ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void reserve(_in ev_size_t count)
                    {
                        mList.reserve(count);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };

            ev_private:
                CSkeleton(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *m_pAnimationContainer;
            public:
                //// Internal constructor for use by CSkeletonInstance only
                CSkeleton();
                /** Constructor, don't call directly, use CSkeletonManager.
                @remarks
                On creation, a EarthView::World::Graphic::CSkeleton has a no bones, you should create them and link
                them together appropriately.
                */
                CSkeleton( _in EarthView::World::Graphic::CResourceManager *ref_creator, _in const EVString &name, _in ResourceHandle handle,
                           _in const EVString &group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CSkeleton( _in EarthView::World::Graphic::CResourceManager *ref_creator, _in const EVString &name, _in ResourceHandle handle,
                           _in const EVString &group, _in ev_bool isManual);
                CSkeleton( _in EarthView::World::Graphic::CResourceManager *ref_creator, _in const EVString &name, _in ResourceHandle handle, _in const EVString &group);
                virtual ~CSkeleton();

                
				/// <summary>
				/// 创建新骨头
				/// 若不命名，则内部对其自动命名
				/// 此骨头未被挂接在其它骨头上，除非此骨头作为根骨头，否则后续需要将其挂接到某个骨头上
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CBone *createBone();                
                virtual EarthView::World::Graphic::CBone *createBone(_in ev_uint16 handle);
                virtual EarthView::World::Graphic::CBone *createBone(_in const EVString &name);                
                virtual EarthView::World::Graphic::CBone *createBone(_in const EVString &name, _in ev_uint16 handle);

				/// <summary>
				/// 获得骨头的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ev_uint16 getNumBones() const;
                
				/// <summary>
				/// 获得根骨头(第一个没有父骨头的骨头)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CBone *getRootBone() const;

                class EV_GRAPHIC_DLL BoneList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CBone *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);

                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CBone *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    BoneList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    BoneList() {}
                    void push_back(_in EarthView::World::Graphic::CBone  *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CBone*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CBone*& back()
                    {
                        return mList.back();
                    }
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CBone *const &ref_t)
                    {
                        mList.insert(begin() + pos, ref_t);
                    }
                    void remove(_in ev_size_t pos)
                    {
                        iterator it = mList.begin();
                        it = it + pos;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    EarthView::World::Graphic::CBone*& operator[](_in ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CBone *const &operator[](_in ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CBone*& at(_in ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CBone *const &at(_in ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(_in ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void reserve(_in ev_size_t count)
                    {
                        mList.reserve(count);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                ///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CSkeleton::BoneList> EarthView::World::Graphic::CSkeleton::BoneIterator;
                class EV_GRAPHIC_DLL BoneIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CSkeleton::BoneList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef BoneList::iterator IteratorType;
                    BoneIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CSkeleton::BoneIterator &operator=(_in const EarthView::World::Graphic::CSkeleton::BoneIterator &other)
                    {
                        if ( &other == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }
                    ~BoneIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    ValueType peekNext () const
                    {
                        return mIterator->peekNext();
                    }
                    PointerType peekNextPtr ()  const
                    {
                        return mIterator->peekNextPtr();
                    }
                    ValueType getNext ()
                    {
                        return mIterator->getNext();
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                ev_private:
                    BoneIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList && pList->Count() > 0)
                        {
                            if (pList->Exist("vec"))
                            {
                                EarthView::World::Graphic::CSkeleton::BoneList &vec = *(EarthView::World::Graphic::CSkeleton::BoneList *)pList->GetAt("vec");
                                mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                            }
                            else if (pList->Exist("rhs"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(*(EarthView::World::Graphic::CSkeleton::BoneIterator *)pList->GetAt("rhs")).mIterator);
                            }
                        }
                    }
                public:
                    BoneIterator(_in EarthView::World::Graphic::CSkeleton::BoneList &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }

                    BoneIterator(_in const BoneIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    EarthView::World::Graphic::CBone *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CBone *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CBone *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CBone *getEnd()
                    {
                        return *mIterator->begin();
                    }
                private:
                    InternalIterator *mIterator;
                };
                
				/// <summary>
				/// 获得根骨头的迭代器
				/// 没有挂接在其它骨头下的骨头都认为是根骨头
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CSkeleton::BoneIterator getRootBoneIterator();
                
				/// <summary>
				/// 获得骨头的迭代器				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CSkeleton::BoneIterator getBoneIterator();
                
				/// <summary>
				/// 获得骨头
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CBone *getBone(_in ev_uint16 handle) const;
                virtual EarthView::World::Graphic::CBone *getBone( _in const EVString &name) const;

				/// <summary>
				/// 判断给定名称的骨头是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ev_bool hasBone( _in const EVString &name) const;
                
				/// <summary>
				/// 将骨头的当前姿态置为绑定姿态
				/// 后续即便骨头的姿态改变，亦可取得此姿态
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual void setBindingPose();
                
				/// <summary>
				/// 将骨头的姿态恢复到绑定姿态				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual void reset(_in ev_bool resetManualBones);
                virtual void reset();
                
				/// <summary>
				/// 创建动画				
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="length">动画时长(单位为秒)</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimation *createAnimation( _in const EVString &name, _in Real length);
                
				/// <summary>
				/// 获得给定名称的动画				
				/// </summary>
				/// <param name="name">名称</param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimation *getAnimation( _in const EVString &name,
                                                  _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker) const;
                virtual EarthView::World::Graphic::CAnimation *getAnimation( _in const EVString &name) const;
                //// Internal accessor for animations (returns null if animation does not exist)
                virtual EarthView::World::Graphic::CAnimation *_getAnimationImpl( _in const EVString &name,
                                                       _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker) const;
                virtual EarthView::World::Graphic::CAnimation *_getAnimationImpl( _in const EVString &name) const;
                
				/// <summary>
				/// 判断给定名称的动画是否存在
				/// </summary>
				/// <param name="name">名称</param>				
				/// <returns></returns>
                virtual ev_bool hasAnimation( _in const EVString &name) const;
                
				/// <summary>
				/// 移除给定名称的动画
				/// </summary>
				/// <param name="name">名称</param>				
				/// <returns></returns>
                virtual void removeAnimation( _in const EVString &name);
                
				/// <summary>
				/// 设置动画状态集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setAnimationState( _in const EarthView::World::Graphic::CAnimationStateSet &animSet);

				/// <summary>
				/// 初始化动画状态集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _initAnimationState(_in EarthView::World::Graphic::CAnimationStateSet *animSet);
                
				/// <summary>
				/// 更新动画状态集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _refreshAnimationState(_in EarthView::World::Graphic::CAnimationStateSet *animSet);          
                
                
            public:
				/// <summary>
				/// 获得骨头矩阵
				/// 要求数组长度不小于与骨头数量
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual void _getBoneMatrices(_in EarthView::World::Spatial::Math::CMatrix4 *pMatrices);
                virtual void _getBoneMatrices(_in EarthView::World::Spatial::Math::CMatrix4 *pMatrices, _in ev_uint32 index);
                
				/// <summary>
				/// 获得动画数量				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_uint16 getNumAnimations() const;
                
				/// <summary>
				/// 获得动画			
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimation *getAnimation(_in ev_uint16 index) const;

				/// <summary>
				/// 获得骨骼动画混合方式			
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::SkeletonAnimationBlendMode getBlendMode() const;
				/// <summary>
				/// 设置骨骼动画混合方式			
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setBlendMode(_in EarthView::World::Graphic::SkeletonAnimationBlendMode state);
				/// <summary>
				/// 更新骨头的姿态			
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _updateTransforms();
                /** Optimise all of this skeleton's animations.
                @see CAnimation::optimise
                @param
                preservingIdentityNodeTracks If true, don't destroy identity node tracks.
                */
                virtual void optimiseAllAnimations(_in ev_bool preservingIdentityNodeTracks);
                virtual void optimiseAllAnimations();
                /** Allows you to use the animations from another EarthView::World::Graphic::CSkeleton object to animate
                this skeleton.
                @remarks
                If you have skeletons of identical structure (that means identically
                named bones with identical handles, and with the same hierarchy), but
                slightly different proportions or binding poses, you can re-use animations
                from one in the other. Because animations are actually stored as
                changes to bones from their bind positions, it's possible to use the
                same animation data for different skeletons, provided the skeletal
                structure matches and the 'deltas' stored in the keyframes apply
                equally well to the other skeletons bind position (so they must be
                roughly similar, but don't have to be identical). You can use the
                'scale' option to adjust the translation and scale keyframes where
                there are large differences in size between the skeletons.
                @note
                This method takes a skeleton name, rather than a more specific
                animation name, for two reasons; firstly it allows some validation
                of compatibility of skeletal structure, and secondly skeletons are
                the unit of loading. Linking a skeleton to another in this way means
                that the linkee will be prevented from being destroyed until the
                linker is destroyed.

                You cannot set up cyclic relationships, e.g. SkeletonA uses SkeletonB's
                animations, and SkeletonB uses SkeletonA's animations. This is because
                it would set up a circular dependency which would prevent proper
                unloading - make one of the skeletons the 'master' in this case.
                @param skelName Name of the skeleton to link animations from. This
                skeleton will be loaded immediately if this skeleton is already
                loaded, otherwise it will be loaded when this skeleton is.
                @param scale A scale factor to apply to translation and scaling elements
                of the keyframes in the other skeleton when applying the animations
                to this one. Compensates for skeleton size differences.
                */
                virtual void addLinkedSkeletonAnimationSource( _in const EVString &skelName,
                        _in Real scale);
                virtual void addLinkedSkeletonAnimationSource( _in const EVString &skelName);
                //// Remove all links to other skeletons for the purposes of sharing animation
                virtual void removeAllLinkedSkeletonAnimationSources();
                class EV_GRAPHIC_DLL LinkedSkeletonAnimSourceList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::LinkedSkeletonAnimationSource> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);

                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::LinkedSkeletonAnimationSource const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    LinkedSkeletonAnimSourceList(_in EarthView::World::Core::CNameValuePairList *pList) {}

                public:
                    LinkedSkeletonAnimSourceList() {}
                    void push_back(_in EarthView::World::Graphic::LinkedSkeletonAnimationSource  const &t);
                    void pop_back();

                    EarthView::World::Graphic::LinkedSkeletonAnimationSource &front();
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource &back();
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::LinkedSkeletonAnimationSource const &t);
                    void remove(_in ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource &operator[](_in ev_size_t n);
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource const &operator[](_in ev_size_t n) const;
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource &at(_in ev_size_t n);
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource const &at(_in ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(_in ev_size_t newSize);
                    void reserve(_in ev_size_t count);
                    void clear();
                };
                ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList>EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator;
                class EV_GRAPHIC_DLL LinkedSkeletonAnimSourceIterator: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList> InternalIterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    LinkedSkeletonAnimSourceIterator(_in _in IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator &operator=(_in const EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator &other)
                    {
                        if ( &other == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }
                    ~LinkedSkeletonAnimSourceIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    ValueType peekNext () const;
                    ValueType getNext ();

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                ev_private:
                    LinkedSkeletonAnimSourceIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList && pList->Count() > 0)
                        {
                            if (pList->Exist("vec"))
                            {
                                EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList &vec = *(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *)pList->GetAt("vec");
                                mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                            }
                            else if (pList->Exist("rhs"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(*(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *)pList->GetAt("rhs")).mIterator);
                            }
                        }
                    }
                public:
                    LinkedSkeletonAnimSourceIterator(_in EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }

                    LinkedSkeletonAnimSourceIterator(_in const LinkedSkeletonAnimSourceIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource getCurrent();
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource next();
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource getBegin();
                    EarthView::World::Graphic::LinkedSkeletonAnimationSource getEnd();
                private:
                    InternalIterator *mIterator;
                };
                //// Get an iterator over the linked skeletons used as animation sources
                virtual EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator
                getLinkedSkeletonAnimationSourceIterator() const;
                //// Internal method for marking the manual bones as dirty
                virtual void _notifyManualBonesDirty();
                //// Internal method for notifying that a bone is manual
                virtual void _notifyManualBoneStateChange(_in EarthView::World::Graphic::CBone *ref_bone);
                //// Have manual bones been modified since the skeleton was last updated?
                virtual ev_bool getManualBonesDirty() const
                {
                    return mManualBonesDirty;
                }
                //// Are there any manually controlled bones?
                virtual ev_bool hasManualBones() const
                {
                    return !mManualBones.empty();
                }

                /** Merge animations from another EarthView::World::Graphic::CSkeleton object into this skeleton.
                @remarks
                This function allow merge two structures compatible skeletons. The
                'compatible' here means identically bones will have same hierarchy,
                but skeletons are not necessary to have same number of bones (if
                number bones of source skeleton's more than this skeleton, they will
                copied as is, except that duplicate names are unallowed; and in the
                case of bones missing in source skeleton, nothing happen for those
                bones).
                @par
                There are also unnecessary to have same binding poses, this function
                will adjust keyframes of the source skeleton to match this skeleton
                automatically.
                @par
                It's useful for export skeleton animations seperately. i.e. export
                mesh and 'master' skeleton at the same time, and then other animations
                will export seperately (even if used completely difference binding
                pose), finally, merge seperately exported animations into 'master'
                skeleton.
                @param
                source Pointer to source skeleton. It'll keep unmodified.
                @param
                boneHandleMap A map to translate identically bone's handle from source
                skeleton to this skeleton. If mapped bone handle doesn't exists in this
                skeleton, it'll created. You can populate bone handle map manually, or
                use predefined functions build bone handle map for you. (@see
                _buildMapBoneByHandle, _buildMapBoneByName)
                @param
                animations A list name of animations to merge, if empty, all animations
                of source skeleton are used to merge. Note that the animation names
                must not presented in this skeleton, and will NOT pick up animations
                in linked skeletons (@see addLinkedSkeletonAnimationSource).
                */
                virtual void _mergeSkeletonAnimations( _in const EarthView::World::Graphic::CSkeleton *source,
                                                       _in const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap,
                                                       _out  const EarthView::World::Core::StringVector &animations);
                virtual void _mergeSkeletonAnimations( _in const EarthView::World::Graphic::CSkeleton *source,
                                                       _in const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap);
                /** Build the bone handle map to use with CSkeleton::_mergeSkeletonAnimations.
                @remarks
                Identically bones are determine by handle.
                */
                virtual void _buildMapBoneByHandle( _in const EarthView::World::Graphic::CSkeleton *source,
                                                    _in EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap) const;
                /** Build the bone handle map to use with CSkeleton::_mergeSkeletonAnimations.
                @remarks
                Identically bones are determine by name.
                */
                virtual void _buildMapBoneByName( _in const EarthView::World::Graphic::CSkeleton *source,
                                                  _out EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap) const;
            protected:
                EarthView::World::Graphic::SkeletonAnimationBlendMode mBlendState;
                //// Storage of bones, indexed by bone handle
                EarthView::World::Graphic::CSkeleton::BoneList mBoneList;
                //// Lookup by bone name
                typedef map<EVString, EarthView::World::Graphic::CBone *> BoneListByName;
                BoneListByName mBoneListByName;

                //// Pointer to root bones (can now have multiple roots)
                mutable EarthView::World::Graphic::CSkeleton::BoneList mRootBones;
                //// EarthView::World::Graphic::CBone automatic handles
                ev_uint16 mNextAutoHandle;
                typedef set<EarthView::World::Graphic::CBone *> BoneSet;
                //// Manual bones
                BoneSet mManualBones;
                //// Manual bones dirty?
                ev_bool mManualBonesDirty;

                //// Storage of animations, lookup by name
                typedef map<EVString, EarthView::World::Graphic::CAnimation *> AnimationList;
                AnimationList mAnimationsList;
                //// List of references to other skeletons to use animations from
                mutable EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList mLinkedSkeletonAnimSourceList;
                /** Internal method which parses the bones to derive the root bone.
                @remarks
                Must be const because called in getRootBone but mRootBone is mutable
                since lazy-updated.
                */
                void deriveRootBone() const;
                //// Debugging method
                void _dumpContents( _in const EVString &filename);
            ev_internal:
                /** @copydoc CResource::loadImpl
                */
                void loadImpl();
                /** @copydoc CResource::unloadImpl
                */
                void unloadImpl();
                //// @copydoc CResource::calculateSize
                ev_size_t calculateSize() const
                {
                    return 0;    /// TODO
                }
            };
            /** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CSkeletonPtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            */
            class EV_GRAPHIC_DLL CSkeletonPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CSkeleton>
            {
            ev_private:
                CSkeletonPtr(_in EarthView::World::Core::CNameValuePairList *pList)
                    : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CSkeleton>(pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CSkeleton *)pList->GetAt("ref_rep") : NULL
                                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("sp"))
                    {
                        EarthView::World::Graphic::CSkeletonPtr sp = *(EarthView::World::Graphic::CSkeletonPtr *)pList->GetAt("sp");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(sp.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*sp.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(sp.EV_AUTO_MUTEX_NAME)
                            pRep = sp.pRep;
                            pUseCount = sp.pUseCount;
                            useFreeMethod = sp.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                    else if(pList && pList->Exist("rp"))
                    {
                        EarthView::World::Graphic::ResourcePtr rp = *(EarthView::World::Graphic::ResourcePtr *)pList->GetAt("rp");
                        EV_MUTEX_CONDITIONAL(rp.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*rp.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(rp.EV_AUTO_MUTEX_NAME)
                            pRep = static_cast<EarthView::World::Graphic::CSkeleton *>(rp.getPointer());
                            pUseCount = rp.useCountPointer();
                            if (pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                CSkeletonPtr() :
                	EarthView::World::Core::CSharedPtr<CSkeleton>() {}
                explicit CSkeletonPtr(CSkeleton *ref_rep) :
					EarthView::World::Core::CSharedPtr<CSkeleton>(ref_rep) {}
                explicit CSkeletonPtr(CSkeleton *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
				    EarthView::World::Core::CSharedPtr<CSkeleton>(ref_rep, inFreeMethod) {}
                CSkeletonPtr( _in const CSkeletonPtr &sp) :
                	EarthView::World::Core::CSharedPtr<CSkeleton>(sp) {}
                CSkeletonPtr( _in const EarthView::World::Graphic::ResourcePtr &rp) :
                	EarthView::World::Core::CSharedPtr<CSkeleton>()
                {
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(rp.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*rp.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(rp.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CSkeleton *>(rp.getPointer());
                        pUseCount = rp.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                EarthView::World::Graphic::CSkeleton *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CSkeleton>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CSkeletonPtr
                EarthView::World::Graphic::CSkeletonPtr &operator=( _in const EarthView::World::Graphic::ResourcePtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CSkeleton *>(r.getPointer()))
                        return *this;
                    release();
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CSkeleton *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                    else
                    {
                        /// RHS must be a null pointer
                        EV_ASSERT(r.isNull() && "RHS must be null if it has no mutex!");
                        setNull();
                    }
                    return *this;
                }
            };
            //// Link to another skeleton to share animations
            class EV_GRAPHIC_DLL LinkedSkeletonAnimationSource: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                LinkedSkeletonAnimationSource(_in EarthView::World::Core::CNameValuePairList *pList)
                {
                    if (pList && pList->Count() > 0)
                    {
                        if (pList->Count() == 2)
                        {
                            skeletonName = (ev_char *)pList->GetAt("skelName");
                            scale = *(Real *)pList->GetAt("scl");
                        }
                        else if (pList->Count() == 3)
                        {
                            skeletonName = (ev_char *)pList->GetAt("skelName");
                            scale = *(Real *)pList->GetAt("scl");
                            pSkeleton = *(EarthView::World::Graphic::CSkeletonPtr *)pList->GetAt("skelPtr");
                        }
                    }
                }
            public:
                EVString skeletonName;
                EarthView::World::Graphic::CSkeletonPtr pSkeleton;
                Real scale;
                LinkedSkeletonAnimationSource() {}
                LinkedSkeletonAnimationSource( _in const EVString &skelName, _in Real scl)
                    : skeletonName(skelName), scale(scl) {}
                LinkedSkeletonAnimationSource( _in const EVString &skelName, _in Real scl,
                                               _in EarthView::World::Graphic::CSkeletonPtr skelPtr)
                    : skeletonName(skelName), pSkeleton(skelPtr), scale(scl) {}
            };
            /** @} */
            /** @} */
        }
    }
}


#endif

