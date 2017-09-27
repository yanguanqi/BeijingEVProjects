#ifndef __ProgressiveMesh_H_
#define __ProgressiveMesh_H_
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include <mathengine/vector2.h>
#include "hardwarevertexbuffer.h"
#include "hardwareindexbuffer.h"
#include "smallvector.h"
#include "material.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CVector2;
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

            class CIndexData;
            class CVertexData;

            /*
            [7/4/2012 WangJian]
              add class BitArray for 1.8
            */
            class CMesh;
            class CSubMesh;

            class EV_GRAPHIC_DLL CBitArray : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CBitArray(_in EarthView::World::Core::CNameValuePairList *pList)
                {
                    if ( pList && pList->Exist("bits_count"))
                    {
                        resize( *(ev_int32 *)pList->GetAt("bits_count"));
                    }
                }
            public:
                CBitArray()					: bits_ptr(NULL) {}
                CBitArray(ev_int32 bits_count)	: bits_ptr(NULL)
                {
                    resize(bits_count);
                }
                EarthView::World::Graphic::CBitArray &operator=(const EarthView::World::Graphic::CBitArray &ba)
                {
                    bits = ba.bits;
                    bits_ptr = bits.size() > 0 ? &bits.front() : NULL;
                    return *this;
                }

                bool getBit(size_t i) const
                {
                    return bits_ptr[i >> 3] & bit_mask[i & 7];
                }
                void setBit(size_t i)
                {
                    bits_ptr[i >> 3] |= bit_mask[i & 7];
                }
                void clearBit(size_t i)
                {
                    bits_ptr[i >> 3] &= ~bit_mask[i & 7];
                }
                void clearAllBits()
                {
                    memset(bits_ptr, 0, bits.size());
                }

                bool empty() const
                {
                    return bits.empty();
                }
                void resize(size_t bits_count)
                {
                    bits.resize((bits_count + 7) / 8);
                    bits_ptr = bits.size() > 0 ? &bits.front() : NULL;
                    clearAllBits();
                }

                size_t getBitsCount() const
                {
                    size_t count = 0;
                    for(unsigned char *ptr = bits_ptr, *end_ptr = bits_ptr + bits.size(); ptr != end_ptr; ++ptr)
                    {
                        const unsigned char b = *ptr;
                        count += bit_count[b & 0xF] + bit_count[b >> 4];
                    }
                    return count;
                }

            private:
                unsigned char				*bits_ptr;					/// it`s so performance critical, so we place raw data pointer before all other members
                vector<unsigned char>	bits;

                const static unsigned char	bit_mask[8];				/// = { 1, 2, 4, 8, 16, 32, 64, 128 };
                const static unsigned char	bit_count[16];				/// = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
            };
            /** This class reduces the complexity of the geometry it is given.
                This class is dedicated to reducing the number of triangles in a given mesh
                taking into account seams in both geometry and texture co-ordinates and meshes
                which have multiple frames.
            @par
                The primary use for this is generating LOD versions of EarthView::World::Graphic::CMesh objects, but it can be
                used by any geometry provider. The only limitation at the moment is that the
                provider uses a common vertex buffer for all LODs and one index buffer per LOD.
                Therefore at the moment this class can only handle indexed geometry.
            @par
                NB the interface of this class will certainly change when compiled vertex buffers are
                supported.
            */
            class EV_GRAPHIC_DLL CProgressiveMesh : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /** The way to derive the quota of vertices which are reduced at each LOD. */
                enum VertexReductionQuota
                {
                    //// A set number of vertices are removed at each reduction
                    VRQ_CONSTANT,
                    //// A proportion of the remaining number of vertices are removed at each reduction
                    VRQ_PROPORTIONAL,
                    VRQ_ERROR_COST 			///wj
                };
                /* typedef vector<EarthView::World::Graphic::CIndexData*> LODFaceList;*/
                class EV_GRAPHIC_DLL LODFaceList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CIndexData *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CIndexData *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    LODFaceList(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    LODFaceList() {}
                    void push_back(EarthView::World::Graphic::CIndexData *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::CIndexData*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CIndexData*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CIndexData *const &ref_t)
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
                ev_private:
                    void swap(vector<EarthView::World::Graphic::CIndexData *>& t)
                    {
                        mList.swap(t);
                    }
                public:
                    EarthView::World::Graphic::CIndexData*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CIndexData *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CIndexData*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::CIndexData *const &at(ev_size_t n) const
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
                /*
                [7/4/2012 WangJian]

                */
                static bool generateLodLevels(EarthView::World::Graphic::CMesh *pMesh, const EarthView::World::Graphic::LodValueList &lodValues,
                                              EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota reductionMethod, Real reductionValue);
                /*
                [7/4/2012 WangJian]

                */
                static EarthView::World::Graphic::CMeshPtr generateSimplifiedMesh(const EVString &name, const EVString &groupName, CMesh *inMesh,
                                                       bool dropOriginalGeometry, const EarthView::World::Graphic::LodValueList &lodValues,
                                                       EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota reductionMethod, Real reductionValue,
                                                       _out ev_uint64 &removedVertexDuplicatesCount);
            public:
                class EV_GRAPHIC_DLL ProgressiveMeshList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CProgressiveMesh *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                private:
                    InternalList mList;
                ev_private:
                    ProgressiveMeshList();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ProgressiveMeshList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 在容器最后添加元素
                    /// </summary>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void push_back( _in  EarthView::World::Graphic::CProgressiveMesh *const &ref_t);
                    /// <summary>
                    /// 删除容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void pop_back();
                    /// <summary>
                    /// 返回容器首个元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器首个元素</returns>
                    EarthView::World::Graphic::CProgressiveMesh*& front();
                    /// <summary>
                    /// 返回容器最后元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器最后元素</returns>
                    EarthView::World::Graphic::CProgressiveMesh*& back();
                    /// <summary>
                    /// 容器中间位置插入元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <param name="t">元素值</param>
                    /// <returns></returns>
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CProgressiveMesh *const &ref_t);
                    /// <summary>
                    /// 删除容器中间位置元素
                    /// </summary>
                    /// <param name="pos">位置</param>
                    /// <returns></returns>
                    void remove(_in ev_size_t pos);
                    /// <summary>
                    /// 返回容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    EarthView::World::Graphic::CProgressiveMesh*& operator[](_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="n">下标位置</param>
                    /// <returns>返回下标对应的值</returns>
                    EarthView::World::Graphic::CProgressiveMesh *const &operator[](_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    EarthView::World::Graphic::CProgressiveMesh*& at(_in ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回某位置的元素值
                    /// </summary>
                    /// <param name="n">位置</param>
                    /// <returns>返回位置对应的值</returns>
                    EarthView::World::Graphic::CProgressiveMesh *const &at(_in ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    /// <summary>
                    /// 返回元素的数量大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回元素的数量大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 改变容器中元素数量大小
                    /// </summary>
                    /// <param name="newSize">改变的容器中元素数量大小</param>
                    /// <returns></returns>
                    void resize(_in ev_size_t newSize);
                    /// <summary>
                    /// 改变容器中最小的元素容纳数量
                    /// </summary>
                    /// <param name="count">最小的元素容纳数量</param>
                    /// <returns></returns>
                    void reserve(_in ev_size_t count);
                    /// <summary>
                    /// 清空所有元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                };
            protected:
                ///	typedef vector<EarthView::World::Graphic::CProgressiveMesh*> EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList;

                //// Allocates internal resources
                static void initializeProgressiveMeshList(ProgressiveMeshList &pmList, EarthView::World::Graphic::CMesh *pMesh);
                //// Deletes allocated internal resources.
                static void freeProgressiveMeshList(ProgressiveMeshList *pmList);

                /** Constructor, takes the geometry data and index buffer.
                @remarks
                	DO NOT pass write-only, unshadowed buffers to this method! They will not
                	work. CPass only shadowed buffers, or better yet perform mesh reduction as
                	buffers in system memory.
                */

                ///CProgressiveMesh(const EarthView::World::Graphic::CVertexData* vertexData, const EarthView::World::Graphic::CIndexData* indexData);
                CProgressiveMesh(CSubMesh *ref_pSubMesh);
            ev_private:
                CProgressiveMesh(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CProgressiveMesh();
                /** Adds an extra vertex position buffer.
                @remarks
                    As well as the main vertex buffer, the client of this class may add extra versions
                    of the vertex buffer which will also be taken into account when the cost of
                    simplifying the mesh is taken into account. This is because the cost of
                    simplifying an animated mesh cannot be calculated from just the reference position,
                    multiple positions needs to be assessed in order to find the best simplification option.
                @par
                	DO NOT pass write-only, unshadowed buffers to this method! They will not
                	work. CPass only shadowed buffers, or better yet perform mesh reduction as
                	buffers in system memory.
                @param buffer Pointer to x/y/z buffer with vertex positions. The number of vertices
                    must be the same as in the original GeometryData passed to the constructor.
                */
                virtual void addExtraVertexPositionBuffer(const EarthView::World::Graphic::CVertexData *vertexData);
                /** Builds the progressive mesh with the specified number of levels.
                @param numLevels The number of levels to include in the output excluding the full detail version.
                @param outList Pointer to a list of LOD geometry data which will be completed by the application.
                	Each entry is a reduced form of the mesh, in decreasing order of detail.
                @param quota The way to derive the number of vertices removed at each LOD
                @param reductionValue Either the proportion of vertices to remove at each level, or a fixed
                	number of vertices to remove at each level, depending on the value of quota
                */
                /*
                [7/4/2012 WangJian]
                  delete for 1.8
                */
                ///virtual void build(ev_uint16 numLevels, LODFaceList* outList,
                ///	EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota , Real reductionValue  );
                ///virtual void build(ev_uint16 numLevels, LODFaceList* outList,
                ///	EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota);
                ///virtual void build(ev_uint16 numLevels, LODFaceList* outList);
                static bool build(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmInList,
                                  const EarthView::World::Graphic::CLodStrategy *lodStrategy, const EarthView::World::Graphic::LodValueList &lodValues,
                                  EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota, Real reductionValue /*= 0.5f*/);
                static bool build(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmInList,
                                  const EarthView::World::Graphic::CLodStrategy *lodStrategy, const EarthView::World::Graphic::LodValueList &lodValues,
                                  EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota/*, Real reductionValue = 0.5f*/);

            protected:
                //// Can be NULL for non-indexed subMeshes, such PM would be skipped
                CSubMesh *mSubMesh;
                EarthView::World::Graphic::CVertexData *mVertexData;
                EarthView::World::Graphic::CIndexData *mIndexData;
                vector<EarthView::World::Graphic::CIndexData *> mLodFaceList;
                size_t mRemovedVertexDuplicatesCount;
                size_t mCurrNumIndexes;
                float mInvSquaredBoundBoxDiagonal;
                int mVertexComponentFlags;

                /// Internal classes
                class CPMTriangle;
                class CPMVertex;
                struct vertexLess;
            public: 			/// VC6 hack
                /** A vertex as used by a face. This records the index of the actual vertex which is used
                by the face, and a pointer to the common vertex used for surface evaluation. */
                class EV_GRAPHIC_PRIVATE CPMFaceVertex
                {
                public:
                    ev_size_t realIndex;
                    CPMVertex *commonVertex;
                };
            protected:
                /** A triangle in the progressive mesh, holds extra info like face normal. */
                class EV_GRAPHIC_PRIVATE CPMTriangle
                {
                public:
                    CPMTriangle();
                    void setDetails(ev_size_t index, CPMFaceVertex *v0, CPMFaceVertex *v1, CPMFaceVertex *v2);
                    void computeNormal();
                    void replaceVertex(CPMFaceVertex *vold, CPMFaceVertex *vnew);
                    ev_bool hasCommonVertex(CPMVertex *v) const;
                    ev_bool hasFaceVertex(CPMFaceVertex *v) const;
                    CPMFaceVertex *getFaceVertexFromCommon(CPMVertex *commonVert);
                    void notifyRemoved();
                    CPMFaceVertex *vertex[3]; 			/// the 3 points that make this tri
                    EarthView::World::Spatial::Math::CVector3   normal;    			/// unit vector orthogonal to this face
                    Real			area;
                    ev_bool      removed;   			/// true if this tri is now removed
                    ev_size_t index;
                };
                /** A vertex in the progressive mesh, holds info like collapse cost etc.
                This vertex can actually represent several vertices in the final model, because
                vertices along texture seams etc will have been duplicated. In order to properly
                evaluate the surface properties, a single common vertex is used for these duplicates,
                and the faces hold the detail of the duplicated vertices.
                */
                class EV_GRAPHIC_PRIVATE CPMVertex
                {
                public:
                    enum BorderStatus { BS_UNKNOWN = 0, BS_NOT_BORDER, BS_BORDER };
                    typedef CSmallVector<CPMVertex *, 8> NeighborList;
                    typedef CSmallVector<CPMTriangle *, 8> FaceList;
                public:
                    CPMVertex() : mBorderStatus(BS_UNKNOWN), removed(false) {}
                    void setDetails(size_t index, const EarthView::World::Spatial::Math::CVector3 &pos, const EarthView::World::Spatial::Math::CVector3 &normal, const EarthView::World::Spatial::Math::CVector2 &uv);

                    bool isNearEnough(CPMVertex *other) const;
                    void removeIfNonNeighbor(CPMVertex *n);
                    void initBorderStatus();			//// Set mBorderStatus to BS_BORDER if this vertex is on the edge of an open geometry patch
                    ev_bool isManifoldEdgeWith(CPMVertex *v); 			/// is edge this->src a manifold edge?
                    void notifyRemoved();
                    void calculateNormal();
                    EarthView::World::Spatial::Math::CVector3  position;  			/// location of point in euclidean space
                    EarthView::World::Spatial::Math::CVector3 normal;
                    EarthView::World::Spatial::Math::CVector2 uv;
                    ev_size_t index;       			/// place of vertex in original list
                    BorderStatus mBorderStatus;
                    ev_bool      removed;   			/// true if this vert is now removed
                    ev_bool	  toBeRemoved; 			/// denug
                    Real collapseCost;  			/// cached cost of collapsing edge
                    CPMVertex *collapseTo; 			/// candidate vertex for collapse
                    NeighborList neighbor; 			/// adjacent vertices
                    FaceList face;     			/// adjacent triangles
                };

                typedef vector<CPMTriangle> TriangleList;
                typedef vector<CPMFaceVertex> FaceVertexList;
                typedef vector<CPMVertex> CommonVertexList;
                typedef std::pair<Real, unsigned int> CostIndexPair;
                typedef vector<CostIndexPair> WorstCostList;
                //// Data used to calculate the collapse costs
                struct PMWorkingData
                {
                    TriangleList mTriList; 			//// List of faces
                    FaceVertexList mFaceVertList; 			/// The vertex details referenced by the triangles
                    CommonVertexList mVertList; 			/// The master list of common vertices
                };
                typedef vector<PMWorkingData> WorkingDataList;
                //// Multiple copies, 1 per vertex buffer
                WorkingDataList mWorkingData;
                //// The worst collapse cost from all vertex buffers for each vertex
                WorstCostList mWorstCosts;
                EarthView::World::Graphic::CBitArray		mInvalidCostMask;				/// indexed by vertex index
                size_t			mInvalidCostCount;
                size_t			mWorstCostsSize;
                size_t			mNextWorstCostHint;				/// getNextCollapser() uses it to reduce complexity from O(n^2) to O(n)
                //// Temporary variable used in computeEdgeCollapseCost, declared here to avoid multiple memory allocations
                mutable CPMVertex::FaceList mEdgeAdjacentSides;
                //// Internal method for building PMWorkingData from geometry data
                void addWorkingData(const EarthView::World::Graphic::CVertexData *vertexData, const EarthView::World::Graphic::CIndexData *indexData);
                void mergeWorkingDataBorders();
                //// Internal method for initialising the edge collapse costs
                void initialiseEdgeCollapseCosts();
                //// Internal calculation method for deriving a collapse cost  from u to v
                Real computeEdgeCollapseCost(CPMVertex *src, CPMVertex *dest) const;
                //// Internal calculation method, return true if edge collapse flip some neighbor face normal
                bool collapseInvertsNormals(CPMVertex *src, CPMVertex *dest) const;
                //// Internal method evaluates all collapse costs from this vertex and picks the lowest for a single buffer
                Real computeEdgeCostAtVertexForBuffer(CPMVertex *v);
                //// Internal method evaluates all collapse costs from this vertex for every buffer and returns the worst
                Real computeEdgeCostAtVertex(ev_size_t vertIndex);
                //// Internal method to compute edge collapse costs for all buffers /
                void computeAllCosts();
                //// Internal methods for lazy costs recomputing
                static size_t getInvalidCostCount(CProgressiveMesh::ProgressiveMeshList &pmList);
                static bool recomputeInvalidCosts(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmInList);
                void recomputeInvalidCosts();
                void sortIndexesByCost();
                static int cmpByCost(const void *p1, const void *p2); 			/// comparator for mWorstCosts sorting
                //// Internal methods for getting the index of next best vertex to collapse among all submeshes
                static void getNextCollapser(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmList, EarthView::World::Graphic::CProgressiveMesh*& pm, CostIndexPair*& bestCollapser);
                CostIndexPair *getNextCollapser();
                //// Internal method builds an new LOD based on the current state
                void bakeNewLOD(EarthView::World::Graphic::CIndexData *pData);
                //// Internal method builds an LODs usage, possibly skipping first LOD, that can be used as original geometry
                static void bakeLodUsage(EarthView::World::Graphic::CMesh *pMesh, EarthView::World::Graphic::CLodStrategy *lodStrategy, const EarthView::World::Graphic::LodValueList &lodValues, bool skipFirstLodLevel = false);

                /** Internal method, collapses vertex onto it's saved collapse target.
                @remarks
                    This updates the working triangle list to drop a triangle and recalculates
                    the edge collapse costs around the collapse target.
                    This also updates all the working vertex lists for the relevant buffer.
                */
                void collapse(CPMVertex *collapser);
                //// We can defragment mesh, removing unused vertices and re-indexing other, storing old-to-new mapping in index map
                typedef pair<ev_uint32, CPMVertex *> IndexVertexPair;
                //// Optionally discards first LOD level (i.e. original geometry), removes unused vertices, remaps indexes.
                static void bakeSimplifiedMesh(EarthView::World::Graphic::CMesh *destMesh, EarthView::World::Graphic::CMesh *srcMesh, EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmList, ev_bool dropFirstLodLevel = false);
                //// Defragments vertices, removing unused. Useful if original geometry is redundant or dropped at all.
                static void	createSimplifiedVertexData(vector<IndexVertexPair>& usedVertices, EarthView::World::Graphic::CVertexData *inVData, EarthView::World::Graphic::CVertexData*& outVData, EarthView::World::Spatial::Math::CAxisAlignedBox &aabox);
                //// During vertices defragmentation vertices are re-indexed, so old-to-new mapping is stored in index map by this function.
                static void createIndexMap(vector<IndexVertexPair>& usedVertices, ev_uint32 allVertexCount, vector<ev_uint32>& indexMap);
                /** Internal debugging method */
                void dumpContents(const EVString &log);
            };
            /*
            template <typename T> struct HardwareBufferLockGuard
            {
            	HardwareBufferLockGuard(const T& p, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
            		: pBuf(p)
            	{
            		pData = pBuf->lock(options);
            	}
            	HardwareBufferLockGuard(const T& p, size_t offset, size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
            		: pBuf(p)
            	{
            		pData = pBuf->lock(offset, length, options);
            	}
            	~HardwareBufferLockGuard()
            	{
            		pBuf->unlock();
            	}
            	const T& pBuf;
            	void* pData;
            };

            typedef HardwareBufferLockGuard<EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> VertexBufferLockGuard;
            typedef HardwareBufferLockGuard<EarthView::World::Graphic::CHardwareIndexBufferSharedPtr> IndexBufferLockGuard;
            */
            class EV_GRAPHIC_DLL VertexBufferLockGuard : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                VertexBufferLockGuard(_in EarthView::World::Core::CNameValuePairList *pList) :
                    pBuf( *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *)pList->GetAt("p"))
                {
                    if ( pList->Count() == 2)
                    {
                        pData = pBuf->lock(  *(EarthView::World::Graphic::CHardwareBuffer::LockOptions *)pList->GetAt("options") );
                    }
                    else
                    {
                        pData = pBuf->lock(  *(size_t *)pList->GetAt("offset"),
                                             *(size_t *)pList->GetAt("length"),
                                             *(EarthView::World::Graphic::CHardwareBuffer::LockOptions *)pList->GetAt("options"));
                    }
                }
            public:
                VertexBufferLockGuard(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &p, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
                    : pBuf(p)
                {
                    pData = pBuf->lock(options);
                }
                VertexBufferLockGuard(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &p, size_t offset, size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
                    : pBuf(p)
                {
                    pData = pBuf->lock(offset, length, options);
                }
                ~VertexBufferLockGuard()
                {
                    pBuf->unlock();
                }
                void *pData;
            ev_private:
                const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &pBuf;
            };

            class EV_GRAPHIC_DLL IndexBufferLockGuard : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                IndexBufferLockGuard(_in EarthView::World::Core::CNameValuePairList *pList) :
                    pBuf( *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *)pList->GetAt("p"))
                {
                    if ( pList->Count() == 2)
                    {
                        pData = pBuf->lock(  *(EarthView::World::Graphic::CHardwareBuffer::LockOptions *)pList->GetAt("options") );
                    }
                    else
                    {
                        pData = pBuf->lock(  *(size_t *)pList->GetAt("offset"),
                                             *(size_t *)pList->GetAt("length"),
                                             *(EarthView::World::Graphic::CHardwareBuffer::LockOptions *)pList->GetAt("options"));
                    }
                }

            public:
                IndexBufferLockGuard(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &p, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
                    : pBuf(p)
                {
                    pData = pBuf->lock(options);
                }
                IndexBufferLockGuard(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &p, size_t offset, size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
                    : pBuf(p)
                {
                    pData = pBuf->lock(offset, length, options);
                }
                ~IndexBufferLockGuard()
                {
                    pBuf->unlock();
                }
                void *pData;
            ev_private:
                const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &pBuf;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

