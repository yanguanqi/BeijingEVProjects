#ifndef __InstancedGeometry_H__
#define __InstancedGeometry_H__
#include "graphic/graphic_config.h"
#include "simplerenderable.h"
#include "mesh.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Pre-transforms and batches up meshes for efficient use as instanced geometry
            in a scene
            @remarks
            Shader instancing allows to save both memory and draw calls. While
            CStaticGeometry stores 500 times the same object in a batch to display 500
            objects, this shader instancing implementation stores only 80 times the object,
            and then re-uses the vertex data with different shader parameter.
            Although you save memory, you make more draw call. However, you still
            make less draw calls than if you were rendering each object independently.
            Plus, you can move the batched objects independently of one another which
            you cannot do with CStaticGeometry.
            @par
            Therefore it is important when you are rendering a lot of geometry to
            batch things up into as few rendering calls as possible. This
            class allows you to build a batched object from a series of entities
            in order to benefit from this behaviour.
            Batching has implications of it's own though:
            @li Batched geometry cannot be subdivided; that means that the whole
            group will be displayed, or none of it will. This obivously has
            culling issues.
            @li A single material must apply for each batch. In fact this class
            allows you to use multiple materials, but you should be aware that
            internally this means that there is one batch per material.
            Therefore you won't gain as much benefit from the batching if you
            use many different materials; try to keep the number down.
            @par
            The bounding box information is computed whith object position only.
            It doesn't take account of the object orientation.
            @par
            The LOD settings of both the CMesh and the Materials used in
            constructing this instanced geometry will be respected. This means that
            if you use meshes/materials which have LOD, batches in the distance
            will have a lower polygon count or material detail to those in the
            foreground. Since each mesh might have different LOD distances, during
            build the furthest distance at each LOD level from all meshes
            in that EarthView::World::Graphic::CInstancedGeometry::CBatchInstance is used. This means all the LOD levels change at the
            same time, but at the furthest distance of any of them (so quality is
            further increase the memory required. Only generated LOD
            is supported for meshes.
            @par
            There are 2 ways you can add geometry to this class; you can add
            EarthView::World::Graphic::CEntity objects directly with predetermined positions, scales and
            orientations, or you can add an entire EarthView::World::Graphic::CSceneNode and it's subtree,
            including all the objects attached to it. Once you've added everthing
            you need to, you have to call build() the fix the geometry in place.
            @par
            You should not construct instances of this class directly; instead, call
            CSceneManager::createInstancedGeometry, which gives the CSceneManager the
            option of providing you with a specialised version of this class if it
            wishes, and also handles the memory management for you like other
            classes.
            @note
            Warning: this class only works with indexed triangle lists at the moment,		do not pass it triangle strips, fans or lines / points, or unindexed geometry.
            */
            class EV_GRAPHIC_DLL  CInstancedGeometry : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /** Struct holding geometry optimised per EarthView::World::Graphic::CSubMesh / lod level, ready
                for copying to instances.
                @remarks
                Since we're going to be duplicating geometry lots of times, it's
                far more important that we don't have redundant vertex data. If a
                EarthView::World::Graphic::CSubMesh uses shared geometry, or we're looking at a lower LOD, not
                all the vertices are being referenced by faces on that submesh.
                Therefore to duplicate them, potentially hundreds or even thousands
                of times, would be extremely wasteful. Therefore, if a EarthView::World::Graphic::CSubMesh at
                a given LOD has wastage, we create an optimised version of it's
                geometry which is ready for copying with no wastage.
                */
                class EV_GRAPHIC_PRIVATE COptimisedSubMeshInstancedGeometry : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    COptimisedSubMeshInstancedGeometry() : vertexData(0), indexData(0) {}
                    ~COptimisedSubMeshInstancedGeometry()
                    {
                        delete vertexData;
                        delete indexData;
                    }
                    EarthView::World::Graphic::CVertexData *vertexData;
                    EarthView::World::Graphic::CIndexData *indexData;
                };
            protected:
                typedef list<COptimisedSubMeshInstancedGeometry *> OptimisedSubMeshInstancedGeometryList;
            public:
                //// Saved link between EarthView::World::Graphic::CSubMesh at a LOD and vertex/index data
                //// May point to original or optimised geometry
                class EV_GRAPHIC_DLL SubMeshLodInstancedGeometryLink : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    SubMeshLodInstancedGeometryLink(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    SubMeshLodInstancedGeometryLink() {}
                    EarthView::World::Graphic::CVertexData *vertexData;
                    EarthView::World::Graphic::CIndexData *indexData;
                };
                class EV_GRAPHIC_DLL SubMeshLodInstancedGeometryLinkList : public EarthView::World::Core::CBaseObject
                {
                public:
                    SubMeshLodInstancedGeometryLinkList() {}
                ev_private:
                    SubMeshLodInstancedGeometryLinkList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    void push_back(EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink const &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink const &at(ev_size_t n) const
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
                /*typedef map<EarthView::World::Graphic::CSubMesh*, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*> SubMeshInstancedGeometryLookup;*/
                class EV_GRAPHIC_DLL  SubMeshInstancedGeometryLookup : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(EarthView::World::Graphic::CSubMesh *ref_key, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList *const &ref_val)
                    {
                        if(mList.find(ref_key) == mList.end())
                        {
                            mList[ref_key] = (EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList *)ref_val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(EarthView::World::Graphic::CSubMesh *key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*& operator[](EarthView::World::Graphic::CSubMesh *key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList*& get(EarthView::World::Graphic::CSubMesh *key)
                    {
                        return mList[key];
                    }
                    void erase(EarthView::World::Graphic::CSubMesh *key)
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
                    SubMeshInstancedGeometryLookup() {}
                ev_private:
                    SubMeshInstancedGeometryLookup(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EarthView::World::Graphic::CSubMesh *, EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(EarthView::World::Graphic::CSubMesh *key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(EarthView::World::Graphic::CSubMesh *key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };

                //// Structure recording a queued submesh for the build
                class EV_GRAPHIC_DLL QueuedInstancedSubMesh : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    QueuedInstancedSubMesh(EarthView::World::Core::CNameValuePairList *pList) { }

                public:
                    QueuedInstancedSubMesh() {}
                    EarthView::World::Graphic::CSubMesh *submesh;
                    //// Link to LOD list of geometry, potentially optimised
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList *geometryLodList;
                    EVString materialName;
                    EarthView::World::Spatial::Math::CVector3 position;
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                    EarthView::World::Spatial::Math::CVector3 scale;
                    //// Pre-transformed world AABB
                    EarthView::World::Spatial::Math::CAxisAlignedBox worldBounds;
                    ev_uint32 ID;
                };
                class EV_GRAPHIC_DLL QueuedInstancedSubMeshList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QueuedInstancedSubMeshList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                public:
                    QueuedInstancedSubMeshList()
                    {
                    }
                    void push_back(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *const &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *const &at(ev_size_t n) const
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

                class EV_GRAPHIC_DLL QueuedInstancedSubMeshOriginList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QueuedInstancedSubMeshOriginList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EVString> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EVString const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    QueuedInstancedSubMeshOriginList() {}

                    void push_back(EVString const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EVString &front()
                    {
                        return mList.front();
                    }
                    EVString &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EVString const &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    EVString &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EVString const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EVString &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EVString const &at(ev_size_t n) const
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

                //// Structure recording a queued geometry for low level builds
                class EV_GRAPHIC_DLL  QueuedInstancedGeometry : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    QueuedInstancedGeometry(EarthView::World::Core::CNameValuePairList *pList) { }
                public:
                    QueuedInstancedGeometry() { }
                    EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *geometry;
                    EarthView::World::Spatial::Math::CVector3 position;
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                    EarthView::World::Spatial::Math::CVector3 scale;
                    ev_uint32 ID;
                };
                class EV_GRAPHIC_DLL QueuedInstancedGeometryList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QueuedInstancedGeometryList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    QueuedInstancedGeometryList() {}
                    void push_back(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *const &ref_t)
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
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *const &at(ev_size_t n) const
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
                /// forward declarations
                class CInstancedLODBucket;
                class CInstancedMaterialBucket;
                class CBatchInstance;
                class CInstancedObject;
                /** A EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket is a the lowest level bucket where geometry with
                the same vertex & index format is stored. It also acts as the
                renderable.
                */
                class EV_GRAPHIC_DLL  CInstancedGeometryBucket : public EarthView::World::Graphic::CSimpleRenderable
                {
                public:
                    ///cmoveobject
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables );
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                    Real getBoundingRadius() const;
                    ev_bool getCastsShadows() const;

                protected:
                    //// Geometry which has been queued up pre-build (not for deallocation)
                    QueuedInstancedGeometryList mQueuedGeometry;
                    //// Pointer to the Batch
                    EarthView::World::Graphic::CInstancedGeometry *mBatch;
                    //// Pointer to parent bucket
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *mParent;
                    //// EVString identifying the vertex / index format
                    EVString mFormatString;
                    //// Vertex information, includes current number of vertices
                    //// committed to be a part of this bucket
                    EarthView::World::Graphic::CVertexData *mVertexData;
                    //// Index information, includes index type which limits the max
                    //// number of vertices which are allowed in one bucket
                    EarthView::World::Graphic::CIndexData *mIndexData;
                    //// Size of indexes
                    CHardwareIndexBuffer::IndexType mIndexType;
                    //// Maximum vertex indexable
                    ev_size_t mMaxVertexIndex;
                    ////	Index of the Texcoord where the index is stored
                    ev_uint16 mTexCoordIndex;
                    EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;

                    void copyIndexes(const ev_uint16 *src, ev_uint16 *dst, ev_size_t count, ev_size_t indexOffset)
                    {
                        if (indexOffset == 0)
                        {
                            memcpy(dst, src, sizeof(ev_uint16) * count);
                        }
                        else
                        {
                            while(count--)
                            {
                                *dst++ = static_cast<ev_uint16>(*src++ + indexOffset);
                            }
                        }
                    }
                    void copyIndexes(const ev_uint32 *src, ev_uint32 *dst, ev_size_t count, ev_size_t indexOffset)
                    {
                        if (indexOffset == 0)
                        {
                            memcpy(dst, src, sizeof(ev_uint32) * count);
                        }
                        else
                        {
                            while(count--)
                            {
                                *dst++ = static_cast<ev_uint32>(*src++ + indexOffset);
                            }
                        }
                    }
                    void _initGeometryBucket(const EarthView::World::Graphic::CVertexData *vData, const EarthView::World::Graphic::CIndexData *iData);
                    void _initGeometryBucket(EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *bucket);
                ev_private:
                    CInstancedGeometryBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CInstancedGeometryBucket(EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *ref_parent, const EVString &formatString,
                                             const EarthView::World::Graphic::CVertexData *vData, const EarthView::World::Graphic::CIndexData *iData);

                    CInstancedGeometryBucket(const EVString &name, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *ref_parent,
                                             const EVString &formatString,
                                             const EarthView::World::Graphic::CVertexData *vData, const EarthView::World::Graphic::CIndexData *iData);
                    CInstancedGeometryBucket(EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *ref_parent, const EVString &formatString,
                                             EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *bucket);
                    CInstancedGeometryBucket(const EVString &name, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *ref_parent, const
                                             EVString &formatString, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *bucket);
                    virtual ~CInstancedGeometryBucket();
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *getParent()
                    {
                        return mParent;
                    }
                    //// Get the vertex data for this geometry
                    const EarthView::World::Graphic::CVertexData *getVertexData() const
                    {
                        return mVertexData;
                    }
                    //// Get the index data for this geometry
                    const EarthView::World::Graphic::CIndexData *getIndexData() const
                    {
                        return mIndexData;
                    }

                    EarthView::World::Graphic::CTechnique *getTechnique() const;
                    //// @copydoc CRenderable::getMaterial
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    virtual ev_uint16 getNumWorldTransforms() const ;
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                    const EarthView::World::Graphic::LightList &getLights() const;
                    EVString getFormatString() const;
                    /** Try to assign geometry to this bucket.
                    @returns false if there is no room left in this bucket
                    */
                    ev_bool assign(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *qsm);
                    //// Build
                    void build();
                    //// retun the BoundingBox information. Usefull when cloning the batch instance.
                    EarthView::World::Spatial::Math::CAxisAlignedBox &getAABB()
                    {
                        return mAABB;
                    }
                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                class EV_GRAPHIC_DLL InstancedGeometryBucketList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    InstancedGeometryBucketList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                public:
                    InstancedGeometryBucketList() {}
                    void push_back(EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &at(ev_size_t n) const
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
                class EV_GRAPHIC_DLL  CInstancedObject : public EarthView::World::Core::CAllocatedObject
                {
                    friend class CInstancedGeometryBucket;
                public:
                    enum TransformSpace
                    {
                        //// Transform is relative to the local space
                        TS_LOCAL,
                        //// Transform is relative to the space of the parent node
                        TS_PARENT,
                        //// Transform is relative to world space
                        TS_WORLD
                    };
                    //// list of Geometry Buckets that contains the instanced object

                protected:
                    EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList mGeometryBucketList;
                    ev_uint16 mIndex;
                    EarthView::World::Spatial::Math::CMatrix4  mTransformation;
                    EarthView::World::Spatial::Math::CQuaternion mOrientation;
                    EarthView::World::Spatial::Math::CVector3	mScale;
                    EarthView::World::Spatial::Math::CVector3 mPosition;
                    EarthView::World::Graphic::CSkeletonInstance *mSkeletonInstance;
                    //// Cached bone matrices, including any world transform
                    EarthView::World::Spatial::Math::CMatrix4 *mBoneWorldMatrices;
                    //// Cached bone matrices in skeleton local space
                    EarthView::World::Spatial::Math::CMatrix4 *mBoneMatrices;
                    //// State of animation for animable meshes
                    EarthView::World::Graphic::CAnimationStateSet *mAnimationState;
                    ev_uint16 mNumBoneMatrices;
                    //// Records the last frame in which animation was updated
                    ev_uint32 mFrameAnimationLastUpdated;
                ev_private:
                    CInstancedObject(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CInstancedObject(ev_uint16 index);
                    CInstancedObject(ev_uint16 index, EarthView::World::Graphic::CSkeletonInstance *ref_skeleton, EarthView::World::Graphic::CAnimationStateSet *animations);
                    ~CInstancedObject();
                    void setPosition( EarthView::World::Spatial::Math::CVector3  position);
                    const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
                    void yaw(const EarthView::World::Spatial::Math::CRadian &angle);
                    void pitch(const EarthView::World::Spatial::Math::CRadian &angle);
                    void roll(const EarthView::World::Spatial::Math::CRadian &angle);
                    void rotate(const EarthView::World::Spatial::Math::CQuaternion &q);
                    void setScale(const EarthView::World::Spatial::Math::CVector3 &scale);
                    const EarthView::World::Spatial::Math::CVector3 &getScale() const;
                    void setOrientation(const EarthView::World::Spatial::Math::CQuaternion &q);
                    void setPositionAndOrientation(EarthView::World::Spatial::Math::CVector3 p, const EarthView::World::Spatial::Math::CQuaternion &q);
                    EarthView::World::Spatial::Math::CQuaternion &getOrientation();
                    void addBucketToList(EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *ref_bucket);
                    void needUpdate();
                    EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList &getGeometryBucketList()
                    {
                        return mGeometryBucketList;
                    }
                    void translate(const EarthView::World::Spatial::Math::CMatrix3 &axes, const EarthView::World::Spatial::Math::CVector3 &move);
                    void translate(const EarthView::World::Spatial::Math::CVector3 &d);
                    EarthView::World::Spatial::Math::CMatrix3 getLocalAxes() const;
                    void updateAnimation();
                    EarthView::World::Graphic::CAnimationState *getAnimationState(const EVString &name) const;
                    EarthView::World::Graphic::CSkeletonInstance *getSkeletonInstance()
                    {
                        return mSkeletonInstance;
                    }
                };
                /** A EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket is a collection of smaller buckets with the same
                CMaterial (and implicitly the same LOD). */
                class EV_GRAPHIC_DLL  CInstancedMaterialBucket : public EarthView::World::Core::CAllocatedObject
                {
                protected:
                    //// Pointer to parent EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *mParent;
                    //// CMaterial being used
                    EVString mMaterialName;
                    //// Pointer to material being used
                    EarthView::World::Graphic::CMaterialPtr mMaterial;
                    //// Active technique
                    EarthView::World::Graphic::CTechnique *mTechnique;
                    ev_int32 mLastIndex;
                    //// list of Geometry Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList mGeometryBucketList;
                public:
                    /// index to current Geometry Buckets for a given geometry format
                    /*typedef map<EVString, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*> CurrentGeometryMap;*/
                    class EV_GRAPHIC_DLL InstancedGeometryBucketMap : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        InstancedGeometryBucketMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        InstancedGeometryBucketMap() {}
                        ev_bool push(const EVString &key, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *const &ref_val)
                        {
                            if(mList.find(key) == mList.end())
                            {
                                mList[key] = (EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *)ref_val;
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                        ev_bool exist(const EVString &key)
                        {
                            return mList.find(key) != mList.end();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& operator[](const EVString &key)
                        {
                            return get(key);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket*& get(const EVString &key)
                        {
                            return mList[key];
                        }
                        void erase(const EVString &key)
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
                        typedef map<EVString, EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<InternalList::iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);
                        _Pairib insert(const value_type &val)
                        {
                            return mList.insert(val);
                        }
                        iterator find(const EVString &key)
                        {
                            return mList.find(key);
                        }
                        const_iterator find(const EVString &key) const
                        {
                            return mList.find(key);
                        }
                    private:
                        InternalList mList;
                    };
                protected:
                    InstancedGeometryBucketMap mCurrentGeometryMap;
                    //// Get a packed string identifying the geometry format
                    EVString getGeometryFormatString(EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *geom);
                ev_private:
                    CInstancedMaterialBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

                    CInstancedMaterialBucket(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *ref_parent, const EVString &materialName);
                    virtual ~CInstancedMaterialBucket();
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *getParent()
                    {
                        return mParent;
                    }
                    //// Get the material name
                    const EVString &getMaterialName() const
                    {
                        return mMaterialName;
                    }
                    //// Assign geometry to this bucket
                    void assign(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedGeometry *ref_qsm);
                    //// Build
                    void build();
                    //// Add children to the render queue
                    void addRenderables(EarthView::World::Graphic::CRenderQueue *queue, ev_uint8 group,
                                        Real lodValue);
                    //// Get the material for this bucket
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const
                    {
                        return mMaterial;
                    }
                    //// Iterator over geometry
                    ///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList> GeometryIterator;
                    class EV_GRAPHIC_DLL InstancedGeometryBucketIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList> InternalIterator;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        typedef InstancedGeometryBucketList::iterator IteratorType;
                        InstancedGeometryBucketIterator(IteratorType start, IteratorType last)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(start, last);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator &operator=(_in const EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator &other)
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
                        InstancedGeometryBucketIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
							if((pList->Exist("start"))&&(pList->Exist("last")))
							{
								mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"),*(IteratorType *)pList->GetAt("last"));
							}
                            else if(pList->Exist("lst"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList *)pList->GetAt("lst"));
                            }
                            else if (pList->Exist("other"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator *)pList->GetAt("other"))->mIterator);
                            }
                        }
                    public:
                        InstancedGeometryBucketIterator(EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList &lst)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(lst);
                        }

                        InstancedGeometryBucketIterator(const InstancedGeometryBucketIterator &other)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        }
                        ~InstancedGeometryBucketIterator()
                        {
                            if(mIterator)
                            {
                                EV_DELETE_T(mIterator, InternalIterator);
                                mIterator = NULL;
                            }
                        }
                        ev_bool hasMoreElements ( ) const
                        {
                            return mIterator->hasMoreElements();
                        }
                        void moveNext ()
                        {
                            mIterator->moveNext();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *getCurrent()
                        {
                            return *mIterator->current();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *next()
                        {
                            return mIterator->getNext();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *getBegin()
                        {
                            return *mIterator->begin();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *getEnd()
                        {
                            return *mIterator->end();
                        }

                    private:
                        InternalIterator *mIterator;
                    };

                    //// Get an iterator over the contained geometry
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketIterator getGeometryIterator();
                    //// Get the current EarthView::World::Graphic::CTechnique
                    EarthView::World::Graphic::CTechnique *getCurrentTechnique() const
                    {
                        return mTechnique;
                    }
                    //// Return the geometry map
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket::InstancedGeometryBucketMap *getMaterialBucketMap() const
                    {
                        return (InstancedGeometryBucketMap *)&mCurrentGeometryMap;
                    }
                    //// Return the geometry list
                    EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList *getGeometryBucketList() const
                    {
                        return (EarthView::World::Graphic::CInstancedGeometry::InstancedGeometryBucketList *)&mGeometryBucketList;
                    }
                    //// fill in the map and the list
                    void updateContainers(EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket *ref_bucket, const EVString &format);
                    void setLastIndex(ev_int32 index)
                    {
                        mLastIndex = index;
                    }
                    ev_int32 getLastIndex()
                    {
                        return mLastIndex;
                    }
                    void setMaterial(const EVString &name);
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /** A EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket is a collection of smaller buckets with the same LOD.
                @remarks
                LOD refers to CMesh LOD here. CMaterial LOD can change separately
                at the next bucket down from this.
                */
                class EV_GRAPHIC_DLL  CInstancedLODBucket : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    //// Lookup of CMaterial Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    /*typedef map<EVString, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*> EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap;*/

                    class EV_GRAPHIC_DLL InstancedMaterialBucketMap : public EarthView::World::Core::CBaseObject
                    {
                    public:
                        ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *const &ref_val)
                        {
                            if(mList.find(key) == mList.end())
                            {
                                mList[key] = (EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *)ref_val;
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
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*& operator[](const ev_uint16 &key)
                        {
                            return get(key);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket*& get(const ev_uint16 &key)
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
                        InstancedMaterialBucketMap() {}
                    ev_private:
                        InstancedMaterialBucketMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    ev_private:
                        typedef map<ev_uint16, EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<InternalList::iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);
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
                    class EV_GRAPHIC_DLL InstancedMaterialBucketPair : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        InstancedMaterialBucketPair(EarthView::World::Core::CNameValuePairList *pList)
                        {
                            first = 0;
                            second = NULL;
                        }
                    public:
                        InstancedMaterialBucketPair()
                        {
                            first = 0;
                            second = NULL;
                        }
                        ev_uint16 first;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *second;
                    };
                    class EV_GRAPHIC_DLL InstancedMaterialIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:

                        typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap> InternalIterator;
                        typedef InternalIterator::const_iterator const_iterator;
                        typedef InternalIterator::iterator iterator;
                        typedef InternalIterator::iterator IteratorType;
                        typedef InternalIterator::PairType PairType;
                        typedef InternalIterator::KeyType KeyType;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        InstancedMaterialIterator(const_iterator first, const_iterator last)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(first, last);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator &operator=(_in const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator &other)
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
                        ~InstancedMaterialIterator()
                        {
                            if(mIterator)
                            {
                                EV_DELETE_T(mIterator, InternalIterator);
                                mIterator = NULL;
                            }
                        }
                        KeyType peekNextKey() const
                        {
                            return mIterator->peekNextKey();
                        }
                        ValueType peekNextValue (  ) const
                        {
                            return mIterator->peekNextValue();
                        }
                        const PointerType peekNextValuePtr ()
                        {
                            mvt = peekNextValue();
                            return &mvt;
                        }
                        ValueType getNext()
                        {
                            return mIterator->getNext() ;
                        }

                        const IteratorType &begin()
                        {
                            return mIterator->begin();
                        }
                        IteratorType &current()
                        {
                            return mIterator->current();
                        }
                        const IteratorType &end()
                        {
                            return mIterator->end();
                        }
                    ev_private:
                        InstancedMaterialIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
							if((pList->Exist("first"))&&(pList->Exist("last")))
							{
								mIterator = EV_NEW_T(InternalIterator)(*(const_iterator *)pList->GetAt("first"),*(const_iterator *)pList->GetAt("last"));
							}
                            else if(pList->Exist("lst"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap *)pList->GetAt("lst"));
                            }
                            else if (pList->Exist("other"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator *)pList->GetAt("other"))->mIterator);
                            }
                        }
                    public:
                        InstancedMaterialIterator(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap &lst)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(lst);
                        }
                        InstancedMaterialIterator(const InstancedMaterialIterator &other)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        }
                        ev_bool hasMoreElements ( ) const
                        {
                            return mIterator->hasMoreElements();
                        }
                        void moveNext (  )
                        {
                            mIterator->moveNext();
                        }
                        ev_uint16 nextKey() const
                        {
                            return mIterator->peekNextKey();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *nextValue() const
                        {
                            return mIterator->peekNextValue();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket **nextValuePtr()
                        {
                            mptr = nextValue();
                            return &mptr;
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *next()
                        {
                            return mIterator->getNext();
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair &getBegin()
                        {
                            IteratorType start = mIterator->begin();
                            mBeginPair.first =  start->first;
                            mBeginPair.second = start->second;
                            return mBeginPair;
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair &getEnd()
                        {
                            IteratorType last = mIterator->end();
                            mEndPair.first =  last->first;
                            mEndPair.second = last->second;
                            return mEndPair;
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair &getCurrent()
                        {
                            IteratorType current = mIterator->current();
                            mCurrentPair.first =  current->first;
                            mCurrentPair.second = current->second;
                            return mCurrentPair;
                        }

                    private:
                        InternalIterator *mIterator;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair mBeginPair;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair mCurrentPair;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketPair mEndPair;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *mptr;
                        ValueType mvt;
                    };
                protected:
                    //// Pointer to parent EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *mParent;
                    //// LOD level (0 == full LOD)
                    ev_uint16 mLod;
                    //// lod value at which this LOD starts to apply (squared)
                    Real mLodValue;
                    //// Lookup of CMaterial Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialBucketMap mMaterialBucketMap;
                    //// Geometry queued for a single LOD (deallocated here)
                    QueuedInstancedGeometryList mQueuedGeometryList;
                ev_private:
                    CInstancedLODBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CInstancedLODBucket(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *ref_parent, ev_uint16 lod, Real lodValue);

                    virtual ~CInstancedLODBucket();
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getParent()
                    {
                        return mParent;
                    }
                    //// Get the lod index
                    ev_uint16 getLod() const
                    {
                        return mLod;
                    }
                    //// Get the lod value
                    Real getLodValue() const
                    {
                        return mLodValue;
                    }
                    void assign(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *ref_qsm, ev_uint16 atLod);
                    //// Build
                    void build();
                    //// Add children to the render queue
                    void addRenderables(EarthView::World::Graphic::CRenderQueue *queue, ev_uint8 group,
                                        Real lodValue);
                    //// Get an iterator over the materials in this LOD
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket::InstancedMaterialIterator getMaterialIterator();
                    //// fill the map
                    void updateContainers(EarthView::World::Graphic::CInstancedGeometry::CInstancedMaterialBucket *ref_bucket, EVString &name );
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /** The details of a topological EarthView::World::Graphic::CInstancedGeometry::CBatchInstance which is the highest level of
                partitioning for this class.
                @remarks
                The size & shape of BatchInstances entirely depends on the EarthView::World::Graphic::CSceneManager
                specific implementation. It is a EarthView::World::Graphic::CMovableObject since it will be
                attached to a node based on the local centre - in practice it
                won't actually move (although in theory it could).
                */
                class EV_GRAPHIC_DLL  CBatchInstance : public EarthView::World::Graphic::CMovableObject
                {
                    friend class CInstancedMaterialBucket;
                public:

                    //// list of LOD Buckets in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    class EV_GRAPHIC_DLL InstancedLODBucketList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        InstancedLODBucketList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    ev_private:
                        typedef vector<EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                        iterator insert(iterator pos, EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *const &ref_t)
                        {
                            return mList.insert(pos, ref_t);
                        }
                    private:
                        InternalList mList;
                    public:
                        InstancedLODBucketList() {}
                        void push_back(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *const &ref_t)
                        {
                            mList.push_back(ref_t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& front()
                        {
                            return mList.front();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *const &ref_t)
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
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket*& at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *const &at(ev_size_t n) const
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
                    ///typedef map<ev_uint16, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap;
                    ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator;
                    class EV_GRAPHIC_DLL InstancedObjectsMap : public EarthView::World::Core::CBaseObject
                    {
                    public:
                        ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *const &ref_val)
                        {
                            if(mList.find(key) == mList.end())
                            {
                                mList[key] = (EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *)ref_val;
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
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*& operator[](const ev_uint16 &key)
                        {
                            return get(key);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject*& get(const ev_uint16 &key)
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
                        InstancedObjectsMap() {}
                    ev_private:
                        InstancedObjectsMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    ev_private:
                        typedef map<ev_uint16, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<InternalList::iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);
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
                    class EV_GRAPHIC_DLL InstancedObjectsPair : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        InstancedObjectsPair(EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        InstancedObjectsPair() {}
                        ev_uint16 first;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *second;
                    };
                    class EV_GRAPHIC_DLL InstancedObjectIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap> InternalIterator;
                        typedef InternalIterator::const_iterator const_iterator;
                        typedef InternalIterator::iterator iterator;
                        typedef InternalIterator::const_iterator IteratorType;
                        typedef InternalIterator::PairType PairType;
                        typedef InternalIterator::KeyType KeyType;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        InstancedObjectIterator(const_iterator first, const_iterator last)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(first, last);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator &operator=(_in const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator &other)
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

                        KeyType peekNextKey() const
                        {
                            return mIterator->peekNextKey();
                        }
                        ValueType peekNextValue (  ) const
                        {
                            return mIterator->peekNextValue();
                        }
                        const PointerType peekNextValuePtr ()
                        {
                            mvt = peekNextValue();
                            return &mvt;
                        }
                        ValueType getNext()
                        {
                            return mIterator->getNext() ;
                        }

                        const IteratorType &begin()
                        {
                            return mIterator->begin();
                        }
                        IteratorType &current()
                        {
                            return mIterator->current();
                        }
                        const IteratorType &end()
                        {
                            return mIterator->end();
                        }
                    ev_private:
                        InstancedObjectIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
							if((pList->Exist("first"))&&(pList->Exist("last")))
							{
								mIterator = EV_NEW_T(InternalIterator)(*(const_iterator *)pList->GetAt("first"),*(const_iterator *)pList->GetAt("last"));
							}
                            else if(pList->Exist("lst"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap *)pList->GetAt("lst"));
                            }
                            else if (pList->Exist("other"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator *)pList->GetAt("other"))->mIterator);
                            }
                        }
                    public:

                        InstancedObjectIterator(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap &lst)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(lst);
                        }
                        InstancedObjectIterator(const InstancedObjectIterator &other)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        }
                        ~InstancedObjectIterator()
                        {
                            if(mIterator)
                            {
                                EV_DELETE_T(mIterator, InternalIterator);
                                mIterator = NULL;
                            }
                        }
                        ev_bool hasMoreElements ( ) const
                        {
                            return mIterator->hasMoreElements();
                        }
                        void moveNext (  )
                        {
                            mIterator->moveNext();
                        }
                        ev_uint16 nextKey() const
                        {
                            return mIterator->peekNextKey();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *nextValue() const
                        {
                            return mIterator->peekNextValue();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject **nextValuePtr()
                        {
                            mptr = nextValue();
                            return &mptr;
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *next()
                        {
                            return mIterator->getNext();
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair &getBegin()
                        {
                            IteratorType start = mIterator->begin();
                            mBeginPair.first =  start->first;
                            mBeginPair.second = start->second;
                            return mBeginPair;
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair &getEnd()
                        {
                            IteratorType last = mIterator->end();
                            mEndPair.first =  last->first;
                            mEndPair.second = last->second;
                            return mEndPair;
                        }
                        const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair &getCurrent()
                        {
                            IteratorType current = mIterator->current();
                            mCurrentPair.first =  current->first;
                            mCurrentPair.second = current->second;
                            return mCurrentPair;
                        }

                    private:
                        InternalIterator *mIterator;
                        EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair mBeginPair;
                        EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair mCurrentPair;
                        EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsPair mEndPair;
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *mptr;
                        ValueType mvt;
                    };

                protected:
                    //// Parent static geometry
                    EarthView::World::Graphic::CInstancedGeometry *mParent;
                    //// Scene manager link
                    EarthView::World::Graphic::CSceneManager *mSceneMgr;
                    //// Scene node
                    EarthView::World::Graphic::CSceneNode *mNode;
                    //// Local list of queued meshes (not used for deallocation)
                    QueuedInstancedSubMeshList mQueuedSubMeshes;
                    //// Unique identifier for the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    ev_uint32 mBatchInstanceID;
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap mInstancesMap;
                public:
                    //// Lod values as built up - use the max at each level
                    /*CMesh::*/
                    EarthView::World::Graphic::LodValueList mLodValues;
                    //// Local AABB relative to EarthView::World::Graphic::CInstancedGeometry::CBatchInstance centre
                    EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                    //// Local bounding radius
                    Real mBoundingRadius;
                    //// The current lod level, as determined from the last camera
                    ev_uint16 mCurrentLod;
                    //// Current lod value, passed on to do material lod later
                    Real mLodValue;
                    //// Current camera, passed on to do material lod later
                    EarthView::World::Graphic::CCamera *mCamera;
                    //// Cached squared view depth value to avoid recalculation by EarthView::World::Graphic::CInstancedGeometry::CInstancedGeometryBucket
                    Real mSquaredViewDepth;
                protected:
                    //// List of LOD buckets
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList mLodBucketList;
                    //// Lod strategy reference
                    const CLodStrategy *mLodStrategy;
                ev_private:
                    CBatchInstance(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CBatchInstance(EarthView::World::Graphic::CInstancedGeometry *ref_parent, const EVString &name, EarthView::World::Graphic::CSceneManager *ref_mgr,
                                   ev_uint32 BatchInstanceID);
                    virtual ~CBatchInstance();
                    /// more fields can be added in subclasses
                    EarthView::World::Graphic::CInstancedGeometry *getParent() const
                    {
                        return mParent;
                    }
                    //// Assign a queued mesh to this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance, read for final build
                    void assign(EarthView::World::Graphic::CInstancedGeometry::QueuedInstancedSubMesh *ref_qmesh);
                    //// Build this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    void build();
                    //// Get the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance ID of this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    ev_uint32 getID() const
                    {
                        return mBatchInstanceID;
                    }
                    //// Get the centre point of the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    ///			const EarthView::World::Spatial::Math::CVector3& getCentre() const { return mCentre; }
                    EVString getMovableType() const;
                    void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
                    const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                    void  setBoundingBox(EarthView::World::Spatial::Math::CAxisAlignedBox &box);
                    Real getBoundingRadius() const;
                    void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                    ev_bool isVisible() const;
                    //// @copydoc CMovableObject::visitRenderables
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                    ///	ev_uint32 getTypeFlags() const;
                    ///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList> EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator;
                    class EV_GRAPHIC_DLL InstancedLODIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList> InternalIterator;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        typedef InstancedLODBucketList::iterator IteratorType;
                        InstancedLODIterator(IteratorType start, IteratorType last)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(start, last);
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator &operator=(_in const EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator &other)
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
                        InstancedLODIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
							if((pList->Exist("start"))&&(pList->Exist("last")))
							{
								mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"),*(IteratorType *)pList->GetAt("last"));
							}
                            else if(pList->Exist("lst"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList *)pList->GetAt("lst"));
                            }
                            else if (pList->Exist("other"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator *)pList->GetAt("other"))->mIterator);
                            }
                        }
                    public:
                        InstancedLODIterator(EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODBucketList &lst)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(lst);
                        }

                        InstancedLODIterator(const InstancedLODIterator &other)
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        }
                        ~InstancedLODIterator()
                        {
                            if(mIterator)
                            {
                                EV_DELETE_T(mIterator, InternalIterator);
                                mIterator = NULL;
                            }
                        }
                        ev_bool hasMoreElements ( ) const
                        {
                            return mIterator->hasMoreElements();
                        }
                        void moveNext ()
                        {
                            mIterator->moveNext();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *getCurrent()
                        {
                            return *mIterator->current();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *next()
                        {
                            return mIterator->getNext();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *getBegin()
                        {
                            return *mIterator->begin();
                        }
                        EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *getEnd()
                        {
                            return *mIterator->end();
                        }

                    private:
                        InternalIterator *mIterator;
                    };
                    //// Get an iterator over the LODs in this EarthView::World::Graphic::CInstancedGeometry::CBatchInstance
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedLODIterator getLODIterator();
                    //// Shared set of lights for all GeometryBuckets
                    const EarthView::World::Graphic::LightList &getLights() const;
                    //// update the bounding box of the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance according to the positions of the objects
                    void updateBoundingBox();
                    //// fill in the list
                    void updateContainers(EarthView::World::Graphic::CInstancedGeometry::CInstancedLODBucket *ref_bucket );
                    //// attach the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance to the scene
                    void attachToScene();
                    void addInstancedObject(ev_uint16 index, EarthView::World::Graphic::CInstancedGeometry::CInstancedObject *ref_object);
                    EarthView::World::Graphic::CInstancedGeometry::CInstancedObject  *isInstancedObjectPresent(ev_uint16 index);
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectIterator getObjectIterator();
                    EarthView::World::Graphic::CSceneNode *getSceneNode()
                    {
                        return mNode;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance::InstancedObjectsMap &getInstancesMap()
                    {
                        return  mInstancesMap;
                    }
                    //// change the shader used to render the batch instance
                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /** Indexed EarthView::World::Graphic::CInstancedGeometry::CBatchInstance map based on packed x/y/z EarthView::World::Graphic::CInstancedGeometry::CBatchInstance index, 10 bits for
                each axis.
                */
                /*typedef map<ev_uint32, EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*> EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap;*/
                /** Simple vectors where are stored all the renderoperations of the Batch.
                This vector is used when we want to delete the batch, in order to delete only one time each
                render operation.

                */
                class EV_GRAPHIC_DLL  BatchInstanceMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *)ref_val;
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
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*& operator[](const ev_uint16 &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance*& get(const ev_uint16 &key)
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
                    BatchInstanceMap() {}
                ev_private:
                    BatchInstanceMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<ev_uint16, EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
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
                class EV_GRAPHIC_DLL RenderOperationVector : public EarthView::World::Core::CBaseObject
                {
                public:
                    RenderOperationVector() {}
                ev_private:
                    RenderOperationVector(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CRenderOperation *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CRenderOperation *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                public:
                    void push_back(EarthView::World::Graphic::CRenderOperation *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CRenderOperation*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CRenderOperation*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CRenderOperation *const &ref_t)
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
                    EarthView::World::Graphic::CRenderOperation*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CRenderOperation *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CRenderOperation*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CRenderOperation *const &at(ev_size_t n) const
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
            protected:
                /// General state & settings
                EarthView::World::Graphic::CSceneManager *mOwner;
                EVString mName;
                ev_bool mBuilt;
                Real mUpperDistance;
                Real mSquaredUpperDistance;
                ev_bool mCastShadows;
                EarthView::World::Spatial::Math::CVector3 mBatchInstanceDimensions;
                EarthView::World::Spatial::Math::CVector3 mHalfBatchInstanceDimensions;
                EarthView::World::Spatial::Math::CVector3 mOrigin;
                ev_bool mVisible;
                //// Flags to indicate whether the World Transform Inverse matrices are passed to the shaders
                ev_bool mProvideWorldInverses;
                //// The render queue to use when rendering this object
                ev_uint8 mRenderQueueID;
                //// Flags whether the EarthView::World::Graphic::CRenderQueue's default should be used.
                ev_bool mRenderQueueIDSet;
                //// number of objects in the batch
                ev_uint32 mObjectCount;
                QueuedInstancedSubMeshList mQueuedSubMeshes;
                EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *mInstancedGeometryInstance;
                /**this is just a pointer to the base skeleton that will be used for each animated object in the batches
                This pointer has a value only during the creation of the EarthView::World::Graphic::CInstancedGeometry
                */
                EarthView::World::Graphic::CSkeletonPtr mBaseSkeleton;
                EarthView::World::Graphic::CSkeletonInstance *mSkeletonInstance;
                /**This is the main animation state. All "objects" in the batch will use an instance of this animation
                state
                */
                EarthView::World::Graphic::CAnimationStateSet *mAnimationState;
                //// List of geometry which has been optimised for EarthView::World::Graphic::CSubMesh use
                //// This is the primary storage used for cleaning up later
                OptimisedSubMeshInstancedGeometryList mOptimisedSubMeshGeometryList;
                /** Cached links from SubMeshes to (potentially optimised) geometry
                This is not used for deletion since the lookup may reference
                original vertex data
                */
                SubMeshInstancedGeometryLookup mSubMeshGeometryLookup;
                //// Map of BatchInstances
                EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap mBatchInstanceMap;
                /** This vector stores all the renderOperation used in the batch.
                See the type definition for more details.
                */
                EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector mRenderOps;
            ev_internal:
                /** Virtual method for getting a EarthView::World::Graphic::CInstancedGeometry::CBatchInstance most suitable for the
                passed in bounds. Can be overridden by subclasses.
                */
                virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getBatchInstance(const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds, ev_bool autoCreate);
                /** Get the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance within which a point lies */
                virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getBatchInstance(const EarthView::World::Spatial::Math::CVector3 &point, ev_bool autoCreate);
                virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getBatchInstance(ev_uint16 x, ev_uint16 y, ev_uint16 z, ev_bool autoCreate);
                virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getBatchInstance(ev_uint32 index);
                /** Get the EarthView::World::Graphic::CInstancedGeometry::CBatchInstance indexes for a point.
                */
                virtual void getBatchInstanceIndexes(const EarthView::World::Spatial::Math::CVector3 &point,
                                                     ev_uint16 &x, ev_uint16 &y, ev_uint16 &z);
                /** get the first EarthView::World::Graphic::CInstancedGeometry::CBatchInstance or create on if it does not exists.
                */
                virtual EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *getInstancedGeometryInstance();
                /** Pack 3 indexes into a single index value
                */
                virtual ev_uint32 packIndex(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /** Get the volume intersection for an indexed EarthView::World::Graphic::CInstancedGeometry::CBatchInstance with some bounds.
                */
                virtual Real getVolumeIntersection(const EarthView::World::Spatial::Math::CAxisAlignedBox &box,
                                                   ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /** Get the bounds of an indexed EarthView::World::Graphic::CInstancedGeometry::CBatchInstance.
                */
                virtual EarthView::World::Spatial::Math::CAxisAlignedBox getBatchInstanceBounds(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /** Get the centre of an indexed EarthView::World::Graphic::CInstancedGeometry::CBatchInstance.
                */
                virtual EarthView::World::Spatial::Math::CVector3 getBatchInstanceCentre(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /** Calculate world bounds from a set of vertex data. */
                virtual EarthView::World::Spatial::Math::CAxisAlignedBox calculateBounds(EarthView::World::Graphic::CVertexData *vertexData,
                                                        const EarthView::World::Spatial::Math::CVector3 &position, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                                        const EarthView::World::Spatial::Math::CVector3 &scale);
            protected:
                /** Look up or calculate the geometry data to use for this EarthView::World::Graphic::CSubMesh */
                EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLinkList *determineGeometry(EarthView::World::Graphic::CSubMesh *sm);
                /** Split some shared geometry into dedicated geometry. */
                void splitGeometry(EarthView::World::Graphic::CVertexData *vd, EarthView::World::Graphic::CIndexData *id,
                                   EarthView::World::Graphic::CInstancedGeometry::SubMeshLodInstancedGeometryLink *targetGeomLink);
                typedef map<ev_size_t, ev_size_t> IndexRemap;
                /** Method for figuring out which vertices are used by an index buffer
                and calculating a remap lookup for a vertex buffer just containing
                those vertices.
                */
                void buildIndexRemap(ev_uint16 *pBuffer, ev_size_t numIndexes, IndexRemap &remap)
                {
                    remap.clear();
                    for (ev_size_t i = 0; i < numIndexes; ++i)
                    {
                        /// use insert since duplicates are silently discarded
                        remap.insert(IndexRemap::value_type(*pBuffer++, remap.size()));
                        /// this will have mapped oldindex -> new index IF oldindex
                        /// wasn't already there
                    }
                }
                void buildIndexRemap(ev_uint32 *pBuffer, ev_size_t numIndexes, IndexRemap &remap)
                {
                    remap.clear();
                    for (ev_size_t i = 0; i < numIndexes; ++i)
                    {
                        /// use insert since duplicates are silently discarded
                        remap.insert(IndexRemap::value_type(*pBuffer++, remap.size()));
                        /// this will have mapped oldindex -> new index IF oldindex
                        /// wasn't already there
                    }
                }
                /** Method for altering indexes based on a remap. */
                void remapIndexes(ev_uint16 *src, ev_uint16 *dst, const IndexRemap &remap,
                                  ev_size_t numIndexes)
                {
                    for (ev_size_t i = 0; i < numIndexes; ++i)
                    {
                        /// look up original and map to target
                        IndexRemap::const_iterator ix = remap.find(*src++);
                        EV_ASSERT(ix != remap.end());
                        *dst++ = static_cast<ev_uint16>(ix->second);
                    }
                }
                void remapIndexes(ev_uint32 *src, ev_uint32 *dst, const IndexRemap &remap,
                                  ev_size_t numIndexes)
                {
                    for (ev_size_t i = 0; i < numIndexes; ++i)
                    {
                        /// look up original and map to target
                        IndexRemap::const_iterator ix = remap.find(*src++);
                        EV_ASSERT(ix != remap.end());
                        *dst++ = static_cast<ev_uint32>(ix->second);
                    }
                }
            public:
                //// Constructor; do not use directly (@see CSceneManager::createInstancedGeometry)
                CInstancedGeometry(EarthView::World::Graphic::CSceneManager *ref_owner, const EVString &name);
            ev_private:
                CInstancedGeometry(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Destructor
                virtual ~CInstancedGeometry();
                //// Get the name of this object
                const EVString &getName() const
                {
                    return mName;
                }
                /** Adds an EarthView::World::Graphic::CEntity to the static geometry.
                @remarks
                This method takes an existing EarthView::World::Graphic::CEntity and adds its details to the
                list of	elements to include when building. Note that the EarthView::World::Graphic::CEntity
                itself is not copied or referenced in this method; an EarthView::World::Graphic::CEntity is
                passed simply so that you can change the materials of attached
                CSubEntity objects if you want. You can add the same EarthView::World::Graphic::CEntity
                instance multiple times with different material settings
                completely safely, and destroy the EarthView::World::Graphic::CEntity before destroying
                this EarthView::World::Graphic::CInstancedGeometry if you like. The EarthView::World::Graphic::CEntity passed in is simply
                used as a definition.
                @note Must be called before 'build'.
                @note All added entities must use the same lod strategy.
                @param ent The EarthView::World::Graphic::CEntity to use as a definition (the CMesh and Materials
                referenced will be recorded for the build call).
                @param position The world position at which to add this EarthView::World::Graphic::CEntity
                @param orientation The world orientation at which to add this EarthView::World::Graphic::CEntity
                @param scale The scale at which to add this entity
                */
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position,
                                       const EarthView::World::Spatial::Math::CQuaternion &orientation, const EarthView::World::Spatial::Math::CVector3 &scale);
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position,
                                       const EarthView::World::Spatial::Math::CQuaternion &orientation );
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position);
                /** Adds all the EarthView::World::Graphic::CEntity objects attached to a EarthView::World::Graphic::CSceneNode and all it's
                children to the static geometry.
                @remarks
                This method performs just like addEntity, except it adds all the
                entities attached to an entire sub-tree to the geometry.
                The position / orientation / scale parameters are taken from the
                node structure instead of being specified manually.
                @note
                The EarthView::World::Graphic::CSceneNode you pass in will not be automatically detached from
                it's parent, so if you have this node already attached to the scene
                graph, you will need to remove it if you wish to avoid the overhead
                of rendering <i>both</i> the original objects and their new static
                versions! We don't do this for you incase you are preparing this
                in advance and so don't want the originals detached yet.
                @note Must be called before 'build'.
                @note All added entities must use the same lod strategy.
                @param node Pointer to the node to use to provide a set of EarthView::World::Graphic::CEntity
                templates
                */
                virtual void addSceneNode(const EarthView::World::Graphic::CSceneNode *node);
                /** Build the geometry.
                @remarks
                Based on all the entities which have been added, and the batching
                options which have been set, this method constructs	the batched
                geometry structures required. The batches are added to the scene
                and will be rendered unless you specifically hide them.
                @note
                Once you have called this method, you can no longer add any more
                entities.
                */
                virtual void build();
                /** Add a new batch instance
                @remarks
                This method add a new instance of the whole batch, by creating a new
                EarthView::World::Graphic::CInstancedGeometry::CBatchInstance, containing new lod buckets, material buckets and geometry buckets.
                The new geometry buckets will use the same buffers as the base bucket.
                @note
                no note
                */
                void addBatchInstance();
                /** Destroys all the built geometry state (reverse of build).
                @remarks
                You can call build() again after this and it will pick up all the
                same entities / nodes you queued last time.
                */
                virtual void destroy();
                /** Clears any of the entities / nodes added to this geometry and
                destroys anything which has already been built.
                */
                virtual void reset();
                /** Sets the distance at which batches are no longer rendered.
                @remarks
                This lets you turn off batches at a given distance. This can be
                useful for things like detail meshes (grass, foliage etc) and could
                be combined with a shader which fades the geometry out beforehand
                to lessen the effect.
                @param dist Distance beyond which the batches will not be rendered
                (the default is 0, which means batches are always rendered).
                */
                virtual void setRenderingDistance(Real dist)
                {
                    mUpperDistance = dist;
                    mSquaredUpperDistance = mUpperDistance * mUpperDistance;
                }
                /** Gets the distance at which batches are no longer rendered. */
                virtual Real getRenderingDistance() const
                {
                    return mUpperDistance;
                }
                /** Gets the squared distance at which batches are no longer rendered. */
                virtual Real getSquaredRenderingDistance() const
                {
                    return mSquaredUpperDistance;
                }
                /** Hides or shows all the batches. */
                virtual void setVisible(ev_bool visible);
                /** Are the batches visible? */
                virtual ev_bool isVisible() const
                {
                    return mVisible;
                }
                /** Sets whether this geometry should cast shadows.
                @remarks
                No matter what the settings on the original entities,
                the CInstancedGeometry class defaults to not casting shadows.
                This is because, being static, unless you have moving lights
                you'd be better to use precalculated shadows of some sort.
                method. If the EarthView::World::Graphic::CSceneManager is set up to use stencil shadows,
                edge lists will be copied from the underlying meshes on build.
                It is essential that all meshes support stencil shadows in this
                case.
                @note If you intend to use stencil shadows, you must set this to
                true before calling 'build' as well as making sure you set the
                scene's shadow type (that should always be the first thing you do
                anyway). You can turn shadows off temporarily but they can never
                be turned on if they were not at the time of the build.
                */
                virtual void setCastShadows(ev_bool castShadows);
                //// Will the geometry from this object cast shadows?
                virtual ev_bool getCastShadows()
                {
                    return mCastShadows;
                }
                /** Sets the size of a single EarthView::World::Graphic::CInstancedGeometry::CBatchInstance of geometry.
                @remarks
                This method allows you to configure the physical world size of
                each EarthView::World::Graphic::CInstancedGeometry::CBatchInstance, so you can balance culling against batch size. Entities
                will be fitted within the batch they most closely fit, and the
                eventual bounds of each batch may well be slightly larger than this
                if they overlap a little. The default is EarthView::World::Spatial::Math::CVector3(1000, 1000, 1000).
                @note Must be called before 'build'.
                @param size EarthView::World::Spatial::Math::CVector3 expressing the 3D size of each EarthView::World::Graphic::CInstancedGeometry::CBatchInstance.
                */
                virtual void setBatchInstanceDimensions(const EarthView::World::Spatial::Math::CVector3 &size)
                {
                    mBatchInstanceDimensions = size;
                    mHalfBatchInstanceDimensions = size * 0.5;
                }
                /** Gets the size of a single batch of geometry. */
                virtual const EarthView::World::Spatial::Math::CVector3 &getBatchInstanceDimensions() const
                {
                    return mBatchInstanceDimensions;
                }
                /** Sets the origin of the geometry.
                @remarks
                This method allows you to configure the world centre of the geometry,
                thus the place which all BatchInstances surround. You probably don't need
                to mess with this unless you have a seriously large world, since the
                default set up can handle an area 1024 * mBatchInstanceDimensions, and
                the sparseness of population is no issue when it comes to rendering.
                The default is EarthView::World::Spatial::Math::CVector3(0,0,0).
                @note Must be called before 'build'.
                @param size EarthView::World::Spatial::Math::CVector3 expressing the 3D origin of the geometry.
                */
                virtual void setOrigin(const EarthView::World::Spatial::Math::CVector3 &origin)
                {
                    mOrigin = origin;
                }
                /** Gets the origin of this geometry. */
                virtual const EarthView::World::Spatial::Math::CVector3 &getOrigin() const
                {
                    return mOrigin;
                }
                /** Sets the render queue group this object will be rendered through.
                @remarks
                Render queues are grouped to allow you to more tightly control the ordering
                of rendered objects. If you do not call this method, all  objects default
                to the default queue (CRenderQueue::getDefaultQueueGroup), which is fine for
                most objects. You may want to alter this if you want to perform more complex
                rendering.
                @par
                See EarthView::World::Graphic::CRenderQueue for more details.
                @param queueID Enumerated value of the queue group to use.
                */
                virtual void setRenderQueueGroup(ev_uint8 queueID);
                /** Gets the queue group for this entity, see setRenderQueueGroup for full details. */
                virtual ev_uint8 getRenderQueueGroup() const;
                //// Iterator for iterating over contained BatchInstances
                ///	typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap> EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator;
                class EV_GRAPHIC_DLL BatchInstancePair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    BatchInstancePair(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        first = 0;
                        second = NULL;
                    }
                public:
                    BatchInstancePair()
                    {
                        first = 0;
                        second = NULL;
                    }
                    ev_uint16 first;
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *second;
                };
                class EV_GRAPHIC_DLL BatchInstanceIterator  : public EarthView::World::Core::CBaseObject
                {
                ev_private:

                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    BatchInstanceIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator &operator=(_in const EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator &other)
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
                    ~BatchInstanceIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    KeyType peekNextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    ValueType peekNextValue (  ) const
                    {
                        return mIterator->peekNextValue();
                    }
                    const PointerType peekNextValuePtr ()
                    {
                        mvt = peekNextValue();
                        return &mvt;
                    }
                    ValueType getNext()
                    {
                        return mIterator->getNext() ;
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    IteratorType &current()
                    {
                        return mIterator->current();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                ev_private:
                    BatchInstanceIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
						if((pList->Exist("first"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(const_iterator *)pList->GetAt("first"),*(const_iterator *)pList->GetAt("last"));
						}
                        else if(pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                public:
                    BatchInstanceIterator(EarthView::World::Graphic::CInstancedGeometry::BatchInstanceMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    BatchInstanceIterator(const BatchInstanceIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    ev_uint16 nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair mBeginPair;
                    EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair mCurrentPair;
                    EarthView::World::Graphic::CInstancedGeometry::BatchInstancePair mEndPair;
                    EarthView::World::Graphic::CInstancedGeometry::CBatchInstance *mptr;
                    ValueType mvt;
                };
                //// Get an iterator over the BatchInstances in this geometry
                EarthView::World::Graphic::CInstancedGeometry::BatchInstanceIterator getBatchInstanceIterator();
                //// get the mRenderOps vector.
                EarthView::World::Graphic::CInstancedGeometry::RenderOperationVector &getRenderOperationVector()
                {
                    return mRenderOps;
                }
                //// @copydoc CMovableObject::visitRenderables
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                      ev_bool debugRenderables );
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                /** Dump the contents of this EarthView::World::Graphic::CInstancedGeometry to a file for diagnostic
                purposes.
                */
                virtual void dump(const EVString &filename) const;
                /**
                @remarks
                Return the skeletonInstance that will be used
                */
                EarthView::World::Graphic::CSkeletonInstance *getBaseSkeletonInstance()
                {
                    return mSkeletonInstance;
                }
                /**
                @remarks
                Return the skeleton that is shared by all instanced objects.
                */
                EarthView::World::Graphic::CSkeletonPtr getBaseSkeleton()
                {
                    return mBaseSkeleton;
                }
                /**
                @remarks
                Return the animation state that will be cloned each time an EarthView::World::Graphic::CInstancedGeometry::CInstancedObject is made
                */
                EarthView::World::Graphic::CAnimationStateSet *getBaseAnimationState()
                {
                    return mAnimationState;
                }
                /**
                @remarks
                return the total number of object that are in all the batches
                */
                ev_uint32 getObjectCount()
                {
                    return mObjectCount;
                }
                /**
                @remarks
                Allows World Transform Inverse matrices to be passed as shader constants along with the world
                transform matrix list. Reduces the number of usable geometries in an instance to 40 instead of 80.
                The inverse matrices are interleaved with the world matrices at n+1.
                */
                virtual void setProvideWorldInverses(ev_bool flag);
                /**
                @remarks
                Returns the toggle state indicating whether the World Transform INVERSE matrices would
                be passed to the shaders.
                */
                virtual ev_bool getProvideWorldInverses() const
                {
                    return mProvideWorldInverses;
                }
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

