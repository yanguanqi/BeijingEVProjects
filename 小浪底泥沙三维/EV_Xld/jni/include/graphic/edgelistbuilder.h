#pragma once
#ifndef __EdgeListBuilder_H__
#define __EdgeListBuilder_H__
#include "graphic/graphic_config.h"
#include "mathengine/vector3.h"
#include "mathengine/vector4.h"
#include "renderoperation.h"


namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CLogger;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CHardwareVertexBufferSharedPtr;
            /** This class contains the information required to describe the edge connectivity of a
                given set of vertices and indexes.
            @remarks
                which can be made up of multiple submeshes, there are separate edge lists for when
            */
            class EV_GRAPHIC_DLL CEdgeData : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CEdgeData(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CEdgeData() {}

                /** Basic triangle structure. */
                class EV_GRAPHIC_DLL CTriangle : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CTriangle(_in EarthView::World::Core::CNameValuePairList *pList): indexSet(0), vertexSet(0) {}
                public:
                    /** The set of indexes this triangle came from (NB it is possible that the triangles on**/
                    ev_uint64 indexSet;
                    /** The vertex set these vertices came from. */
                    ev_uint64 vertexSet;
                    ev_uint64 vertIndex[3];			//// Vertex indexes, relative to the original buffer
                    ev_uint64 sharedVertIndex[3]; 			//// Vertex indexes, relative to a shared vertex buffer with
                    /// duplicates eliminated (this buffer is not exposed)
                    CTriangle() : indexSet(0), vertexSet(0) {}
                };
                /** Edge data. */
                class EV_GRAPHIC_DLL CEdge : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CEdge(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    /** The indexes of the 2 tris attached, note that tri 0 is the one where the
                        indexes run _anti_ clockwise along the edge. Indexes must be
                        reversed for tri 1. */
                    ev_uint64 triIndex[2];
                    /** The vertex indices for this edge. Note that both vertices will be in the vertex
                        set as specified in 'vertexSet', which will also be the same as tri 0 */
                    ev_uint64 vertIndex[2];
                    /** Vertex indices as used in the shared vertex list, not exposed. */
                    ev_uint64 sharedVertIndex[2];
                    /** Indicates if this is a degenerate edge, ie it does not have 2 triangles */
                    ev_bool degenerate;
                    CEdge() {}
                };
                /// Array of 4D vector of triangle face normal, which is unit vector orthogonal
                /// to the triangles, plus distance from origin.
                /// Use aligned policy here because we are intended to use in SIMD optimised routines .
                class EV_GRAPHIC_DLL TriangleFaceNormalList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TriangleFaceNormalList(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if(pList && pList->Exist("count"))
                        {
                            ev_size_t count = *(ev_size_t *)pList->GetAt("count");
                            mList = InternalList(count);
                        }
                    }
                ev_private:
                    typedef vector<EarthView::World::Spatial::Math::CVector4> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Spatial::Math::CVector4 const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    TriangleFaceNormalList()
                    {
                    }

                    TriangleFaceNormalList(ev_size_t count)
                    {
                        mList = InternalList(count);
                    }
                public:
                    void push_back(EarthView::World::Spatial::Math::CVector4  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Spatial::Math::CVector4 &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Spatial::Math::CVector4 &back()
                    {
                        return mList.back();
                    }
                    void swap(EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList &rhs)
                    {
                        mList.swap(rhs.mList);
                    }
                    void insert(ev_uint32 pos, EarthView::World::Spatial::Math::CVector4 const &t)
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
                    EarthView::World::Spatial::Math::CVector4 &operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Spatial::Math::CVector4 const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Spatial::Math::CVector4 &at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Spatial::Math::CVector4 const &at(ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
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
                /// Working vector used when calculating the silhouette.
                /// Use std::vector<ev_char> instead of std::vector<ev_bool> which might implemented
                class EV_GRAPHIC_DLL TriangleLightFacingList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TriangleLightFacingList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<ev_char> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, ev_char const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    TriangleLightFacingList() {}
                    void push_back(ev_char  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    ev_char &front()
                    {
                        return mList.front();
                    }
                    ev_char &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, ev_char const &t)
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
                    ev_char &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    ev_char const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_char &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    ev_char const &at(ev_size_t n) const
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
                class EV_GRAPHIC_DLL TriangleList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TriangleList(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if(pList && pList->Exist("count"))
                        {
                            ev_size_t count = *(ev_size_t *)pList->GetAt("count");
                            mList = InternalList(count);
                        }
                    }
                ev_private:

                    typedef vector<EarthView::World::Graphic::CEdgeData::CTriangle> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CEdgeData::CTriangle const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    TriangleList() {}

                    TriangleList(ev_size_t count)
                    {
                        mList = InternalList(count);
                    }
                public:
                    void push_back(EarthView::World::Graphic::CEdgeData::CTriangle  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CEdgeData::CTriangle &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CEdgeData::CTriangle &back()
                    {
                        return mList.back();
                    }
                    void swap(EarthView::World::Graphic::CEdgeData::TriangleList &rhs)
                    {
                        mList.swap(rhs.mList);
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CEdgeData::CTriangle const &t)
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
                    EarthView::World::Graphic::CEdgeData::CTriangle &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CTriangle const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CTriangle &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CTriangle const &at(ev_size_t n) const
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
                class EV_GRAPHIC_DLL EdgeList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    EdgeList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CEdgeData::CEdge> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CEdgeData::CEdge const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    EdgeList() {}
                    void push_back(EarthView::World::Graphic::CEdgeData::CEdge  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CEdgeData::CEdge &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CEdgeData::CEdge &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CEdgeData::CEdge const &t)
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
                    EarthView::World::Graphic::CEdgeData::CEdge &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CEdge const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CEdge &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::CEdge const &at(ev_size_t n) const
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

                /** A group of edges sharing the same vertex data. */
                class EV_GRAPHIC_DLL EdgeGroup : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    EdgeGroup(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    EdgeGroup() {}
                    /** The vertex set index that contains the vertices for this edge group. */
                    ev_size_t vertexSet;
                    /** Pointer to vertex data used by this edge group. */
                    const EarthView::World::Graphic::CVertexData *vertexData;
                    /** Index to main triangles array, indicate the first triangle of this edge
                        group, and all triangles of this edge group are stored continuous in
                        main triangles array.
                    */
                    ev_size_t triStart;
                    /** Number triangles of this edge group. */
                    ev_size_t triCount;
                    /** The edges themselves. */
                    EarthView::World::Graphic::CEdgeData::EdgeList edges;

					EarthView::World::Spatial::Math::CMatrix4 localMatrix;
                };

                class EV_GRAPHIC_DLL EdgeGroupList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    EdgeGroupList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CEdgeData::EdgeGroup> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CEdgeData::EdgeGroup const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    EdgeGroupList() {}
                    void push_back(EarthView::World::Graphic::CEdgeData::EdgeGroup  const &t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CEdgeData::EdgeGroup &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CEdgeData::EdgeGroup &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CEdgeData::EdgeGroup const &t)
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
                    EarthView::World::Graphic::CEdgeData::EdgeGroup &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::EdgeGroup const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::EdgeGroup &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CEdgeData::EdgeGroup const &at(ev_size_t n) const
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

                /** Main triangles array, stores all triangles of this edge list. Note that
                    triangles are grouping against edge group.
                */
                EarthView::World::Graphic::CEdgeData::TriangleList triangles;
                /** All triangle face normals. It should be 1:1 with triangles. */
                EarthView::World::Graphic::CEdgeData::TriangleFaceNormalList triangleFaceNormals;
                /** EarthView::World::Graphic::CEdgeData::CTriangle light facing states. It should be 1:1 with triangles. */
                EarthView::World::Graphic::CEdgeData::TriangleLightFacingList triangleLightFacings;
                /** All edge groups of this edge list. */
                EarthView::World::Graphic::CEdgeData::EdgeGroupList edgeGroups;
                /** Flag indicate the mesh is manifold. */
                ev_bool isClosed;

                /** Calculate the light facing state of the triangles in this edge list
                @remarks
                    This is normally the first stage of calculating a silhouette, i.e.
                    establishing which tris are facing the light and which are facing
                    away. This state is stored in the 'triangleLightFacings'.
                @param lightPos 4D position of the light in object space, note that
                    for directional lights (which have no position), the w component
                    is 0 and the x/y/z position are the direction.
                */
                void updateTriangleLightFacing(const EarthView::World::Spatial::Math::CVector4 &lightPos);
                /** Updates the face normals for this edge list based on (changed)
                    position information, useful for animated objects.
                @param vertexSet The vertex set we are updating
                @param positionBuffer The updated position buffer, must contain ONLY xyz
                */
                void updateFaceNormals(ev_size_t vertexSet, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &positionBuffer);

                /// Debugging method
                void log(EarthView::World::Core::CLogger *ptLog);

            };
            /** General utility class for building edge lists for geometry.
            @remarks
                You can add multiple sets of vertex and index data to build and edge list.
                Edges will be built between the various sets as well as within sets; this allows
                separate index and (optionally) vertex data and still get the same connectivity
                information. It's important to note that the indexes for the edge will be constrained
                to a single vertex buffer though (this is required in order to render the edge).
            */
            class EV_GRAPHIC_DLL CEdgeListBuilder : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CEdgeListBuilder(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CEdgeListBuilder();

                virtual ~CEdgeListBuilder();
                /** Add a set of vertex geometry data to the edge builder.
                @remarks
                    You must add at least one set of vertex data to the builder before invoking the
                    build method.
                */
                void addVertexData( const EarthView::World::Graphic::CVertexData *ref_vertexData,const EarthView::World::Spatial::Math::CMatrix4& mat );
                /** Add a set of index geometry data to the edge builder.
                @remarks
                    You must add at least one set of index data to the builder before invoking the
                    build method.
                @param indexData The index information which describes the triangles.
                @param vertexSet The vertex data set this index data refers to; you only need to alter this
                    if you have added multiple sets of vertices
                @param opType The operation type used to render these indexes. Only triangle types
                    are supported (no point or line types)
                */
                void addIndexData(const EarthView::World::Graphic::CIndexData *ref_indexData, ev_size_t vertexSet, EarthView::World::Graphic::CRenderOperation::OperationType opType);
                void addIndexData(const EarthView::World::Graphic::CIndexData *ref_indexData, ev_size_t vertexSet);
                void addIndexData(const EarthView::World::Graphic::CIndexData *ref_indexData);
                /** Builds the edge information based on the information built up so far.
                @remarks
                    The caller takes responsibility for deleting the returned structure.
                */
                _extfree EarthView::World::Graphic::CEdgeData *build();
                //// Debugging method
                void log(EarthView::World::Core::CLogger *ptLog);
            protected:
                /** A vertex can actually represent several vertices in the final model, because
                vertices along texture seams etc will have been duplicated. In order to properly
                evaluate the surface properties, a single common vertex is used for these duplicates,
                and the faces hold the detail of the duplicated vertices.
                */
                struct CommonVertex
                {
                    EarthView::World::Spatial::Math::CVector3  position;  			/// location of point in euclidean space
                    ev_size_t index;       			/// place of vertex in common vertex list
                    ev_size_t vertexSet;   			/// The vertex set this came from
                    ev_size_t indexSet;    			/// The index set this was referenced (first) from
                    ev_size_t originalIndex; 			/// place of vertex in original vertex set
                };
                /** A set of indexed geometry data */
                struct Geometry
                {
                    ev_size_t vertexSet;           			/// The vertex data set this geometry data refers to
                    ev_size_t indexSet;            			/// The index data set this geometry data refers to
                    const EarthView::World::Graphic::CIndexData *indexData; 			/// The index information which describes the triangles.
                    EarthView::World::Graphic::CRenderOperation::OperationType opType;  			/// The operation type used to render this geometry
                };
                /** Comparator for sorting geometries by vertex set */
                struct geometryLess
                {
                    ev_bool operator()(const Geometry &a, const Geometry &b) const
                    {
                        if (a.vertexSet < b.vertexSet) return true;
                        if (a.vertexSet > b.vertexSet) return false;
                        return a.indexSet < b.indexSet;
                    }
                };
                /** Comparator for unique vertex list */
                struct vectorLess
                {
                    ev_bool operator()(const EarthView::World::Spatial::Math::CVector3 &a, const EarthView::World::Spatial::Math::CVector3 &b) const
                    {
                        if (a.x < b.x) return true;
                        if (a.x > b.x) return false;
                        if (a.y < b.y) return true;
                        if (a.y > b.y) return false;
                        return a.z < b.z;
                    }
                };
                typedef vector<std::pair<const EarthView::World::Graphic::CVertexData *,EarthView::World::Spatial::Math::CMatrix4> > VertexDataList;
				//typedef vector<const EarthView::World::Graphic::CVertexData *> VertexDataList;
                typedef vector<Geometry> GeometryList;
                typedef vector<CommonVertex> CommonVertexList;
                GeometryList mGeometryList;
                VertexDataList mVertexDataList;
                CommonVertexList mVertices;
                EarthView::World::Graphic::CEdgeData *mEdgeData;
                //// Map for identifying common vertices
                typedef map<EarthView::World::Spatial::Math::CVector3, ev_size_t, vectorLess> CommonVertexMap;
                CommonVertexMap mCommonVertexMap;
                /** Edge map, used to connect edges. Note we allow many triangles on an edge,
                after connected an existing edge, we will remove it and never used again.
                */
                typedef multimap< std::pair<ev_size_t, ev_size_t>, std::pair<ev_size_t, ev_size_t> > EdgeMap;
                EdgeMap mEdgeMap;
                void buildTrianglesEdges(const Geometry &geometry);
                //// Finds an existing common vertex, or inserts a new one
                ev_size_t findOrCreateCommonVertex(const EarthView::World::Spatial::Math::CVector3 &vec, ev_size_t vertexSet,
                                                   ev_size_t indexSet, ev_size_t originalIndex);
                //// Connect existing edge or create a new edge - utility method during building
                void connectOrCreateEdge(ev_size_t vertexSet, ev_size_t triangleIndex, ev_size_t vertIndex0, ev_size_t vertIndex1,
                                         ev_size_t sharedVertIndex0, ev_size_t sharedVertIndex1);
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

