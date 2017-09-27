#ifndef __InstanceBatchShader_H__
#define __InstanceBatchShader_H__
#pragma once
#include "graphic/graphic_config.h"
#include "instancebatch.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CInstanceBatchShader : public EarthView::World::Graphic::CInstanceBatch
            {
			protected:
                ev_uint16	mNumWorldMatrices;
                void setupVertices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                void setupIndices( const EarthView::World::Graphic::CSubMesh *baseSubMesh );
                /** When the mesh is (hardware) skinned, a different code path is called so that
                	we reuse the index buffers and modify them in place. For example Instance #2
                	with reference to bone #5 would have BlendIndex = 2 + 5 = 7
                	Everything is copied identically except the VES_BLEND_INDICES semantic
                */
                void setupHardwareSkinned( const EarthView::World::Graphic::CSubMesh *baseSubMesh, CVertexData *thisVertexData,
                                           CVertexData *baseVertexData );
            ev_private:
                CInstanceBatchShader( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                CInstanceBatchShader( EarthView::World::Graphic::CInstanceManager *ref_creator, EarthView::World::Graphic::CMeshPtr &meshReference, const EarthView::World::Graphic::CMaterialPtr &material,
                                      ev_size_t instancesPerBatch, const EarthView::World::Graphic::IndexMap *ref_indexToBoneMap,
                                      const EVString &batchName );
                virtual ~CInstanceBatchShader();
                /** @see InstanceBatch::calculateMaxNumInstances */
                ev_size_t calculateMaxNumInstances( const EarthView::World::Graphic::CSubMesh *baseSubMesh, ev_uint16 flags ) const;
                /** @see InstanceBatch::buildFrom */
                void buildFrom( const EarthView::World::Graphic::CSubMesh *baseSubMesh, const EarthView::World::Graphic::CRenderOperation &renderOperation );
                ///CRenderable overloads
                void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
                ev_uint16 getNumWorldTransforms() const;
            };
        }
    }
}

#endif

