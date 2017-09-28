#ifndef __DataStream_H__
#define __DataStream_H__

#include "core/sharedptr.h"
#include "core/stringdefines.h"
#include "core/platform.h"
#include "core/global.h"
#include "core/gbkstring.h"

#include <iostream>
#include <sstream>

using namespace std;

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            template <ev_size_t cacheSize>
            class StaticCache 			///只在类中被定义为protected类型的成员属性，因而不需要实例化此模板类 //zhaowei 2012-7-4
            {
            protected:
                //// Static buffer
                ev_char mBuffer[cacheSize];

                //// Number of bytes valid in cache (written from the beginning of static buffer)
                ev_size_t mValidBytes;
                //// Current read position
                ev_size_t mPos;

            public:
                //// Constructor
                StaticCache()
                {
                    mValidBytes = 0;
                    mPos = 0;
                }

                /** Cache data pointed by 'buf'. If 'count' is greater than cache size, we cache only last bytes.
                 Returns number of bytes written to cache. */
                ev_size_t cacheData(const ev_void *buf, ev_size_t count)
                {
                    assert(avail() == 0 && "It is assumed that you cache data only after you have read everything.");

                    if (count < cacheSize)
                    {
                        /// number of bytes written is less than total size of cache
                        if (count + mValidBytes <= cacheSize)
                        {
                            /// just append
                            memcpy(mBuffer + mValidBytes, buf, count);
                            mValidBytes += count;
                        }
                        else
                        {
                            ev_size_t begOff = count - (cacheSize - mValidBytes);
                            /// override old cache content in the beginning
                            memmove(mBuffer, mBuffer + begOff, mValidBytes - begOff);
                            /// append new data
                            memcpy(mBuffer + cacheSize - count, buf, count);
                            mValidBytes = cacheSize;
                        }
                        mPos = mValidBytes;
                        return count;
                    }
                    else
                    {
                        /// discard all
                        memcpy(mBuffer, (const ev_char *)buf + count - cacheSize, cacheSize);
                        mValidBytes = mPos = cacheSize;
                        return cacheSize;
                    }
                }
                /** Read data from cache to 'buf' (maximum 'count' bytes). Returns number of bytes read from cache. */
                ev_size_t read(ev_void *buf, ev_size_t count)
                {
                    ev_size_t rb = avail();
                    rb = (rb < count) ? rb : count;
                    memcpy(buf, mBuffer + mPos, rb);
                    mPos += rb;
                    return rb;
                }

                /** Step back in cached stream by 'count' bytes. Returns 'true' if cache contains resulting position. */
                ev_bool rewind(ev_size_t count)
                {
                    if (mPos < count)
                    {
                        clear();
                        return false;
                    }
                    else
                    {
                        mPos -= count;
                        return true;
                    }
                }
                /** Step forward in cached stream by 'count' bytes. Returns 'true' if cache contains resulting position. */
                ev_bool ff(ev_size_t count)
                {
                    if (avail() < count)
                    {
                        clear();
                        return false;
                    }
                    else
                    {
                        mPos += count;
                        return true;
                    }
                }

                /** Returns number of bytes available for reading in cache after rewinding. */
                ev_size_t avail() const
                {
                    return mValidBytes - mPos;
                }

                /** Clear the cache */
                ev_void clear()
                {
                    mValidBytes = 0;
                    mPos = 0;
                }
            };


            class EV_CORE_DLL CDataStream : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CDataStream(EarthView::World::Core::CNameValuePairList *pList);
            ev_private:
                /// Streaming operators
                template<typename T> EarthView::World::Core::CDataStream &operator>>(T &val);			///未被任何对象调用,因而移植到ev_private下
            public:
                enum AccessMode
                {
                    READ = 1,
                    WRITE = 2
                };
            protected:
                //// The name (e.g. resource name) that can be used to identify the source fot his data (optional)
                EVString mName;
                //// Size of the data in the stream (may be 0 if size cannot be determined)
                ev_size_t mSize;
                //// What type of access is allowed (AccessMode)
                ev_uint16 mAccess;
#define EV_STREAM_TEMP_SIZE 128
            public:
                //// Constructor for creating unnamed streams
                CDataStream(ev_uint16 accessMode) : mSize(0), mAccess(accessMode) {}
                CDataStream() : mSize(0), mAccess(READ) {}
                //// Constructor for creating named streams
                CDataStream(const EVString &name, ev_uint16 accessMode)
                    : mName(name), mSize(0), mAccess(accessMode) {}
                CDataStream(const EVString &name)
                    : mName(name), mSize(0), mAccess(READ) {}
                //// Returns the name of the stream, if it has one.
                const EVString &getName()
                {
                    return mName;
                }
				void setName(const EVString& name);

                //// Gets the access mode of the stream
                ev_uint16 getAccessMode() const
                {
                    return mAccess;
                }
                /** Reports whether this stream is readable. */
                virtual ev_bool isReadable() const
                {
                    return (mAccess & READ) != 0;
                }
                /** Reports whether this stream is writeable. */
                virtual ev_bool isWriteable() const
                {
                    return (mAccess & WRITE) != 0;
                }
                virtual ~CDataStream() {}



                /** Read the requisite number of bytes from the stream,
                	stopping at the end of the file.
                @param buf Reference to a buffer pointer
                @param count Number of bytes to read
                @returns The number of bytes read
                */
                virtual ev_size_t read(void *buf, ev_size_t count);
                /** Write the requisite number of bytes from the stream (only applicable to
                	streams that are not read-only)
                @param buf Pointer to a buffer containing the bytes to write
                @param count Number of bytes to write
                @returns The number of bytes written
                */
                virtual ev_size_t write(const void *buf, ev_size_t count);
                /** Get a single line from the stream.
                @remarks
                	The delimiter character is not included in the data
                	returned, and it is skipped over so the next read will occur
                	after it. The buffer contents will include a
                	terminating character.
                @note
                    If you used this function, you <b>must</b> open the stream in <b>binary mode</b>,
                    otherwise, it'll produce unexpected results.
                @param buf Reference to a buffer pointer
                @param maxCount The maximum length of data to be read, excluding the terminating character
                @param delim The delimiter to stop at
                @returns The number of bytes read, excluding the terminating character
                */
                virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount, const EVString &delim );
                virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount);

                /** Returns a EVString containing the next line of data, optionally
                    trimmed for whitespace.
                @remarks
                    This is a convenience method for text streams only, allowing you to
                    retrieve a EVString object containing the next line of data. The data
                    is read up to the next newline character and the result trimmed if
                    required.
                @note
                    If you used this function, you <b>must</b> open the stream in <b>binary mode</b>,
                    otherwise, it'll produce unexpected results.
                @param
                    trimAfter If true, the line is trimmed for whitespace (as in
                    EVString.trim(true,true))
                */
                virtual EVString getLine( ev_bool trimAfter);
                virtual EVString getLine( );
                /** Returns a EVString containing the entire stream.
                @remarks
                    This is a convenience method for text streams only, allowing you to
                    retrieve a EVString object containing all the data in the stream.
                */
                virtual EVString getAsString();
                /** Skip a single line from the stream.
                @note
                    If you used this function, you <b>must</b> open the stream in <b>binary mode</b>,
                    otherwise, it'll produce unexpected results.
                @param delim The delimiter(s) to stop at
                @returns The number of bytes skipped
                */
                virtual ev_size_t skipLine(const EVString &delim);
                virtual ev_size_t skipLine();
                /** Skip a defined number of bytes. This can also be a negative value, in which case
                the file pointer rewinds a defined number of bytes. */
                virtual void skip(ev_int32 count);

                /** Repositions the read point to a specified byte.
                */
                virtual void seek( ev_size_t pos );

                /** Returns the current byte offset from beginning */
                virtual ev_size_t tell() const;
                /** Returns true if the stream has reached the end.
                */
                virtual ev_bool eof() const;
                /** Returns the total size of the data to be read from the stream,
                	or 0 if this is indeterminate for this stream.
                */
                ev_size_t size() const;
                /** Close the stream; this makes further operations invalid. */
                virtual void close();


            };

            class CMemoryDataStream;

            class EV_CORE_DLL CDataStreamReader : public EarthView::World::Core::CBaseObject
            {
                ev_private:
                CDataStreamReader(EarthView::World::Core::CNameValuePairList *pList);
				/// <summary>
				///读取一个字符串对象，会自动在按字符串结束为0判断	
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 readGBKString(EarthView::World::Core::CGBKString& value);

				/// <summary>
				///读取一个字符串对象，按字符串传入长度来读取
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 readGBKString(EarthView::World::Core::CGBKString& value, ev_int32 length);
            public:
            	enum DataStreamOrder
            	{
            		BIG_ENDIAN_ORDER    = 1,  /// big-endian (network) order            		
            		LITTLE_ENDIAN_ORDER = 2,  /// little-endian order
            	};

            	CDataStreamReader(CDataStream& dataStream);
            	CDataStreamReader(CDataStream& dataStream, DataStreamOrder dataStreamOrder);
            	virtual ~CDataStreamReader();
            	ev_int32 readBool(ev_bool& value);
            	ev_int32 readChar(ev_char& value);
            	ev_int32 readUChar(ev_uchar& value);
            	ev_int32 readWChar(ev_wchar& value);
            	ev_int32 readByte(ev_byte& value);
            	ev_int32 readInt8(ev_int8& value);
            	ev_int32 readUInt8(ev_uint8& value);
            	ev_int32 readInt16(ev_int16& value);
            	ev_int32 readUInt16(ev_uint16& value);
            	ev_int32 readInt32(ev_int32& value);
            	ev_int32 readUInt32(ev_uint32& value);
            	ev_int32 readInt64(ev_int64& value);
            	ev_int32 readUInt64(ev_uint64& value);
            	ev_int32 readReal32(ev_real32& value);
            	ev_int32 readReal64(ev_real64& value);
				ev_uint32 readChars(ev_char* chars,ev_uint32 len);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 readObjectAddr(void*& value);
            	//ev_int32 readSizeT(ev_size_t& value);   //
				/// <summary>
				///读取一个字符串对象，会自动在按字符串结束为0判断	
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
            	ev_int32 readString(EVString& value);	//
				/// <summary>
				///读取一个字符串对象，按字符串传入长度来读取
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 readString(EVString& value, ev_int32 length);	//
            	ev_int32 readRaw(CMemoryDataStream& value, ev_int32 length);

            	ev_bool eof();
            	CDataStream& dataStream();
            protected:
            private:
            	CDataStream& mDataStream;
            	ev_bool mFlipBytes;
            };

            class EV_CORE_DLL CDataStreamWriter : public EarthView::World::Core::CBaseObject
            {
                ev_private:
                CDataStreamWriter(EarthView::World::Core::CNameValuePairList *pList);
				/// <summary>
				/// 写入一个字符串对象，会自动在后面加0		
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 writeGBKString(const EarthView::World::Core::CGBKString& value);
				/// <summary>
				/// 写入一个字符串对象，不会自动在后面加0		
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 writeGBKString(const EarthView::World::Core::CGBKString& value, ev_int32 length);
            public:
            	enum DataStreamOrder
            	{
            		BIG_ENDIAN_ORDER    = 1,  /// big-endian (network) order            		
            		LITTLE_ENDIAN_ORDER = 2,  /// little-endian order
            	};
            	CDataStreamWriter(CDataStream& dataStream);
            	CDataStreamWriter(CDataStream& dataStream, DataStreamOrder dataStreamOrder);
            	virtual ~CDataStreamWriter();
            	ev_int32 writeBool(ev_bool value);
            	ev_int32 writeChar(ev_char value);
            	ev_int32 writeUChar(ev_uchar value);
            	ev_int32 writeWChar(ev_wchar value);
            	ev_int32 writeByte(ev_byte value);
            	ev_int32 writeInt8(ev_int8 value);
            	ev_int32 writeUInt8(ev_uint8 value);
            	ev_int32 writeInt16(ev_int16 value);
            	ev_int32 writeUInt16(ev_uint16 value);
            	ev_int32 writeInt32(ev_int32 value);
            	ev_int32 writeUInt32(ev_uint32 value);
            	ev_int32 writeInt64(ev_int64 value);
            	ev_int32 writeUInt64(ev_uint64 value);
            	ev_int32 writeReal32(ev_real32 value);
            	ev_int32 writeReal64(ev_real64 value);

				/// <summary>
				/// 写入一个对象地址，
				/// 调用此函数后，将导致持久化的二进制流不能在32位和64位系统下通用！
				/// </summary>
				/// <param name="value">对象地址</param>
				/// <returns></returns>
				ev_int32 writeObjectAddr(void* value);
            	//ev_int32 writeSizeT(ev_size_t value);   //

				/// <summary>
				/// 写入一个字符串对象，会自动在后面加0		
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
            	ev_int32 writeString(const EVString& value);	//

				/// <summary>
				/// 写入一个字符串对象，不会自动在后面加0		
				/// </summary>
				/// <param name="value">字符串对象</param>
				/// <returns></returns>
				ev_int32 writeString(const EVString& value, ev_int32 length);	//
            	ev_int32 writeRaw(CMemoryDataStream& value);

            	ev_bool eof();
            	CDataStream& dataStream();
            protected:
            private:
            	CDataStream& mDataStream;
            	ev_bool mFlipBytes;
            };



            /** Shared pointer to allow data streams to be passed around without
            	worrying about deallocation
            */
            /*typedef CSharedPtr<EarthView::World::Core::CDataStream> EarthView::World::Core::DataStreamPtr;*/
            class EV_CORE_DLL DataStreamPtr : public EarthView::World::Core::CBaseObject, public CSharedPtr<EarthView::World::Core::CDataStream>
            {
            ev_private:
                DataStreamPtr(_in EarthView::World::Core::CNameValuePairList *pList): CSharedPtr<EarthView::World::Core::CDataStream>(
                        pList && pList->Exist("rep") ? (EarthView::World::Core::CDataStream *)pList->GetAt("rep") : (EarthView::World::Core::CDataStream *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        CSharedPtr<EarthView::World::Core::CDataStream> r = *(CSharedPtr<EarthView::World::Core::CDataStream>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
					else 
					{

					}
                }
            public:
                DataStreamPtr() : CSharedPtr<EarthView::World::Core::CDataStream>() {}
                explicit DataStreamPtr(EarthView::World::Core::CDataStream *rep) : CSharedPtr<EarthView::World::Core::CDataStream>(rep) {}
                explicit DataStreamPtr(EarthView::World::Core::CDataStream *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : CSharedPtr<EarthView::World::Core::CDataStream>(rep, inFreeMethod) {}
                DataStreamPtr(const DataStreamPtr &r) : CSharedPtr<EarthView::World::Core::CDataStream>(r) {}

                EarthView::World::Core::CDataStream *get() const
                {
                    return CSharedPtr<EarthView::World::Core::CDataStream>::get();
                }
            };
            //// List of EarthView::World::Core::CDataStream items
            /*typedef list<EarthView::World::Core::DataStreamPtr> EarthView::World::Core::DataStreamList;*/
            class EV_CORE_DLL DataStreamList : public EarthView::World::Core::CBaseObject         			///函数_updateRenderQueue中的list封装类
            {
            ev_private:
                typedef list<EarthView::World::Core::DataStreamPtr> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Core::DataStreamPtr const &t)
                {
                    return mList.insert(pos, t);
                }

            private:
                InternalList mList;
            ev_private:
         
				DataStreamList(_in EarthView::World::Core::CNameValuePairList *pList) 
				{
				
				}
            public:
                DataStreamList() {}
                void push_back(EarthView::World::Core::DataStreamPtr const &t)
                {
                    mList.push_back(t);
                }
                void push_front(EarthView::World::Core::DataStreamPtr const   &t)
                {
                    mList.push_front(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                void pop_front()
                {
                    mList.pop_front();
                }

                EarthView::World::Core::DataStreamPtr &front()
                {
                    return mList.front();
                }
                EarthView::World::Core::DataStreamPtr &back()
                {
                    return mList.back();
                }
                EarthView::World::Core::DataStreamPtr &at(ev_uint32 pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    return *it;
                }
                void insert(ev_uint32 pos, EarthView::World::Core::DataStreamPtr const &t)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.insert(it, t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }

                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            //// Shared pointer to list of EarthView::World::Core::CDataStream items
            /*typedef CSharedPtr<EarthView::World::Core::DataStreamList> EarthView::World::Core::DataStreamListPtr;*/
            class EV_CORE_DLL DataStreamListPtr : public EarthView::World::Core::CBaseObject, public CSharedPtr<EarthView::World::Core::DataStreamList>
            {
            ev_private:
                DataStreamListPtr(_in EarthView::World::Core::CNameValuePairList *pList): CSharedPtr<DataStreamList>(
                        pList && pList->Exist("rep") ? (EarthView::World::Core::DataStreamList *)pList->GetAt("rep") : (EarthView::World::Core::DataStreamList *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        CSharedPtr<EarthView::World::Core::DataStreamList>r = *(CSharedPtr<EarthView::World::Core::DataStreamList>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                DataStreamListPtr() : CSharedPtr<DataStreamList>() {}
                explicit DataStreamListPtr(DataStreamList *rep) : CSharedPtr<DataStreamList>(rep) {}
                explicit DataStreamListPtr(DataStreamList *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : CSharedPtr<DataStreamList>(rep, inFreeMethod) {}
                DataStreamListPtr(const DataStreamListPtr &r) : CSharedPtr<DataStreamList>(r) {}

                EarthView::World::Core::DataStreamList *get() const
                {
                    return CSharedPtr<EarthView::World::Core::DataStreamList>::get();
                }
            };
            /** Common subclass of CDataStream for handling data from chunks of memory.
            */
            class EV_CORE_DLL CMemoryDataStream : public EarthView::World::Core::CDataStream
            {
            protected:
                //// Pointer to the start of the data area
                ev_uchar *mData;
                //// Pointer to the current position in the memory
                ev_uchar *mPos;
                //// Pointer to the end of the memory
                ev_uchar *mEnd;
                //// Do we delete the memory on close
                ev_bool mFreeOnClose;

            ev_private:
                CMemoryDataStream(EarthView::World::Core::CNameValuePairList *pList);
            public:

                /** Wrap an existing memory chunk in a stream.
                @param pMem Pointer to the existing memory
                @param size The size of the memory chunk in bytes
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed. Note: it's important that if you set
                	with a category of MEMCATEGORY_GENERAL ensure the freeing of memory
                	matches up.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(void *pMem, ev_size_t size, ev_bool freeOnClose , ev_bool readOnly );
                CMemoryDataStream(void *pMem, ev_size_t size, ev_bool freeOnClose );
                CMemoryDataStream(void *pMem, ev_size_t size);
                /** Wrap an existing memory chunk in a named stream.
                @param name The name to give the stream
                @param pMem Pointer to the existing memory
                @param size The size of the memory chunk in bytes
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed. Note: it's important that if you set
                	with a category of MEMCATEGORY_GENERAL ensure the freeing of memory
                	matches up.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(const EVString &name, void *pMem, ev_size_t size, ev_bool freeOnClose, ev_bool readOnly );
                CMemoryDataStream(const EVString &name, void *pMem, ev_size_t size, ev_bool freeOnClose);
                CMemoryDataStream(const EVString &name, void *pMem, ev_size_t size);
                /** Create a stream which pre-buffers the contents of another stream.
                @remarks
                	This constructor can be used to intentionally read in the entire
                	contents of another stream, copying them to the internal buffer
                	and thus making them available in memory as a single unit.
                @param sourceStream Another EarthView::World::Core::CDataStream which will provide the source
                	of data
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(EarthView::World::Core::CDataStream &sourceStream, ev_bool freeOnClose, ev_bool readOnly);
                CMemoryDataStream(EarthView::World::Core::CDataStream &sourceStream, ev_bool freeOnClose );
                CMemoryDataStream(EarthView::World::Core::CDataStream &sourceStream);

                /** Create a stream which pre-buffers the contents of another stream.
                @remarks
                	This constructor can be used to intentionally read in the entire
                	contents of another stream, copying them to the internal buffer
                	and thus making them available in memory as a single unit.
                @param sourceStream Weak reference to another EarthView::World::Core::CDataStream which will provide the source
                	of data
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(EarthView::World::Core::DataStreamPtr &sourceStreamPtr, ev_bool freeOnClose, ev_bool readOnly);
                CMemoryDataStream(EarthView::World::Core::DataStreamPtr &sourceStreamPtr, ev_bool freeOnClose );
                CMemoryDataStream(EarthView::World::Core::DataStreamPtr &sourceStreamPtr);

                /** Create a named stream which pre-buffers the contents of
                	another stream.
                @remarks
                	This constructor can be used to intentionally read in the entire
                	contents of another stream, copying them to the internal buffer
                	and thus making them available in memory as a single unit.
                @param name The name to give the stream
                @param sourceStream Another EarthView::World::Core::CDataStream which will provide the source
                	of data
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(const EVString &name, EarthView::World::Core::CDataStream &sourceStream, ev_bool freeOnClose, ev_bool readOnly );
                CMemoryDataStream(const EVString &name, EarthView::World::Core::CDataStream &sourceStream, ev_bool freeOnClose );
                CMemoryDataStream(const EVString &name, EarthView::World::Core::CDataStream &sourceStream);
                /** Create a named stream which pre-buffers the contents of
                another stream.
                @remarks
                This constructor can be used to intentionally read in the entire
                contents of another stream, copying them to the internal buffer
                and thus making them available in memory as a single unit.
                @param name The name to give the stream
                @param sourceStream Another EarthView::World::Core::CDataStream which will provide the source
                of data
                @param freeOnClose If true, the memory associated will be destroyed
                when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(const EVString &name, const EarthView::World::Core::DataStreamPtr &sourceStreamPtr, ev_bool freeOnClose , ev_bool readOnly);
                CMemoryDataStream(const EVString &name, const EarthView::World::Core::DataStreamPtr &sourceStreamPtr, ev_bool freeOnClose);
                CMemoryDataStream(const EVString &name, const EarthView::World::Core::DataStreamPtr &sourceStreamPtr);
                /** Create a stream with a brand new empty memory chunk.
                @param size The size of the memory chunk to create in bytes
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(ev_size_t size, ev_bool freeOnClose, ev_bool readOnly);
                CMemoryDataStream(ev_size_t size, ev_bool freeOnClose);
                CMemoryDataStream(ev_size_t size);
                /** Create a named stream with a brand new empty memory chunk.
                @param name The name to give the stream
                @param size The size of the memory chunk to create in bytes
                @param freeOnClose If true, the memory associated will be destroyed
                	when the stream is destroyed.
                @param readOnly Whether to make the stream on this memory read-only once created
                */
                CMemoryDataStream(const EVString &name, ev_size_t size, ev_bool freeOnClose , ev_bool readOnly);
                CMemoryDataStream(const EVString &name, ev_size_t size, ev_bool freeOnClose );
                CMemoryDataStream(const EVString &name, ev_size_t size);
                ~CMemoryDataStream();
                /** Get a pointer to the start of the memory block this stream holds. */
                ev_uchar *getPtr()
                {
                    return mData;
                }

                /** Get a pointer to the current position in the memory block this stream holds. */
                ev_uchar *getCurrentPtr()
                {
                    return mPos;
                }

                /** @copydoc CDataStream::read
                */
                ev_size_t read(void *buf, ev_size_t count);
                /** @copydoc CDataStream::write
                */
                ev_size_t write(const void *buf, ev_size_t count);
                /** @copydoc CDataStream::readLine
                */
                ev_size_t readLine(ev_char *buf, ev_size_t maxCount, const EVString &delim);
                ev_size_t readLine(ev_char *buf, ev_size_t maxCount);

                /** @copydoc CDataStream::skipLine
                */
                ev_size_t skipLine(const EVString &delim );
                ev_size_t skipLine();
                /** @copydoc CDataStream::skip
                */
                void skip(ev_int32 count);

                /** @copydoc CDataStream::seek
                */
                void seek( ev_size_t pos );

                /** @copydoc CDataStream::tell
                */
                ev_size_t tell() const;
                /** @copydoc CDataStream::eof
                */
                ev_bool eof() const;
                /** @copydoc CDataStream::close
                */
                void close();
                /** Sets whether or not to free the encapsulated memory on close. */
                void setFreeOnClose(ev_bool free)
                {
                    mFreeOnClose = free;
                }
            };
            /** Shared pointer to allow memory data streams to be passed around without
            worrying about deallocation
            */
            /*typedef CSharedPtr<EarthView::World::Core::CMemoryDataStream> EarthView::World::Core::MemoryDataStreamPtr;*/
            class EV_CORE_DLL MemoryDataStreamPtr : public EarthView::World::Core::CBaseObject, public CSharedPtr<EarthView::World::Core::CMemoryDataStream>
            {
            ev_private:
                MemoryDataStreamPtr(_in EarthView::World::Core::CNameValuePairList *pList): CSharedPtr<EarthView::World::Core::CMemoryDataStream>(
                        pList && pList->Exist("rep") ? (EarthView::World::Core::CMemoryDataStream *)pList->GetAt("rep") : (EarthView::World::Core::CMemoryDataStream *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : SPFM_DELETE)
                {
                   
				 if(pList&&pList->Count()==1)
					{
						if(pList->Exist("r"))
						{
							CSharedPtr<EarthView::World::Core::CMemoryDataStream>r = *(CSharedPtr<EarthView::World::Core::CMemoryDataStream>*)pList->GetAt("r");
							EV_SET_AUTO_SHARED_MUTEX_NULL
								EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
							{
								EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
									EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
									pRep = r.pRep;
								pUseCount = r.pUseCount;
								useFreeMethod = r.useFreeMethod;
								/// Handle zero pointer gracefully to manage STL containers
								if(pUseCount)
								{
									++(*pUseCount);
								}
							}
						}
						else if(pList->Exist("ptr"))
						{
							EarthView::World::Core::DataStreamPtr& ptr=*(EarthView::World::Core::DataStreamPtr*)pList->GetAt("ptr");
							if(!ptr.isNull())
							{
								EarthView::World::Core::CDataStream* ds = ptr.getPointer();
								EarthView::World::Core::CMemoryDataStream* mds = dynamic_cast<EarthView::World::Core::CMemoryDataStream*>(ds);
								if(mds == NULL && ds != NULL)
								{
									EarthView::World::Core::CMemoryDataStream* stream = EV_NEW EarthView::World::Core::CMemoryDataStream(*ds);
									this->bind(stream);
								}
								else if(mds != NULL)
								{
									EV_SET_AUTO_SHARED_MUTEX_NULL
									EV_MUTEX_CONDITIONAL(ptr.EV_AUTO_MUTEX_NAME)
									{
										EV_LOCK_MUTEX(*ptr.EV_AUTO_MUTEX_NAME)
										EV_COPY_AUTO_SHARED_MUTEX(ptr.EV_AUTO_MUTEX_NAME)
										pRep = mds;
										pUseCount = ptr.pUseCount;
										useFreeMethod = ptr.useFreeMethod;
										/// Handle zero pointer gracefully to manage STL containers
										if(pUseCount)
										{
											++(*pUseCount);
										}
									}
								}
							}
						}
					}
                }
            public:
                MemoryDataStreamPtr() : CSharedPtr<EarthView::World::Core::CMemoryDataStream>() {}
                explicit MemoryDataStreamPtr(EarthView::World::Core::CMemoryDataStream *rep) : CSharedPtr<EarthView::World::Core::CMemoryDataStream>(rep) {}
                explicit MemoryDataStreamPtr(EarthView::World::Core::CMemoryDataStream *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : CSharedPtr<EarthView::World::Core::CMemoryDataStream>(rep, inFreeMethod) {}
                MemoryDataStreamPtr(const MemoryDataStreamPtr &r) : CSharedPtr<EarthView::World::Core::CMemoryDataStream>(r) {}
                explicit MemoryDataStreamPtr(DataStreamPtr& ptr)
                {
					if(!ptr.isNull())
					{
						EarthView::World::Core::CDataStream* ds = ptr.getPointer();
						EarthView::World::Core::CMemoryDataStream* mds = dynamic_cast<EarthView::World::Core::CMemoryDataStream*>(ds);
                        if(mds == NULL && ds != NULL)
                        {
                            EarthView::World::Core::CMemoryDataStream* stream = EV_NEW EarthView::World::Core::CMemoryDataStream(*ds);
                            this->bind(stream);
                        }
                        else if(mds != NULL)
                        {
							EV_SET_AUTO_SHARED_MUTEX_NULL
							EV_MUTEX_CONDITIONAL(ptr.EV_AUTO_MUTEX_NAME)
							{
								EV_LOCK_MUTEX(*ptr.EV_AUTO_MUTEX_NAME)
								EV_COPY_AUTO_SHARED_MUTEX(ptr.EV_AUTO_MUTEX_NAME)
								pRep = mds;
								pUseCount = ptr.pUseCount;
								useFreeMethod = ptr.useFreeMethod;
								/// Handle zero pointer gracefully to manage STL containers
								if(pUseCount)
								{
									++(*pUseCount);
								}
							}
                        }
                    }

                }

                EarthView::World::Core::CMemoryDataStream *get() const
                {
                    return CSharedPtr<EarthView::World::Core::CMemoryDataStream>::get();
                }
                operator DataStreamPtr()const
                {
                    EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

                        EarthView::World::Core::DataStreamPtr ptr;
                        ptr.pRep = static_cast<EarthView::World::Core::CDataStream *>(getPointer());
#if EV_THREAD_SUPPORT
                        ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
                        ptr.pUseCount = useCountPointer();
                        ptr.useFreeMethod = useFreeMethod;
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                        return ptr;
                    }
                    else
                    {
                        return DataStreamPtr();
                    }
                }
            };
            /** Common subclass of CDataStream for handling data from
            	std::basic_istream.
            */
            class EV_CORE_DLL CFileStreamDataStream : public EarthView::World::Core::CDataStream
            {
            ev_private:
                CFileStreamDataStream(EarthView::World::Core::CNameValuePairList *pList);
            protected:
                //// Reference to source stream (read)
                std::istream *mpInStream;
                //// Reference to source file stream (read-only)
                std::ifstream *mpFStreamRO;
                //// Reference to source file stream (read-write)
                std::fstream *mpFStream;
                ev_bool mFreeOnClose;

                void determineAccess();
            ev_private:
                /** Construct a read-only stream from an STL stream
                @param s Pointer to source stream
                @param freeOnClose Whether to delete the underlying stream on
                    destruction of this class
                */
                CFileStreamDataStream(std::ifstream *s, ev_bool freeOnClose);
                CFileStreamDataStream(std::ifstream *s);
                /** Construct a read-write stream from an STL stream
                @param s Pointer to source stream
                @param freeOnClose Whether to delete the underlying stream on
                destruction of this class
                */
                CFileStreamDataStream(std::fstream *s, ev_bool freeOnClose);
                CFileStreamDataStream(std::fstream *s);
                /** Construct named read-only stream from an STL stream
                @param name The name to give this stream
                @param s Pointer to source stream
                @param freeOnClose Whether to delete the underlying stream on
                    destruction of this class
                */
                CFileStreamDataStream(const EVString &name, std::ifstream *s, ev_bool freeOnClose );
                CFileStreamDataStream(const EVString &name, std::ifstream *s);
                /** Construct named read-write stream from an STL stream
                @param name The name to give this stream
                @param s Pointer to source stream
                @param freeOnClose Whether to delete the underlying stream on
                destruction of this class
                */
                CFileStreamDataStream(const EVString &name, std::fstream *s, ev_bool freeOnClose );
                CFileStreamDataStream(const EVString &name, std::fstream *s);
                /** Construct named read-only stream from an STL stream, and tell it the size
                @remarks
                    This variant tells the class the size of the stream too, which
                    means this class does not need to seek to the end of the stream
                    to determine the size up-front. This can be beneficial if you have
                    metadata about the contents of the stream already.
                @param name The name to give this stream
                @param s Pointer to source stream
                @param size Size of the stream contents in bytes
                @param freeOnClose Whether to delete the underlying stream on
                    destruction of this class. If you specify 'true' for this you
                	MEMCATEGRORY_GENERAL.
                */
                CFileStreamDataStream(const EVString &name, std::ifstream *s, ev_size_t size, ev_bool freeOnClose);
                CFileStreamDataStream(const EVString &name, std::ifstream *s, ev_size_t size);
                /** Construct named read-write stream from an STL stream, and tell it the size
                @remarks
                This variant tells the class the size of the stream too, which
                means this class does not need to seek to the end of the stream
                to determine the size up-front. This can be beneficial if you have
                metadata about the contents of the stream already.
                @param name The name to give this stream
                @param s Pointer to source stream
                @param size Size of the stream contents in bytes
                @param freeOnClose Whether to delete the underlying stream on
                destruction of this class. If you specify 'true' for this you
                MEMCATEGRORY_GENERAL.
                */
                CFileStreamDataStream(const EVString &name, std::fstream *s, ev_size_t size, ev_bool freeOnClose);
                CFileStreamDataStream(const EVString &name, std::fstream *s, ev_size_t size);
            public:
                ~CFileStreamDataStream();
                /** @copydoc CDataStream::read
                */
                ev_size_t read(void *buf, ev_size_t count);
                /** @copydoc CDataStream::write
                */
                ev_size_t write(const void *buf, ev_size_t count);
                /** @copydoc CDataStream::readLine
                */
                ev_size_t readLine(ev_char *buf, ev_size_t maxCount, const EVString &delim );
                ev_size_t readLine(ev_char *buf, ev_size_t maxCount);

                /** @copydoc CDataStream::skip
                */
                void skip(ev_int32 count);

                /** @copydoc CDataStream::seek
                */
                void seek( ev_size_t pos );
                /** @copydoc CDataStream::tell
                */
                ev_size_t tell() const;
                /** @copydoc CDataStream::eof
                */
                ev_bool eof() const;
                /** @copydoc CDataStream::close
                */
                void close();


            };
            /** Common subclass of CDataStream for handling data from C-style file
            	handles.
            @remarks
                Use of this class is generally discouraged; if you want to wrap file
                CFileStreamDataStream. However, since there are quite a few applications
                and libraries still wedded to the old FILE handle access, this stream
                wrapper provides some backwards compatibility.
            */

			/*	for variant length.	made by zhangchaochao*/
			class EV_CORE_DLL CBufferDataStream : public EarthView::World::Core::CDataStream
            {
			ev_private:
				CBufferDataStream(_in EarthView::World::Core::CNameValuePairList *pList);
			protected:
				std::stringbuf mBuf;
				std::iostream* mpStream;
				ev_size_t mCurOffset;
				
			public:
				CBufferDataStream(EarthView::World::Core::CDataStream& stream);
               
				CBufferDataStream(const ev_char* stream,ev_uint32 size);

				CBufferDataStream();
				CBufferDataStream(const EVString& name);
               
                virtual ~CBufferDataStream();


                virtual ev_size_t read(void *buf, ev_size_t count);
                
                virtual ev_size_t write(const void *buf, ev_size_t count);
               
                virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount, const EVString &delim );
                virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount);

              
                virtual EVString getLine( ev_bool trimAfter);
                virtual EVString getLine( );
              
                virtual EVString getAsString();
               
                virtual ev_size_t skipLine(const EVString &delim);
                virtual ev_size_t skipLine();
                
                virtual void skip(ev_int32 count);

                
                virtual void seek( ev_size_t pos );

           
                virtual ev_size_t tell() const;
               
                virtual ev_bool eof() const;
                               
                virtual void close();

			};


            class EV_CORE_DLL CFileHandleDataStream : public EarthView::World::Core::CDataStream
            {
            protected:
                FILE *mFileHandle;
            ev_private:
                CFileHandleDataStream(EarthView::World::Core::CNameValuePairList *pList);
            ev_private:
                //// Create stream from a C file handle
                CFileHandleDataStream(FILE *handle, ev_uint16 accessMode );
                CFileHandleDataStream(FILE *handle);
                //// Create named stream from a C file handle
                CFileHandleDataStream(const EVString &name, FILE *handle, ev_uint16 accessMode);
                CFileHandleDataStream(const EVString &name, FILE *handle);

			public:
				//// Create stream from a binary file(exist or not)
				CFileHandleDataStream(const EVString &strFullPath, ev_uint16 accessMode);
            public:
                ~CFileHandleDataStream();
                /** @copydoc CDataStream::read
                */
                ev_size_t read(void *buf, ev_size_t count);
                /** @copydoc CDataStream::write
                */
                ev_size_t write(const void *buf, ev_size_t count);
                /** @copydoc CDataStream::skip
                */
                void skip(ev_int32 count);

                /** @copydoc CDataStream::seek
                */
                void seek( ev_size_t pos );
                /** @copydoc CDataStream::tell
                */
                ev_size_t tell() const;
                /** @copydoc CDataStream::eof
                */
                ev_bool eof() const;
                /** @copydoc CDataStream::close
                */
                void close();
            };

			class EV_CORE_DLL CSqlBlobStream :
				public EarthView::World::Core::CDataStream
			{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CSqlBlobStream();
ev_private:
					/// <summary>
					/// 用于封装的默认构造函数
					/// </summary>
					/// <param name="pList">基于键值对的构造参数</param>
					/// <returns></returns>
					CSqlBlobStream( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 读取指定长度数据到指定缓存中，读取完成，游标下移Count个位置。
					/// </summary>
					/// <param name="buf">缓存地址</param>
					/// <param name="count">读取数据大小</param>
					/// <returns>实际读取数据长度</returns>
					virtual ev_size_t read(void *buf, ev_size_t count);
					/// <summary>
					/// 跳过指定长度的数据。
					/// </summary>
					/// <param name="count">跳过数据长度</param>
					/// <returns></returns>
					virtual void skip(ev_int32 count);
					/// <summary>
					/// 游标位置移动到指定位置上
					/// </summary>
					/// <param name="pos">指定位置</param>
					/// <returns></returns>
					virtual void seek( ev_size_t pos );
					/// <summary>
					/// 获取游标位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>游标位置</returns>
					virtual ev_size_t tell() const;
					/// <summary>
					/// 判断读取是否结束
					/// </summary>
					/// <param name=""></param>
					/// <returns>读取结束，返回true;否则，返回false</returns>
					virtual ev_bool eof() const;
					/// <summary>
					/// 关闭流
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void close();
					/// <summary>
					/// 转换为内存流
					/// </summary>
					/// <param name=""></param>
					/// <returns>内存流对象
					/// SqlServer 数据库Blob流对象，只有当pos ！= 0的时候，返回空。</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr toDataStream();
					
					/*---------不支持方法-----------------*/

					/// <summary>
					/// 从指定缓存中写入指定长度的数据。不支持此方法，方法无效。
					/// </summary>
					/// <param name="buf">缓存地址</param>
					/// <param name="count">读取数据大小</param>
					/// <returns>实际读取数据长度</returns>
					virtual ev_size_t write(const void *buf, ev_size_t count);
					
					virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount, const EVString &delim );
					
					virtual ev_size_t readLine(ev_char *buf, ev_size_t maxCount);
					
					virtual EVString getLine( ev_bool trimAfter);
					
					virtual EVString getLine( );
					
					virtual EVString getAsString();
					
					virtual ev_size_t skipLine(const EVString &delim);
                    
					virtual ev_size_t skipLine();
				public:
					/// <summary>
					/// 获取驱动名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>驱动名称</returns>
					virtual EVString DriverName() const;
					/// <summary>
					/// 获取原始数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据首地址</returns>
					virtual const ev_char* data() const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					explicit CSqlBlobStream();
			};


			class EV_CORE_DLL MemoryDataStreamVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Core::MemoryDataStreamPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Core::MemoryDataStreamPtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				MemoryDataStreamVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				MemoryDataStreamVector();

				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Core::MemoryDataStreamPtr const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Core::MemoryDataStreamPtr& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Core::MemoryDataStreamPtr& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Core::MemoryDataStreamPtr& at(_in ev_uint32 pos);

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Core::MemoryDataStreamPtr const &at(_in ev_uint32 pos) const;

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Core::MemoryDataStreamPtr const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void reserve(ev_size_t count);
			};
            /** @} */
            /** @} */
        }
    }
}

#endif

