#ifndef __ShadowCaster_H__
#define __ShadowCaster_H__
#include "graphic/graphic_config.h"
#include "renderoperation.h"
#include "renderable.h"
#include "material.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CEdgeData;
            /** Class which represents the renderable aspects of a set of shadow volume faces.
            @remarks
                Note that for casters comprised of more than one set of vertex buffers (e.g. SubMeshes each
                shadow volume. Therefore for shadow caster geometry, it is best to stick to one set of
                vertex buffers (not necessarily one buffer, but the positions for the entire geometry
                should come from one buffer if possible)
            */
            class EV_GRAPHIC_DLL CShadowRenderable : public EarthView::World::Graphic::CRenderable
            {
            protected:
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                EarthView::World::Graphic::CRenderOperation mRenderOp;
                EarthView::World::Graphic::CShadowRenderable *mLightCap; 			/// used only if isLightCapSeparate == true
            ev_private:
                CShadowRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CShadowRenderable();
                virtual ~CShadowRenderable();
                /** Set the material to be used by the shadow, should be set by the caller
                  before adding to a render queue
                */
                void setMaterial(const EarthView::World::Graphic::CMaterialPtr &mat);
                //// Overridden from EarthView::World::Graphic::CRenderable
                const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                //// Overridden from EarthView::World::Graphic::CRenderable
                void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                //// Get the internal render operation for set up
                EarthView::World::Graphic::CRenderOperation *getRenderOperationForUpdate();
                //// Overridden from EarthView::World::Graphic::CRenderable
                void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                //// Overridden from EarthView::World::Graphic::CRenderable
                Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *pCamera) const;
                //// Overridden from EarthView::World::Graphic::CRenderable
                const EarthView::World::Graphic::LightList &getLights() const;
                /** Does this renderable require a separate light cap?
                @remarks
                    If possible, the light cap (when required) should be contained in the
                    usual geometry of the shadow renderable. However, if for some reason
                    the normal depth function (less than) could cause artefacts, then a
                    separate light cap with a depth function of 'always fail' can be used
                    instead. The primary example of this is when there are floating point
                    inaccuracies caused by calculating the shadow geometry separately from
                    the real geometry.
                */
                ev_bool isLightCapSeparate() const;
                //// Get the light cap version of this renderable
                EarthView::World::Graphic::CShadowRenderable *getLightCapRenderable();
                //// Should this EarthView::World::Graphic::CShadowRenderable be treated as visible?
                virtual ev_bool isVisible() const;
                ///zxt updatefor v1.8
                /** This function informs the shadow renderable that the global index buffer
                from the SceneManager has been updated. As all shadow use this buffer their pointer
                must be updated as well
                @indexBuffer pointer to the new index buffer
                */
                virtual void rebindIndexBuffer(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer)
                {
                    EV_ASSERT(false);
                }
            };
            /** A set of flags that can be used to influence EarthView::World::Graphic::CShadowRenderable creation. */
            enum ShadowRenderableFlags
            {
                //// For shadow volume techniques only, generate a light cap on the volume
                SRF_INCLUDE_LIGHT_CAP = 1,			///0x00000001,
                //// For shadow volume techniques only, generate a dark cap on the volume
                SRF_INCLUDE_DARK_CAP  = 2,			///0x00000002,
                //// For shadow volume techniques only, indicates volume is extruded to infinity
                SRF_EXTRUDE_TO_INFINITY  = 4			///0x00000004
            };
            /** This class defines the interface that must be implemented by shadow casters.
            */
            class EV_GRAPHIC_DLL CShadowCaster : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CShadowCaster(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CShadowCaster();
                virtual ~CShadowCaster();
			public:
				/** Returns the max distance the object can cast a shadow. */
				Real getShadowFarDistance()const;
				Real getShadowFarDistanceSquared()const;
				/** set the max distance the object can cast a shadow. */
				ev_void setShadowFarDistance(Real distance);
				
                /** Returns whether or not this object currently casts a shadow. */
                virtual ev_bool getCastShadows() const;
                /** Returns details of the edges which might be used to determine a silhouette. */
                virtual EarthView::World::Graphic::CEdgeData *getEdgeList();
                /** Returns whether the object has a valid edge list. */
                virtual ev_bool hasEdgeList();
                /** Get the world bounding box of the caster. */
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
                /*virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(ev_bool derive = false) const;*/
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox() const;
                /** Gets the world space bounding box of the light cap */
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getLightCapBounds() const;
                virtual		  EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(const EarthView::World::Graphic::CLight &light, Real dirLightExtrusionDist) const;
                class EV_GRAPHIC_DLL ShadowRenderableList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CShadowRenderable *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList);

                    iterator insert(iterator pos, EarthView::World::Graphic::CShadowRenderable *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    ShadowRenderableList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ShadowRenderableList();
                    void push_back(EarthView::World::Graphic::CShadowRenderable  *const &ref_t);
                    void pop_back();

                    EarthView::World::Graphic::CShadowRenderable*& front();
                    EarthView::World::Graphic::CShadowRenderable*& back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CShadowRenderable *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CShadowRenderable*& operator[](ev_size_t n);
                    EarthView::World::Graphic::CShadowRenderable *const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CShadowRenderable*& at(ev_size_t n);
                    EarthView::World::Graphic::CShadowRenderable *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                /*typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CShadowCaster::ShadowRenderableList> EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator;*/
                class EV_GRAPHIC_DLL ShadowRenderableListIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CShadowCaster::ShadowRenderableList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef ShadowRenderableList::iterator IteratorType;
                    ShadowRenderableListIterator(IteratorType start, IteratorType last);
                    ~ShadowRenderableListIterator();
                    ValueType peekNext () const;
                    PointerType peekNextPtr ()  const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();

                ev_private:
                    EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator &operator=(_in const EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator &other);

                ev_private:
                    ShadowRenderableListIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ShadowRenderableListIterator(ShadowRenderableList &vec);
                    ShadowRenderableListIterator(const ShadowRenderableListIterator &rhs);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    EarthView::World::Graphic::CShadowRenderable *getCurrent();
                    EarthView::World::Graphic::CShadowRenderable *next();
                    EarthView::World::Graphic::CShadowRenderable *getBegin();
                    EarthView::World::Graphic::CShadowRenderable *getEnd();

                private:
                    InternalIterator *mIterator;
                };

                /** Gets an iterator over the renderables required to render the shadow volume.
                @remarks
                    Shadowable geometry should ideally be designed such that there is only one
                    EarthView::World::Graphic::CShadowRenderable required to render the the shadow; however this is not a necessary
                    limitation and it can be exceeded if required.
                @param shadowTechnique The technique being used to generate the shadow
                @param light The light to generate the shadow from
                @param indexBuffer The index buffer to build the renderables into,
                    the current contents are assumed to be disposable.
                @param extrudeVertices If true, this means this class should extrude
                    the vertices of the back of the volume in software. If false, it
                    will not be done (a vertex program is assumed).
                @param extrusionDistance The distance to extrude the shadow volume
                @param flags CTechnique-specific flags, see ShadowRenderableFlags
                */
                virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                    EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                    EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                    ev_bool extrudeVertices, Real extrusionDistance, ev_uint32 flags);
                virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                    EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                    EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                    ev_bool extrudeVertices, Real extrusionDistance);
                /** Utility method for extruding vertices based on a light.
                @remarks
                    Unfortunately, because D3D cannot handle homogeneous (4D) position
                    coordinates in the fixed-function pipeline (GL can, but we have to
                    be cross-API), when we extrude in software we cannot extrude to
                    infinity the way we do in the vertex program (by setting w to
                    0.0f). Therefore we extrude by a fixed distance, which may cause
                    some problems with larger scenes. Luckily better hardware (ie
                    vertex programs) can fix this.
                @param vertexBuffer The vertex buffer containing ONLY xyz position
                values, which must be originalVertexCount * 2 * 3 floats ev_int32.
                @param originalVertexCount The count of the original number of
                vertices, i.e. the number in the mesh, not counting the doubling
                which has already been done (by CVertexData::prepareForShadowVolume)
                to provide the extruded area of the buffer.
                @param lightPos 4D light position in object space, when w=0.0f this
                represents a directional light
                @param extrudeDist The distance to extrude
                */
                static void extrudeVertices(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &vertexBuffer,
                                            ev_size_t originalVertexCount, const EarthView::World::Spatial::Math::CVector4 &lightPos, Real extrudeDist);
                /** Get the distance to extrude for a point/spot light */
                virtual Real getPointExtrusionDistance(const EarthView::World::Graphic::CLight *l) const;
            protected:
                //// Helper method for calculating extrusion distance
                Real getExtrusionDistance(const EarthView::World::Spatial::Math::CVector3 &objectPos, const EarthView::World::Graphic::CLight *light) const;
                /** Tells the caster to perform the tasks necessary to update the
                    edge data's light listing. Can be overridden if the subclass needs
                    to do additional things.
                @param edgeData The edge information to update
                @param lightPos 4D vector representing the light, a directional light
                    has w=0.0
                       */
            ev_internal:
                virtual void updateEdgeListLightFacing(EarthView::World::Graphic::CEdgeData *edgeData, const EarthView::World::Spatial::Math::CVector4 &lightPos);
                /** Generates the indexes required to render a shadow volume into the
                    index buffer which is passed in, and updates shadow renderables
                    to use it.
                @param edgeData The edge information to use
                @param indexBuffer The buffer into which to write data into; current
                    contents are assumed to be discardable.
                @param light The light, mainly for type info as silhouette calculations
                    should already have been done in updateEdgeListLightFacing
                @param shadowRenderables A list of shadow renderables which has
                    already been constructed but will need populating with details of
                    the index ranges to be used.
                @param flags Additional controller flags, see ShadowRenderableFlags
                */
                virtual void generateShadowVolume(EarthView::World::Graphic::CEdgeData *edgeData,
                                                  const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer, const EarthView::World::Graphic::CLight *light,
                                                  EarthView::World::Graphic::CShadowCaster::ShadowRenderableList &shadowRenderables, ev_uint32 flags);
                /** Utility method for extruding a bounding box.
                @param box Original bounding box, will be updated in-place
                @param lightPos 4D light position in object space, when w=0.0f this
                represents a directional light
                @param extrudeDist The distance to extrude
                */
                virtual void extrudeBounds(EarthView::World::Spatial::Math::CAxisAlignedBox &box, const EarthView::World::Spatial::Math::CVector4 &lightPos, Real extrudeDist) const;

			protected:
				Real mShadowFarDistance;
				Real mShadowFarDistanceSquared;
            };
        }
    }
}

#endif

