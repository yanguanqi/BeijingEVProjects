#ifndef __InstanceBatchHW_VTF_H__
#define __InstanceBatchHW_VTF_H__
#pragma once
#include "graphic/graphic_config.h"
#include "instancebatchvtf.h"
#include "texture.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CInstanceBatchHW_VTF : public CBaseInstanceBatchVTF
            {
            protected:
                ev_bool	mKeepStatic;
                ///Pointer to the buffer containing the per instance vertex data
                CHardwareVertexBufferSharedPtr mInstanceVertexBuffer;
                void setupVertices( const CSubMesh *baseSubMesh );
                void setupIndices( const CSubMesh *baseSubMesh );
                /** Creates 2 TEXCOORD semantics that will be used to sample the vertex texture */
                void createVertexSemantics( CVertexData *thisVertexData, CVertexData *baseVertexData,
                                            const HWBoneIdxVec &hwBoneIdx, const HWBoneWgtVec &hwBoneWgt );
                /** updates the vertex buffer containing the per instance data
                @param[in] isFirstTime Tells if this is the first time the buffer is being updated
                @param[in] currentCamera The camera being used for render (valid when using bone matrix lookup)
                @return The number of instances to be rendered
                */
                virtual ev_size_t updateInstanceDataBuffer(ev_bool isFirstTime, CCamera *currentCamera);

                virtual ev_bool checkSubMeshCompatibility( const CSubMesh *baseSubMesh );
                /** Keeps filling the VTF with world matrix data. Overloaded to avoid culled objects
                	and update visible instances' animation
                */
                ev_size_t updateVertexTexture( CCamera *currentCamera );
                virtual ev_bool matricesToghetherPerRow() const
                {
                    return true;
                }
            ev_private:
                CInstanceBatchHW_VTF(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CInstanceBatchHW_VTF( CInstanceManager *ref_creator, CMeshPtr &meshReference, const CMaterialPtr &material,
                                      ev_size_t instancesPerBatch, const IndexMap *ref_indexToBoneMap,
                                      const EVString &batchName );
                virtual ~CInstanceBatchHW_VTF();
                /** @see InstanceBatch::calculateMaxNumInstances */
                ev_size_t calculateMaxNumInstances( const CSubMesh *baseSubMesh, ev_uint16 flags ) const;
                /** @copydoc InstanceBatchHW::_boundsDirty */
                void _boundsDirty();
                /** @copydoc InstanceBatchHW::setStaticAndUpdate */
                void setStaticAndUpdate( ev_bool bStatic );
                ev_bool isStatic() const
                {
                    return mKeepStatic;
                }
                /** Overloaded to visibility on a per unit basis and finally updated the vertex texture */
                virtual void _updateRenderQueue( CRenderQueue *queue );
            };
        }
    }
}

#endif
