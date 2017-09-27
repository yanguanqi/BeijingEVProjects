#ifndef __Entity_H__
#define __Entity_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "common.h"
#include "core/ev_string.h"
#include "movableobject.h"
#include "hardwarebuffermanager.h"
#include "mesh.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CMatrix4;
				class CRay;
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

            class CTagPoint;
            class CRenderQueue;
			class CEditBoundingBox;

            /// <summary>
            /// 实体类
            /// 此类是模型在场景中的实例
            /// </summary>
            class EV_GRAPHIC_DLL CEntity: public EarthView::World::Graphic::CMovableObject
            {
                friend class CEntityFactory;
                friend class CSubEntity;
                friend class CEntityListener;
				friend class CTagPoint;
            public:
                /// <summary>
                /// 实体监听器类
                /// </summary>
                class EV_GRAPHIC_DLL CEntityListener : public EarthView::World::Graphic::CResource::CResourceListener
                {

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CEntityListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">父类</param>
                    /// <returns></returns>
                    CEntityListener(CEntity *parent);
                    /// <summary>
                    /// 回调显示，背景加载完成
                    /// </summary>
                    /// <param name="res">资源</param>
                    /// <returns></returns>
                    void backgroundLoadingComplete(EarthView::World::Graphic::CResource *res);
                private:

                    EarthView::World::Graphic::CEntity *mParent;
                };
                const EarthView::World::Graphic::CEntity::CEntityListener *getEntityListenerPtr();
                const EarthView::World::Graphic::CEntity::CEntityListener &getEntityListener();
            private:
                EarthView::World::Graphic::CEntity::CEntityListener *mpListener;
            public:

                /// <summary>
                /// 实体集合
                /// 原为typedef set<EarthView::World::Graphic::CEntity*> EarthView::World::Graphic::CEntity::EntitySet;
                /// </summary>
                class EV_GRAPHIC_DLL EntitySet : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef set<EarthView::World::Graphic::CEntity *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CEntity*& ref_t);
                private:
                    InternalList mList;
                ev_private:
                    EntitySet(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    EntitySet();
                    void insert(EarthView::World::Graphic::CEntity *const &ref_val);
                    ev_size_t size();
                    ev_size_t erase(_in  EarthView::World::Graphic::CEntity *const &key);
                    ev_bool empty();
                    void clear();
                    ev_size_t count(_in  EarthView::World::Graphic::CEntity *const &key);
                    ev_size_t max_size();
                    void swap(_inout EarthView::World::Graphic::CEntity::EntitySet &other);
                };
                ///typedef map<unsigned short, bool>::type SchemeHardwareAnimMap;
                class EV_GRAPHIC_DLL SchemeHardwareAnimMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    SchemeHardwareAnimMap() {}
                    ev_bool push(const ev_uint16 &key, ev_bool const &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (ev_bool)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const ev_uint16 &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    ev_bool &operator[](const ev_uint16 &key)
                    {
                        return get(key);
                    }
                    ev_bool &get(const ev_uint16 &key)
                    {
                        return mList[key];
                    }
                    void erase(const ev_uint16 &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    SchemeHardwareAnimMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<ev_uint16, ev_bool> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const ev_uint16 &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const ev_uint16 &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CEntity(_in EarthView::World::Core::CNameValuePairList *pList);
            protected:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CEntity();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="mesh">模型</param>
                /// <returns></returns>
                CEntity(const EVString &name, const EarthView::World::Graphic::CMeshPtr &mesh);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="mesh">模型</param>
				/// <returns></returns>
				CEntity(const EVString &name, const EarthView::World::Graphic::CMeshPtr &mesh,const EarthView::World::Core::IntVector& subentityIndics);

                /** The CMesh that this EarthView::World::Graphic::CEntity is based on.
                */
                EarthView::World::Graphic::CMeshPtr mMesh;
                /** List of SubEntities (point to SubMeshes).
                */
                
				enum ConstructType
				{
					CT_InitAllSubEntity=0,
					CT_InitPartSubEntity,
					CT_Default
				};
				ConstructType mConstructType;
				EarthView::World::Core::IntVector mInitParam_subentityIndics;

				typedef vector<CSubEntity *> SubEntityList;

				struct SubEntityInSubmesh
				{
					SubEntityList mSubEntityList;
					ev_bool mbInstance;

					SubEntityInSubmesh()
					{
						mbInstance = false;
					}
				};

				//子部件索引与子部件映射关系
				typedef map<ev_uint16, SubEntityInSubmesh> SubEntityInSubmeshMap;
				SubEntityInSubmeshMap mSubEntityInSubmeshMap;


				//全部子部件
				SubEntityList mSubEntityList;
				SubEntityList mRenderableSubEntityList;

				//instanceManager管理器
				typedef map<ev_uint16, CInstanceManager*> InstanceManagerMap;
				InstanceManagerMap mInstanceMngerMap;

				CSubEntity* _insertSubEntityForSubmesh(ev_uint16 submeshIndex, ev_bool bInstance, ev_bool shaderBased);

				CInstanceManager* _getInstanceManagerForSubmesh(ev_uint16 submeshIndex, ev_bool shaderBased);

				virtual void _notifyManager(CSceneManager *ref_mgr);
                
                //选择组件时，被选中的SubMesh的序号
                ev_int32 mSelectedSubMeshIndex;                
                ev_int32 mSelectedInstanceIndex;//submesh上的instance序号
				ev_int32 mSelectedSegmentIndex;	//submesh上的segment序号

                //选择目标时，整个entity是否被选中
                ev_bool mbSelected;                

				EarthView::World::Graphic::CEditBoundingBox* mpEditBox;
				EarthView::World::Spatial::Math::CAxisAlignedBox mMinimumBox;

                ev_void renderAsSelection();				

                //// State of animation for animable meshes
                EarthView::World::Graphic::CAnimationStateSet *mAnimationState;

                //// Temp buffer details for software skeletal anim of shared geometry
                EarthView::World::Graphic::CTempBlendedBufferInfo mTempSkelAnimInfo;
                //// Vertex data details for software skeletal anim of shared geometry
                EarthView::World::Graphic::CVertexData *mSkelAnimVertexData;
                //// Temp buffer details for software vertex anim of shared geometry
                EarthView::World::Graphic::CTempBlendedBufferInfo mTempVertexAnimInfo;
                //// Vertex data details for software vertex anim of shared geometry
                EarthView::World::Graphic::CVertexData *mSoftwareVertexAnimVertexData;
                //// Vertex data details for hardware vertex anim of shared geometry
                //// - separate since we need to s/w anim for shadows whilst still altering
                ////   the vertex data for hardware morphing (pos2 binding)
                EarthView::World::Graphic::CVertexData *mHardwareVertexAnimVertexData;
                //// Have we applied any vertex animation to shared geometry?
                ev_bool mVertexAnimationAppliedThisFrame;
                //// Have the temp buffers already had their geometry prepared for use in rendering shadow volumes?
                ev_bool mPreparedForShadowVolumes;
                /** Internal method - given vertex data which could be from the CMesh or
                any submesh, finds the temporary blend copy. */
                const EarthView::World::Graphic::CVertexData *findBlendedVertexData(const EarthView::World::Graphic::CVertexData *orig);
                /** Internal method - given vertex data which could be from the CMesh or
                any CSubMesh, finds the corresponding EarthView::World::Graphic::CSubEntity. */
                EarthView::World::Graphic::CSubEntity *findSubEntityForVertexData(const EarthView::World::Graphic::CVertexData *orig);
                /** Internal method for extracting metadata out of source vertex data
                for fast assignment of temporary buffers later. */
                void extractTempBufferInfo(EarthView::World::Graphic::CVertexData *sourceData, EarthView::World::Graphic::CTempBlendedBufferInfo *info);
                /** Internal method to clone vertex data definitions but to remove blend buffers. */
                EarthView::World::Graphic::CVertexData *cloneVertexDataRemoveBlendInfo(const EarthView::World::Graphic::CVertexData *source);
                /** Internal method for preparing this EarthView::World::Graphic::CEntity for use in animation. */
                void prepareTempBlendBuffers();
                /** Mark all vertex data as so far unanimated.
                */
                void markBuffersUnusedForAnimation();
                /** Internal method to restore original vertex data where we didn't
                	perform any vertex animation this frame.
                */
                void restoreBuffersForUnusedAnimation(ev_bool hardwareAnimation);
                /** Ensure that any unbound  pose animation buffers are bound to a safe
                	default.
                	@param srcData Original vertex data containing original positions
                	@param destData Hardware animation vertex data to be checked
                */
                void bindMissingHardwarePoseBuffers(const EarthView::World::Graphic::CVertexData *srcData,
                                                    EarthView::World::Graphic::CVertexData *destData);
                /** When performing software pose animation, initialise software copy
                	of vertex data
                */
                void initialisePoseVertexData(const EarthView::World::Graphic::CVertexData *srcData, EarthView::World::Graphic::CVertexData *destData,
                                              ev_bool animateNormals);
                /** When animating normals for pose animation, finalise normals by filling in
                	with the reference mesh normal where applied normal weights < 1
                */
                void finalisePoseNormals(const EarthView::World::Graphic::CVertexData *srcData, EarthView::World::Graphic::CVertexData *destData);
                //// Cached bone matrices, including any world transform
                EarthView::World::Spatial::Math::CMatrix4 *mBoneWorldMatrices;
                //// Cached bone matrices in skeleton local space, might shares with other entity instances.
                EarthView::World::Spatial::Math::CMatrix4 *mBoneMatrices;
                ev_uint16 mNumBoneMatrices;
                //// Records the last frame in which animation was updated
                ev_uint32 mFrameAnimationLastUpdated;
                //// Perform all the updates required for an animated entity
                void updateAnimation();
                //// Records the last frame in which the bones was updated
                //// It's a pointer because it can be shared between different entities with
                //// a shared skeleton.
                ev_uint32 *mFrameBonesLastUpdated;
                /**
                * A set of all the entities which shares a single EarthView::World::Graphic::CSkeletonInstance.
                * This is only created if the entity is in fact sharing it's EarthView::World::Graphic::CSkeletonInstance with
                * other Entities.
                */
                EarthView::World::Graphic::CEntity::EntitySet *mSharedSkeletonEntities;
                //// Private method to cache bone matrices from skeleton
                ev_bool cacheBoneMatrices();
                //// Flag determines whether or not to display skeleton
                ev_bool mDisplaySkeleton;

                /**
                * Flag indicating whether hardware animation is supported by this entities materials
                * data is saved per scehme number
                */
                SchemeHardwareAnimMap mSchemeHardwareAnim;
                //// Current state of the hardware animation as represented by the entities parameters
                bool mCurrentHWAnimationState;
                //// Number of hardware poses supported by materials
                ev_uint16 mHardwarePoseCount;
                //// Flag indicating whether we have a vertex program in use on any of our subentities
                ev_bool mVertexProgramInUse;
                //// Counter indicating number of requests for software animation.
                ev_int32 mSoftwareAnimationRequests;
                //// Counter indicating number of requests for software blended normals.
                ev_int32 mSoftwareAnimationNormalsRequests;
                //// Flag indicating whether to skip automatic updating of the CSkeleton's EarthView::World::Graphic::CAnimationState
                ev_bool mSkipAnimStateUpdates;
                //// Flag indicating whether to update the main entity skeleton even when an LOD is displayed
                bool mAlwaysUpdateMainSkeleton;
                //// The LOD number of the mesh to use, calculated by _notifyCurrentCamera
                ev_uint16 mMeshLodIndex;
                //// LOD bias factor, transformed for optimisation when calculating adjusted lod value
                Real mMeshLodFactorTransformed;
                //// Index of minimum detail LOD (NB higher index is lower detail)
                ev_uint16 mMinMeshLodIndex;
                //// Index of maximum detail LOD (NB lower index is higher detail)
                ev_uint16 mMaxMeshLodIndex;
                //// LOD bias factor, not transformed
                Real mMaterialLodFactor;
                //// LOD bias factor, transformed for optimisation when calculating adjusted lod value
                Real mMaterialLodFactorTransformed;
                //// Index of minimum detail LOD (NB higher index is lower detail)
                ev_uint16 mMinMaterialLodIndex;
                //// Index of maximum detail LOD (NB lower index is higher detail)
                ev_uint16 mMaxMaterialLodIndex;
                /** List of LOD EarthView::World::Graphic::CEntity instances (for manual LODs).
                same number of SubMeshes, therefore we have to allow a separate EarthView::World::Graphic::CEntity list
                with each alternate one.
                */
                typedef vector<EarthView::World::Graphic::CEntity *> LODEntityList;
                LODEntityList mLodEntityList;
                /** This EarthView::World::Graphic::CEntity's personal copy of the skeleton, if skeletally animated
                */
                EarthView::World::Graphic::CSkeletonInstance *mSkeletonInstance;
                //// Has this entity been initialised yet?
                ev_bool mInitialised;
                //// Last parent xform
                EarthView::World::Spatial::Math::CMatrix4 mLastParentXform;
                //// CMesh state count, used to detect differences
                ev_size_t mMeshStateCount;

				EarthView::World::Spatial::Math::CMatrix4* mpLocalMatrix;
				mutable EarthView::World::Spatial::Math::CMatrix4* mpWorldMatrix;
				ev_bool mLocalMatrixUsed;

                /** Builds a list of SubEntities based on the SubMeshes contained in the CMesh. */
				void buildSubEntityList(EarthView::World::Graphic::CMeshPtr &mesh, const EarthView::World::Core::IntVector& submeshIndics);
                void buildSubEntityList(EarthView::World::Graphic::CMeshPtr &mesh);
                //// internal implementation of attaching a 'child' object to this entity and assign the parent node to the child entity
                void attachObjectImpl(EarthView::World::Graphic::CMovableObject *pMovable, EarthView::World::Graphic::CTagPoint *pAttachingPoint);
                //// internal implementation of detaching a 'child' object of this entity and clear the parent node of the child entity
                void detachObjectImpl(EarthView::World::Graphic::CMovableObject *pObject);
                //// internal implementation of detaching all 'child' objects of this entity
                void detachAllObjectsImpl();
                //// Trigger reevaluation of the kind of vertex processing in use
                void reevaluateVertexProcessing();
                /** calculates the kind of vertex processing in use
                @remarks
                This function's return value is calculated according to the current
                active scheme. This is due to the fact that RTSS schemes may be different
                in their handling of hardware animation.
                */
                ev_bool calcVertexProcessing();
                //// Apply vertex animation
                void applyVertexAnimation(ev_bool hardwareAnimation, ev_bool stencilShadows);
                //// Initialise the hardware animation elements for given vertex data
                ev_uint16 initHardwareAnimationElements(EarthView::World::Graphic::CVertexData *vdata,
                                                        ev_uint16 numberOfElements, ev_bool animateNormals);
                //// Are software vertex animation temp buffers bound?
                ev_bool tempVertexAnimBuffersBound() const;
                //// Are software skeleton animation temp buffers bound?
                ev_bool tempSkelAnimBuffersBound(ev_bool requestNormals) const;

ev_private:
			   //不支持内部instance的情况
               ev_void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& localMatrix);
			   const EarthView::World::Spatial::Math::CMatrix4& getLocalMatrix();
			public:
			   virtual const EarthView::World::Spatial::Math::CMatrix4 &_getParentNodeFullTransform() const;
            ev_internal:
                /// <summary>
                /// 嵌套类
                /// 允许实体对象渲染
                /// </summary>
                class EV_GRAPHIC_DLL CEntityShadowRenderable : public EarthView::World::Graphic::CShadowRenderable
                {
                protected:
                    EarthView::World::Graphic::CEntity *mParent;
                    /// Shared link to position buffer
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mPositionBuffer;
                    /// Shared link to w-coord buffer (optional)
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mWBuffer;
                    /// Link to current vertex data used to bind (maybe changes)
                    const EarthView::World::Graphic::CVertexData *mCurrentVertexData;
                    /// Original position buffer source binding
                    ev_uint16 mOriginalPosBufferBinding;
                    //// Link to EarthView::World::Graphic::CSubEntity, only present if EarthView::World::Graphic::CSubEntity has it's own geometry
                    EarthView::World::Graphic::CSubEntity *mSubEntity;
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent"></param>
                    /// <param name="indexBuffer"></param>
                    /// <param name="vertexData"></param>
                    /// <param name="createSeparateLightCap"></param>
                    /// <param name="subent"></param>
                    /// <param name="isLightCap"></param>
                    /// <returns></returns>
                    CEntityShadowRenderable(CEntity *ref_parent, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *ref_indexBuffer, const EarthView::World::Graphic::CVertexData *ref_vertexData,
                                            ev_bool createSeparateLightCap, EarthView::World::Graphic::CSubEntity *ref_subent, ev_bool isLightCap);
                    CEntityShadowRenderable(CEntity *ref_parent, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *ref_indexBuffer, const EarthView::World::Graphic::CVertexData *ref_vertexData,
                                            ev_bool createSeparateLightCap, EarthView::World::Graphic::CSubEntity *ref_subent);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~CEntityShadowRenderable();
                    //// Create the separate light cap if it doesn't already exists
                    void _createSeparateLightCap();
                    /// <summary>
                    /// 获得世界坐标转换矩阵信息
                    /// 重写EarthView::World::Graphic::CShadowRenderable
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getPositionBuffer();
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getWBuffer();

                    /// <summary>
                    /// 重新绑定位置源
                    /// 为临时缓冲区用户使用
                    /// </summary>
                    /// <param name="vertexData"></param>
                    /// <param name="force"></param>
                    /// <returns></returns>
                    void rebindPositionBuffer(const EarthView::World::Graphic::CVertexData *ref_vertexData, ev_bool force);
                    /// <summary>
                    /// 阴影渲染对象是否可见
                    /// 重写EarthView::World::Graphic::CShadowRenderable
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>为真，可见</returns>
                    ev_bool isVisible() const;
                    //// Overridden from ShadowRenderable
                    virtual void rebindIndexBuffer(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer);

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CEntityShadowRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                };
            protected:
                EarthView::World::Graphic::MovableObjectList mChildObjectList;
                //// Bounding box that 'contains' all the mesh of each child entity
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox mFullBoundingBox;
                ShadowRenderableList mShadowRenderables;

            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CEntity();
                ///typedef EarthView::World::Core::CMapIterator<ChildObjectList> EarthView::World::Graphic::CEntity::ChildObjectListIterator;
                /// <summary>
                /// 获取基于实体的模型
                ///typedef EarthView::World::Core::CMapIterator<ChildObjectList> EarthView::World::Graphic::CEntity::ChildObjectListIterator;
                /// </summary>
                class EV_GRAPHIC_DLL ChildObjectListIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ChildObjectListIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CMovableObject *second;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ChildObjectListIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                class EV_GRAPHIC_DLL ChildObjectListIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::MovableObjectList> InternalIterator;
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
                    /// <param name="other">EarthView::World::Graphic::CEntity::ChildObjectListIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CEntity::ChildObjectListIterator &operator=(_in const EarthView::World::Graphic::CEntity::ChildObjectListIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first"></param>
                    /// <param name="last"></param>
                    /// <returns></returns>
                    ChildObjectListIterator(const_iterator first, const_iterator last);

                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ChildObjectListIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    ChildObjectListIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst"></param>
                    /// <returns></returns>
                    ChildObjectListIterator(EarthView::World::Graphic::MovableObjectList &lst);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="other"></param>
                    /// <returns></returns>
                    ChildObjectListIterator(const ChildObjectListIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::CMovableObject *nextValue() const;
                    EarthView::World::Graphic::CMovableObject **nextValuePtr();
                    EarthView::World::Graphic::CMovableObject *next();
                    const EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair &getBegin();
                    const EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair &getEnd();
                    const EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair mBeginPair;
                    EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CEntity::ChildObjectListIteratorPair mEndPair;
                    EarthView::World::Graphic::CMovableObject *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 获取模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CMeshPtr &getMesh() const;
                /** Gets a pointer to a EarthView::World::Graphic::CSubEntity, ie a part of an EarthView::World::Graphic::CEntity.
                */
                EarthView::World::Graphic::CSubEntity *getSubEntity(ev_uint32 index) const;
                /** Gets a pointer to a EarthView::World::Graphic::CSubEntity by name
                @remarks - names should be initialized during a CMesh creation.
                */
                EarthView::World::Graphic::CSubEntity *getSubEntity( const EVString &name ) const;

				EarthView::World::Graphic::CSubEntity* getSubEntity(ev_uint16 submeshIndex, ev_uint32 instanceIndex) const;

				EarthView::World::Graphic::CSubEntity* getSubEntity(const EVString &submeshName, ev_uint32 instanceIndex) const;
                
				/** Retrieves the number of EarthView::World::Graphic::CSubEntity objects making up this entity.
				*/
                ev_uint32 getNumSubEntities() const;

				/// <summary>
				/// 计算subEntity的下标
				/// </summary>
				/// <param name="submeshIndex">子部件下标</param>
				/// <param name="instanceIndex">instance下标</param>
				/// <returns>返回-1计算失败</returns>
				ev_int32 calculateSubEntityIndex(ev_uint16 submeshIndex, ev_uint32 instanceIndex);

				/// <summary>
				/// 计算subEntity的下标属于哪个子部件的哪个instance
				/// </summary>
				/// <param name="index">subentity下标</param>
				/// <param name="submeshIndex">子部件下标</param>
				/// <param name="instanceIndex">instance下标</param>
				/// <returns>返回-1计算失败</returns>
				void calculateInstanceIndex(ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);

				/// <summary>
				/// 设置投射阴影
				/// </summary>
				/// <param name="enabled"></param>
				/// <returns></returns>
				virtual void setCastShadows(ev_bool enabled);
				
				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);
				virtual void setVisible(ev_bool visible, ev_bool cascade);
                /// <summary>
                /// 克隆实体
                /// </summary>
                /// <param name="newName">新产生的实体的名称</param>
                /// <returns>新产生的实体指针</returns>
                EarthView::World::Graphic::CEntity *clone( const EVString &newName ) const;
                /// <summary>
                /// 通过名称设置实体材质
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="groupName">组名称</param>
                /// <returns></returns>
                void setMaterialName( const EVString &name, const EVString &groupName);
                /// <summary>
                /// 通过名称设置实体材质
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                void setMaterialName( const EVString &name);
                /// <summary>
                /// 设置实体材质
                /// </summary>
                /// <param name="material">材质</param>
                /// <returns>材质</returns>
                void setMaterial(const EarthView::World::Graphic::CMaterialPtr &material);
                /// <summary>
                /// 渲染时通报当前摄像机
                /// 内部方法
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
                /// <summary>
                /// 设置渲染队列组ID
                /// </summary>
                /// <param name="queueID">队列ID号</param>
                /// <returns></returns>
                void setRenderQueueGroup(ev_uint8 queueID);
                /// <summary>
                /// 设置渲染队列组ID和队列优先级
                /// </summary>
                /// <param name="queueID">队列ID号</param>
                /// <param name="priority">优先级</param>
                /// <returns></returns>
                void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
                /// <summary>
                /// 获取模型坐标系的边框盒                
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                //// merge all the child object Bounds a return it
                EarthView::World::Spatial::Math::CAxisAlignedBox getChildObjectsBoundingBox() const;
                /// <summary>
                /// 更新渲染队列                
                /// 内部方法
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 获取移动对象类型的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                EVString getMovableType() const;

				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);	
				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				EarthView::World::Core::IntVector getSelected()const;	

				/// <summary>
				/// 设置选中的subMeshIndex对象				
				/// <param name="subMeshIndex">选中的subMeshIndex</param>	
				/// <param name="instanceIndex">默认值为0</param>
				/// <param name="segmentIndex">分段序号，默认值为-1</param>
				/// <returns></returns>
				ev_bool setSelected(ev_uint32 subMeshIndex,ev_uint32 instanceIndex);
				ev_bool setSelected(ev_uint32 subMeshIndex,ev_uint32 instanceIndex,ev_int32 segmentIndex);
				/// <summary>
				/// 获取选中的subEntity对象				
				/// <param name="subMeshIndex">选中的subMeshIndex</param>	
				/// <param name="instanceIndex">默认值为0</param>
				/// <param name="segmentIndex">分段序号，默认值为-1</param>
				/// <returns></returns>
				ev_bool getSelected(ev_uint32& subMeshIndex,ev_uint32& instanceIndex);
				ev_bool getSelected(ev_uint32& subMeshIndex,ev_uint32& instanceIndex,ev_int32& segmentIndex);

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
                /// 盒选择
                /// </summary>
                /// <param name="aabb">盒</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);
                /// <summary>
                /// 球选择
                /// </summary>
                /// <param name="sphere">球</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="objIndex">物体序号</param>
				/// <param name="submeshIndex">submesh序号</param>
				/// <param name="instanceIndex">instance序号</param>
				/// <param name="segmentIndex">索引分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,ev_bool prepareToRenderSelection,_out ev_int32& objIndex,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point);

				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void setprepareSelect(ev_int32 selectedSubMeshIndex,ev_int32 selectedInstanceIndex,ev_int32 selectedSegmentIndex,ev_bool bSelected);

                /// <summary>
                /// 绘制选择对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void renderSelection();
                /// <summary>
                /// 清除选择
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void clearSelection();

				/// <summary>
				/// 开始编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_uint32 objectIndex);
				/// <summary>
				/// 结束编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void endEditing();
				/// <summary>
				/// 获得编辑包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

				/// <summary>
				/// 获得选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix);
				/// <summary>
				/// 设置选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);


                /** For entities based on animated meshes, gets the EarthView::World::Graphic::CAnimationState object for a single animation.
                @remarks
                You animate an entity by updating the animation state objects. Each of these represents the
                current state of each animation available to the entity. The EarthView::World::Graphic::CAnimationState objects are
                initialised from the CMesh object.
                */
                EarthView::World::Graphic::CAnimationState *getAnimationState(const EVString &name) const;
                /** Returns whether the AnimationState with the given name exists. */
                ev_bool hasAnimationState(const EVString &name) const;
                /** For entities based on animated meshes, gets the EarthView::World::Graphic::CAnimationState objects for all animations.
                @returns
                In case the entity is animated, this functions returns the pointer to a EarthView::World::Graphic::CAnimationStateSet
                containing all animations of the entries. If the entity is not animated, it returns 0.
                @remarks
                You animate an entity by updating the animation state objects. Each of these represents the
                current state of each animation available to the entity. The EarthView::World::Graphic::CAnimationState objects are
                initialised from the CMesh object.
                */
                EarthView::World::Graphic::CAnimationStateSet *getAllAnimationStates() const;
                /** Tells the EarthView::World::Graphic::CEntity whether or not it should display it's skeleton, if it has one.
                */
                void setDisplaySkeleton(ev_bool display);
                /** Returns whether or not the entity is currently displaying its skeleton.
                */
                ev_bool getDisplaySkeleton() const;

                /** Gets a pointer to the entity representing the numbered manual level of detail.
                @remarks
                    The zero-based index never includes the original entity, unlike
                	CMesh::getLodLevel.
                */
                EarthView::World::Graphic::CEntity *getManualLodLevel(ev_size_t index) const;
                /** Returns the number of manual levels of detail that this entity supports.
                @remarks
                    This number never includes the original entity, it is difference
                    with CMesh::getNumLodLevels.
                */
                ev_size_t getNumManualLodLevels() const;
                /// <summary>
                /// 获取当前LOD用于渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                ev_uint16 getCurrentLodIndex();
                /** Sets a level-of-detail bias for the mesh detail of this entity.
                @remarks
                Level of detail reduction is normally applied automatically based on the CMesh
                settings. However, it is possible to influence this behaviour for this entity
                by adjusting the LOD bias. This 'nudges' the mesh level of detail used for this
                entity up or down depending on your requirements. You might want to use this
                if there was a particularly important entity in your scene which you wanted to
                detail better than the others, such as a player model.
                @par
                There are three parameters to this method; the first is a factor to apply; it
                defaults to 1.0 (no change), by increasing this to say 2.0, this model would
                take twice as ev_int32 to reduce in detail, whilst at 0.5 this entity would use lower
                detail versions twice as quickly. The other 2 parameters are hard limits which
                let you set the maximum and minimum level-of-detail version to use, after all
                other calculations have been made. This lets you say that this entity should
                never be simplified, or that it can only use LODs below a certain level even
                when right next to the camera.
                @param factor Proportional factor to apply to the distance at which LOD is changed.
                Higher values increase the distance at which higher LODs are displayed (2.0 is
                twice the normal distance, 0.5 is half).
                @param maxDetailIndex The index of the maximum LOD this entity is allowed to use (lower
                indexes are higher detail: index 0 is the original full detail model).
                @param minDetailIndex The index of the minimum LOD this entity is allowed to use (higher
                indexes are lower detail). Use something like 99 if you want unlimited LODs (the actual
                LOD will be limited by the number in the CMesh)
                */
                void setMeshLodBias(Real factor, ev_uint16 maxDetailIndex, ev_uint16 minDetailIndex);
                /*void setMeshLodBias(Real factor, ev_uint16 maxDetailIndex = 0, ev_uint16 minDetailIndex = 99);*/
                void setMeshLodBias(Real factor, ev_uint16 maxDetailIndex);
                void setMeshLodBias(Real factor);

                /** Sets a level-of-detail bias for the material detail of this entity.
                @remarks
                Level of detail reduction is normally applied automatically based on the CMaterial
                settings. However, it is possible to influence this behaviour for this entity
                by adjusting the LOD bias. This 'nudges' the material level of detail used for this
                entity up or down depending on your requirements. You might want to use this
                if there was a particularly important entity in your scene which you wanted to
                detail better than the others, such as a player model.
                @par
                There are three parameters to this method; the first is a factor to apply; it
                defaults to 1.0 (no change), by increasing this to say 2.0, this entity would
                take twice as ev_int32 to use a lower detail material, whilst at 0.5 this entity
                would use lower detail versions twice as quickly. The other 2 parameters are
                hard limits which let you set the maximum and minimum level-of-detail index
                to use, after all other calculations have been made. This lets you say that
                this entity should never be simplified, or that it can only use LODs below
                a certain level even when right next to the camera.
                @param factor Proportional factor to apply to the distance at which LOD is changed.
                Higher values increase the distance at which higher LODs are displayed (2.0 is
                twice the normal distance, 0.5 is half).
                @param maxDetailIndex The index of the maximum LOD this entity is allowed to use (lower
                indexes are higher detail: index 0 is the original full detail model).
                @param minDetailIndex The index of the minimum LOD this entity is allowed to use (higher
                indexes are lower detail. Use something like 99 if you want unlimited LODs (the actual
                LOD will be limited by the number of lod indexes used in the CMaterial)
                */
                void setMaterialLodBias(Real factor, ev_uint16 maxDetailIndex, ev_uint16 minDetailIndex);
                /*void setMaterialLodBias(Real factor, ev_uint16 maxDetailIndex = 0, ev_uint16 minDetailIndex = 99);*/
                void setMaterialLodBias(Real factor, ev_uint16 maxDetailIndex);
                void setMaterialLodBias(Real factor);
                /** Sets whether the polygon mode of this entire entity may be
                overridden by the camera detail settings.
                */
                void setPolygonModeOverrideable(ev_bool PolygonModeOverrideable);
                /** Attaches another object to a certain bone of the skeleton which this entity uses.
                @remarks
                This method can be used to attach another object to an animated part of this entity,
                by attaching it to a bone in the skeleton (with an offset if required). As this entity
                is animated, the attached object will move relative to the bone to which it is attached.
                @par
                An exception is thrown if the movable object is already attached to the bone, another bone or scenenode.
                If the entity has no skeleton or the bone name cannot be found then an exception is thrown.
                @param boneName The name of the bone (in the skeleton) to attach this object
                @param pMovable Pointer to the object to attach
                @param offsetOrientation An adjustment to the orientation of the attached object, relative to the bone.
                @param offsetPosition An adjustment to the position of the attached object, relative to the bone.
                @returns The EarthView::World::Graphic::CTagPoint to which the object has been attached
                */
                EarthView::World::Graphic::CTagPoint *attachObjectToBone(const EVString &boneName, EarthView::World::Graphic::CMovableObject *ref_pMovable,
                                              const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation, const EarthView::World::Spatial::Math::CVector3 &offsetPosition);
                ///EarthView::World::Graphic::CTagPoint* attachObjectToBone(const EVString &boneName,EarthView::World::Graphic::CMovableObject *pMovable,
                ///	const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
                ///	const EarthView::World::Spatial::Math::CVector3 &offsetPosition = EarthView::World::Spatial::Math::CVector3::ZERO);
                EarthView::World::Graphic::CTagPoint *attachObjectToBone(const EVString &boneName, EarthView::World::Graphic::CMovableObject *ref_pMovable, const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation);
                EarthView::World::Graphic::CTagPoint *attachObjectToBone(const EVString &boneName, EarthView::World::Graphic::CMovableObject *ref_pMovable);
				/*
                    If the movable object name is not found then an exception is raised.
                @param movableName is the name of the movable object to be detached.
                */
                EarthView::World::Graphic::CMovableObject *detachObjectFromBone(const EVString &movableName);
                /** Detaches an object by pointer.
                @remarks
                Use this method to destroy a EarthView::World::Graphic::CMovableObject which is attached to a bone of belonging this entity.
                But sometimes the object may be not in the child object list because it is a lod entity,
                this method can safely detect and ignore in this case and won't raise an exception.
                */
                void detachObjectFromBone(EarthView::World::Graphic::CMovableObject *obj);
                void detachAllObjectsFromBone();
                /** Gets an iterator to the list of objects attached to bones on this entity. */
                EarthView::World::Graphic::CEntity::ChildObjectListIterator getAttachedObjectIterator();
                /// <summary>
                /// 获取球体限定半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 设置最小包围盒，计算世界包围盒时，mesh的包围盒和最小包围盒先求并，然后再计算世界包围盒
                /// </summary>
                /// <param name="box">包围盒</param>
                /// <returns></returns>
				void setMinimumBoundingBox(EarthView::World::Spatial::Math::CAxisAlignedBox &box);
                /// <summary>
                /// 获取世界坐标系中的边框盒
                /// </summary>
                /// <param name="derive">是否重新计算,默认为false</param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox() const;
                /// <summary>
                /// 获取世界空间系中的边框球体
                /// </summary>
                /// <param name="derive">是否重新计算,默认为false</param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CSphere &getWorldBoundingSphere(ev_bool derive) const;
                const EarthView::World::Spatial::Math::CSphere &getWorldBoundingSphere() const;
                /// <summary>
                /// 获取边列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CEdgeData *getEdgeList();
                /// <summary>
                /// 是否存在边列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool hasEdgeList();
                /// <summary>
                /// 获取阴影锥渲染对象的迭代器
                /// </summary>
                /// <param name="shadowTechnique">生成阴影的方法</param>
                /// <param name="light">光源</param>
                /// <param name="indexBuffer">索引</param>
                /// <param name="extrudeVertices">为真，在软件中挤压顶点后面的体积成为三维实体</param>
                /// <param name="extrusionDist">距离</param>
                /// <param name="flags">标识，默认为0</param>
                /// <returns></returns>
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                    EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                    ev_bool extrudeVertices, Real extrusionDistance, ev_uint32 flags);
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                    EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                    ev_bool extrudeVertices, Real extrusionDistance);
                /// <summary>
                /// 获取骨骼矩阵
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CMatrix4 *_getBoneMatrices() const;
                /** Internal method for retrieving bone matrix information. */
                ev_uint16 _getNumBoneMatrices() const;
                /** Returns whether or not this entity is skeletally animated. */
                ev_bool hasSkeleton() const;
                /** Get this EarthView::World::Graphic::CEntity's personal skeleton instance. */
                EarthView::World::Graphic::CSkeletonInstance *getSkeleton() const;
                /** Returns whether or not hardware animation is enabled.
                @remarks
                Because fixed-function indexed vertex blending is rarely supported
                by existing graphics cards, hardware animation can only be done if
                the vertex programs in the materials used to render an entity support
                it. Therefore, this method will only return true if all the materials
                assigned to this entity have vertex programs assigned, and all those
                */
                ev_bool isHardwareAnimationEnabled();
                /// <summary>
                /// 通知挂接
                /// </summary>
                /// <param name="parent">父结点</param>
                /// <param name="isTagPoint">是否在结点下，默认为false</param>
                /// <returns></returns>
                void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint);
                /// <summary>
                /// 通知挂接
                /// </summary>
                /// <param name="parent">父结点</param>
                /// <returns></returns>
                void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent);
                /** Returns the number of requests that have been made for software animation
                @remarks
                    If non-zero then software animation will be performed in updateAnimation
                    regardless of the current setting of isHardwareAnimationEnabled or any
                    internal optimise for eliminate software animation. Requests for software
                    animation are made by calling the addSoftwareAnimationRequest() method.
                */
                ev_int32 getSoftwareAnimationRequests() const;
                /** Returns the number of requests that have been made for software animation of normals
                @remarks
                    If non-zero, and getSoftwareAnimationRequests() also returns non-zero,
                    then software animation of normals will be performed in updateAnimation
                    regardless of the current setting of isHardwareAnimationEnabled or any
                    internal optimise for eliminate software animation. Currently it is not
                    possible to force software animation of only normals. Consequently this
                    value is always less than or equal to that returned by getSoftwareAnimationRequests().
                    Requests for software animation of normals are made by calling the
                    addSoftwareAnimationRequest() method with 'true' as the parameter.
                */
                ev_int32 getSoftwareAnimationNormalsRequests() const;
                /** Add a request for software animation
                @remarks
                    Tells the entity to perform animation calculations for skeletal/vertex
                    animations in software, regardless of the current setting of
                    isHardwareAnimationEnabled().  Software animation will be performed
                    any time one or more requests have been made.  If 'normalsAlso' is
                    'true', then the entity will also do software blending on normal
                    vectors, in addition to positions. This advanced method useful for
                    situations in which access to actual mesh vertices is required,
                    such as accurate collision detection or certain advanced shading
                    techniques. When software animation is no longer needed,
                    the caller of this method should always remove the request by calling
                    removeSoftwareAnimationRequest(), passing the same value for
                    'normalsAlso'.
                */
                void addSoftwareAnimationRequest(ev_bool normalsAlso);
                /** Removes a request for software animation
                @remarks
                    Calling this decrements the entity's internal counter of the number
                    of requests for software animation.  If the counter is already zero
                    then calling this method throws an exception.  The 'normalsAlso'
                    flag if set to 'true' will also decrement the internal counter of
                    number of requests for software animation of normals.
                */
                void removeSoftwareAnimationRequest(ev_bool normalsAlso);
                /** Shares the EarthView::World::Graphic::CSkeletonInstance with the supplied entity.
                *   Note that in order for this to work, both entities must have the same
                *   CSkeleton.
                */
                void shareSkeletonInstanceWith(EarthView::World::Graphic::CEntity *entity);
                /** Returns whether or not this entity is either morph or pose animated.
                */
                ev_bool hasVertexAnimation() const;

                /** Stops sharing the EarthView::World::Graphic::CSkeletonInstance with other entities.
                */
                void stopSharingSkeletonInstance();

                /**
                * Returns whether this entity shares it's SkeltonInstance with other entity instances.
                */
                ev_bool sharesSkeletonInstance() const;
                /**
                * Returns a pointer to the set of entities which share a EarthView::World::Graphic::CSkeletonInstance.
                * If this instance does not share it's EarthView::World::Graphic::CSkeletonInstance with other instances NULL will be returned
                */
                const EarthView::World::Graphic::CEntity::EntitySet *getSkeletonInstanceSharingSet() const;
                /** Updates the internal animation state set to include the latest
                available animations from the attached skeleton.
                @remarks
                Use this method if you manually add animations to a skeleton, or have
                linked the skeleton to another for animation purposes since creating
                this entity.
                @note
                If you have called getAnimationState prior to calling this method,
                the pointers will still remain valid.
                */
                void refreshAvailableAnimationState();
                /** Advanced method to perform all the updates required for an animated entity.
                @remarks
                You don't normally need to call this, but it's here in case you wish
                to manually update the animation of an EarthView::World::Graphic::CEntity at a specific point in
                time. CAnimation will not be updated more than once a frame no matter
                how many times you call this method.
                */
                void _updateAnimation();
                /** Tests if any animation applied to this entity.
                @remarks
                    An entity is animated if any animation state is enabled, or any manual bone
                    applied to the skeleton.
                */
                ev_bool _isAnimated() const;
                /** Tests if skeleton was animated.
                */
                ev_bool _isSkeletonAnimated() const;
                /** Advanced method to get the temporarily blended skeletal vertex information
                for entities which are software skinned.
                @remarks
                    Internal engine will eliminate software animation if possible, this
                    information is unreliable unless added request for software animation
                    via addSoftwareAnimationRequest.
                @note
                    The positions/normals of the returned vertex data is in object space.
                */
                EarthView::World::Graphic::CVertexData *_getSkelAnimVertexData() const;
                /** Advanced method to get the temporarily blended software vertex animation information
                @remarks
                    Internal engine will eliminate software animation if possible, this
                    information is unreliable unless added request for software animation
                    via addSoftwareAnimationRequest.
                @note
                    The positions/normals of the returned vertex data is in object space.
                */
                EarthView::World::Graphic::CVertexData *_getSoftwareVertexAnimVertexData() const;
                /** Advanced method to get the hardware morph vertex information
                @note
                    The positions/normals of the returned vertex data is in object space.
                */
                EarthView::World::Graphic::CVertexData *_getHardwareVertexAnimVertexData() const;
                /** Advanced method to get the temp buffer information for software
                skeletal animation.
                */
                EarthView::World::Graphic::CTempBlendedBufferInfo *_getSkelAnimTempBufferInfo();
                /** Advanced method to get the temp buffer information for software
                morph animation.
                */
                EarthView::World::Graphic::CTempBlendedBufferInfo *_getVertexAnimTempBufferInfo();
                //// Override to return specific type flag
                ev_uint32 getTypeFlags() const;
                //// Retrieve the EarthView::World::Graphic::CVertexData which should be used for GPU binding
                EarthView::World::Graphic::CVertexData *getVertexDataForBinding();
                //// Identify which vertex data we should be sending to the renderer
                enum VertexDataBindChoice
                {
                    BIND_ORIGINAL,
                    BIND_SOFTWARE_SKELETAL,
                    BIND_SOFTWARE_MORPH,
                    BIND_HARDWARE_MORPH
                };
                //// Choose which vertex data to bind to the renderer
                EarthView::World::Graphic::CEntity::VertexDataBindChoice chooseVertexDataForBinding(ev_bool hasVertexAnim);
                /** Are buffers already marked as vertex animated? */
                ev_bool _getBuffersMarkedForAnimation() const;
                /** Mark just this vertex data as animated.
                */
                void _markBuffersUsedForAnimation();
                /** Has this EarthView::World::Graphic::CEntity been initialised yet?
                @remarks
                	If this returns false, it means this EarthView::World::Graphic::CEntity hasn't been completely
                	constructed yet from the underlying resources (CMesh, CSkeleton), which
                	probably means they were delay-loaded and aren't available yet. This
                	EarthView::World::Graphic::CEntity won't render until it has been successfully initialised, nor
                	will many of the manipulation methods function.
                */
                ev_bool isInitialised() const;
                /** Try to initialise the EarthView::World::Graphic::CEntity from the underlying resources.
                @remarks
                	This method builds the internal structures of the CEntity based on it
                	resources (CMesh, CSkeleton). This may or may not succeed if the
                	resources it references have been earmarked for background loading,
                	so you should check isInitialised afterwards to see if it was sucessful.
                @param forceReinitialise If true, this forces the EarthView::World::Graphic::CEntity to tear down it's
                	internal structures and try to rebuild them. Useful if you changed the
                	content of a CMesh or CSkeleton at runtime.
                */
				void _initialise(ev_bool forceReinitialise,const EarthView::World::Core::IntVector& submeshIndics);
                void _initialise(ev_bool forceReinitialise);
                /*	void _initialise(ev_bool forceReinitialise = false);*/
                void _initialise();
                /** Tear down the internal structures of this CEntity, rendering it uninitialised. */
                void _deinitialise();


                /// <summary>
                /// 访问可渲染对象
                /// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
                /// debugRenderables默认为false
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                /// <returns></returns>
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                /** Get the lod strategy transformation of the mesh lod factor. */
                Real _getMeshLodFactorTransformed() const;

                /** EarthView::World::Graphic::CEntity's skeleton's EarthView::World::Graphic::CAnimationState will not be automatically updated when set to true.
                	Useful if you wish to handle EarthView::World::Graphic::CAnimationState updates manually.
                */
                void setSkipAnimationStateUpdate(ev_bool skip);

                /** EarthView::World::Graphic::CEntity's skeleton's EarthView::World::Graphic::CAnimationState will not be automatically updated when set to true.
                 Useful if you wish to handle EarthView::World::Graphic::CAnimationState updates manually.
                 */
                ev_bool getSkipAnimationStateUpdate() const;
                /** The skeleton of the main entity will be updated even if the an LOD entity is being displayed.
                useful if you have entities attached to the main entity. Otherwise position of attached
                entities will not be updated.
                */
                void setAlwaysUpdateMainSkeleton(ev_bool update)
                {
                    mAlwaysUpdateMainSkeleton = update;
                }
                /** The skeleton of the main entity will be updated even if the an LOD entity is being displayed.
                useful if you have entities attached to the main entity. Otherwise position of attached
                entities will not be updated.
                */
                ev_bool getAlwaysUpdateMainSkeleton() const
                {
                    return mAlwaysUpdateMainSkeleton;
                }
            };
            /// <summary>
            /// 实体类工厂
            /// 为实体创建实例
            /// </summary>
            class EV_GRAPHIC_DLL CEntityFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CEntityFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">名称键值列表</param>
                /// <returns>实例</returns>
                EarthView::World::Graphic::CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CEntityFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CEntityFactory();
                ///工厂类型名称
                static EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得实体的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>实体的类型</returns>
                EVString getType() const;
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">移动对象</param>
                /// <returns></returns>
                void destroyInstance( EarthView::World::Graphic::CMovableObject *obj);
            };
        }
    }
}


#endif

