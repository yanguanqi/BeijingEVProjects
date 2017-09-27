#ifndef __DEFLATE_H__
#define __DEFLATE_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include <core/datastream.h>

//// forward decls
struct z_stream_s;
typedef struct z_stream_s z_stream;
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Stream which compresses / uncompresses data using the 'deflate' compression
            	algorithm.
            @remarks
            	This stream is designed to wrap another stream for the actual source / destination
            	of the compressed data, it has no concrete source / data itself. The idea is
            	that you pass uncompressed data through this stream, and the underlying
            	stream reads/writes compressed data to the final source.
            @note
            	This is an alternative to using a compressed archive since it is able to
            	compress & decompress regardless of the actual source of the stream.
            	You should avoid using this with already compressed archives.
            	Also note that this cannot be used as a read / write stream, only a read-only
            	or write-only stream.
            */
            class EV_GRAPHIC_DLL CDeflateStream : public EarthView::World::Core::CDataStream
            {
            protected:
                EarthView::World::Core::DataStreamPtr mCompressedStream;
                EarthView::World::Core::DataStreamPtr mTmpWriteStream;
                EVString mTempFileName;
                z_stream *mZStream;
                ev_size_t mCurrentPos;

                //// Cache for read data in case skipping around
                 EarthView::World::Core::StaticCache<16 * EV_STREAM_TEMP_SIZE> mReadCache;

                //// Intermediate buffer for read / write
                ev_uchar *mTmp;

                //// Whether the underlying stream is valid compressed data
                ev_bool mIsCompressedValid;


                ev_void init();
                ev_void destroy();
                ev_void compressFinal();
            ev_private:
                CDeflateStream(EarthView::World::Core::CNameValuePairList *pList);
            public:

                CDeflateStream(const EarthView::World::Core::DataStreamPtr &compressedStream, const EVString &tmpFileName /*= ""*/);
                CDeflateStream(const EarthView::World::Core::DataStreamPtr &compressedStream);

                CDeflateStream(const EVString &name, const EarthView::World::Core::DataStreamPtr &compressedStream, const EVString &tmpFileName/* = ""*/);
                CDeflateStream(const EVString &name, const EarthView::World::Core::DataStreamPtr &compressedStream);

                ~CDeflateStream();

                /** Returns whether the compressed stream is valid deflated data.
                 @remarks
                	If you pass this class a READ stream which is not compressed with the
                	deflate algorithm, this method returns false and all read commands
                	will actually be executed as passthroughs as a fallback.
                */
                ev_bool isCompressedStreamValid() const
                {
                    return mIsCompressedValid;
                }

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
        }
    }
}

#endif
