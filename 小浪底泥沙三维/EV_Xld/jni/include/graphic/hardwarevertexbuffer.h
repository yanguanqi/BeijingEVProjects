#ifndef __HardwareVertexBuffer__
#define __HardwareVertexBuffer__
#include "graphic/graphic_config.h"
#include "hardwarebuffer.h"
#include <core/sharedptr.h>
#include "colourvalue.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CHardwareBufferManagerBase;
    
            /***** Specialisation of EarthView::World::Graphic::CHardwareBuffer for a vertex buffer. ****/
            class EV_GRAPHIC_DLL CHardwareVertexBuffer : public EarthView::World::Graphic::CHardwareBuffer
            {
            protected:
                EarthView::World::Graphic::CHardwareBufferManagerBase *mMgr;
                ev_size_t mNumVertices;
                ev_size_t mVertexSize;

                bool mIsInstanceData;
                size_t mInstanceDataStepRate;
                virtual bool checkIfVertexInstanceDataIsSupported();
            public:
                //// Should be called by CHardwareBufferManager
                CHardwareVertexBuffer( EarthView::World::Graphic::CHardwareBufferManagerBase *ref_mgr, ev_size_t vertexSize, ev_size_t numVertices,
                                       EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useSystemMemory, ev_bool useShadowBuffer);
            ev_private:
                CHardwareVertexBuffer(_in EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                //// Internal implementation of lock()
                /// <summary>
                /// 锁Impl函数
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                virtual void *lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);
                //// Internal implementation of unlock()
                /// <summary>
                /// 解锁Impl函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void unlockImpl();
            public:
                /// <summary>
                /// 读数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pDest">内存大小</param>
                /// <returns></returns>
                virtual void readData(ev_size_t offset, ev_size_t length, _inout void *pDest);
                /// <summary>
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <param name="discardWholeBuffer">是否放弃整个缓存</param>
                /// <returns></returns>
                virtual void writeData(ev_size_t offset, ev_size_t length, const void *pSource,
                                       ev_bool discardWholeBuffer);
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <returns></returns>
                virtual void writeData(ev_size_t offset, ev_size_t length, const void *pSource);
            public:
                ~CHardwareVertexBuffer();
                //// Return the manager of this buffer, if any
                EarthView::World::Graphic::CHardwareBufferManagerBase *getManager() const;
                //// Gets the size in bytes of a single vertex in this buffer
                ev_size_t getVertexSize() const;
                //// Get the number of vertices in this buffer
                ev_size_t getNumVertices() const;

                /// NB subclasses should override lock, unlock, readData, writeData

                //// Get if this vertex buffer is an "instance data" buffer (per instance)
                bool getIsInstanceData() const
                {
                    return mIsInstanceData;
                }
                //// Set if this vertex buffer is an "instance data" buffer (per instance)
                void setIsInstanceData(const bool val);
                size_t getInstanceDataStepRate() const;
                void setInstanceDataStepRate(const size_t val);




            };
            /***** Shared pointer implementation used to share index buffers. ****/
            class EV_GRAPHIC_DLL CHardwareVertexBufferSharedPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHardwareVertexBuffer>
            {
            public:
                CHardwareVertexBufferSharedPtr();
                explicit CHardwareVertexBufferSharedPtr(CHardwareVertexBuffer *ref_buf);
                explicit CHardwareVertexBufferSharedPtr(CHardwareVertexBuffer *ref_buf, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
                EarthView::World::Graphic::CHardwareVertexBuffer *get() const;
            ev_private:
                CHardwareVertexBufferSharedPtr(_in EarthView::World::Core::CNameValuePairList *pList);

            };
            //// Vertex element semantics, used to identify the meaning of vertex buffer contents
            enum VertexElementSemantic
            {
                //// Position, 3 reals per vertex
                VES_POSITION = 1,
                //// Blending weights
                VES_BLEND_WEIGHTS = 2,
                //// Blending indices
                VES_BLEND_INDICES = 3,
                //// Normal, 3 reals per vertex
                VES_NORMAL = 4,
                //// Diffuse colours
                VES_DIFFUSE = 5,
                //// Specular colours
                VES_SPECULAR = 6,
                //// CTexture coordinates
                VES_TEXTURE_COORDINATES = 7,
                //// Binormal (Y axis if normal is Z)
                VES_BINORMAL = 8,
                //// Tangent (X axis if normal is Z)
                VES_TANGENT = 9,
                //// The  number of EarthView::World::Graphic::VertexElementSemantic elements (note - the first value VES_POSITION is 1)
                VES_COUNT = 9
            };
            //// Vertex element type, used to identify the base types of the vertex contents
            enum VertexElementType
            {
                VET_FLOAT1 = 0,
                VET_FLOAT2 = 1,
                VET_FLOAT3 = 2,
                VET_FLOAT4 = 3,
                //// alias to more specific colour type - use the current rendersystem's colour packing
                VET_COLOUR = 4,
                VET_SHORT1 = 5,
                VET_SHORT2 = 6,
                VET_SHORT3 = 7,
                VET_SHORT4 = 8,
                VET_UBYTE4 = 9,
                //// D3D style compact colour
                VET_COLOUR_ARGB = 10,
                //// GL style compact colour
                VET_COLOUR_ABGR = 11
            };
            /***** This class declares the usage of a single vertex buffer as a component
            of a complete EarthView::World::Graphic::CVertexDeclaration.
            @remarks
            Several vertex buffers can be used to supply the input geometry for a
            rendering operation, and in each case a vertex buffer can be used in
            different ways for different operations; the buffer itself does not
            define the semantics (position, normal etc), the EarthView::World::Graphic::CVertexElement
            class does.
            ****/
            class EV_GRAPHIC_DLL CVertexElement : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                ev_uint16 mSource;
                //// The offset in the buffer that this element starts at
                ev_size_t mOffset;
                //// The type of element
                EarthView::World::Graphic::VertexElementType mType;
                //// The meaning of the element
                EarthView::World::Graphic::VertexElementSemantic mSemantic;
                //// Index of the item, only applicable for some elements like texture coords
                ev_uint16 mIndex;
            public:
                //// Constructor, should not be called directly, only needed because of list
                CVertexElement();
                //// Constructor, should not be called directly, call CVertexDeclaration::addElement
                /****CVertexElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);
                ****/
                CVertexElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                               EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index);
                CVertexElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                               EarthView::World::Graphic::VertexElementSemantic semantic);
            ev_private:
                CVertexElement(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                //// Gets the vertex buffer index from where this element draws it's values
                ev_uint16 getSource() const
                {
                    return mSource;
                }
                //// Gets the offset into the buffer where this element starts
                ev_size_t getOffset() const
                {
                    return mOffset;
                }
                //// Gets the data format of this element
                EarthView::World::Graphic::VertexElementType getType() const
                {
                    return mType;
                }
                //// Gets the meaning of this element
                EarthView::World::Graphic::VertexElementSemantic getSemantic() const
                {
                    return mSemantic;
                }
                //// Gets the index of this element, only applicable for repeating elements
                ev_uint16 getIndex() const
                {
                    return mIndex;
                }
                //// Gets the size of this element in bytes
                ev_size_t getSize() const;
                //// Utility method for helping to calculate offsets
                static ev_size_t getTypeSize(EarthView::World::Graphic::VertexElementType etype);
                //// Utility method which returns the count of values in a given type
                static ev_uint16 getTypeCount(EarthView::World::Graphic::VertexElementType etype);
                /***** Simple converter function which will turn a single-value type into a
                multi-value type based on a parameter.
                ****/
                static EarthView::World::Graphic::VertexElementType multiplyTypeCount(EarthView::World::Graphic::VertexElementType baseType, ev_uint16 count);
                /***** Simple converter function which will a type into it's single-value
                equivalent - makes switches on type easier.
                ****/
                static EarthView::World::Graphic::VertexElementType getBaseType(EarthView::World::Graphic::VertexElementType multiType);
                /***** Utility method for converting colour from
                one packed 32-bit colour type to another.
                @param srcType The source type
                @param dstType The destination type
                @param ptr Read / write value to change
                ****/
                static void convertColourValue(EarthView::World::Graphic::VertexElementType srcType,
                                               EarthView::World::Graphic::VertexElementType dstType,  ev_uint32 *ptr);
                /***** Utility method for converting colour to
                a packed 32-bit colour type.
                @param src source colour
                @param dst The destination type
                ****/
                static ev_uint32 convertColourValue(const EarthView::World::Graphic::CColourValue &src,
                                                    EarthView::World::Graphic::VertexElementType dst);

				static CColourValue toColourValue(ev_uint32 color,
					EarthView::World::Graphic::VertexElementType dst);
                /***** Utility method to get the most appropriate packed colour vertex element format. ****/
                static EarthView::World::Graphic::VertexElementType getBestColourVertexElementType();
                inline ev_bool operator== (const EarthView::World::Graphic::CVertexElement &rhs) const
                {
                    if (mType != rhs.mType ||
                            mIndex != rhs.mIndex ||
                            mOffset != rhs.mOffset ||
                            mSemantic != rhs.mSemantic ||
                            mSource != rhs.mSource)
                        return false;
                    else
                        return true;
                }
                inline ev_bool operator!= (const EarthView::World::Graphic::CVertexElement &rhs) const
                {
                    if (mType != rhs.mType ||
                            mIndex != rhs.mIndex ||
                            mOffset != rhs.mOffset ||
                            mSemantic != rhs.mSemantic ||
                            mSource != rhs.mSource)
                        return true;
                    else
                        return false;
                }
                /***** Adjusts a pointer to the base of a vertex to point at this element.
                @remarks
                This variant is for void pointers, passed as a parameter because we can't
                rely on covariant return types.
                @param pBase Pointer to the start of a vertex in this buffer.
                @param pElem Pointer to a pointer which will be set to the start of this element.
                ****/
                inline void baseVertexPointerToElement(_inout void *pBase, _inout void **pElem) const
                {
                    /// The only way we can do this is to cast to ev_char* in order to use byte offset
                    /// then cast back to void*.
                    *pElem = static_cast<void *>(
                                 static_cast<ev_uchar *>(pBase) + mOffset);
                }

ev_private:

                /***** Adjusts a pointer to the base of a vertex to point at this element.
                @remarks
                This variant is for ev_real32 pointers, passed as a parameter because we can't
                rely on covariant return types.
                @param pBase Pointer to the start of a vertex in this buffer.
                @param pElem Pointer to a pointer which will be set to the start of this element.
                ****/
                inline void baseVertexPointerToElement(_inout void *pBase, _inout ev_real32 **pElem) const
                {
                    /// The only way we can do this is to cast to ev_char* in order to use byte offset
                    /// then cast back to ev_real32*. However we have to go via void* because casting
                    /// directly is not allowed
                    *pElem = static_cast<ev_real32 *>(
                                 static_cast<void *>(
                                     static_cast<ev_uchar *>(pBase) + mOffset));
                }
                /***** Adjusts a pointer to the base of a vertex to point at this element.
                @remarks
                This variant is for RGBA pointers, passed as a parameter because we can't
                rely on covariant return types.
                @param pBase Pointer to the start of a vertex in this buffer.
                @param pElem Pointer to a pointer which will be set to the start of this element.
                ****/
                inline void baseVertexPointerToElement(_inout void *pBase, _inout RGBA **pElem) const
                {
                    *pElem = static_cast<RGBA *>(
                                 static_cast<void *>(
                                     static_cast<ev_uchar *>(pBase) + mOffset));
                }
                /***** Adjusts a pointer to the base of a vertex to point at this element.
                @remarks
                This variant is for ev_char pointers, passed as a parameter because we can't
                rely on covariant return types.
                @param pBase Pointer to the start of a vertex in this buffer.
                @param pElem Pointer to a pointer which will be set to the start of this element.
                ****/
                inline void baseVertexPointerToElement(_inout void *pBase, _inout ev_uchar **pElem) const
                {
                    *pElem = static_cast<ev_uchar *>(pBase) + mOffset;
                }
                /***** Adjusts a pointer to the base of a vertex to point at this element.
                @remarks
                This variant is for ev_uint16 pointers, passed as a parameter because we can't
                rely on covariant return types.
                @param pBase Pointer to the start of a vertex in this buffer.
                @param pElem Pointer to a pointer which will be set to the start of this element.
                ****/
                inline void baseVertexPointerToElement(_inout void *pBase, _inout ev_uint16 **pElem) const
                {
                    *pElem = static_cast<ev_uint16 *>(
                                 static_cast<void *>(
                                     static_cast<ev_uchar *>(pBase) + mOffset));
                }

            };
            /***** This class declares the format of a set of vertex inputs, which
            can be issued to the rendering API through a CRenderOperation.
            @remarks
            You should be aware that the ordering and structure of the
            EarthView::World::Graphic::CVertexDeclaration can be very important on DirectX with older
            cards,so if you want to maintain maximum compatibility with
            all render systems and all cards you should be careful to follow these
            rules:<ol>
            <li>VertexElements should be added in the following order, and the order of the
            elements within a shared buffer should be as follows:
            position, blending weights, normals, diffuse colours, specular colours,
            texture coordinates (in order, with no gaps)</li>
            <li>You must not have unused gaps in your buffers which are not referenced
            by any EarthView::World::Graphic::CVertexElement</li>
            <li>You must not cause the buffer & offset settings of 2 VertexElements to overlap</li>
            </ol>
            Whilst GL and more modern graphics cards in D3D will allow you to defy these rules,
            sticking to them will ensure that your buffers have the maximum compatibility.
            @par
            Like the other classes in this functional area, these declarations should be created and
            ****/
            class EV_GRAPHIC_DLL CVertexDeclaration : public EarthView::World::Core::CAllocatedObject
            {
            private:
                typedef ev_bool (*sortfun)(const EarthView::World::Graphic::CVertexElement &e1, const EarthView::World::Graphic::CVertexElement &e2);

            public:
                //// Defines the list of vertex elements that makes up this declaration
                ///typedef list<EarthView::World::Graphic::CVertexElement> EarthView::World::Graphic::CVertexDeclaration::VertexElementList;
                class EV_GRAPHIC_DLL VertexElementList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CVertexElement> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CVertexElement const &t);
                    void sort(CVertexDeclaration::sortfun fun);
                private:
                    InternalList mList;
                public:
                    VertexElementList();
                ev_private:
                    VertexElementList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    void push_back(EarthView::World::Graphic::CVertexElement const &t);
                    void push_front(EarthView::World::Graphic::CVertexElement const   &t);
                    EarthView::World::Graphic::CVertexElement &front();
                    EarthView::World::Graphic::CVertexElement &back();

                    void insert(ev_uint32 pos, EarthView::World::Graphic::CVertexElement const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void clear();
                };
                //// Sort routine for vertex elements
                static ev_bool vertexElementLess(const EarthView::World::Graphic::CVertexElement &e1, const EarthView::World::Graphic::CVertexElement &e2);
            protected:
                EarthView::World::Graphic::CVertexDeclaration::VertexElementList mElementList;
            public:
                //// Standard constructor, not you should use CHardwareBufferManager::createVertexDeclaration
                CVertexDeclaration();
            ev_private:
                CVertexDeclaration(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CVertexDeclaration();
                /***** Get the number of elements in the declaration. ****/
                ev_size_t getElementCount() const;
                /***** Gets read-only access to the list of vertex elements. ****/
                const EarthView::World::Graphic::CVertexDeclaration::VertexElementList &getElements() const;
                /***** Get a single element. ****/
                const EarthView::World::Graphic::CVertexElement *getElement(ev_uint16 index) const;
                /***** Sorts the elements in this list to be compatible with the maximum
                number of rendering APIs / graphics cards.
                @remarks
                Older graphics cards require vertex data to be presented in a more
                rigid way, as defined in the main documentation for this class. As well
                as the ordering being important, where shared source buffers are used, the
                declaration must list all the elements for each source in turn.
                ****/
                void sort();
                /***** Remove any gaps in the source buffer list used by this declaration.
                @remarks
                This is useful if you've modified a declaration and want to remove
                any gaps in the list of buffers being used. Note, however, that if this
                declaration is already being used with a CVertexBufferBinding, you will
                need to alter that too. This method is mainly useful when reorganising
                buffers based on an altered declaration.
                @note
                This will cause the vertex declaration to be re-sorted.
                ****/
                void closeGapsInSource();
                /***** Generates a new EarthView::World::Graphic::CVertexDeclaration for optimal usage based on the current
                vertex declaration, which can be used with CVertexData::reorganiseBuffers later
                if you wish, or simply used as a template.
                @remarks
                Different buffer organisations and buffer usages will be returned
                depending on the parameters passed to this method.
                @param skeletalAnimation Whether this vertex data is going to be
                skeletally animated
                @param vertexAnimation Whether this vertex data is going to be vertex animated
                ****/
                EarthView::World::Graphic::CVertexDeclaration *getAutoOrganisedDeclaration(ev_bool skeletalAnimation,
                        ev_bool vertexAnimation, bool vertexAnimationNormals) const;
                /***** Gets the index of the highest source value referenced by this declaration. ****/
                ev_uint16 getMaxSource() const;

                /***** Adds a new EarthView::World::Graphic::CVertexElement to this declaration.
                @remarks
                This method adds a single element (positions, normals etc) to the end of the
                vertex declaration. <b>Please read the information in EarthView::World::Graphic::CVertexDeclaration about
                the importance of ordering and structure for compatibility with older D3D drivers</b>.
                @param source The binding index of EarthView::World::Graphic::CHardwareVertexBuffer which will provide the source for this element.
                See VertexBufferBindingState for full information.
                @param offset The offset in bytes where this element is located in the buffer
                @param theType The data format of the element (3 floats, a colour etc)
                @param semantic The meaning of the data (position, normal, diffuse colour etc)
                @param index Optional index for multi-input elements like texture coordinates
                @returns A reference to the EarthView::World::Graphic::CVertexElement added.
                ****/
                /****virtual const EarthView::World::Graphic::CVertexElement& addElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);
                ****/
                virtual const EarthView::World::Graphic::CVertexElement &addElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                        EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index);
                virtual const EarthView::World::Graphic::CVertexElement &addElement(ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                        EarthView::World::Graphic::VertexElementSemantic semantic);
                /***** Inserts a new EarthView::World::Graphic::CVertexElement at a given position in this declaration.
                @remarks
                This method adds a single element (positions, normals etc) at a given position in this
                vertex declaration. <b>Please read the information in EarthView::World::Graphic::CVertexDeclaration about
                the importance of ordering and structure for compatibility with older D3D drivers</b>.
                @param source The binding index of EarthView::World::Graphic::CHardwareVertexBuffer which will provide the source for this element.
                See VertexBufferBindingState for full information.
                @param offset The offset in bytes where this element is located in the buffer
                @param theType The data format of the element (3 floats, a colour etc)
                @param semantic The meaning of the data (position, normal, diffuse colour etc)
                @param index Optional index for multi-input elements like texture coordinates
                @returns A reference to the EarthView::World::Graphic::CVertexElement added.
                ****/
                /**** virtual const EarthView::World::Graphic::CVertexElement& insertElement(ev_uint16 atPosition,
                ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);****/
                virtual const EarthView::World::Graphic::CVertexElement &insertElement(ev_uint16 atPosition,
                        ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                        EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index);
                virtual const EarthView::World::Graphic::CVertexElement &insertElement(ev_uint16 atPosition,
                        ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                        EarthView::World::Graphic::VertexElementSemantic semantic);
                /***** Remove the element at the given index from this declaration. ****/
                virtual void removeElement(ev_uint16 elem_index);
                /***** Remove the element with the given semantic and usage index.
                @remarks
                In this case 'index' means the usage index for repeating elements such
                as texture coordinates. For other elements this will always be 0 and does
                not refer to the index in the vector.
                ****/
                ///virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);
                virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index);
                virtual void removeElement(EarthView::World::Graphic::VertexElementSemantic semantic);
                /***** Remove all elements. ****/
                virtual void removeAllElements();
                /***** Modify an element in-place, params as addElement.
                @remarks
                <b>Please read the information in EarthView::World::Graphic::CVertexDeclaration about
                the importance of ordering and structure for compatibility with older D3D drivers</b>.
                ****/
                /****virtual void modifyElement(ev_uint16 elem_index, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index = 0);****/
                virtual void modifyElement(ev_uint16 elem_index, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                                           EarthView::World::Graphic::VertexElementSemantic semantic, ev_uint16 index );
                virtual void modifyElement(ev_uint16 elem_index, ev_uint16 source, ev_size_t offset, EarthView::World::Graphic::VertexElementType theType,
                                           EarthView::World::Graphic::VertexElementSemantic semantic);
                /***** Finds a EarthView::World::Graphic::CVertexElement with the given semantic, and index if there is more than
                one element with the same semantic.
                @remarks
                If the element is not found, this method returns null.
                ****/
                ///virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem, ev_uint16 index = 0);
                virtual const EarthView::World::Graphic::CVertexElement *findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem, ev_uint16 index) const;
                virtual const EarthView::World::Graphic::CVertexElement *findElementBySemantic(EarthView::World::Graphic::VertexElementSemantic sem) const;
                /***** Based on the current elements, gets the size of the vertex for a given buffer source.
                @param source The buffer binding index for which to get the vertex size.
                ****/
                /***** Gets a list of elements which use a given source.
                @remarks
                Note that the list of elements is returned by value therefore is separate from
                the declaration as soon as this method returns.
                ****/
                virtual EarthView::World::Graphic::CVertexDeclaration::VertexElementList findElementsBySource(ev_uint16 source) const;
                /***** Gets the vertex size defined by this declaration for a given source. ****/
                virtual ev_size_t getVertexSize(ev_uint16 source) const;
                virtual ev_uint16 getNextFreeTextureCoordinate() const;
                /***** Clones this declaration.
                @param mgr Optional CHardwareBufferManager to use for creating the clone
                (if null, use the current default).
                ****/
                ///virtual EarthView::World::Graphic::CVertexDeclaration* clone(EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0);
                virtual EarthView::World::Graphic::CVertexDeclaration *clone(EarthView::World::Graphic::CHardwareBufferManagerBase *mgr) const;
                virtual EarthView::World::Graphic::CVertexDeclaration *clone() const;
                inline ev_bool operator== (const EarthView::World::Graphic::CVertexDeclaration &rhs) const
                {
                    if (mElementList.size() != rhs.mElementList.size())
                        return false;
                    VertexElementList::const_iterator i, iend, rhsi, rhsiend;
                    iend = mElementList.end();
                    rhsiend = rhs.mElementList.end();
                    rhsi = rhs.mElementList.begin();
                    for (i = mElementList.begin(); i != iend && rhsi != rhsiend; ++i, ++rhsi)
                    {
                        if ( !(*i == *rhsi) )
                            return false;
                    }
                    return true;
                }
                inline ev_bool operator!= (const EarthView::World::Graphic::CVertexDeclaration &rhs) const
                {
                    return !(*this == rhs);
                }
            };
            /***** Records the state of all the vertex buffer bindings required to provide a vertex declaration
            with the input data it needs for the vertex elements.
            @remarks
            Why do we have this binding list rather than just have EarthView::World::Graphic::CVertexElement referring to the
            vertex buffers direct? Well, in the underlying APIs, binding the vertex buffers to an
            index (or 'stream') is the way that vertex data is linked, so this structure better
            reflects the realities of that. In addition, by separating the vertex declaration from
            the list of vertex buffer bindings, it becomes possible to reuse bindings between declarations
            and vice versa, giving opportunities to reduce the state changes required to perform rendering.
            @par
            Like the other classes in this functional area, these binding maps should be created and
            ****/
            class EV_GRAPHIC_DLL CVertexBufferBinding : public EarthView::World::Core::CAllocatedObject
            {
            public:
                //// Defines the vertex buffer bindings used as source for vertex declarations

                ///typedef map<ev_uint16, EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap;
                class EV_GRAPHIC_DLL VertexBufferBindingMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    VertexBufferBindingMap();
                ev_private:
                    VertexBufferBindingMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    ev_bool exist(const ev_uint16 &key);
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &operator[](const ev_uint16 &key);
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &get(const ev_uint16 &key);
                    void erase(const ev_uint16 &key);
                    ev_size_t size() const;
                    void swap(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap &rhs);
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_uint16, EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> InternalList;
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
                    iterator find(const ev_uint16 &key);
                    const_iterator find(const ev_uint16 &key) const;

                private:
                    InternalList mList;
                };

            protected:
                EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap mBindingMap;
                mutable ev_uint16 mHighIndex;
            public:
                //// Constructor, should not be called direct, use CHardwareBufferManager::createVertexBufferBinding
                CVertexBufferBinding();
            ev_private:
                CVertexBufferBinding(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CVertexBufferBinding();

                /***** Set a binding, associating a vertex buffer with a given index.
                @remarks
                If the index is already associated with a vertex buffer,
                the association will be replaced. This may cause the old buffer
                to be destroyed if nothing else is referring to it.
                You should assign bindings from 0 and not leave gaps, although you can
                bind them in any order.
                ****/
                virtual void setBinding(ev_uint16 index, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &buffer);
                /***** Removes an existing binding. ****/
                virtual void unsetBinding(ev_uint16 index);
                /***** Removes all the bindings. ****/
                virtual void unsetAllBindings();
                //// Gets a read-only version of the buffer bindings
                virtual const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap &getBindings() const;
                //// Gets the buffer bound to the given source index
                virtual const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &getBuffer(ev_uint16 index) const;
                //// Gets whether a buffer is bound to the given source index
                virtual ev_bool isBufferBound(ev_uint16 index) const;
                virtual ev_size_t getBufferCount() const;

                /***** Gets the highest index which has already been set, plus 1.
                @remarks
                This is to assist in binding the vertex buffers such that there are
                not gaps in the list.
                ****/
                virtual ev_uint16 getNextIndex() const;

                /***** Gets the last bound index.
                ****/
                virtual ev_uint16 getLastBoundIndex() const;
                ///typedef map<ev_uint16, ev_uint16> EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap;
                class EV_GRAPHIC_DLL BindingIndexMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    BindingIndexMap();

                ev_private:
                    BindingIndexMap(_in EarthView::World::Core::CNameValuePairList *pList);

                public:
                    ev_bool exist(const ev_uint16 &key);
                    ev_uint16 &operator[](const ev_uint16 &key);
                    ev_uint16 &get(const ev_uint16 &key);
                    void erase(const ev_uint16 &key);
                    ev_size_t size() const;
                    void swap(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap &rhs);
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<ev_uint16, ev_uint16> InternalList;
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
                    iterator find(const ev_uint16 &key);
                    const_iterator find(const ev_uint16 &key) const;

                private:
                    InternalList mList;
                };
                /***** Check whether any gaps in the bindings.
                ****/
                virtual ev_bool hasGaps() const;
                /***** Remove any gaps in the bindings.
                @remarks
                This is useful if you've removed vertex buffer from this vertex buffer
                bindings and want to remove any gaps in the bindings. Note, however,
                that if this bindings is already being used with a EarthView::World::Graphic::CVertexDeclaration,
                you will need to alter that too. This method is mainly useful when
                reorganising buffers manually.
                @param
                bindingIndexMap To be retrieve the binding index map that used to
                translation old index to new index; will be cleared by this method
                before fill-in.
                ****/
                virtual void closeGaps(_inout EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap &bindingIndexMap);
                //// returns true if has an element that is instance data
                virtual bool getHasInstanceData() const;

            };

        }
    }
}

#endif

