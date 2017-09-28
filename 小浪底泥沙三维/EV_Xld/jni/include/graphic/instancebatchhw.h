#ifndef __InstanceBatchHW_H__
#define __InstanceBatchHW_H__
#pragma once
#include "graphic/graphic_config.h"
#include "instancebatch.h"
#include "hardwarevertexbuffer.h"
#include "core/workqueue.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CInstanceBatchHW : public EarthView::World::Graphic::CInstanceBatch
            {
			protected:
                ev_bool	mKeepStatic;
                void setupVertices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                void setupIndices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                void removeBlendData();
                virtual ev_bool checkSubMeshCompatibility( const EarthView::World::Graphic::CSubMesh *baseSubMesh );

			ev_private:
				/* 内部Instance矩阵Buffer更新 */
                ev_size_t updateVertexBuffer( EarthView::World::Graphic::CCamera *currentCamera );

				/* 外部Instance矩阵Buffer更新 */
				ev_size_t updateVertexBuffer(ev_uint64 viewport,EarthView::World::Graphic::CCamera *currentCamera );

				ev_void swapVertexBuffer(ev_uint64 viewport);
            ev_private:
                CInstanceBatchHW(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                CInstanceBatchHW( EarthView::World::Graphic::CInstanceManager *ref_creator, EarthView::World::Graphic::CMeshPtr &meshReference, const EarthView::World::Graphic::CMaterialPtr &material,
                                  ev_size_t instancesPerBatch, const EarthView::World::Graphic::IndexMap *ref_indexToBoneMap,
                                  const EVString &batchName );
                virtual ~CInstanceBatchHW();
                /** @see InstanceBatch::calculateMaxNumInstances */
                ev_size_t calculateMaxNumInstances( const EarthView::World::Graphic::CSubMesh *baseSubMesh, ev_uint16 flags ) const;
                /** @see InstanceBatch::buildFrom */
                void buildFrom( const EarthView::World::Graphic::CSubMesh *baseSubMesh, const EarthView::World::Graphic::CRenderOperation &renderOperation );
                /** Overloaded so that we don't perform needless updates when in static mode. Also doing that
                	could cause glitches with shadow mapping (since Ogre thinks we're small/bigger than we
                	really are when displaying, or that we're somewhere else)
                */
                void _boundsDirty();
                /** @see InstanceBatch::setStaticAndUpdate. While this flag is true, no individual per-entity
                	cull check is made. This means if the camera is looking at only one instance, all instances
                	are sent to the vertex shader (unlike when this flag is false). This saves a lot of CPU
                	power and a bit of bus bandwidth.
                */
                void setStaticAndUpdate( ev_bool bStatic );
                ev_bool isStatic() const
                {
                    return mKeepStatic;
                }
                ///CRenderable overloads
                void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
                ev_uint16 getNumWorldTransforms() const;
                /** Overloaded to avoid updating skeletons (which we don't support), check visibility on a
                	per unit basis and finally updated the vertex buffer */
                virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue );

				void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op )
				{
					linkEntity();
					prepareMatrixBuffer();
					op = mRenderOperation;
				}

				void prepareMatrixBuffer();

				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
			public:
				/// <summary>
				/// 跟踪父节点
				/// 内部instance专用(instanced entity之间相对静止)
				/// </summary>
				/// <param name="pNode"></param>
				/// <returns></returns>
				virtual ev_bool trackParentNode(EarthView::World::Graphic::CNode* pNode);
				/// <summary>
				/// 获得跟踪的父节点
				/// 用于判断是否为内部instance
				/// </summary>
				/// <returns>跟踪的父节点</returns>
				virtual EarthView::World::Graphic::CNode* getTrackingNode()const{return mTrackingNode;}

				/// <summary>
				/// instanced entity 渲染状态发生变化
				/// 可见性/自定义颜色发生变化
				/// </summary>
				/// <param name="pNode"></param>
				/// <returns></returns>
				virtual ev_void onInstancedEntityStateChanged(EarthView::World::Graphic::CInstancedEntity* instancedEntity);

				ev_bool linkEntity(EarthView::World::Graphic::CEntity* pEntity);
				ev_void delinkEntity();

				ev_bool isAsyncUpdatingBuffer()const {return mAsyncUpdateBuffer;}
				ev_void setAsyncUpdateBuffer(ev_bool async);
			protected:
				EarthView::World::Graphic::CNode* mTrackingNode;
				ev_bool mVertexBufferDirty;

				class CTrackingNodeListener;
				EarthView::World::Graphic::CInstanceBatchHW::CTrackingNodeListener* mpNodeListener;
				void trackingNodeUpdated();

				ev_bool linkEntity();
				friend class CTrackingNodeListener;

			private:
				vector<EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> mVertexBuffers;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr	mIndexBuffer;
				EarthView::World::Graphic::CVertexDeclaration* mpVertexDeclaration;
				EarthView::World::Graphic::CEntity* mpSkeletonEntity;
				ev_uint32 mVertexCount;
				ev_uint32 mVertexStart;
				ev_uint32 mIndexCount;
				ev_uint32 mIndexStart;	
				ev_uint32 mMatrixVertexSize;

				struct BufferData
				{
					ev_uint32 RenderVisibleCount;
					EarthView::World::Spatial::Math::CVector3 RenderCameraPosition;
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr RenderBuffer;	

					ev_uint32 UpdateVisibleCount;
					EarthView::World::Spatial::Math::CVector3 UpdateCameraPosition;
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr UpdateBuffer;	
					
					ev_uint32 LastFrameNumber;
									
					BufferData()
					{
						RenderVisibleCount = 0;
						UpdateVisibleCount = 0;

						LastFrameNumber = 0;							
					}
				};

				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mOrigBuffer;

				typedef map<ev_uint64,BufferData> BufferMap;
				mutable BufferMap* mBufferMap;
				mutable EarthView::World::Core::CReadWriteLock mBufferMutex;
				
				EarthView::World::Spatial::Math::CVector3 mCameraPosition;
				ev_bool mBusy;
				 
				ev_bool mAsyncUpdateBuffer;//异步更新顶点Buffer
            };
        }
    }
}

#endif

