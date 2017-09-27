#ifndef __VertexIndexData_H__
#define __VertexIndexData_H__
#include "graphic/graphic_config.h"
#include "hardwarevertexbuffer.h"
#include "hardwareindexbuffer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            //// Define a list of usage flags
            ///typedef vector<EarthView::World::Graphic::CHardwareBuffer::Usage> EarthView::World::Graphic::BufferUsageList;
            class EV_GRAPHIC_DLL BufferUsageList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CHardwareBuffer::Usage> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CHardwareBuffer::Usage const &t);
            private:
                InternalList mList;
            public:
                BufferUsageList();
            ev_private:
                BufferUsageList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                void push_back(EarthView::World::Graphic::CHardwareBuffer::Usage const &t);
                void insert(ev_uint32 pos, EarthView::World::Graphic::CHardwareBuffer::Usage const &t);
                void erase(ev_uint32 pos);
                EarthView::World::Graphic::CHardwareBuffer::Usage &operator[](ev_size_t n);
                EarthView::World::Graphic::CHardwareBuffer::Usage const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::CHardwareBuffer::Usage &at(ev_size_t n);
                EarthView::World::Graphic::CHardwareBuffer::Usage const &at(ev_size_t n) const;

                void reserve(ev_size_t count);
                void clear();
            };


            /** Summary class collecting together vertex source information. */
            class EV_GRAPHIC_DLL CVertexData : public EarthView::World::Core::CAllocatedObject
            {
            private:
                //// Protected copy constructor, to prevent misuse
                CVertexData(const CVertexData &rhs); /* do nothing, should not use */
                //// Protected operator=, to prevent misuse
                EarthView::World::Graphic::CVertexData &operator=(const EarthView::World::Graphic::CVertexData &rhs); /* do not use */
                EarthView::World::Graphic::CHardwareBufferManagerBase *mMgr;
            public:
                /** Constructor.
                @note
                	This constructor creates the CVertexDeclaration and CVertexBufferBinding
                	automatically, and arranges for their deletion afterwards.
                @param mgr Optional CHardwareBufferManager from which to create resources
                */
                CVertexData() ;

                ///CVertexData( EarthView::World::Graphic::CHardwareBufferManagerBase* mgr=0);
                CVertexData( EarthView::World::Graphic::CHardwareBufferManagerBase *mgr);
                /** Constructor.
                @note
                This constructor receives the CVertexDeclaration and CVertexBufferBinding
                from the caller, and as such does not arrange for their deletion afterwards,
                the caller remains responsible for that.
                @param dcl The EarthView::World::Graphic::CVertexDeclaration to use
                @param bind The EarthView::World::Graphic::CVertexBufferBinding to use
                */
                CVertexData( EarthView::World::Graphic::CVertexDeclaration *dcl, EarthView::World::Graphic::CVertexBufferBinding *bind);
            ev_private:
                CVertexData(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CVertexData();
                /** Declaration of the vertex to be used in this operation.
                @remarks Note that this is created for you on construction.
                */
                EarthView::World::Graphic::CVertexDeclaration *vertexDeclaration;
                /** The vertex buffer bindings to be used.
                @remarks Note that this is created for you on construction.
                */
                EarthView::World::Graphic::CVertexBufferBinding *vertexBufferBinding;
                //// Whether this class should delete the declaration and binding
                ev_bool mDeleteDclBinding;
                //// The base vertex index to start from
                ev_size_t vertexStart;
                //// The number of vertices used in this operation
                ev_size_t vertexCount;

                //// Struct used to hold hardware morph / pose vertex data information
                /*struct HardwareAnimationData
                {
                	const CVertexElement* targetVertexElement;
                	Real parametric;
                };*/
                class EV_GRAPHIC_DLL CHardwareAnimationData : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CHardwareAnimationData(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CHardwareAnimationData();
                    ///const CVertexElement* targetVertexElement;
                    ev_uint16 targetBufferIndex;
                    Real parametric;
                };
                ///typedef vector<HardwareAnimationData> EarthView::World::Graphic::CVertexData::HardwareAnimationDataList;
                class EV_GRAPHIC_DLL HardwareAnimationDataList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CVertexData::CHardwareAnimationData> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CVertexData::CHardwareAnimationData const &t);
                private:
                    InternalList mList;
                public:
                    HardwareAnimationDataList();
                ev_private:
                    HardwareAnimationDataList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    void push_back(EarthView::World::Graphic::CVertexData::CHardwareAnimationData const &t);
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CVertexData::CHardwareAnimationData const &t);

                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CVertexData::CHardwareAnimationData &operator[](ev_size_t n);
                    EarthView::World::Graphic::CVertexData::CHardwareAnimationData const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CVertexData::CHardwareAnimationData &at(ev_size_t n);
                    EarthView::World::Graphic::CVertexData::CHardwareAnimationData const &at(ev_size_t n) const;

                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };

                //// VertexElements used for hardware morph / pose animation
                EarthView::World::Graphic::CVertexData::HardwareAnimationDataList hwAnimationDataList;
                //// Number of hardware animation data items used
                ev_size_t hwAnimDataItemsUsed;

                /** Clones this vertex data, potentially including replicating any vertex buffers.
                @param copyData Whether to create new vertex buffers too or just reference the existing ones
                @param mgr If supplied, the buffer manager through which copies should be made
                @remarks The caller is expected to delete the returned pointer when ready
                */
                ///EarthView::World::Graphic::CVertexData* clone(ev_bool copyData = true, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0) const;
                _extfree EarthView::World::Graphic::CVertexData *clone(ev_bool copyData ,  EarthView::World::Graphic::CHardwareBufferManagerBase *mgr) const;
                _extfree EarthView::World::Graphic::CVertexData *clone(ev_bool copyData ) const;
                _extfree EarthView::World::Graphic::CVertexData *clone() const;
                /** Modifies the vertex data to be suitable for use for rendering shadow geometry.
                @remarks
                    Preparing vertex data to generate a shadow volume involves firstly ensuring that the
                    vertex buffer containing the positions is a standalone vertex buffer,
                    with no other components in it. This method will therefore break apart any existing
                    vertex buffers if position is sharing a vertex buffer.
                    Secondly, it will double the size of this vertex buffer so that there are 2 copies of
                    the position data for the mesh. The first half is used for the original, and the second
                    half is used for the 'extruded' version. The vertex count used to render will remain
                    the same though, so as not to add any overhead to regular rendering of the object.
                    Both copies of the position are required in one buffer because shadow volumes stretch
                    from the original mesh to the extruded version.
                @par
                    It's important to appreciate that this method can fundamentally change the structure of your
                    vertex buffers, although in reality they will be new buffers. As it happens, if other
                    counting will keep them intact. However, if you have made any assumptions about the
                    structure of the vertex data in the buffers of this object, you may have to rethink them.
                */
                void prepareForShadowVolume();
                /** Additional shadow volume vertex buffer storage.
                @remarks
                    This additional buffer is only used where we have prepared this EarthView::World::Graphic::CVertexData for
                    use in shadow volume construction, and where the current render system supports
                    vertex programs. This buffer contains the 'w' vertex position component which will
                    be used by that program to differentiate between extruded and non-extruded vertices.
                    This 'w' component cannot be included in the original position buffer because
                    DirectX does not allow 4-component positions in the fixed-function pipeline, and the original
                    position buffer must still be usable for fixed-function rendering.
                @par
                    Note that we don't store any vertex declaration or vertex buffer binding here because this
                    can be reused in the shadow algorithm.
                */
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr hardwareShadowVolWBuffer;

                /** Reorganises the data in the vertex buffers according to the
                	new vertex declaration passed in. Note that new vertex buffers
                	are created and written to, so if the buffers being referenced
                	by this vertex data object are also used by others, then the
                	original buffers will not be damaged by this operation.
                	Once this operation has completed, the new declaration
                	passed in will overwrite the current one.
                @param newDeclaration The vertex declaration which will be used
                	for the reorganised buffer state. Note that the new declaration
                	must not include any elements which do not already exist in the
                	current declaration; you can drop elements by
                	excluding them from the declaration if you wish, however.
                @param bufferUsages Vector of usage flags which indicate the usage options
                	for each new vertex buffer created. The indexes of the entries must correspond
                	to the buffer binding values referenced in the declaration.
                @param mgr Optional pointer to the manager to use to create new declarations
                	and buffers etc. If not supplied, the CHardwareBufferManager singleton will be used
                */
                /*void reorganiseBuffers(EarthView::World::Graphic::CVertexDeclaration* newDeclaration, const EarthView::World::Graphic::BufferUsageList& bufferUsage,
                	EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0);*/
                void reorganiseBuffers( EarthView::World::Graphic::CVertexDeclaration *newDeclaration, const EarthView::World::Graphic::BufferUsageList &bufferUsage,
                                        EarthView::World::Graphic::CHardwareBufferManagerBase *mgr );
                void reorganiseBuffers( EarthView::World::Graphic::CVertexDeclaration *newDeclaration, const EarthView::World::Graphic::BufferUsageList &bufferUsage);
                /** Reorganises the data in the vertex buffers according to the
                	new vertex declaration passed in. Note that new vertex buffers
                	are created and written to, so if the buffers being referenced
                	by this vertex data object are also used by others, then the
                	original buffers will not be damaged by this operation.
                	Once this operation has completed, the new declaration
                	passed in will overwrite the current one.
                    This version of the method derives the buffer usages from the existing
                @param newDeclaration The vertex declaration which will be used
                	for the reorganised buffer state. Note that the new delcaration
                	must not include any elements which do not already exist in the
                	current declaration; you can drop elements by
                	excluding them from the declaration if you wish, however.
                @param mgr Optional pointer to the manager to use to create new declarations
                	and buffers etc. If not supplied, the CHardwareBufferManager singleton will be used
                */
                ///void reorganiseBuffers(EarthView::World::Graphic::CVertexDeclaration* newDeclaration, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0);
                void reorganiseBuffers( EarthView::World::Graphic::CVertexDeclaration *newDeclaration,  EarthView::World::Graphic::CHardwareBufferManagerBase *mgr);
                void reorganiseBuffers( EarthView::World::Graphic::CVertexDeclaration *newDeclaration);
                /** Remove any gaps in the vertex buffer bindings.
                @remarks
                    This is useful if you've removed elements and buffers from this vertex
                    data and want to remove any gaps in the vertex buffer bindings. This
                    method is mainly useful when reorganising vertex data manually.
                @note
                    This will cause binding index of the elements in the vertex declaration
                    to be altered to new binding index.
                */
                void closeGapsInBindings();
                /** Remove all vertex buffers that never used by the vertex declaration.
                @remarks
                    This is useful if you've removed elements from the vertex declaration
                    and want to unreference buffers that never used any more. This method
                    is mainly useful when reorganising vertex data manually.
                @note
                    This also remove any gaps in the vertex buffer bindings.
                */
                void removeUnusedBuffers();
                /** Convert all packed colour values (VET_COLOUR_*) in buffers used to
                	another type.
                @param srcType The source colour type to assume if the ambiguous VET_COLOUR
                	is encountered.
                @param destType The destination colour type, must be VET_COLOUR_ABGR or
                	VET_COLOUR_ARGB.
                */
                void convertPackedColour(EarthView::World::Graphic::VertexElementType srcType, EarthView::World::Graphic::VertexElementType destType);

                /** Allocate elements to serve a Cholder of morph / pose target data
                	for hardware morphing / pose blending.
                @remarks
                	This method will allocate the given number of 3D texture coordinate
                	sets for use as a morph target or target pose offset (3D position).
                	These elements will be saved in hwAnimationDataList.
                	It will also assume that the source of these new elements will be new
                	buffers which are not bound at this time, so will start the sources to
                	1 higher than the current highest binding source. The caller is
                	expected to bind these new buffers when appropriate. For morph animation
                	the original position buffer will be the 'from' keyframe data, whilst
                	for pose animation it will be the original vertex data.
                */
                ///void allocateHardwareAnimationElements(ev_uint16 count);
                ev_uint16 allocateHardwareAnimationElements(ev_uint16 count, bool animateNormals);

            };
            /** Summary class collecting together index data source information. */
            class EV_GRAPHIC_DLL CIndexData : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                //// Protected copy constructor, to prevent misuse
                CIndexData(const CIndexData &rhs); /* do nothing, should not use */
                //// Protected operator=, to prevent misuse
                EarthView::World::Graphic::CIndexData &operator=(const EarthView::World::Graphic::CIndexData &rhs); /* do not use */
            public:
                CIndexData();
            ev_private:
                CIndexData(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CIndexData();
                //// pointer to the CHardwareIndexBuffer to use, must be specified if useIndexes = true
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr indexBuffer;
                //// index in the buffer to start from for this operation
                ev_size_t indexStart;
                //// The number of indexes to use from the buffer
                ev_size_t indexCount;
                /** Clones this index data, potentially including replicating the index buffer.
                @param copyData Whether to create new buffers too or just reference the existing ones
                @param mgr If supplied, the buffer manager through which copies should be made
                @remarks The caller is expected to delete the returned pointer when finished
                */
                ///EarthView::World::Graphic::CIndexData* clone(ev_bool copyData = true, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0) const;
                _extfree EarthView::World::Graphic::CIndexData *clone(ev_bool copyData,  EarthView::World::Graphic::CHardwareBufferManagerBase *mgr) const;
                _extfree EarthView::World::Graphic::CIndexData *clone(ev_bool copyData) const;
                _extfree EarthView::World::Graphic::CIndexData *clone() const;
                /** Re-order the indexes in this index data structure to be more
                	vertex cache friendly; that is to re-use the same vertices as close
                	together as possible.
                @remarks
                	Can only be used for index data which consists of triangle lists.
                	It would in fact be pointless to use it on triangle strips or fans
                	in any case.
                */
                void optimiseVertexCacheTriList();

            };
            /** Vertex cache profiler.
            @remarks
            	Utility class for evaluating the effectiveness of the use of the vertex
            	cache by a given index buffer.
            */
            class EV_GRAPHIC_DLL CVertexCacheProfiler : public EarthView::World::Core::CAllocatedObject
            {
            public:
                enum CacheType
                {
                    FIFO, LRU
                };
                /*CVertexCacheProfiler(ev_uint32 cachesize = 16, EarthView::World::Graphic::CVertexCacheProfiler::CacheType cachetype = FIFO )
                	: size ( cachesize ), type ( cachetype ), tail (0), buffersize (0), hit (0), miss (0)
                {
                	cache = EV_ALLOC_T(ev_uint32, size);
                }
                */
                CVertexCacheProfiler(ev_uint32 cachesize, EarthView::World::Graphic::CVertexCacheProfiler::CacheType cachetype );
                CVertexCacheProfiler(ev_uint32 cachesize );
                CVertexCacheProfiler();
            ev_private:
                CVertexCacheProfiler(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CVertexCacheProfiler();

                void profile(const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer);
                void reset();
                void flush();

                ev_uint32 getHits();
                ev_uint32 getMisses();
                ev_uint32 getSize();
            private:
                ev_uint32 size;
                ev_uint32 *cache;
                EarthView::World::Graphic::CVertexCacheProfiler::CacheType type;
                ev_uint32 tail, buffersize;
                ev_uint32 hit, miss;
                ev_bool inCache(ev_uint32 index);
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

