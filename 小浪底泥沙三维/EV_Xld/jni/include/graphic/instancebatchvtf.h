#ifndef __BaseInstanceBatchVTF_H__
#define __BaseInstanceBatchVTF_H__
#pragma once
#include "graphic/graphic_config.h"
#include "instancebatch.h"
#include "texture.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CBaseInstanceBatchVTF : public EarthView::World::Graphic::CInstanceBatch
            {
            ev_private:
                CBaseInstanceBatchVTF(_in EarthView::World::Core::CNameValuePairList *pList);
            protected:
                typedef vector<ev_uint8> HWBoneIdxVec;
                typedef vector<Real> HWBoneWgtVec;
                typedef vector<EarthView::World::Spatial::Math::CMatrix4> Matrix4Vec;
                ev_size_t					mMatricesPerInstance; 			///number of bone matrices per instance
                ev_size_t					mNumWorldMatrices;				///Num bones * num instances
                CTexturePtr				mMatrixTexture;				///The VTF
                ///Used when all matrices from each instance must be in the same row (i.e. HW Instancing).
                ///A few pixels are wasted, but resizing the texture puts the danger of not sampling the
                ///right pixel... (in theory it should work, but in practice doesn't)
                ev_size_t					mWidthFloatsPadding;
                ev_size_t					mMaxFloatsPerLine;
                ev_size_t					mRowLength;
                ev_size_t 					mWeightCount;
                ///Temporary array used to store 3x4 matrices before they are converted to dual quaternions
                ev_real32 					*mTempTransformsArray3x4;
                /// The state of the usage of bone matrix lookup
                ev_bool mUseBoneMatrixLookup;
                ev_size_t mMaxLookupTableInstances;
                ev_bool mUseBoneDualQuaternions;
                ev_bool mForceOneWeight;
                ev_bool mUseOneWeight;
                /** Clones the base material so it can have it's own vertex texture, and also
                	clones it's shadow caster materials, if it has any
                */
                void cloneMaterial( const EarthView::World::Graphic::CMaterialPtr &material );
                /** Retrieves bone data from the original sub mesh and puts it into an appropriate buffer,
                	later to be read when creating the vertex semantics.
                	Assumes outBoneIdx has enough space (base submesh vertex count)
                */
                void retrieveBoneIdx( CVertexData *baseVertexData, HWBoneIdxVec &outBoneIdx );
                /** @see retrieveBoneIdx()
                	Assumes outBoneIdx has enough space (twice the base submesh vertex count, one for each weight)
                	Assumes outBoneWgt has enough space (twice the base submesh vertex count, one for each weight)
                */
                void retrieveBoneIdxWithWeights(CVertexData *baseVertexData, HWBoneIdxVec &outBoneIdx, HWBoneWgtVec &outBoneWgt);
                /** Setups the material to use a vertex texture */
                void setupMaterialToUseVTF( TextureType textureType, EarthView::World::Graphic::CMaterialPtr &material );
                /** Creates the vertex texture */
                void createVertexTexture( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                /** Creates 2 TEXCOORD semantics that will be used to sample the vertex texture */
                virtual void createVertexSemantics( CVertexData *thisVertexData, CVertexData *baseVertexData,
                                                    const HWBoneIdxVec &hwBoneIdx, const HWBoneWgtVec &hwBoneWgt) ;
                ev_size_t convert3x4MatricesToDualQuaternions(ev_real32 *matrices, ev_size_t numOfMatrices, ev_real32 *outDualQuaternions);

                /** Keeps filling the VTF with world matrix data */
                void updateVertexTexture();
                /** Affects VTF texture's width dimension */
                virtual ev_bool matricesToghetherPerRow() const;
                /** update the lookup numbers for entities with shared transforms */
                virtual void updateSharedLookupIndexes();
                /** @see InstanceBatch::generateInstancedEntity() */
                virtual CInstancedEntity *generateInstancedEntity(ev_size_t num);
            public:
                CBaseInstanceBatchVTF( EarthView::World::Graphic::CInstanceManager *ref_creator, EarthView::World::Graphic::CMeshPtr &meshReference, const EarthView::World::Graphic::CMaterialPtr &material,
                                       ev_size_t instancesPerBatch, const EarthView::World::Graphic::IndexMap *ref_indexToBoneMap,
                                       const EVString &batchName);
                virtual ~CBaseInstanceBatchVTF();
                /** @see InstanceBatch::buildFrom */
                void buildFrom( const EarthView::World::Graphic::CSubMesh *baseSubMesh, const EarthView::World::Graphic::CRenderOperation &renderOperation );
                ///CRenderable overloads
                void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
                ev_uint16 getNumWorldTransforms() const;
                /** Overloaded to be able to updated the vertex texture */
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /** Sets the state of the usage of bone matrix lookup

                Under default condition each instance entity is assigned a specific area in the vertex
                texture for bone matrix data. When turned on the amount of area in the vertex texture
                assigned for bone matrix data will be relative to the amount of unique animation states.
                Instanced entities sharing the same animation state will share the same area in the matrix.
                The specific position of each entity is placed in the vertex data and added in a second phase
                in the shader.

                Note this feature only works in VTF_HW for now.
                This value needs to be set before adding any instanced entities
                */
                void setBoneMatrixLookup(ev_bool enable, ev_size_t maxLookupTableInstances)
                {
                    EV_ASSERT(mInstancedEntities.empty());
                    mUseBoneMatrixLookup = enable;
                    mMaxLookupTableInstances = maxLookupTableInstances;
                }
                /** Tells whether to use bone matrix lookup
                @see setBoneMatrixLookup()
                */
                ev_bool useBoneMatrixLookup() const
                {
                    return mUseBoneMatrixLookup;
                }
                void setBoneDualQuaternions(ev_bool enable)
                {
                    EV_ASSERT(mInstancedEntities.empty());
                    mUseBoneDualQuaternions = enable;
                    mRowLength = (mUseBoneDualQuaternions ? 2 : 3);
                }
                ev_bool useBoneDualQuaternions() const
                {
                    return mUseBoneDualQuaternions;
                }
                void setForceOneWeight(ev_bool enable)
                {
                    EV_ASSERT(mInstancedEntities.empty());
                    mForceOneWeight = enable;
                }
                ev_bool forceOneWeight() const
                {
                    return mForceOneWeight;
                }
                void setUseOneWeight(ev_bool enable)
                {
                    EV_ASSERT(mInstancedEntities.empty());
                    mUseOneWeight = enable;
                }
                ev_bool useOneWeight() const
                {
                    return mUseOneWeight;
                }
                /** @see InstanceBatch::useBoneWorldMatrices()	*/
                virtual ev_bool useBoneWorldMatrices() const
                {
                    return !mUseBoneMatrixLookup;
                }
                virtual ev_size_t getMaxLookupTableInstances() const
                {
                    return mMaxLookupTableInstances;
                }

            };
            class EV_GRAPHIC_DLL CInstanceBatchVTF : public EarthView::World::Graphic::CBaseInstanceBatchVTF
            {
			protected:
                void setupVertices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                void setupIndices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                /** Creates 2 TEXCOORD semantics that will be used to sample the vertex texture */
                void createVertexSemantics( CVertexData *thisVertexData, CVertexData *baseVertexData,
                                            const HWBoneIdxVec &hwBoneIdx, const HWBoneWgtVec &hwBoneWgt );
                virtual ev_bool matricesToghetherPerRow() const
                {
                    return false;
                }
            ev_private:
                CInstanceBatchVTF(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CInstanceBatchVTF( EarthView::World::Graphic::CInstanceManager *ref_creator, EarthView::World::Graphic::CMeshPtr &meshReference, const EarthView::World::Graphic::CMaterialPtr &material,
                                   ev_size_t instancesPerBatch, const EarthView::World::Graphic::IndexMap *ref_indexToBoneMap,
                                   const EVString &batchName);
                virtual ~CInstanceBatchVTF();
                /** @see InstanceBatch::calculateMaxNumInstances */
                ev_size_t calculateMaxNumInstances( const EarthView::World::Graphic::CSubMesh *baseSubMesh, ev_uint16 flags ) const;
            };
        }
    }
}

#endif

