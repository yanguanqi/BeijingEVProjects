#ifndef __InstanceBatch_H__
#define __InstanceBatch_H__
#pragma once
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "renderoperation.h"
#include "renderable.h"
#include "movableobject.h"
#include "mesh.h"
#include "selectionrenderable.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CInstanceManager;
            class CInstancedEntity;
            /////------------------struct to class------------------------////

            class EV_GRAPHIC_DLL CInstancedEntityVec : public EarthView::World::Core::CBaseObject
            {
            public:
                CInstancedEntityVec() {}
ev_private:
                CInstancedEntityVec(_in EarthView::World::Core::CNameValuePairList *pList) {}
ev_private:
                typedef vector<EarthView::World::Graphic::CInstancedEntity *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                iterator insert(iterator pos, EarthView::World::Graphic::CInstancedEntity *const &ref_t)
                {
                    return mList.insert(pos, ref_t);
                }

                ///???????????
                void insert(iterator _Where, iterator _First, iterator _Last)
                {
                    return mList.insert(_Where, _First, _Last);
                }
            private:
                InternalList mList;
            public:
                void push_back(EarthView::World::Graphic::CInstancedEntity *const &ref_t)
                {
                    mList.push_back(ref_t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                EarthView::World::Graphic::CInstancedEntity*& front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::CInstancedEntity*& back()
                {
                    return mList.back();
                }
                void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedEntity *const &ref_t)
                {
                    mList.insert(begin() + pos, ref_t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EarthView::World::Graphic::CInstancedEntity*& operator[](ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::CInstancedEntity *const &operator[](ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                EarthView::World::Graphic::CInstancedEntity*& at(ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::CInstancedEntity *const &at(ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }
                void clear()
                {
                    mList.clear();
                }
            };

            class EV_GRAPHIC_DLL CInstanceBatch : public EarthView::World::Graphic::CRenderable/*, public EarthView::World::Graphic::CMovableObject*/
            {
			ev_private:
                CInstanceBatch(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                class  EV_GRAPHIC_DLL CInstanceBatchInternalMovable : public  EarthView::World::Graphic::CMovableObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数的键值对表</param>
                    /// <returns></returns>
                    CInstanceBatchInternalMovable(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">构造函数的键值对表</param>
                    /// <returns></returns>
                    CInstanceBatchInternalMovable (CInstanceBatch *ref_parent, const EVString &name );
                    EarthView::World::Graphic::CSceneManager *getSceneManger()
                    {
                        return mManager;
                    }
                public:
                    virtual Real  getBoundingRadius() const;
                    virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                    virtual EVString getMovableType() const;                   
                    virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
                    virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                    virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                    virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables );
					virtual void _notifyAttached(EarthView::World::Graphic::CNode *parent, ev_bool isTagPoint);					
					virtual const EarthView::World::Graphic::LightList &queryLights() const;
					virtual ev_bool getReceivesShadows();

					/// <summary>
					/// 设置选中的对象				
					/// <param name="objIndics">选中的对象集合</param>				
					/// <returns></returns>
					virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);				

					/// <summary>
					/// 获得选中的对象				
					/// <param name=""></param>				
					/// <returns>选中的对象集合</returns>
					virtual EarthView::World::Core::IntVector getSelected()const;	

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

					virtual ev_void renderSelection();
                    virtual ev_void clearSelection();

					virtual ev_bool startEditing(ev_uint32 objectIndex);
					virtual ev_void endEditing();
					virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

					virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix);
					virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);

					EarthView::World::Graphic::CInstanceBatch* getParent()const{return mParent;}
				

                private:
                    EarthView::World::Graphic::CInstanceBatch *mParent;

					friend class CInstanceBatch;
                };
            public:                             
                virtual EVString getMovableType() const;               
                virtual void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *ref_cam );                
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;                
                virtual Real getBoundingRadius() const;
                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables );
				virtual void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint);				
				virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
				virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
				
				virtual ev_bool getReceivesShadows();
				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);	

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 获得选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Graphic::CColourValue& getSelectionColour()const;
				

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				EarthView::World::Core::IntVector getSelected()const;	

				/// <summary>
				/// 切换材质			
				/// <param name="matPtr">新的材质对象</param>				
				/// <returns></returns>
				void setMaterial(const EarthView::World::Graphic::CMaterialPtr& matPtr);

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
                virtual ev_void renderSelection();
                virtual ev_void clearSelection();

				virtual ev_bool startEditing(ev_uint32 objectIndex);
				virtual ev_void endEditing();
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

				virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix);
				virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);


				virtual EarthView::World::Graphic::CInstancedEntity* getInstanceEntity(ev_uint32 objectIndex);

                EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable *getMovableObjectPtr()  const{return mpMovableObject;}
                virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mpMovableObject;}

				ev_uint8 getRenderQueueID()const{return mpMovableObject->getRenderQueueId();}
				ev_uint16 getRenderQueuePriority()const{return mpMovableObject->mRenderQueuePriority;}

            private:
                EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable *mpMovableObject;

            public:
                /// typedef vector<InstancedEntity*> InstancedEntityVec;

				/// <summary>
				/// 跟踪父节点
				/// 内部instance专用(instanced entity之间相对静止)
				/// </summary>
				/// <param name="pNode"></param>
				/// <returns></returns>
				virtual ev_bool trackParentNode(EarthView::World::Graphic::CNode* pNode){return false;}
				/// <summary>
				/// 获得跟踪的父节点
				/// 用于判断是否为内部instance
				/// </summary>
				/// <returns>跟踪的父节点</returns>
				virtual EarthView::World::Graphic::CNode* getTrackingNode()const{return NULL;}
				/// <summary>
				/// instanced entity 渲染状态发生变化
				/// 可见性/自定义颜色发生变化
				/// </summary>
				/// <param name="pNode"></param>
				/// <returns></returns>
				virtual ev_void onInstancedEntityStateChanged(CInstancedEntity* instancedEntity){}

            protected:
                EarthView::World::Graphic::CRenderOperation		mRenderOperation;
                ev_size_t				mInstancesPerBatch;
                EarthView::World::Graphic::CInstanceManager		*mCreator;
                EarthView::World::Graphic::CMaterialPtr			mMaterial;
                EarthView::World::Graphic::CMeshPtr				 mMeshReference;
                EarthView::World::Graphic::IndexMap const *mIndexToBoneMap;
                ///InstancedEntities are all allocated at build time and kept as "unused"
                ///when they're requested, they're removed from there when requested,
                ///and put back again when they're no longer needed
                ///Note each InstancedEntity has a unique ID ranging from [0; mInstancesPerBatch)
                EarthView::World::Graphic::CInstancedEntityVec	mInstancedEntities;
                EarthView::World::Graphic::CInstancedEntityVec	mUnusedEntities;
				mutable  EarthView::World::Core::CReadWriteLock mInstancedEntitiesLock;
                //// This bbox contains all (visible) instanced entities
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox		mFullBoundingBox;
                Real				mBoundingRadius;
                ev_bool				mBoundsDirty;
                //// Set to false by derived classes that need it
                ev_bool				mBoundsUpdated;
                EarthView::World::Graphic::CCamera				*mCurrentCamera;
                ev_uint16		mMaterialLodIndex;
                //// Set to false at start of each _updateRenderQueue
                ev_bool				mDirtyAnimation;
                //// False if a technique doesn't support skeletal animation
                ev_bool				mTechnSupportsSkeletal;
                //// Cached distance to last camera for getSquaredViewDepth
                mutable Real mCachedCameraDist;
                //// The camera for which the cached distance is valid
                mutable const EarthView::World::Graphic::CCamera *mCachedCamera;
                //// Tells that the list of entity instances with shared transforms has changed
                ev_bool mTransformSharingDirty;
                //// When true remove the memory of the CVertexData we've created because no one else will
                ev_bool mRemoveOwnVertexData;
                //// When true remove the memory of the CIndexData we've created because no one else will
                ev_bool mRemoveOwnIndexData;
                virtual void setupVertices( const EarthView::World::Graphic::CSubMesh *baseSubMesh ) ;
                virtual void setupIndices( const EarthView::World::Graphic::CSubMesh *baseSubMesh ) ;
                virtual void createAllInstancedEntities();
                virtual void deleteAllInstancedEntities();
                virtual void deleteUnusedInstancedEntities();
                //// Creates a new InstancedEntity instance
                virtual EarthView::World::Graphic::CInstancedEntity *generateInstancedEntity(ev_size_t num);
                /** Takes an array of 3x4 matrices and makes it camera relative. Note the second argument
                takes number of floats in the array, not number of matrices. Assumes mCachedCamera
                contains the camera which is about to be rendered to.
                */
				void makeMatrixCameraRelative3x4( ev_real32 *mat3x4, ev_real64 *mat3x4Src, ev_size_t numFloats);
                void makeMatrixCameraRelative3x4( ev_real32 *mat3x4, ev_real64 *mat3x4Src, ev_size_t numFloats,const EarthView::World::Spatial::Math::CVector3& cameraPosition);
                //// Returns false on errors that would prevent building this batch from the given submesh
                virtual ev_bool checkSubMeshCompatibility( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                void updateVisibility();
               

                EarthView::World::Spatial::Math::CMatrix4 getInstancedEntityWorldMatrix(const EarthView::World::Graphic::CInstancedEntity* ent) const;

				EarthView::World::Graphic::CInstancedEntity *_createInstancedEntity(ev_bool bInUse);

				EarthView::World::Graphic::CEditBoundingBox* mpEditBox;
               
				ev_int32 mSelectedSubMeshIndex;
				ev_int32 mSelectedObjectIndex;
				ev_int32 mSelectedInstanceIndex;

				EarthView::World::Core::IntVector mSelectedObjectIndics;				

				
				ev_uint32 mRefCount;
            public:
                CInstanceBatch( EarthView::World::Graphic::CInstanceManager *ref_creator, EarthView::World::Graphic::CMeshPtr &meshReference, const EarthView::World::Graphic::CMaterialPtr &material,
                    ev_size_t instancesPerBatch, const EarthView::World::Graphic::IndexMap *ref_indexToBoneMap,
                    const EVString &batchName );
                virtual ~CInstanceBatch();

                EarthView::World::Graphic::CInstanceManager* getOwner() const
                {
                    return mCreator;
                }

                EarthView::World::Graphic::CMeshPtr &_getMeshRef()
                {
                    return mMeshReference;
                }
                /** Raises an exception if trying to change it after being built
                */
                void _setInstancesPerBatch( ev_size_t instancesPerBatch );
                const EarthView::World::Graphic::IndexMap *_getIndexToBoneMap() const
                {
                    return mIndexToBoneMap;
                }
                /** Returns true if this technique supports skeletal animation
                @remarks
                by the derived class is faster than virtual call overhead. And both are clean
                ways of implementing it.
                */
                ev_bool _supportsSkeletalAnimation() const
                {
                    return mTechnSupportsSkeletal;
                }
                /** @see InstanceManager::updateDirtyBatches */
                void _updateBounds();
                /** Some techniques have a limit on how many instances can be done.
                Sometimes even depends on the material being used.
                @par
                Note this is a helper function, as such it takes a submesh base to compute
                querying for a technique without requiering to actually build it.
                @param flags @see InstanceManagerFlags
                @return The max instances limit
                */
                virtual ev_size_t calculateMaxNumInstances( const EarthView::World::Graphic::CSubMesh *baseSubMesh, ev_uint16 flags ) const ;
                /** Constructs all the data needed to use this batch, as well as the
                InstanceEntities. Placed here because in the constructor virtual
                tables may not have been yet filled.
                @param baseSubMesh A sub mesh which the instances will be based upon from.
                @remarks
                Call this only ONCE. This is done automatically by Ogre::InstanceManager
                Caller is responsable for freeing buffers in this EarthView::World::Graphic::CRenderOperation
                Buffers inside the RenderOp may be null if the built failed.
                @return
                A render operation which is very useful to pass to other InstanceBatches
                (@see buildFrom) so that they share the same vertex buffers and indices,
                when possible
                */
                virtual EarthView::World::Graphic::CRenderOperation build( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                /** Instancing consumes significantly more GPU memory than regular rendering
                methods. However, multiple batches can share most, if not all, of the
                vertex & index buffers to save memory.
                Derived classes are free to overload this method to manipulate what to
                reference from Render Op.
                For example, Hardware based instancing uses it's own vertex buffer for the
                last source binding, but shares the other sources.
                @param renderOperation The RenderOp to reference.
                @remarks
                Caller is responsable for freeing buffers passed as input arguments
                This function replaces the need to call build()
                */
                virtual void buildFrom( const EarthView::World::Graphic::CSubMesh *baseSubMesh, const EarthView::World::Graphic::CRenderOperation &renderOperation );
                const EarthView::World::Graphic::CMeshPtr &_getMeshReference() const
                {
                    return mMeshReference;
                }
                //是否已满(InstancedEntity数量达到上限)
                ev_bool isBatchFull() const
                {
					EarthView::World::Core::CReadLocker locker(&mInstancedEntitiesLock);
					return  mInstancedEntities.size() >= mInstancesPerBatch;                    
                }
                //InstancedEntity是否全部未使用
                ev_bool isBatchUnused() const
                {
					EarthView::World::Core::CReadLocker locker(&mInstancedEntitiesLock);
                    return mUnusedEntities.size() == mInstancedEntities.size();
                }
				//InstancedEntity是否至少有一个未使用
				ev_bool isBatchReused() const
				{
					EarthView::World::Core::CReadLocker locker(&mInstancedEntitiesLock);
					return mUnusedEntities.size() > 0;
				}
				ev_uint32 getInstancedEntitiesCount() const
				{
					EarthView::World::Core::CReadLocker locker(&mInstancedEntitiesLock);
					return mInstancedEntities.size();
				}
                /** Fills the input vector with the instances that are currently being used or were requested
                Used for defragmentation, @see InstanceManager::defragmentBatches
                */
                void getInstancedEntitiesInUse( EarthView::World::Graphic::CInstancedEntityVec &outEntities );
                
                virtual void _boundsDirty();
                /** Tells this batch to stop updating animations, positions, rotations, and display
                all it's active instances. Currently only InstanceBatchHW & InstanceBatchHW_VTF support it.
                This option makes the batch behave pretty much like Static Geometry, but with the GPU RAM
                memory advantages (less VRAM, less bandwidth) and not LOD support. Very useful for
                billboards of trees, repeating vegetation, etc.
                @remarks
                This function moves a lot of processing time from the CPU to the GPU. If the GPU
                is already a bottleneck, you may see a decrease in performance instead!
                Call this function again (with bStatic=true) if you've made a change to an
                InstancedEntity and wish this change to take effect.
                Be sure to call this after you've set all your instances
                @see InstanceBatchHW::setStaticAndUpdate
                */
                virtual void setStaticAndUpdate( ev_bool bStatic )		{}
                /** Returns true if this batch was set as static. @see setStaticAndUpdate
                */
                virtual ev_bool isStatic() const
                {
                    return false;
                }
                /** Returns a pointer to a new InstancedEntity ready to use
                Note it's actually preallocated, so no memory allocation happens at
                this point.
                @remarks
                Returns NULL if all instances are being used
                */
                EarthView::World::Graphic::CInstancedEntity *createInstancedEntity();
				EarthView::World::Graphic::CInstancedEntity *createInstancedEntity(ev_bool bInUse);
                /** Removes an InstancedEntity from the scene retrieved with
                getNewInstancedEntity, putting back into a queue
                @remarks
                Throws an exception if the instanced entity wasn't created by this batch
                Removed instanced entities save little CPU time, but _not_ GPU
                */
                void removeInstancedEntity( EarthView::World::Graphic::CInstancedEntity *instancedEntity );
                /** Tells whether world bone matrices need to be calculated.
                This does not include bone matrices which are calculated regardless
                */
                virtual ev_bool useBoneWorldMatrices() const
                {
                    return true;
                }
                /** Tells that the list of entity instances with shared transforms has changed */
                void _markTransformSharingDirty()
                {
                    mTransformSharingDirty = true;
                }
                ///EarthView::World::Graphic::CRenderable overloads
                /** @copydoc CRenderable::getMaterial. */
                const EarthView::World::Graphic::CMaterialPtr &getMaterial() const
                {
                    return mMaterial;
                }
                /** @copydoc CRenderable::getRenderOperation. */
                void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op )
                {
                    op = mRenderOperation;
                }
                /** @copydoc CRenderable::getSquaredViewDepth. */
                Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;
                /** @copydoc CRenderable::getLights. */
                const EarthView::World::Graphic::LightList &getLights( void ) const;
                /** @copydoc CRenderable::getTechnique. */
                EarthView::World::Graphic::CTechnique *getTechnique() const;
				ev_uint32 _ref();

				ev_uint32 _unRef();

				ev_uint32 getRefCount();

				/// <summary>
				/// 设置将要选中的objIndex			
				/// <param name="objIndex">objIndex</param>				
				/// <returns></returns>
				ev_void prepareSelectObject(ev_int32 objIndex);
            };
        }
    }
}

#endif

