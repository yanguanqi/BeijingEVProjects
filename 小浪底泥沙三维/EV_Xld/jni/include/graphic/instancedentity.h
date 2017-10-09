#ifndef __InstancedEntity_H__
#define __InstancedEntity_H__
#pragma once
#include "graphic/graphic_config.h"
#include "movableobject.h"
#include "node.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CMatrix4;
				class CQuaternion;
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
			class CInstanceObject;
			class EV_GRAPHIC_DLL CInstancedEntity : public EarthView::World::Core::CAllocatedObject
			{
				friend class CInstanceBatch;
				friend class CInstanceBatchShader;
				friend class CInstanceBatchHW;
				friend class CInstanceBatchHW_VTF;
				friend class CBaseInstanceBatchVTF;
				friend class CSubEntity;				
				friend class CEntity;
			
			ev_private:
				CInstancedEntity( _in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CInstancedEntity( EarthView::World::Graphic::CInstanceBatch *ref_batchOwner, ev_uint32 instanceID);
				virtual ~CInstancedEntity();
			public:
				EarthView::World::Graphic::CInstanceBatch *_getOwner()const	{return mBatchOwner;}

				ev_bool isInUse() const	{return mInUse;}				
				ev_bool isInScene() const{return mInUse;}
				void setInUse(ev_bool used);

				ev_bool getVisible()const{return mVisible;}
				ev_void setVisible(ev_bool visible);

				/// <summary>
				/// 获取对象在CInstanceBatch中的序号				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_uint16 getIndex()const{return mInstanceId;}

				ev_uint32 getInstanceIndex()const{return mInstanceIndex;}				

				/// <summary>
				/// 获取对象在submesh中的instance序号				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_uint32 getSubMeshInstanceIndex()const{return mSubMeshInstanceIndex;}
				
				/// <summary>
				/// 询问是否为内部instance对象				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool isInternalInstance()const;

				/// <summary>
				/// 获取SubMesh中的instance矩阵				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 getSubMeshInstanceMatrix()const;				
				
				ev_void setUserColour(const EarthView::World::Graphic::CColourValue& color);				
				EarthView::World::Graphic::CColourValue  getUserColour() const;

			protected:
				EarthView::World::Graphic::CColourValue getColour()const;
			ev_private:
				void setInstanceIndex(ev_uint32 index){mInstanceIndex = index;}
				void setSubMeshInstanceIndex(ev_uint32 submeshInstanceIndex){mSubMeshInstanceIndex = submeshInstanceIndex;}			
			public:
				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				EarthView::World::Core::IntVector getSelected()const
				{
					EarthView::World::Core::IntVector vec;
					if(mSelected)
						vec.push_back(0);
					return vec;
				}

				/// <summary>
				/// 获得选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CColourValue getSelectionColour()const
				{
					EarthView::World::Graphic::CColourValue colour(
						(ev_real32) mSelectionColourR / 255.0,
						(ev_real32) mSelectionColourG / 255.0,
						(ev_real32) mSelectionColourB / 255.0,
						(ev_real32) mSelectionColourA / 255.0
						);
					return colour;
				}

				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);
				

			protected:
				virtual ev_bool findVisible( EarthView::World::Graphic::CCamera *camera );
			protected:
				ev_uint16 mInstanceId;
				ev_uint32 mInstanceIndex;
				ev_uint32 mSubMeshInstanceIndex;				

				EarthView::World::Graphic::CInstanceBatch *mBatchOwner;

				ev_bool mInUse;
				ev_bool mVisible;
				ev_bool mSelected;				
				ev_bool mUseLocalTransform;

				ev_uint8 mSelectionColourR;
				ev_uint8 mSelectionColourG;
				ev_uint8 mSelectionColourB;
				ev_uint8 mSelectionColourA;

				ev_uint8 mColourR;
				ev_uint8 mColourG;
				ev_uint8 mColourB;
				ev_uint8 mColourA;

			};

            class EV_GRAPHIC_DLL CInstancedEntity2 : public EarthView::World::Graphic::CInstancedEntity
            {
                friend class CInstanceBatch;
                friend class CInstanceBatchShader;
                friend class CInstanceBatchHW;
                friend class CInstanceBatchHW_VTF;
                friend class CBaseInstanceBatchVTF;
				friend class CTagPoint;				
				friend class CInstanceObject;
			public:
				class EV_GRAPHIC_DLL CInstancedEntityMovable : public EarthView::World::Graphic::CMovableObject
				{
				private:
					EarthView::World::Graphic::CInstancedEntity2* mParent;
				public:
					CInstancedEntityMovable(EVString name,EarthView::World::Graphic::CInstancedEntity2* parent) : mParent(parent)
					{
						 mName = name;
					}
				ev_private:
					CInstancedEntityMovable(EarthView::World::Core::CNameValuePairList* pList) : mParent((CInstancedEntity2*)pList->GetAt("parent"))
					{
						mName = (char*)pList->GetAt("name");
					}
				public:
					CInstancedEntity2* getParent()const{return mParent;}
					virtual EVString getMovableType() const
					{
						return mParent->getMovableType();
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const
					{
						return mParent->getBoundingBox();
					}
					virtual Real getBoundingRadius() const
					{
						return mParent->getBoundingRadius();
					}			
					virtual Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const
					{
						return mParent->getSquaredViewDepth(cam);
					}					
					virtual void _notifyMoved()
					{
						EarthView::World::Graphic::CMovableObject::_notifyMoved();
						mParent->_notifyMoved();
					}				
					virtual void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint );				
					virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue )
					{
						mParent->_updateRenderQueue(queue);
					}
					virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables = false )
					{
						mParent->visitRenderables(visitor,debugRenderables);
					}
					virtual const EarthView::World::Spatial::Math::CMatrix4 &_getParentNodeFullTransform() const
					{
						return mParent->_getParentNodeFullTransform();
					}
					
					virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
					
					virtual ev_bool isInScene() const
					{
						return mParent->isInUse();
					}	

					virtual ev_bool isVisible() const;

					ev_bool getVisible()const
					{
						return mParent->getVisible();
					}

					void setVisible(ev_bool visible)
					{
						mParent->setVisible(visible);
						CMovableObject::setVisible(visible);
					}
				};

            protected:
				friend class CInstancedEntityMovable;
				CInstancedEntityMovable* mpMovable;                
				
				EarthView::World::Graphic::CInstanceObject*mObjectOwner;
                EarthView::World::Graphic::CAnimationStateSet *mAnimationState;
                EarthView::World::Graphic::CSkeletonInstance *mSkeletonInstance;
                EarthView::World::Spatial::Math::CMatrix4 *mBoneMatrices;	 			///Local space
                EarthView::World::Spatial::Math::CMatrix4 *mBoneWorldMatrices; 			///World space
                ev_uint32 mFrameAnimationLastUpdated;               
                /** Used in conjunction with bone matrix lookup. Tells the number of the transform for
                    as arranged in the vertex texture */
                ev_uint16 mTransformLookupNumber;
                
                ///////////////////////////////////////////////////////////////////////////
                /// Parameters used for local transformation offset information
                /// The
                ///////////////////////////////////////////////////////////////////////////
                //// Object position
                EarthView::World::Spatial::Math::CVector3 mPosition;
                EarthView::World::Spatial::Math::CVector3 mDerivedLocalPosition;
                //// Object orientation
                EarthView::World::Spatial::Math::CQuaternion mOrientation;
                //// Object scale
                EarthView::World::Spatial::Math::CVector3 mScale;
                //// The maximum absolute scale for all dimension
                Real mMaxScaleLocal;
                //// Full world transform
                EarthView::World::Spatial::Math::CMatrix4 mFullLocalTransform;
								

                //// Tells if mFullTransform needs an updated
                ev_bool mNeedTransformUpdate;
                //// Tells if the animation world transform needs an update
                ev_bool mNeedAnimTransformUpdate; 

				ev_bool mSubMeshLocalMatrixUsed;						

				EarthView::World::Graphic::MovableObjectList* mChildObjects;

				mutable EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
				mutable Real mBoundingRadius;

			public:
				EarthView::World::Graphic::CTagPoint *attachObjectToBone(const EVString &boneName, EarthView::World::Graphic::CMovableObject *ref_pMovable,
					const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation, const EarthView::World::Spatial::Math::CVector3 &offsetPosition);
				ev_void detachObjectFromBone(EarthView::World::Graphic::CMovableObject * pMovable);
				ev_void detachAllObjectsFromBone();
				EarthView::World::Graphic::MovableObjectList* getAttachedObjectsOnBones()const;				
				
				EarthView::World::Spatial::Math::CMatrix4 getLocalTransform()const;

				EarthView::World::Core::CRecursiveMutex* getTransformMutex()const
				{
					return &mTransformMutex;
				}

			protected:				
				ev_void updateBoundingBox()const;				

				ev_void attachObjectToBoneImpl(EarthView::World::Graphic::CMovableObject *pMovable, EarthView::World::Graphic::CTagPoint *pAttachingPoint);
				ev_void detachObjectFromBoneImpl(EarthView::World::Graphic::CMovableObject *pMovable);

			protected:
                //// Returns number of matrices written to transform, assumes transform has enough space
                ev_size_t getTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
                //// Returns number of 32-bit values written
                ev_size_t getTransforms3x4( ev_real64 *xform ) const;
				ev_size_t getTransforms3x4( ev_real32 *xform ) const;
				ev_size_t getTransforms3x4Size() const;
                //// Returns true if this InstancedObject is visible to the current camera
                virtual ev_bool findVisible( EarthView::World::Graphic::CCamera *camera );
                //// Creates/destroys our own skeleton, also tells slaves to unlink if we're destroying
                void createSkeletonInstance();
                void destroySkeletonInstance();
               
                //// Mark the transformation matrixes as dirty
                inline void markTransformDirty();
                //// Incremented count for next name extension
                static CNameGenerator msNameGenerator;

				mutable EarthView::World::Core::CRecursiveMutex mTransformMutex;

            ev_private:
                CInstancedEntity2( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CInstancedEntity2( EarthView::World::Graphic::CInstanceBatch *ref_batchOwner, ev_uint32 instanceID);
                
                virtual ~CInstancedEntity2();
			public:  
                

				CInstancedEntityMovable* getMovable()const
				{
					return mpMovable;
				}				

                EVString getMovableType() const;
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                Real getBoundingRadius() const;
				void calBoundingRadius() const;
                /** This is used by our batch owner to get the closest entity's depth, returns infinity
                    when not attached to a scene node */
                Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;
                //// Overriden so we can tell the InstanceBatch it needs to update it's bounds
                void _notifyMoved();				
                void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint );
                //// Do nothing, InstanceBatch takes care of this.
                void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue )	{}
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables = false ) {}
                /** @see Entity::hasSkeleton */
                ev_bool hasSkeleton() const
                {
                    return mSkeletonInstance != 0;
                }
                /** @see Entity::getSkeleton */
                EarthView::World::Graphic::CSkeletonInstance *getSkeleton() const
                {
                    return mSkeletonInstance;
                }
                /** @see Entity::getAnimationState */
                EarthView::World::Graphic::CAnimationState *getAnimationState(const EVString &name) const;
                /** @see Entity::getAllAnimationStates */
                EarthView::World::Graphic::CAnimationStateSet *getAllAnimationStates() const;
                /** Called by InstanceBatch in <i>his</i> _updateRenderQueue to tell us we need
                	to calculate our bone matrices.
                	@remarks Assumes it has a skeleton (mSkeletonInstance != 0)
                	@return true if something was actually updated
                */
                virtual ev_bool _updateAnimation();
               
				void setTransformLookupNumber(ev_uint16 num)
				{
					mTransformLookupNumber = num;
				}

                /** Retrieve the position */
                const EarthView::World::Spatial::Math::CVector3 &getPosition() const
                {
                    return mPosition;
                }
                /** Set the position or the offset from the parent node if a parent node exists */
                void setPosition(const EarthView::World::Spatial::Math::CVector3 &position, ev_bool doUpdate = true);
                /** Retrieve the orientation */
                const EarthView::World::Spatial::Math::CQuaternion &getOrientation() const
                {
                    return mOrientation;
                }
                /** Set the orientation or the offset from the parent node if a parent node exists */
                void setOrientation(const EarthView::World::Spatial::Math::CQuaternion &orientation, ev_bool doUpdate = true);
                /** Retrieve the local scale */
                const EarthView::World::Spatial::Math::CVector3 &getScale() const
                {
                    return mScale;
                }
                /** Set the  scale or the offset from the parent node if a parent node exists  */
                void setScale(const EarthView::World::Spatial::Math::CVector3 &scale, ev_bool doUpdate = true);

				EarthView::World::Spatial::Math::CMatrix4 getMatrix()const;
				void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix, ev_bool doUpdate = true);

                /** Returns the maximum derived scale coefficient among the xyz values */
                Real getMaxScaleCoef() const;
                /** Update the world transform and derived values */
                void updateTransforms();               
               
				const EarthView::World::Spatial::Math::CMatrix4 &_getParentNodeFullTransform() const;
				
                /** Returns the derived position of the instanced entity including local transform */
                const EarthView::World::Spatial::Math::CVector3 &_getDerivedPosition() const;
				

				void setSelectable(ev_bool selectable);
				ev_bool getSelectable()const;

				void setHighlightable(ev_bool highlightable);
				ev_bool getHighlightable()const;

				void setEditable(ev_bool editable);
				ev_bool getEditable()const;

				ev_bool getReflectable() const;
				ev_void setReflectable(ev_bool value);

				ev_bool getRefractable() const;
				ev_void setRefractable(ev_bool value);

				ev_bool isVisible()const;
									

				void setVisibilityFlags(ev_uint32 flags);				
				ev_uint32 getVisibilityFlags()const;
				
				void setRenderingMaxDistance(Real dist);				
				Real getRenderingMaxDistance() const;

				void setRenderingMinDistance(Real dist);
				Real getRenderingMinDistance() const;

				EarthView::World::Graphic::CMovableObject::CUserData* getUserData()const;
				ev_void setUserData(EarthView::World::Graphic::CMovableObject::CUserData* data);

				EarthView::World::Graphic::CNode* getParentNode()const;

				ev_bool isAttached()const;
				ev_bool isParentNodeLocal()const;
				ev_void setParentNodelLocal(ev_bool local);					

				/// <summary>
				/// 询问是否使用了SubMesh局部变换矩阵				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool getSubMeshLocalMatrixUsed()const
				{
					return mSubMeshLocalMatrixUsed;
				}

				/// <summary>
				/// 设置是否使用SubMesh局部变换矩阵				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void useSubMeshLocalMatrix(ev_bool use)
				{
					mSubMeshLocalMatrixUsed = use;
				}

				/// <summary>
				/// 获得SubMesh局部变换矩阵				
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Spatial::Math::CMatrix4& getSubMeshLocalMatrix()const;

				/// <summary>
				/// 获得所有者(EarthView::World::Graphic::CInstanceObject)				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CInstanceObject* getObjectOwner()const{return mObjectOwner;}
            };
        }
    }
}

#endif

