#ifndef __StaticGeometry_H__
#define __StaticGeometry_H__
#include "graphic/graphic_config.h"
#include <mathengine/quaternion.h>
#include <mathengine/vector3.h>
#include <mathengine/axisalignedbox.h>
#include "movableobject.h"
#include "mesh.h"
#include "lodstrategy.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;	
				class CAxisAlignedBox;
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
            /***** Pre-transforms and batches up meshes for efficient use as static
            	geometry in a scene.
            @remarks
            	Modern graphics cards (GPUs) prefer to receive geometry in large
            	batches. It is orders of magnitude faster to render 10 batches
            	of 10,000 triangles than it is to render 10,000 batches of 10
            	triangles, even though both result in the same number of on-screen
            	triangles.
            @par
            	Therefore it is important when you are rendering a lot of geometry to
            	batch things up into as few rendering calls as possible. This
            	class allows you to build a batched object from a series of entities
            	in order to benefit from this behaviour.
            	Batching has implications of it's own though:
            	@li Batched geometry cannot be subdivided; that means that the whole
            		group will be displayed, or none of it will. This obivously has
            		culling issues.
            	@li A single world transform must apply to the entire batch. Therefore
            		once you have batched things, you can't move them around relative to
            		each other. That's why this class is most useful when dealing with
            		static geometry (hence the name). In addition, geometry is
            		effectively duplicated, so if you add 3 entities based on the same
            		mesh in different positions, they will use 3 times the geometry
            		space than the movable version (which re-uses the same geometry).
            		So you trade memory	and flexibility of movement for pure speed when
            	@li A single material must apply for each batch. In fact this class
            		allows you to use multiple materials, but you should be aware that
            		internally this means that there is one batch per material.
            		Therefore you won't gain as much benefit from the batching if you
            		use many different materials; try to keep the number down.
            @par
            	In order to retain some sort of culling, this class will batch up
            	meshes in localised regions. The size and shape of these blocks is
            	controlled by the CSceneManager which constructs this object, since it
            	makes sense to batch things up in the most appropriate way given the
            	existing partitioning of the scene.
            @par
            	The LOD settings of both the CMesh and the Materials used in
            	constructing this static geometry will be respected. This means that
            	if you use meshes/materials which have LOD, batches in the distance
            	will have a lower polygon count or material detail to those in the
            	foreground. Since each mesh might have different LOD distances, during
            	build the furthest distance at each LOD level from all meshes
            	in that region is used. This means all the LOD levels change at the
            	same time, but at the furthest distance of any of them (so quality is
            	further increase the memory required. Only generated LOD
            	is supported for meshes.
            @par
            	There are 2 ways you can add geometry to this class; you can add
            	EarthView::World::Graphic::CEntity objects directly with predetermined positions, scales and
            	orientations, or you can add an entire EarthView::World::Graphic::CSceneNode and it's subtree,
            	including all the objects attached to it. Once you've added everthing
            	you need to, you have to call build() the fix the geometry in place.
            @note
            	This class is not a replacement for world geometry (@see
            	CSceneManager::setWorldGeometry). The single most efficient way to
            	render large amounts of static geometry is to use a EarthView::World::Graphic::CSceneManager which
            	is specialised for dealing with that particular world structure.
            	However, this class does provide you with a good 'halfway house'
            	between generalised movable geometry (EarthView::World::Graphic::CEntity) which works with all
            	highly specialised world geometry which is extremely fast but not
            	generic and typically requires custom world editors.
            @par
            	You should not construct instances of this class directly; instead, cal
            	CSceneManager::createStaticGeometry, which gives the CSceneManager the
            	option of providing you with a specialised version of this class if it
            	wishes, and also handles the memory management for you like other
            	classes.
            @note
            	Warning: this class only works with indexed triangle lists at the moment,
            	do not pass it triangle strips, fans or lines / points, or unindexed geometry.
            ****/
            /// <summary>
            /// 提前转换和批处理网格以便在场景中高效的作为静态几何体来使用
            /// </summary>
            class EV_GRAPHIC_DLL CStaticGeometry : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /***** Struct holding geometry optimised per EarthView::World::Graphic::CSubMesh / lod level, ready
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
                ****/
                class EV_GRAPHIC_DLL COptimisedSubMeshStaticGeometry : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    COptimisedSubMeshStaticGeometry(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    COptimisedSubMeshStaticGeometry();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~COptimisedSubMeshStaticGeometry();
                    EarthView::World::Graphic::CVertexData *vertexData;
                    EarthView::World::Graphic::CIndexData *indexData;
                };
                class EV_GRAPHIC_DLL OptimisedSubMeshStaticGeometryList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    OptimisedSubMeshStaticGeometryList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    OptimisedSubMeshStaticGeometryList();
                    void push_back(_in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *const &ref_t);
                    void push_front(_in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *const &ref_t);
                    void pop_back();

                    void pop_front();

                    EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& front();
                    EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& back();
                    EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry*& at(_in ev_uint32 pos);
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *const &ref_t);
                    void remove(_in ev_size_t pos);
                    void remove( _in EarthView::World::Graphic::CStaticGeometry::COptimisedSubMeshStaticGeometry *const &val);
                    ev_bool empty() const;
                    ev_size_t size() const;
                    void resize(_in ev_size_t newSize);
                    void clear();
                };

                class EV_GRAPHIC_DLL SubMeshLodStaticGeometryLink: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    SubMeshLodStaticGeometryLink(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    EarthView::World::Graphic::CVertexData *vertexData;
                    EarthView::World::Graphic::CIndexData *indexData;
                    SubMeshLodStaticGeometryLink();
                };
                ////typedef vector<EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink> EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList;
                class EV_GRAPHIC_DLL SubMeshLodStaticGeometryLinkList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink const &t);
                private:
                    InternalList mList;
                ev_private:
                    SubMeshLodStaticGeometryLinkList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    SubMeshLodStaticGeometryLinkList();
                public:
                    void push_back(EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink const &t);
                    void pop_back();

                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink &front();
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink &back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink &operator[](ev_size_t n);
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink &at(ev_size_t n);
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                class EV_GRAPHIC_DLL SubMeshStaticGeometryLookup : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    SubMeshStaticGeometryLookup(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    SubMeshStaticGeometryLookup();
                public:
                    ev_bool push(EarthView::World::Graphic::CSubMesh *const &ref_key, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList *const &ref_val);
                    ev_bool exist(EarthView::World::Graphic::CSubMesh *const &key);
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*& operator[](EarthView::World::Graphic::CSubMesh *const &key);
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList*& get(EarthView::World::Graphic::CSubMesh *const &key);
                    void erase(EarthView::World::Graphic::CSubMesh *const &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<EarthView::World::Graphic::CSubMesh *, EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find( EarthView::World::Graphic::CSubMesh *const &key);
                    const_iterator find( EarthView::World::Graphic::CSubMesh *const &key) const;
                private:
                    InternalList mList;
                };

                class EV_GRAPHIC_DLL QueuedStaticSubMesh: public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    QueuedStaticSubMesh(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    QueuedStaticSubMesh();
                    EarthView::World::Graphic::CSubMesh *submesh;
                    //// Link to LOD list of geometry, potentially optimised
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList *geometryLodList;
                    EVString materialName;
                    EarthView::World::Spatial::Math::CVector3 position;
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                    EarthView::World::Spatial::Math::CVector3 scale;
                    //// Pre-transformed world AABB
                    EarthView::World::Spatial::Math::CAxisAlignedBox worldBounds;
                };
                ////typedef vector<EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*> QueuedStaticSubMeshList;
                class EV_GRAPHIC_DLL QueuedStaticSubMeshList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    QueuedStaticSubMeshList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    QueuedStaticSubMeshList();
                public:
                    void push_back(EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *const &ref_t);
                    void pop_back();

                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& front();
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& operator[](ev_size_t n);
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh*& at(ev_size_t n);
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };

                class EV_GRAPHIC_DLL QueuedStaticGeometry : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    QueuedStaticGeometry(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    QueuedStaticGeometry();
                    EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *geometry;
                    EarthView::World::Spatial::Math::CVector3 position;
                    EarthView::World::Spatial::Math::CQuaternion orientation;
                    EarthView::World::Spatial::Math::CVector3 scale;
                };
                ////typedef vector<QueuedGeometry*> QueuedStaticGeometryList;
                class EV_GRAPHIC_DLL QueuedStaticGeometryList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *const &ref_t);
                private:
                    InternalList mList;
                ev_private:
                    QueuedStaticGeometryList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    QueuedStaticGeometryList();
                public:
                    void push_back(EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *const &ref_t);
                    void pop_back();

                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& front();
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& operator[](ev_size_t n);
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry*& at(ev_size_t n) ;
                    EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };

                //// forward declarations
                class CStaticLODBucket;
                class CStaticMaterialBucket;
                class CStaticRegion;
                /***** A EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket is a the lowest level bucket where geometry with
                	the same vertex & index format is stored. It also acts as the
                	renderable.
                ****/
                class EV_GRAPHIC_DLL CStaticGeometryBucket :	public EarthView::World::Graphic::CRenderable
                {
                protected:
                    //// Geometry which has been queued up pre-build (not for deallocation)
                    QueuedStaticGeometryList mQueuedGeometry;
                    //// Pointer to parent bucket
                    EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *mParent;
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
                   
                    /// <summary>
                    /// 拷贝顶点索引值
                    /// </summary>
                    /// <param name="src">原始值</param>
                    /// <param name="dst">目标值</param>
                    /// <param name="count"></param>
                    /// <param name="indexOffset">自增值</param>
                    /// <returns></returns>
                    void copyIndexes(const ev_uint32 *src, ev_uint32 *dst, ev_size_t count, ev_size_t indexOffset);
                    void copyIndexes(const ev_uint16 *src, ev_uint16 *dst, ev_size_t count, ev_size_t indexOffset);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CStaticGeometryBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent"></param>
                    /// <param name="formatString"></param>
                    /// <param name="vData">顶点数据</param>
                    /// <param name="iData">顶点的索引数据信息</param>
                    /// <returns></returns>
                    CStaticGeometryBucket(EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *ref_parent, const EVString &formatString,
                                          const EarthView::World::Graphic::CVertexData *vData, const EarthView::World::Graphic::CIndexData *iData);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    virtual ~CStaticGeometryBucket();
                    EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *getParent();
                    //// Get the vertex data for this geometry
                    /// <summary>
                    /// 获得这个几何体的顶点数据
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Graphic::CVertexData *getVertexData() const;
                    //// Get the index data for this geometry
                    /// <summary>
                    /// 获得这个几何体的索引数据
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Graphic::CIndexData *getIndexData() const;
                    //// @copydoc CRenderable::getMaterial
                    /// <summary>
                    /// 获得一个渲染实体使用的材质技术指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    /// <summary>
                    /// 获得技术
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    EarthView::World::Graphic::CTechnique *getTechnique() const;
                    /// <summary>
                    /// 获得渲染操作
                    /// </summary>
                    /// <param name="op">渲染操作</param>
                    /// <returns></returns>
                    void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                    /// <summary>
                    /// 获得球体坐标的世界矩阵
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                    /// <summary>
                    /// 获得光源
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回光源对象</returns>
                    const EarthView::World::Graphic::LightList &getLights() const;
                    /// <summary>
                    /// 能否获得阴影
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ev_bool getCastsShadows() const;

                    /***** Try to assign geometry to this bucket.
                    @returns false if there is no room left in this bucket
                    ****/
                    ev_bool assign(EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *qsm);
                    //// Build
                    void build(ev_bool stencilShadows);
                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /***** A EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket is a collection of smaller buckets with the same
                	CMaterial (and implicitly the same LOD). ****/
                class EV_GRAPHIC_DLL CStaticMaterialBucket : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    //// list of Geometry Buckets in this region
                    ///typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList;
                    class EV_GRAPHIC_DLL StaticGeometryBucketList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *const &ref_t);
                    private:
                        InternalList mList;
                    ev_private:
                        StaticGeometryBucketList(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        StaticGeometryBucketList();
                    public:
                        void push_back(EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *const &ref_t);
                        void pop_back();

                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& front();
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& back();
                        void insert(ev_uint32 pos, EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *const &ref_t);
                        void remove(ev_size_t pos);
                        ev_bool empty() const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& operator[](ev_size_t n);
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *const &operator[](ev_size_t n) const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket*& at(ev_size_t n);
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *const &at(ev_size_t n) const;
                        ev_size_t size() const;
                        void resize(ev_size_t newSize);
                        void reserve(ev_size_t count);
                        void clear();
                    };
                protected:
                    //// Pointer to parent EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket
                    EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *mParent;
                    //// CMaterial being used
                    EVString mMaterialName;
                    //// Pointer to material being used
                    EarthView::World::Graphic::CMaterialPtr mMaterial;
                    //// Active technique
                    EarthView::World::Graphic::CTechnique *mTechnique;
                    //// list of Geometry Buckets in this region
                    EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList mGeometryBucketList;
                    /// index to current Geometry Buckets for a given geometry format

                    typedef map<EVString, EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *> CurrentGeometryMap;
                    CurrentGeometryMap mCurrentGeometryMap;
                    //// Get a packed string identifying the geometry format
                    EVString getGeometryFormatString(EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *geom);

                ev_private:
                    CStaticMaterialBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CStaticMaterialBucket(EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *ref_parent, const EVString &materialName);
                    virtual ~CStaticMaterialBucket();
                    EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *getParent();
                    //// Get the material name
                    const EVString &getMaterialName() const;
                    //// Assign geometry to this bucket
                    void assign(EarthView::World::Graphic::CStaticGeometry::QueuedStaticGeometry *qsm);
                    //// Build
                    void build(ev_bool stencilShadows);
                    //// Add children to the render queue
                    void addRenderables(EarthView::World::Graphic::CRenderQueue *queue, ev_uint8 group,
                                        Real lodValue);
                    //// Get the material for this bucket
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    //// Iterator over geometry
                    ////typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList> StaticGeometryIterator;
                    class EV_GRAPHIC_DLL StaticGeometryBucketIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        StaticGeometryBucketIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                    ev_private:
                        typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList> InternalIterator;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        typedef StaticGeometryBucketList::iterator iterator;
                        typedef StaticGeometryBucketList::const_iterator const_iterator;
                        typedef StaticGeometryBucketList::iterator IteratorType;
                        StaticGeometryBucketIterator(IteratorType start, IteratorType last);
                        /// <summary>
                        /// 赋值符号"="的重载
                        /// </summary>
                        /// <param name="other">StaticGeometryIterator类的引用</param>
                        /// <returns>返回赋值后的引用</returns>
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator &operator=(_in const EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator &other);
                        ValueType peekNext () const;
                        PointerType peekNextPtr ()  const;
                        ValueType getNext ();

                        const IteratorType &begin();
                        const IteratorType &end();
                        const IteratorType &current();
                    public:
                        StaticGeometryBucketIterator(EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketList &vec);
                        StaticGeometryBucketIterator(const StaticGeometryBucketIterator &rhs);
                        ~StaticGeometryBucketIterator();
                        ev_bool hasMoreElements () const;
                        void moveNext ();
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *getCurrent();
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *next();
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *getBegin();
                        EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket *getEnd();

                    private:
                        InternalIterator *mIterator;
                    };

                    //// Get an iterator over the contained geometry
                    EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket::StaticGeometryBucketIterator getGeometryIterator();
                    //// Get the current EarthView::World::Graphic::CTechnique
                    EarthView::World::Graphic::CTechnique *getCurrentTechnique() const;

                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);

                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /***** A EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket is a collection of smaller buckets with the same LOD.
                @remarks
                	LOD refers to CMesh LOD here. CMaterial LOD can change separately
                	at the next bucket down from this.
                ****/
                class EV_GRAPHIC_DLL CStaticLODBucket : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    //// Lookup of CMaterial Buckets in this region
                    ///typedef map<EVString, EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap;
                    class EV_GRAPHIC_DLL StaticMaterialBucketMap : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        StaticMaterialBucketMap(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        StaticMaterialBucketMap();
                        ev_bool push(const EVString &key, EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *const &ref_val);
                        ev_bool exist(const EVString &key);
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*& operator[](const EVString &key);
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket*& get(const EVString &key);
                        void erase(const EVString &key);
                        ev_size_t size() const;
                        void clear();
                        ev_bool empty() const;
                    ev_private:
                        typedef map<EVString, EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<InternalList::iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        _Pairib insert(const value_type &val);
                        iterator find(const EVString &key);
                        const_iterator find(const EVString &key) const;
                    private:
                        InternalList mList;
                    };
                protected:
                    /***** Nested class to allow shadows. ****/
                    class EV_GRAPHIC_DLL CLODShadowRenderable : public CShadowRenderable
                    {
                    protected:
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *mParent;
                        /// Shared link to position buffer
                        CHardwareVertexBufferSharedPtr mPositionBuffer;
                        /// Shared link to w-coord buffer (optional)
                        CHardwareVertexBufferSharedPtr mWBuffer;
                        /****ev_internal:
                        	CLODShadowRenderable( _in EarthView::World::Core::CNameValuePairList* pList );****/
                    public:
                        CLODShadowRenderable(EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *parent,
                                             EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, const EarthView::World::Graphic::CVertexData *vertexData,
                                             ev_bool createSeparateLightCap, ev_bool isLightCap = false);
                        ~CLODShadowRenderable();
                        //// Overridden from CShadowRenderable
                        void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                        CHardwareVertexBufferSharedPtr getPositionBuffer();
                        CHardwareVertexBufferSharedPtr getWBuffer();
                        ////zxt updatefor v1.8
                        //// Overridden from ShadowRenderable
                        virtual void rebindIndexBuffer(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer);
                    };
                    //// Pointer to parent region
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *mParent;
                    //// LOD level (0 == full LOD)
                    ev_uint16 mLod;
                    //// lod value at which this LOD starts to apply (squared)
                    Real mLodValue;
                    //// Lookup of CMaterial Buckets in this region
                    EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap mMaterialBucketMap;
                    //// Geometry queued for a single LOD (deallocated here)
                    QueuedStaticGeometryList mQueuedGeometryList;
                    //// Edge list, used if stencil shadow casting is enabled
                    EarthView::World::Graphic::CEdgeData *mEdgeList;
                    //// Is a vertex program in use somewhere in this group?
                    ev_bool mVertexProgramInUse;
                    //// List of shadow renderables
                    EarthView::World::Graphic::CShadowCaster::ShadowRenderableList mShadowRenderables;

                ev_private:
                    CStaticLODBucket(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CStaticLODBucket(EarthView::World::Graphic::CStaticGeometry::CStaticRegion *ref_parent, ev_uint16 lod, Real lodValue);
                    virtual ~CStaticLODBucket();
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *getParent();
                    //// Get the lod index
                    ev_uint16 getLod() const;
                    //// Get the lod value
                    Real getLodValue() const;
                    void assign(EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *qsm, ev_uint16 atLod);
                    //// Build
                    void build(ev_bool stencilShadows);
                    //// Add children to the render queue
                    void addRenderables(EarthView::World::Graphic::CRenderQueue *queue, ev_uint8 group,
                                        Real lodValue);
                    //// Iterator over the materials in this LOD
                    ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap> StaticMaterialIterator;
                    ///struct EV_GRAPHIC_DLL MaterialBucketPair
                    ///{
                    ///	EVString first;
                    ///	EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket* second;
                    ///};
                    class EV_GRAPHIC_DLL StaticMaterialBucketPair: public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        StaticMaterialBucketPair(_in EarthView::World::Core::CNameValuePairList *pList);

                    public:
                        StaticMaterialBucketPair();
                        EVString first;
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *second;
                    };
                    class EV_GRAPHIC_DLL StaticMaterialBucketIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap> InternalIterator;
                        typedef InternalIterator::const_iterator const_iterator;
                        typedef InternalIterator::iterator iterator;
                        typedef InternalIterator::const_iterator IteratorType;
                        typedef InternalIterator::PairType PairType;
                        typedef InternalIterator::KeyType KeyType;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        StaticMaterialBucketIterator(_in iterator first, _in iterator last);

                        /// <summary>
                        /// 赋值符号"="的重载
                        /// </summary>
                        /// <param name="other">StaticMaterialIterator类的引用</param>
                        /// <returns>返回赋值后的引用</returns>
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator &operator=(_in const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator &other);
                        ~StaticMaterialBucketIterator();
                        KeyType peekNextKey() const;
                        ValueType peekNextValue () const;
                        const PointerType peekNextValuePtr ();
                        ValueType getNext();

                        const IteratorType &begin();
                        IteratorType &current();
                        const IteratorType &end();
                    ev_private:
                        StaticMaterialBucketIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        StaticMaterialBucketIterator(_in EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketMap &lst);
                        StaticMaterialBucketIterator( _in const StaticMaterialBucketIterator &other);
                        ev_bool hasMoreElements () const;
                        void moveNext ();
                        EVString nextKey() const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *nextValue() const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket **nextValuePtr();
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *next();
                        const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair &getBegin();
                        const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair &getEnd();
                        const EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair &getCurrent();
                    private:
                        InternalIterator *mIterator;
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair mBeginPair;
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair mCurrentPair;
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketPair mEndPair;
                        EarthView::World::Graphic::CStaticGeometry::CStaticMaterialBucket *mptr;
                        ValueType mvt;
                    };
                    //// Get an iterator over the materials in this LOD
                    EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket::StaticMaterialBucketIterator getMaterialIterator();

                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                    EarthView::World::Graphic::CEdgeData *getEdgeList() const;
                    EarthView::World::Graphic::CShadowCaster::ShadowRenderableList &getShadowRenderableList();
                    ev_bool isVertexProgramInUse() const;
                   
                    void updateShadowRenderables(
                        EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Spatial::Math::CVector4 &lightPos,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                        ev_bool extrudeVertices, Real extrusionDistance, ev_uint32 flags);
                    void updateShadowRenderables(
                        EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Spatial::Math::CVector4 &lightPos,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                        ev_bool extrudeVertices, Real extrusionDistance);

                ev_private :
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;
                };
                /***** The details of a topological region which is the highest level of
                	partitioning for this class.
                @remarks
                	The size & shape of regions entirely depends on the EarthView::World::Graphic::CSceneManager
                	specific implementation. It is a EarthView::World::Graphic::CMovableObject since it will be
                	attached to a node based on the local centre - in practice it
                	won't actually move (although in theory it could).
                ****/
                class EV_GRAPHIC_DLL CStaticRegion : public EarthView::World::Graphic::CMovableObject
                {
                    friend class CStaticMaterialBucket;
                    friend class CStaticGeometryBucket;
                public:
                    //// list of LOD Buckets in this region
                    ///typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*> EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList;
                    class EV_GRAPHIC_DLL StaticLODBucketList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        StaticLODBucketList(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        StaticLODBucketList();
                    ev_private:
                        typedef vector<EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *const &ref_t);
                    private:
                        InternalList mList;
                    public:
                        void push_back(EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *const &ref_t);
                        void pop_back();

                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& front();
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& back();
                        void insert(ev_uint32 pos, EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *const &ref_t);
                        void remove(ev_size_t pos);
                        ev_bool empty() const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& operator[](ev_size_t n);
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *const &operator[](ev_size_t n) const;
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket*& at(ev_size_t n);
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *const &at(ev_size_t n) const;
                        ev_size_t size() const;
                        void resize(ev_size_t newSize);
                        void reserve(ev_size_t count);
                        void clear();
                    };

                protected:
                    //// Parent static geometry
                    EarthView::World::Graphic::CStaticGeometry *mParent;
                    //// Scene manager link
                    EarthView::World::Graphic::CSceneManager *mSceneMgr;
                    //// Scene node
                    EarthView::World::Graphic::CSceneNode *mNode;
                    //// Local list of queued meshes (not used for deallocation)
                    QueuedStaticSubMeshList mQueuedSubMeshes;
                    //// Unique identifier for the region
                    ev_uint32 mRegionID;
                    //// Center of the region
                    EarthView::World::Spatial::Math::CVector3 mCentre;
                    //// Lod values as built up - use the max at each level
                    /****CMesh::****/
                    LodValueList mLodValues;
                    //// Local AABB relative to region centre
                    EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                    //// Local bounding radius
                    Real mBoundingRadius;
                    //// The current lod level, as determined from the last camera
                    ev_uint16 mCurrentLod;
                    //// Current lod value, passed on to do material lod later
                    Real mLodValue;
                    //// List of LOD buckets
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList mLodBucketList;
                    //// List of lights for this region
                    mutable EarthView::World::Graphic::LightList mLightList;
                    //// The last frame that this light list was updated in
                    mutable ev_uint32 mLightListUpdated;
                    //// Lod strategy reference
                    const CLodStrategy *mLodStrategy;
                    //// Current camera
                    EarthView::World::Graphic::CCamera *mCamera;
                    //// Cached squared view depth value to avoid recalculation by EarthView::World::Graphic::CStaticGeometry::CStaticGeometryBucket
                    Real mSquaredViewDepth;
                ev_private:
                    CStaticRegion(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CStaticRegion(EarthView::World::Graphic::CStaticGeometry *ref_parent, const EVString &name, EarthView::World::Graphic::CSceneManager *mgr,
                                  ev_uint32 regionID, const EarthView::World::Spatial::Math::CVector3 &centre);
                    virtual ~CStaticRegion();
                    /// more fields can be added in subclasses
                    EarthView::World::Graphic::CStaticGeometry *getParent() const;
                    //// Assign a queued mesh to this region, read for final build
                    /// <summary>
                    /// 给这部分赋一个队列网格
                    /// </summary>
                    /// <param name="qmesh"></param>
                    /// <returns></returns>
                    void assign(EarthView::World::Graphic::CStaticGeometry::QueuedStaticSubMesh *qmesh);
                    //// Build this region
                    void build(ev_bool stencilShadows);
                    //// Get the region ID of this region
                    /// <summary>
                    /// 得到这部分的ID号
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ev_uint32 getID() const;
                    //// Get the centre point of the region
                    /// <summary>
                    /// 得到这部分的中心点x,y,z
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Spatial::Math::CVector3 &getCentre() const;
                    EVString getMovableType() const;
                    void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
                    const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                    Real getBoundingRadius() const;
                    void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                    //// @copydoc CMovableObject::visitRenderables
                    ///void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor,
                    ///	ev_bool debugRenderables = false);
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                          ev_bool debugRenderables);
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                    ev_bool isVisible() const;
                    ev_uint32 getTypeFlags() const;
                    ///typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList> StaticLODIterator;
                    class EV_GRAPHIC_DLL StaticLODBucketIterator : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        StaticLODBucketIterator(_in EarthView::World::Core::CNameValuePairList *pList);


                    ev_private:
                        typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList> InternalIterator;
                        typedef InternalIterator::ValueType ValueType;
                        typedef InternalIterator::PointerType PointerType;
                        typedef StaticLODBucketList::iterator IteratorType;
                        StaticLODBucketIterator(IteratorType start, IteratorType last);
                        /// <summary>
                        /// 赋值符号"="的重载
                        /// </summary>
                        /// <param name="other">StaticLODIterator类的引用</param>
                        /// <returns>返回赋值后的引用</returns>
                        EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator &operator=(_in const EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator &other);

                        ~StaticLODBucketIterator();
                        ValueType peekNext () const;
                        PointerType peekNextPtr ()  const;
                        ValueType getNext ();

                        const IteratorType &begin();
                        const IteratorType &end();
                        const IteratorType &current();
                    public:
                        StaticLODBucketIterator(const StaticLODBucketIterator &rhs);
                        StaticLODBucketIterator(EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketList &lst);
                        ev_bool hasMoreElements ( ) const;
                        void moveNext ();
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *getCurrent();
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *next();
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *getBegin();
                        EarthView::World::Graphic::CStaticGeometry::CStaticLODBucket *getEnd();
                    private:
                        InternalIterator *mIterator;
                    };

                    //// Get an iterator over the LODs in this region
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion::StaticLODBucketIterator getLODIterator();
                    //// @copydoc CShadowCaster::getShadowVolumeRenderableIterator
                    EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                        EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                        ev_bool extrudeVertices, Real extrusionDistance, ev_uint32 flags/**** = 0 ****/);
                    EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(
                        EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer,
                        ev_bool extrudeVertices, Real extrusionDistance);
                    //// Overridden from EarthView::World::Graphic::CMovableObject
                    EarthView::World::Graphic::CEdgeData *getEdgeList();
                    /***** Overridden member from CShadowCaster. ****/
                    ev_bool hasEdgeList();

                ev_private:
                    //// Dump contents for diagnostics
                    void dump(std::ofstream &of) const;

                };

                /***** Indexed region map based on packed x/y/z region index, 10 bits for
                	each axis.
                @remarks
                	Regions are indexed 0-1023 in all axes, where for example region
                	0 in the x axis begins at mOrigin.x + (mRegionDimensions.x * -512),
                	and region 1023 ends at mOrigin + (mRegionDimensions.x * 512).
                ****/
               
                class EV_GRAPHIC_DLL StaticRegionMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    StaticRegionMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    StaticRegionMap();
                public:
                    ev_bool push(const ev_uint32 &key, EarthView::World::Graphic::CStaticGeometry::CStaticRegion *const &ref_val);
                    ev_bool exist(const ev_uint32 &key);
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion*& operator[](const ev_uint32 &key);
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion*& get(const ev_uint32 &key);
                    void erase(const ev_uint32 &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_uint32, EarthView::World::Graphic::CStaticGeometry::CStaticRegion *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const ev_uint32 &key);
                    const_iterator find(const ev_uint32 &key) const;
                private:
                    InternalList mList;
                };

            protected:
                EarthView::World::Graphic::CSceneManager *mOwner;
                EVString mName;
                ev_bool mBuilt;
                Real mUpperDistance;
                Real mSquaredUpperDistance;
                ev_bool mCastShadows;
                EarthView::World::Spatial::Math::CVector3 mRegionDimensions;
                EarthView::World::Spatial::Math::CVector3 mHalfRegionDimensions;
                EarthView::World::Spatial::Math::CVector3 mOrigin;
                ev_bool mVisible;
                //// The render queue to use when rendering this object
                ev_uint8 mRenderQueueID;
                //// Flags whether the EarthView::World::Graphic::CRenderQueue's default should be used.
                ev_bool mRenderQueueIDSet;
                //// Stores the visibility flags for the regions
                ev_uint32 mVisibilityFlags;
                QueuedStaticSubMeshList mQueuedSubMeshes;
                //// List of geometry which has been optimised for EarthView::World::Graphic::CSubMesh use
                //// This is the primary storage used for cleaning up later
                OptimisedSubMeshStaticGeometryList mOptimisedSubMeshGeometryList;
                /***** Cached links from SubMeshes to (potentially optimised) geometry
                	This is not used for deletion since the lookup may reference
                	original vertex data
                ****/
                SubMeshStaticGeometryLookup mSubMeshGeometryLookup;

                //// Map of regions
                EarthView::World::Graphic::CStaticGeometry::StaticRegionMap mRegionMap;

                /***** Look up or calculate the geometry data to use for this EarthView::World::Graphic::CSubMesh ****/
                EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLinkList *determineGeometry(EarthView::World::Graphic::CSubMesh *sm);
                /***** Split some shared geometry into dedicated geometry. ****/
                void splitGeometry(EarthView::World::Graphic::CVertexData *vd, EarthView::World::Graphic::CIndexData *id,
                                   EarthView::World::Graphic::CStaticGeometry::SubMeshLodStaticGeometryLink *targetGeomLink);
                typedef map<ev_size_t, ev_size_t> IndexRemap;
                /***** Method for figuring out which vertices are used by an index buffer
                	and calculating a remap lookup for a vertex buffer just containing
                	those vertices.
                ****/
                template <typename T>
                void buildIndexRemap(T *pBuffer, ev_size_t numIndexes, IndexRemap &remap);
                /***** Method for altering indexes based on a remap. ****/
                template <typename T>
                void remapIndexes(T *src, T *dst, const IndexRemap &remap,
                                  ev_size_t numIndexes);
            ev_internal:
                /***** Virtual method for getting a region most suitable for the
                	passed in bounds. Can be overridden by subclasses.
                ****/
                virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion *getRegion(const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds, ev_bool autoCreate);
                /***** Get the region within which a point lies ****/
                virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion *getRegion(const EarthView::World::Spatial::Math::CVector3 &point, ev_bool autoCreate);
                virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion *getRegion(ev_uint16 x, ev_uint16 y, ev_uint16 z, ev_bool autoCreate);
                virtual EarthView::World::Graphic::CStaticGeometry::CStaticRegion *getRegion(ev_uint32 index);
                /***** Get the region indexes for a point.
                ****/
                virtual void getRegionIndexes(const EarthView::World::Spatial::Math::CVector3 &point,
                                              ev_uint16 &x, ev_uint16 &y, ev_uint16 &z);
                /***** Pack 3 indexes into a single index value
                ****/
                virtual ev_uint32 packIndex(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /***** Get the volume intersection for an indexed region with some bounds.
                ****/
                virtual Real getVolumeIntersection(const EarthView::World::Spatial::Math::CAxisAlignedBox &box,
                                                   ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /***** Get the bounds of an indexed region.
                ****/
                virtual EarthView::World::Spatial::Math::CAxisAlignedBox getRegionBounds(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /***** Get the centre of an indexed region.
                ****/
                virtual EarthView::World::Spatial::Math::CVector3 getRegionCentre(ev_uint16 x, ev_uint16 y, ev_uint16 z);
                /***** Calculate world bounds from a set of vertex data. ****/
                virtual EarthView::World::Spatial::Math::CAxisAlignedBox calculateBounds(EarthView::World::Graphic::CVertexData *vertexData,
                                                        const EarthView::World::Spatial::Math::CVector3 &position, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                                        const EarthView::World::Spatial::Math::CVector3 &scale);
            ev_private:
                CStaticGeometry(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor; do not use directly (@see CSceneManager::createStaticGeometry)
                CStaticGeometry(EarthView::World::Graphic::CSceneManager *ref_owner, const EVString &name);
                //// Destructor
                virtual ~CStaticGeometry();
                //// Get the name of this object
                const EVString &getName() const;
                /***** Adds an EarthView::World::Graphic::CEntity to the static geometry.
                @remarks
                	This method takes an existing EarthView::World::Graphic::CEntity and adds its details to the
                	list of	elements to include when building. Note that the EarthView::World::Graphic::CEntity
                	itself is not copied or referenced in this method; an EarthView::World::Graphic::CEntity is
                	passed simply so that you can change the materials of attached
                	CSubEntity objects if you want. You can add the same EarthView::World::Graphic::CEntity
                	instance multiple times with different material settings
                	completely safely, and destroy the EarthView::World::Graphic::CEntity before destroying
                	this EarthView::World::Graphic::CStaticGeometry if you like. The EarthView::World::Graphic::CEntity passed in is simply
                	used as a definition.
                @note Must be called before 'build'.
                @param ent The EarthView::World::Graphic::CEntity to use as a definition (the CMesh and Materials
                	referenced will be recorded for the build call).
                @param position The world position at which to add this EarthView::World::Graphic::CEntity
                @param orientation The world orientation at which to add this EarthView::World::Graphic::CEntity
                @param scale The scale at which to add this entity
                ****/
                
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position,
                                       const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                       const EarthView::World::Spatial::Math::CVector3 &scale);
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position,
                                       const EarthView::World::Spatial::Math::CQuaternion &orientation);
                virtual void addEntity(EarthView::World::Graphic::CEntity *ent, const EarthView::World::Spatial::Math::CVector3 &position);
                /***** Adds all the EarthView::World::Graphic::CEntity objects attached to a EarthView::World::Graphic::CSceneNode and all it's
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
                @param node Pointer to the node to use to provide a set of EarthView::World::Graphic::CEntity
                	templates
                ****/

                virtual void addSceneNode(const EarthView::World::Graphic::CSceneNode *node);
                /***** Build the geometry.
                @remarks
                	Based on all the entities which have been added, and the batching
                	options which have been set, this method constructs	the batched
                	geometry structures required. The batches are added to the scene
                	and will be rendered unless you specifically hide them.
                @note
                	Once you have called this method, you can no longer add any more
                	entities.
                ****/
                virtual void build();
                /***** Destroys all the built geometry state (reverse of build).
                @remarks
                	You can call build() again after this and it will pick up all the
                	same entities / nodes you queued last time.
                ****/
                virtual void destroy();
                /***** Clears any of the entities / nodes added to this geometry and
                	destroys anything which has already been built.
                ****/
                virtual void reset();
                /***** Sets the distance at which batches are no longer rendered.
                @remarks
                	This lets you turn off batches at a given distance. This can be
                	useful for things like detail meshes (grass, foliage etc) and could
                	be combined with a shader which fades the geometry out beforehand
                	to lessen the effect.
                @param dist Distance beyond which the batches will not be rendered
                	(the default is 0, which means batches are always rendered).
                ****/
                virtual void setRenderingDistance(Real dist);
                /***** Gets the distance at which batches are no longer rendered. ****/
                virtual Real getRenderingDistance() const;
                /***** Gets the squared distance at which batches are no longer rendered. ****/
                virtual Real getSquaredRenderingDistance() const;
                /***** Hides or shows all the batches. ****/
                virtual void setVisible(ev_bool visible);
                /***** Are the batches visible? ****/
                virtual ev_bool isVisible() const;
                /***** Sets whether this geometry should cast shadows.
                @remarks
                	No matter what the settings on the original entities,
                	the CStaticGeometry class defaults to not casting shadows.
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
                ****/
                virtual void setCastShadows(ev_bool castShadows);
                //// Will the geometry from this object cast shadows?
                virtual ev_bool getCastShadows();
                /***** Sets the size of a single region of geometry.
                @remarks
                	This method allows you to configure the physical world size of
                	each region, so you can balance culling against batch size. Entities
                	will be fitted within the batch they most closely fit, and the
                	eventual bounds of each batch may well be slightly larger than this
                	if they overlap a little. The default is EarthView::World::Spatial::Math::CVector3(1000, 1000, 1000).
                @note Must be called before 'build'.
                @param size EarthView::World::Spatial::Math::CVector3 expressing the 3D size of each region.
                ****/
                virtual void setRegionDimensions(const EarthView::World::Spatial::Math::CVector3 &size);
                /***** Gets the size of a single batch of geometry. ****/
                virtual const EarthView::World::Spatial::Math::CVector3 &getRegionDimensions() const;
                /***** Sets the origin of the geometry.
                @remarks
                	This method allows you to configure the world centre of the geometry,
                	thus the place which all regions surround. You probably don't need
                	to mess with this unless you have a seriously large world, since the
                	default set up can handle an area 1024 * mRegionDimensions, and
                	the sparseness of population is no issue when it comes to rendering.
                	The default is EarthView::World::Spatial::Math::CVector3(0,0,0).
                @note Must be called before 'build'.
                @param size EarthView::World::Spatial::Math::CVector3 expressing the 3D origin of the geometry.
                ****/
                /// <summary>
                /// 设置几何体的原点
                /// </summary>
                /// <param name="origin">原点坐标</param>
                /// <returns></returns>
                virtual void setOrigin(const EarthView::World::Spatial::Math::CVector3 &origin);
                /***** Gets the origin of this geometry. ****/
                /// <summary>
                /// 得到几何体的原点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getOrigin() const;
                //// Sets the visibility flags of all the regions at once
                /// <summary>
                /// 设置所有区域的可见性标记
                /// </summary>
                /// <param name="flags">标识</param>
                /// <returns></returns>
                void setVisibilityFlags(ev_uint32 flags);
                //// Returns the visibility flags of the regions
                /// <summary>
                /// 返回区域的可见性标识
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回区域的可见性标识</returns>
                ev_uint32 getVisibilityFlags() const;
                /***** Sets the render queue group this object will be rendered through.
                @remarks
                    Render queues are grouped to allow you to more tightly control the ordering
                    of rendered objects. If you do not call this method, all  objects default
                    to the default queue (CRenderQueue::getDefaultQueueGroup), which is fine for
                	most objects. You may want to alter this if you want to perform more complex
                	rendering.
                @par
                    See EarthView::World::Graphic::CRenderQueue for more details.
                @param queueID Enumerated value of the queue group to use.
                ****/
                virtual void setRenderQueueGroup(ev_uint8 queueID);
                /***** Gets the queue group for this entity, see setRenderQueueGroup for full details. ****/
                virtual ev_uint8 getRenderQueueGroup() const;
                //// @copydoc CMovableObject::visitRenderables
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                      ev_bool debugRenderables /****= false****/);
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);



                ///struct EV_GRAPHIC_DLL RegionPair
                ///{
                ///	ev_uint32 first;
                ///	EarthView::World::Graphic::CStaticGeometry::CStaticRegion* second;
                ///};
                class EV_GRAPHIC_DLL StaticRegionPair: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    StaticRegionPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    StaticRegionPair();
                    ev_uint32 first;
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *second;
                };
                //// Iterator for iterating over contained regions
                ///typedef EarthView::World::Core::CMapIterator<RegionMap> RegionIterator;
                class EV_GRAPHIC_DLL StaticRegionIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CStaticGeometry::StaticRegionMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    StaticRegionIterator(_in iterator first, _in iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">RegionIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator &operator=(_in const EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator &other);
                    ~StaticRegionIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue () const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    StaticRegionIterator(_in EarthView::World::Core::CNameValuePairList *pList);

                public:
                    StaticRegionIterator(_in EarthView::World::Graphic::CStaticGeometry::StaticRegionMap &lst);
                    StaticRegionIterator( _in const StaticRegionIterator &other);
                    ev_bool hasMoreElements () const;
                    void moveNext ();
                    EVString nextKey() const;
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *nextValue() const;
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion **nextValuePtr();
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *next();
                    const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair &getBegin();
                    const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair &getEnd();
                    const EarthView::World::Graphic::CStaticGeometry::StaticRegionPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CStaticGeometry::StaticRegionPair mBeginPair;
                    EarthView::World::Graphic::CStaticGeometry::StaticRegionPair mCurrentPair;
                    EarthView::World::Graphic::CStaticGeometry::StaticRegionPair mEndPair;
                    EarthView::World::Graphic::CStaticGeometry::CStaticRegion *mptr;
                    ValueType mvt;
                };
                //// Get an iterator over the regions in this geometry
                EarthView::World::Graphic::CStaticGeometry::StaticRegionIterator getRegionIterator();
            ev_private:
                /***** Dump the contents of this EarthView::World::Graphic::CStaticGeometry to a file for diagnostic
                 	purposes.
                ****/
                virtual void dump(const EVString &filename) const;
            };
        }
    }
}

#endif

