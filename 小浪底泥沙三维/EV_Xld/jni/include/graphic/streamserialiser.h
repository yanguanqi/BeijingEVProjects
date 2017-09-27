#ifndef __StreamSerialiser_H__
#define __StreamSerialiser_H__
#include "graphic/graphic_config.h"
#include <core/datastream.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector2;
				class CVector3;
				class CVector4;
				class CQuaternion;
				class CMatrix3;
				class CMatrix4;
				class CAxisAlignedBox;
				class CSphere;
				class CPlane;
				class CRay;
				class CRadian;
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
            class CNode;
            /***** Utility class providing helper methods for reading / writing
            	structured data held in a CDataStream.
            @remarks
            	The structure of a file read / written by this class is a series of
            	'chunks'. A chunk-based format has the advantage of being extensible later,
            	and it's robust, in that a reader can skip chunks that they are not
            	able (or willing) to process.
            @par
            	Chunks are contained serially in the file, but they can also be
            	nested in order both to provide context, and to group chunks together for
            	potential skipping.
            ****/
            class EV_GRAPHIC_DLL CStreamSerialiser : public EarthView::World::Core::CAllocatedObject
            {
            public:
                //// The endianness of files
                enum Endian
                {
                    //// Automatically determine endianness
                    ENDIAN_AUTO,
                    //// Use big endian (0x1000 is serialised as 0x10 0x00)
                    ENDIAN_BIG,
                    //// Use little endian (0x1000 is serialised as 0x00 0x10)
                    ENDIAN_LITTLE
                };
                //// The storage format of Real values
                enum RealStorageFormat
                {
                    REAL_FLOAT,
                    REAL_DOUBLE
                };

                //// Definition of a chunk of data in a file
                ///struct Chunk ;
                class EV_GRAPHIC_DLL Chunk : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    Chunk(EarthView::World::Core::CNameValuePairList *pList): id(0), version(1), length(0), offset(0) {}
                public:
                    //// Identifier of the chunk (for example from makeIdentifier)  (stored)
                    ev_uint32 id;
                    //// Version of the chunk (stored)
                    ev_uint16 version;
                    //// Length of the chunk data in bytes, excluding the header of this chunk (stored)
                    ev_uint32 length;
                    //// Location of the chunk (header) in bytes from the start of a stream (derived)
                    ev_uint32 offset;
                    Chunk() : id(0), version(1), length(0), offset(0) {}
                };
                /***** Constructor.
                @param stream The stream on which you will read / write data.
                @param endianMode The endian mode in which to read / writedata. If left at
                	the default, when writing the endian mode will be the native platform mode,
                	and when reading it's expected that the first chunk encountered will be
                	the header chunk, which will determine the endian mode.
                @param autoHeader If true, the first write or read to this stream will
                	automatically read / write the header too. This is required if you
                	set endianMode to ENDIAN_AUTO, but if you manually set the endian mode,
                	then you can skip writing / reading the header if you wish, if for example
                	this stream is midway through a file which has already included header
                	information.
                @param realFormat Set the format you want to write reals in. Only useful for files that
                	you're writing (since when reading this is picked up from the file),
                	and can only be changed if autoHeader is true, since real format is stored in the header.
                ****/
                CStreamSerialiser(const EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CStreamSerialiser::Endian endianMode ,
                                  ev_bool autoHeader , EarthView::World::Graphic::CStreamSerialiser::RealStorageFormat realFormat);
                CStreamSerialiser(const EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CStreamSerialiser::Endian endianMode,
                                  ev_bool autoHeader);
                CStreamSerialiser(const EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CStreamSerialiser::Endian endianMode);
                CStreamSerialiser(const EarthView::World::Core::DataStreamPtr &stream);
            ev_private:
                CStreamSerialiser(EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CStreamSerialiser();
                /***** Get the endian mode.
                @remarks
                	If the result is ENDIAN_AUTO, this mode will change when the first piece of
                	data is read / written.
                ****/
                virtual EarthView::World::Graphic::CStreamSerialiser::Endian getEndian() const;
                /***** Pack a 4-character code into a 32-bit identifier.
                @remarks
                	You can use this to generate id's for your chunks based on friendlier
                	4-character codes rather than assigning numerical IDs, if you like.
                @param code EVString to pack - must be 4 characters.
                ****/
                static ev_uint32 makeIdentifier(const EVString &code);
                /***** Report the current depth of the chunk nesting, whether reading or writing.
                @remarks
                	Returns how many levels of nested chunks are currently being processed,
                	either writing or reading. In order to tidily finish, you must call
                	read/writeChunkEnd this many times.
                ****/
                ev_size_t getCurrentChunkDepth() const;
                /***** Get the ID of the chunk that's currently being read/written, if any.
                @returns The id of the current chunk being read / written (at the tightest
                	level of nesting), or zero if no chunk is being processed.
                ****/
                ev_uint32 getCurrentChunkID() const;
                /***** Get the current byte position relative to the start of the data section
                	of the last chunk that was read or written.
                @returns the offset. Note that a return value of 0 means that either the
                	position is at the start of the chunk data section (ie right after the
                	header), or that no chunk is currently active. Use getCurrentChunkID
                	or getCurrentChunkDepth to determine if a chunk is active.
                ****/
                ev_size_t getOffsetFromChunkStart() const;
                /***** Reads the start of the next chunk in the file.
                @remarks
                	Files are serialised in a chunk-based manner, meaning that each section
                	of data is prepended by a chunk header. After reading this chunk header,
                	the next set of data is available directly afterwards.
                @note
                	When you have finished with this chunk, you should call readChunkEnd.
                	This will perform a bit of validation and clear the chunk from
                	the stack.
                @returns The EarthView::World::Graphic::CStreamSerialiser::Chunk that comes next
                ****/
                virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk *readChunkBegin();
                /***** Reads the start of the next chunk so ev_int32 as it's of a given ID and version.
                @remarks
                	This method operates like readChunkBegin, except it checks the ID and
                	version.
                @param id The ID you're expecting. If the next chunk isn't of this ID, then
                	the chunk read is undone and the method returns null.
                @param maxVersion The maximum version you're able to process. If the ID is correct
                	but the version	exceeds what is passed in here, the chunk is skipped over,
                	the problem logged and null is returned.
                @param msg Descriptive text added to the log if versions are not compatible
                @returns The chunk if it passes the validation.
                ****/
                virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk *readChunkBegin(ev_uint32 id, ev_uint16 maxVersion, const EVString &msg);
                virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk *readChunkBegin(ev_uint32 id, ev_uint16 maxVersion);
                /***** Call this to 'rewind' the stream to just before the start of the current
                	chunk.
                @remarks
                	The most common case of wanting to use this is if you'd calledReadChunkBegin(),
                	but the chunk you read wasn't one you wanted to process, and rather than
                	skipping over it (which readChunkEnd() would do), you want to backtrack
                	and give something else an opportunity to read it.
                @param id The id of the chunk that you were reading (for validation purposes)
                ****/
                virtual void undoReadChunk(ev_uint32 id);
                /***** Call this to 'peek' at the next chunk ID without permanently moving the stream pointer. ****/
                virtual ev_uint32 peekNextChunkID();

                /***** Finish the reading of a chunk.
                @remarks
                	You can call this method at any point after calling readChunkBegin, even
                	if you didn't read all the rest of the data in the chunk. If you did
                	not read to the end of a chunk, this method will automatically skip
                	over the remainder of the chunk and position the stream just after it.
                @param id The id of the chunk that you were reading (for validation purposes)
                ****/
                virtual void readChunkEnd(ev_uint32 id);
                /***** Return whether the current data pointer is at the end of the current chunk.
                @param id The id of the chunk that you were reading (for validation purposes)
                ****/
                virtual ev_bool isEndOfChunk(ev_uint32 id);
                //// Reports whether the stream is at the end of file
                virtual ev_bool eof() const;
                /***** Get the definition of the current chunk being read (if any). ****/
                virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk *getCurrentChunk() const;
                /***** Begin writing a new chunk.
                @remarks
                	This starts the process of writing a new chunk to the stream. This will
                	write the chunk header for you, and store a pointer so that the
                	class can automatically go back and fill in the size for you later
                	should you need it to. If you have already begun a chunk without ending
                	it, then this method will start a nested chunk within it. Once written,
                	you can then start writing chunk-specific data into your stream.
                @note If this is the first chunk in the file
                @param id The identifier of the new chunk. EarthView::World::Core::CAny value that's unique in the
                	file context is valid, except for the numbers 0x0001 and 0x1000 which are reserved
                	for internal header identification use.
                @param version The version of the chunk you're writing
                ****/
                virtual void writeChunkBegin(ev_uint32 id, ev_uint16 version);
                virtual void writeChunkBegin(ev_uint32 id);
                /***** End writing a chunk.
                @param id The identifier of the chunk - this is really just a safety check,
                	since you can only end the chunk you most recently started.
                ****/
                virtual void writeChunkEnd(ev_uint32 id);
                /***** Write arbitrary data to a stream.
                @param buf Pointer to bytes
                @param size The size of each element to write; each will be endian-flipped if
                	necessary
                @param count The number of elements to write
                ****/
                virtual void writeData(const void *buf, ev_size_t size, ev_size_t count);
                /***** Catch-all method to write primitive types. ****/
                ///template <typename T>
                ///void write(const T* pT, ev_size_t count = 1)
                ///{
                ///	writeData(pT, sizeof(T), count);
                ///}
            ev_private:
                void write(const ev_uint32 *pT, ev_size_t count);
                void write(const ev_uint32 *pT);
                void write(const ev_uint16 *pT, ev_size_t count);
                void write(const ev_uint16 *pT);
                void write(const ev_char *pT, ev_size_t count);
                void write(const ev_char *pT);
                /// Special-case Real since we need to deal with single/double precision
                virtual void write(const Real *val, ev_size_t count);
                virtual void write(const Real *val);
                virtual void write(const EarthView::World::Spatial::Math::CVector2 *vec, ev_size_t count );
                virtual void write(const EarthView::World::Spatial::Math::CVector2 *vec);
                virtual void write(const EarthView::World::Spatial::Math::CVector3 *vec, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CVector3 *vec);
                virtual void write(const EarthView::World::Spatial::Math::CVector4 *vec, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CVector4 *vec);
                virtual void write(const EarthView::World::Spatial::Math::CQuaternion *q, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CQuaternion *q);
                virtual void write(const EarthView::World::Spatial::Math::CMatrix3 *m, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CMatrix3 *m);
                virtual void write(const EarthView::World::Spatial::Math::CMatrix4 *m, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CMatrix4 *m);
                virtual void write(const EVString *string);
                virtual void write(const EarthView::World::Spatial::Math::CAxisAlignedBox *aabb, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CAxisAlignedBox *aabb);
                virtual void write(const EarthView::World::Spatial::Math::CSphere *sphere, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CSphere *sphere);
                virtual void write(const EarthView::World::Spatial::Math::CPlane *plane, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CPlane *plane);
                virtual void write(const EarthView::World::Spatial::Math::CRay *ray, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CRay *ray);
                virtual void write(const EarthView::World::Spatial::Math::CRadian *angle, ev_size_t count);
                virtual void write(const EarthView::World::Spatial::Math::CRadian *angle);
                virtual void write(const CNode *node, ev_size_t count);
                virtual void write(const CNode *node);
                virtual void write(const ev_bool *boolean, ev_size_t count);
                virtual void write(const ev_bool *boolean);
                /***** Read arbitrary data from a stream.
                @param buf Pointer to bytes
                @param size The size of each element to read; each will be endian-flipped if
                necessary
                @param count The number of elements to read
                ****/
                virtual void readData(_out void *buf, ev_size_t size, ev_size_t count);
                /***** Catch-all method to read primitive types. ****/
                ///template <typename T>
                ///void read(T* pT, ev_size_t count = 1)
                ///{
                ///	readData((void*)pT, sizeof(T), count);
                ///}
                void read(_out ev_uint32 *pT, ev_size_t count);
                void read(_out ev_uint32 *pT);
                void read(_out _out ev_uint16 *pT, ev_size_t count);
                void read(_out ev_uint16 *pT);
                void read(_out ev_char *pT, ev_size_t count);
                void read(_out ev_char *pT);
                /// Special case Real, single/double-precision issues
                virtual void read(_out Real *val, ev_size_t count);
                virtual void read(_out Real *val);
                //// read a EarthView::World::Spatial::Math::CVector3
                virtual void read( EarthView::World::Spatial::Math::CVector2 *vec, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CVector2 *vec);
                virtual void read( EarthView::World::Spatial::Math::CVector3 *vec, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CVector3 *vec);
                virtual void read( EarthView::World::Spatial::Math::CVector4 *vec, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CVector4 *vec);
                virtual void read( EarthView::World::Spatial::Math::CQuaternion *q, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CQuaternion *q);
                virtual void read( EarthView::World::Spatial::Math::CMatrix3 *m, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CMatrix3 *m);
                virtual void read( EarthView::World::Spatial::Math::CMatrix4 *m, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CMatrix4 *m);
                virtual void read(_out EVString *string);
                virtual void read( EarthView::World::Spatial::Math::CAxisAlignedBox *aabb, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CAxisAlignedBox *aabb);
                virtual void read( EarthView::World::Spatial::Math::CSphere *sphere, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CSphere *sphere);
                virtual void read( EarthView::World::Spatial::Math::CPlane *plane, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CPlane *plane);
                virtual void read( EarthView::World::Spatial::Math::CRay *ray, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CRay *ray);
                virtual void read( EarthView::World::Spatial::Math::CRadian *angle, ev_size_t count);
                virtual void read( EarthView::World::Spatial::Math::CRadian *angle);
                virtual void read( CNode *node, ev_size_t count);
                virtual void read( CNode *node);
                virtual void read(_out ev_bool *val, ev_size_t count);
                virtual void read(_out ev_bool *val);
            protected:
                EarthView::World::Core::DataStreamPtr mStream;
                EarthView::World::Graphic::CStreamSerialiser::Endian mEndian;
                ev_bool mFlipEndian;
                ev_bool mReadWriteHeader;
                EarthView::World::Graphic::CStreamSerialiser::RealStorageFormat mRealFormat;
                typedef deque<EarthView::World::Graphic::CStreamSerialiser::Chunk *> ChunkStack;
                //// Current list of open chunks
                ChunkStack mChunkStack;
                static ev_uint32 HEADER_ID;
                static ev_uint32 REVERSE_HEADER_ID;
                static ev_uint32 CHUNK_HEADER_SIZE;
                template <typename T, typename U>
                void writeConverted(const T *src, U typeToWrite, ev_size_t count)
                {
                    U *tmp = EV_ALLOC_T(U, count);
                    U *pDst = tmp;
                    const T *pSrc = src;
                    for (ev_size_t i = 0; i < count; ++i)
                        *pDst++ = static_cast<U>(*pSrc++);
                    writeData(tmp, sizeof(U), count);
                    EV_FREE(tmp);
                }
                template <typename T, typename U>
                void readConverted(_out T *dst, U typeToRead, ev_size_t count)
                {
                    U *tmp = EV_ALLOC_T(U, count);
                    readData(tmp, sizeof(U), count);
                    T *pDst = dst;
                    const U *pSrc = tmp;
                    for (ev_size_t i = 0; i < count; ++i)
                        *pDst++ = static_cast<T>(*pSrc++);

                    EV_FREE(tmp);
                }
            ev_internal:
                virtual _extfree EarthView::World::Graphic::CStreamSerialiser::Chunk *readChunkImpl();
                virtual void writeChunkImpl(ev_uint32 id, ev_uint16 version);
                virtual void readHeader();
                virtual void writeHeader();
                virtual ev_uint32 calculateChecksum( EarthView::World::Graphic::CStreamSerialiser::Chunk *c);
                virtual void checkStream(ev_bool failOnEof,
                                         ev_bool validateReadable, ev_bool validateWriteable) const;
                virtual void checkStream(ev_bool failOnEof, ev_bool validateReadable) const;
                virtual void checkStream(ev_bool failOnEof) const;
                virtual void checkStream() const;
                virtual void flipEndian(_inout void *pData, ev_size_t size, ev_size_t count);
                virtual void flipEndian(_inout void *pData, ev_size_t size);
                virtual void determineEndianness();
                virtual EarthView::World::Graphic::CStreamSerialiser::Chunk *popChunk(ev_uint32 id);
                virtual void writeFloatsAsDoubles(const ev_real32 *val, ev_size_t count);
                virtual void writeDoublesAsFloats(const ev_real64 *val, ev_size_t count);
                virtual void readFloatsAsDoubles(_out ev_real64 *val, ev_size_t count);
                virtual void readDoublesAsFloats(_out ev_real32 *val, ev_size_t count);
            };
        }
    }
}

#endif

