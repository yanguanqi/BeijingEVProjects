#ifndef __InstanceManager_H__
#define __InstanceManager_H__
#pragma once
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "mesh.h"
#include "renderoperation.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CInstanceBatch;
            class CInstancedEntity;
            class CInstancedEntityVec;
            class EV_GRAPHIC_DLL CInstanceManager : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CInstanceManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                enum InstancingTechnique
                {
                    ShaderBased,						///Any SM 2.0+ @See InstanceBatchShader
                    TextureVTF,							///Needs Vertex Texture Fetch & SM 3.0+ @See InstanceBatchVTF
                    HWInstancingBasic,					///Needs SM 3.0+ and HW instancing support @See InstanceBatchHW
                    HWInstancingVTF,					///Needs SM 3.0+, HW instancing support & VTF @See InstanceBatchHW_VTF
                    InstancingTechniquesCount
                };
                /** Values to be used in setSetting() & BatchSettings::setting */
                enum BatchSettingId
                {
                    //// Makes all batches from same material cast shadows
                    CAST_SHADOWS		= 0,
                    //// Makes each batch to display it's bounding box. Useful for debugging or profiling
                    SHOW_BOUNDINGBOX,
                    NUM_SETTINGS
                };
            public:
                ///	typedef vector<CInstanceBatch*>		InstanceBatchVec;	//vec[batchN] = Batch
                class EV_GRAPHIC_DLL InstanceBatchVec : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<CInstanceBatch *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                private:
                    InternalList mList;
                ev_private:
                    InstanceBatchVec();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    InstanceBatchVec(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 在容器最后添加元素
                    /// </summary>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void push_back( _in  CInstanceBatch *const &ref_t);
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
                    CInstanceBatch*& front();
                    /// <summary>
                    /// 返回容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器最后元素</returns>
                    CInstanceBatch*& back();
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos, _in CInstanceBatch *const &ref_t);
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
                    CInstanceBatch*& operator[](_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    CInstanceBatch *const &operator[](_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    CInstanceBatch*& at(_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    CInstanceBatch *const &at(_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
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

                ///	typedef map<EVString, InstanceBatchVec>	InstanceBatchMap;	//map[materialName] = Vec
                class EV_GRAPHIC_DLL InstanceBatchMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    InstanceBatchMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    InstanceBatchMap();
                    /// <summary>
                    /// 增加动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push( _in const EVString &key, _in const InstanceBatchVec &val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist( _in const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    InstanceBatchVec &operator[]( _in const EVString &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    InstanceBatchVec &get( _in const EVString &key);
                    /// <summary>
                    /// 删除键对应的键值对
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase( _in const EVString &key);
                    /// <summary>
                    /// 返回集合的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合的大小</returns>
                    ev_size_t size() const;
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
                    typedef map<EVString, InstanceBatchVec> InternalList;
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
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert( _in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find( _in const EVString &key);
                    const_iterator find( _in const EVString &key) const;
                private:
                    InternalList mList;
                };
                ///typedef EarthView::World::Core::CConstMapIterator<InstanceBatchMap> InstanceBatchMapIterator;
                class EV_GRAPHIC_DLL InstanceBatchPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    InstanceBatchPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    InstanceBatchPair();
                    EVString first;
                    InstanceBatchVec second;
                };
                /// <summary>
                /// 节点动画轨迹集合迭代器
                /// 管理节点动画轨迹集合迭代器操作
                /// </summary>
                class EV_GRAPHIC_DLL InstanceBatchMapIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<InstanceBatchMap> InternalIterator;
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
                    InstanceBatchMapIterator(_in const_iterator first, _in const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~InstanceBatchMapIterator();
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
                    ValueType peekNextValue () const;
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
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    InstanceBatchMapIterator &operator=(_in const InstanceBatchMapIterator &other);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    InstanceBatchMapIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    InstanceBatchMapIterator(_in const InstanceBatchMapIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    InstanceBatchMapIterator(_in InstanceBatchMap &lst);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements () const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    InstanceBatchVec nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    InstanceBatchVec *nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    InstanceBatchVec next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const InstanceBatchPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const InstanceBatchPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const InstanceBatchPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    InstanceBatchPair mBeginPair;
                    InstanceBatchPair mCurrentPair;
                    InstanceBatchPair mEndPair;
                    InstanceBatchVec mptr;
                    ValueType mvt;
                };

                ///	typedef EarthView::World::Core::CConstVectorIterator<InstanceBatchVec> InstanceBatchIterator;
                class EV_GRAPHIC_DLL InstanceBatchIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<InstanceBatchVec> InternalIterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    InstanceBatchIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">ConstEnabledAnimationStateIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    InstanceBatchIterator &operator=(_in const InstanceBatchIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~InstanceBatchIterator();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();
                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    const IteratorType &current();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    InstanceBatchIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="vec">迭代器对应集合</param>
                    /// <returns></returns>
                    InstanceBatchIterator(_in InstanceBatchVec &vec);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="rhs">其它迭代器</param>
                    /// <returns></returns>
                    InstanceBatchIterator(_in const InstanceBatchIterator &rhs);
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
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前元素值</returns>
                    CInstanceBatch *getCurrent();
                    /// <summary>
                    /// 返回容器下一元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>下一元素值</returns>
                    CInstanceBatch *next();
                    /// <summary>
                    /// 返回容器头部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>头部元素值</returns>
                    CInstanceBatch *getBegin();
                    /// <summary>
                    /// 返回容器尾部元素值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾部元素值</returns>
                    CInstanceBatch *getEnd();
                private:
                    InternalIterator *mIterator;
                };

            private:
                struct BatchSettings
                {
                    ///These are all per material
                    ev_bool				setting[NUM_SETTINGS];
                    BatchSettings()
                    {
                        setting[CAST_SHADOWS]				= true;
                        setting[SHOW_BOUNDINGBOX]			= false;
                    }
                };
                typedef map<EVString, BatchSettings>	BatchSettingsMap;
                EVString			mName;								///Not the name of the mesh
                CMeshPtr					mMeshReference;
				InstanceBatchMap			mInstanceBatches;
				EarthView::World::Core::CRecursiveMutex				mInstanceBatchLock;
                ev_size_t					mIdCount;

				typedef ev_set<CInstanceBatch *>	InstanceBatchSet;
                InstanceBatchSet			mDirtyBatches;
				EarthView::World::Core::CRecursiveMutex				mDirtyBatchLock;

                CRenderOperation			mSharedRenderOperation;
                ev_size_t					mInstancesPerBatch;
                InstancingTechnique		mInstancingTechnique;
                ev_uint16					mInstancingFlags;					///@see InstanceManagerFlags
                ev_uint16			mSubMeshIdx;

                BatchSettingsMap		mBatchSettings;
                CSceneManager			*mSceneManager;
                ev_size_t				mMaxLookupTableInstances;
				ev_bool					mbInternalInstance;
				ev_bool					mAsyncUpdateBuffer;

                /** Finds a batch with at least one free instanced entity we can use.
                	If none found, creates one.
                */
                CInstanceBatch *getFreeBatch( const EVString &materialName );
                /** Called when batches are fully exhausted (can't return more instances) so a new batch
                	is created.
                	For the first time use, it can take big build time.
                	It takes care of getting the render operation which will be shared by further batches,
                	which decreases their build time, and prevents GPU RAM from skyrocketing.
                	@param materialName The material name, to know where to put this batch in the map
                	@param firstTime True if this is the first time it is called
                	@return The created InstancedManager for convenience
                */
                CInstanceBatch *buildNewBatch( const EVString &materialName, ev_bool firstTime );
                
                /** @see setSetting. This function helps it by setting the given parameter to all batches
                	in container.
                */
                void applySettingToBatches( BatchSettingId id, ev_bool value, const InstanceBatchVec &container );

            public:
                CInstanceManager( const EVString &customName, CSceneManager *ref_sceneManager,
                                  const EVString &meshName, const EVString &groupName,
                                  InstancingTechnique instancingTechnique, ev_uint16 instancingFlags,
                                  ev_size_t instancesPerBatch, ev_uint16 subMeshIdx, ev_bool useBoneMatrixLookup);
                CInstanceManager( const EVString &customName, CSceneManager *ref_sceneManager,
                                  const EVString &meshName, const EVString &groupName,
                                  InstancingTechnique instancingTechnique, ev_uint16 instancingFlags,
                                  ev_size_t instancesPerBatch, ev_uint16 subMeshIdx );
                virtual ~CInstanceManager();
                EVString getName() const
                {
                    return mName;
                }
				CMeshPtr getMeshPtr() const
				{
					return mMeshReference;
				}
                /** Raises an exception if trying to change it after creating the first InstancedEntity
                	@remarks The actual value may be less if the technique doesn't support having so much
                	@see getMaxOrBestNumInstancesPerBatches for the usefulness of this function
                	@param instancesPerBatch New instances per batch number
                */
				void detachAllInstanceBatch();

                void setInstancesPerBatch( ev_size_t instancesPerBatch );
				ev_size_t getInstancesPerBatch()const;

				ev_bool isInternalInstance()const{ return mbInternalInstance; }
				void setInternalInstance(ev_bool bInternalInstance);
                /** Sets the size of the lookup table for techniques supporting bone lookup table.
                	Raises an exception if trying to change it after creating the first InstancedEntity.
                	Setting this value below the number of unique (non-sharing) entity instance animations
                	will produce a crash during runtime. Setting this value above will increase memory
                	consumption and reduce framerate.
                	@remarks The value should be as close but not below the actual value.
                	@param maxLookupTableInstances New size of the lookup table
                */
                void setMaxLookupTableInstances( ev_size_t maxLookupTableInstances );
                /**	Calculates the maximum (or the best amount, depending on flags) of instances
                	per batch given the suggested size for the technique this manager was created for.
                	@remarks
                	This is done automatically when creating an instanced entity, but this function in conjunction
                	with @see setInstancesPerBatch allows more flexible control over the amount of instances
                	per batch
                	@param materialName Name of the material to base on
                	@param suggestedSize Suggested amount of instances per batch
                	@param flags @see InstanceManagerFlags
                	@return The max/best amount of instances per batch given the suggested size and flags
                */
                ev_size_t getMaxOrBestNumInstancesPerBatch( EVString materialName, ev_size_t suggestedSize, ev_uint16 flags );
                /** @copydoc CSceneManager::createInstancedEntity */
                CInstancedEntity *createInstancedEntity( const EVString &materialName );
				CInstancedEntity *createInstancedEntity( const EVString &materialName, ev_bool bInUse );
                /** This function can be useful to improve CPU speed after having too many instances
                	created, which where now removed, thus freeing many batches with zero used Instanced Entities
                	However the batches aren't automatically removed from memory until the InstanceManager is
                	destroyed, or this function is called. This function removes those batches which are completely
                	unused (only wasting memory).
                */
                void cleanupEmptyBatches();
                
                /** Applies a setting for all batches using the same material_ existing ones and
                	those that will be created in the future.
                @par
                	For example setSetting( BatchSetting::CAST_SHADOWS, false ) disables shadow
                	casting for all instanced entities (@see CMovableObject::setCastShadow)
                @par
                	For example setSetting( BatchSetting::SHOW_BOUNDINGBOX, true, "MyMat" )
                	will display the bounding box of the batch (not individual InstancedEntities)
                	from all batches using material "MyMat"
                @note If the material name hasn't been used, the settings are still stored
                This allows setting up batches before they get even created.
                @param id Setting Id to setup, @see BatchSettings::BatchSettingId
                @param enabled Boolean value. It's meaning depends on the id.
                @param materialName When Blank, the setting is applied to all existing materials
                */
                void setSetting( BatchSettingId id, ev_bool value, const EVString &materialName );
                void setSetting( BatchSettingId id, ev_bool value);
                //// If settings for the given material didn't exist, default value is returned
                ev_bool getSetting( BatchSettingId id, const EVString &materialName ) const;
                /** Returns true if settings were already created for the given material name.
                	If false is returned, it means getSetting will return default settings.
                */
                ev_bool hasSettings( const EVString &materialName ) const
                {
                    return mBatchSettings.find( materialName ) != mBatchSettings.end();
                }
                /**	@copydoc InstanceBatch::setStaticAndUpdate */
                void setBatchesAsStaticAndUpdate( ev_bool bStatic );
                /** Called by an InstanceBatch when it requests their bounds to be updated for proper culling
                	@param dirtyBatch The batch which is dirty, usually same as caller.
                */
                void _addDirtyBatch( CInstanceBatch *ref_dirtyBatch );
                /** Called by CSceneManager when we told it we have at least one dirty batch */
                void _updateDirtyBatches();

                ev_uint16 getSubMeshIdx() const {return mSubMeshIdx;}

                CSceneManager* getSceneManager ()const {return mSceneManager;}

                //// Get non-updateable iterator over instance batches per material
                InstanceBatchMapIterator getInstanceBatchMapIterator() const
                {
                    return InstanceBatchMapIterator( mInstanceBatches.begin(), mInstanceBatches.end() );
                }
                /** Get non-updateable iterator over instance batches for given material
                	@remarks
                	Each InstanceBatch pointer may be modified for low level usage (i.e.
                	setCustomParameter), but there's no synchronization mechanism when
                	multithreading or creating more instances, that's up to the user.
                */
                InstanceBatchIterator getInstanceBatchIterator( const EVString &materialName ) const
                {
                    InstanceBatchMap::const_iterator it = mInstanceBatches.find( materialName );
                    return InstanceBatchIterator( it->second.begin(), it->second.end() );
                }

				/**
				功能：设置是否异步更新buffer
				注：目前只有instanceBatchHw技术支持该更新方式，所以如果是其它技术创建的instnaceManager，不会起作用
				**/
				ev_bool isAsyncUpdatingBuffer()const {return mAsyncUpdateBuffer;}
				ev_void setAsyncUpdateBuffer(ev_bool async){mAsyncUpdateBuffer = async;}
            };
        }
    }
}

#endif
