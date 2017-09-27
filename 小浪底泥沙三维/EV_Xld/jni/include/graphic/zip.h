#ifndef __Zip_H__
#define __Zip_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "core/archive.h"
#include "core/archivefactory.h"
//// Forward declaration for zziplib to avoid header file dependency.
typedef struct zzip_dir		ZZIP_DIR;
typedef struct zzip_file	ZZIP_FILE;
typedef union _zzip_plugin_io zzip_plugin_io_handlers;


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Specialisation of the CArchive class to allow reading of files from a zip
                format source archive.
            @remarks
                This archive format supports all archives compressed in the standard
                zip format, including iD pk3 files.
            */
            class EV_GRAPHIC_DLL CZipArchive : public EarthView::World::Core::CArchive
            {
            protected:
                //// Handle to root zip file
                ZZIP_DIR *mZzipDir;
                //// Handle any errors from zzip
                void checkZzipError(ev_int32 zzipError, const EVString &operation) const;
                //// File list (since zziplib seems to only allow scanning of dir tree once)
                EarthView::World::Core::FileInfoList mFileList;
                //// A pointer to file io alternative implementation
                zzip_plugin_io_handlers *mPluginIo;
                EV_AUTO_MUTEX
            ev_private:
                CZipArchive(_in EarthView::World::Core::CNameValuePairList *pList );
                CZipArchive(const EVString &name, const EVString &archType, zzip_plugin_io_handlers *pluginIo);
            public:
                CZipArchive(const EVString &name, const EVString &archType);
                ~CZipArchive();
                //// @copydoc CArchive::isCaseSensitive
                ev_bool isCaseSensitive() const;
                //// @copydoc CArchive::load
                void load();
                //// @copydoc CArchive::unload
                void unload();
                //// @copydoc CArchive::open
                EarthView::World::Core::DataStreamPtr open(const EVString &filename, ev_bool readOnly) const;
                EarthView::World::Core::DataStreamPtr open(const EVString &filename) const;
                //// @copydoc CArchive::create
                EarthView::World::Core::DataStreamPtr create(const EVString &filename) const;
                //// @copydoc CArchive::remove
                void remove(const EVString &filename) const;
                //// @copydoc CArchive::list
                EarthView::World::Core::StringVectorPtr list(ev_bool recursive , ev_bool dirs);
                EarthView::World::Core::StringVectorPtr list(ev_bool recursive);
                EarthView::World::Core::StringVectorPtr list();
                //// @copydoc CArchive::listFileInfo
                EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive , ev_bool dirs);
                EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive);
                EarthView::World::Core::FileInfoListPtr listFileInfo();
                //// @copydoc CArchive::find
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive, ev_bool dirs);
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive);
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern);
                //// @copydoc CArchive::findFileInfo
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive , ev_bool dirs) const;
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive ) const;
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern) const;
                //// @copydoc CArchive::exists
                ev_bool exists(const EVString &filename);
                ///ev_private:
                //// @copydoc CArchive::getModifiedTime
                ev_int64 getModifiedTime(const EVString &filename);
            };
            /** Specialisation of CArchiveFactory for Zip files. */
            class EV_GRAPHIC_PRIVATE CZipArchiveFactory : public EarthView::World::Core::CArchiveFactory
            {
            public:
                virtual ~CZipArchiveFactory();
                //// @copydoc FactoryObj::getType
                EVString getType() const;
                //// @copydoc FactoryObj::createInstance
                _extfree EarthView::World::Core::CArchive *createInstance( const EVString &name );
                //// @copydoc FactoryObj::destroyInstance
                void destroyInstance( EarthView::World::Core::CArchive *arch);
            };
            /*
            [7/2/2012 WangJian]
              update to 1.8
              move this class to datastream.h
            */
            ////** Template version of cache based on static array.
            ///'cacheSize' defines size of cache in bytes. */
            ///template <ev_size_t cacheSize>
            ///class CStaticCache
            ///{
            ///protected:
            ///	/// Static buffer
            ///	ev_char mBuffer[cacheSize];
            ///	/// Number of bytes valid in cache (written from the beginning of static buffer)
            ///	ev_size_t mValidBytes;
            ///	/// Current read position
            ///	ev_size_t mPos;
            ///public:
            ///	/// Constructor
            ///	CStaticCache()
            ///	{
            ///		mValidBytes = 0;
            ///		mPos = 0;
            ///	}
            ///	/** Cache data pointed by 'buf'. If 'count' is greater than cache size, we cache only last bytes.
            ///	Returns number of bytes written to cache. */
            ///	ev_size_t cacheData(const void* buf, ev_size_t count)
            ///	{
            ///		EV_ASSERT(avail() == 0 && "It is assumed that you cache data only after you have read everything.");
            ///		if (count < cacheSize)
            ///		{
            ///			// number of bytes written is less than total size of cache
            ///			if (count + mValidBytes <= cacheSize)
            ///			{
            ///				// just append
            ///				memcpy(mBuffer + mValidBytes, buf, count);
            ///				mValidBytes += count;
            ///			}
            ///			else
            ///			{
            ///				ev_size_t begOff = count - (cacheSize - mValidBytes);
            ///				// override old cache content in the beginning
            ///				memmove(mBuffer, mBuffer + begOff, mValidBytes - begOff);
            ///				// append new data
            ///				memcpy(mBuffer + cacheSize - count, buf, count);
            ///				mValidBytes = cacheSize;
            ///			}
            ///			mPos = mValidBytes;
            ///			return count;
            ///		}
            ///		else
            ///		{
            ///			// discard all
            ///			memcpy(mBuffer, (const ev_char*)buf + count - cacheSize, cacheSize);
            ///			mValidBytes = mPos = cacheSize;
            ///			return cacheSize;
            ///		}
            ///	}
            ///	/** Read data from cache to 'buf' (maximum 'count' bytes). Returns number of bytes read from cache. */
            ///	ev_size_t read(void* buf, ev_size_t count)
            ///	{
            ///		ev_size_t rb = avail();
            ///		rb = (rb < count) ? rb : count;
            ///		memcpy(buf, mBuffer + mPos, rb);
            ///		mPos += rb;
            ///		return rb;
            ///	}
            ///	/** Step back in cached stream by 'count' bytes. Returns 'true' if cache contains resulting position. */
            ///	ev_bool rewind(ev_size_t count)
            ///	{
            ///		if (mPos < count)
            ///		{
            ///			clear();
            ///			return false;
            ///		}
            ///		else
            ///		{
            ///			mPos -= count;
            ///			return true;
            ///		}
            ///	}
            ///	/** Step forward in cached stream by 'count' bytes. Returns 'true' if cache contains resulting position. */
            ///	ev_bool ff(ev_size_t count)
            ///	{
            ///		if (avail() < count)
            ///		{
            ///			clear();
            ///			return false;
            ///		}
            ///		else
            ///		{
            ///			mPos += count;
            ///			return true;
            ///		}
            ///	}
            ///	/** Returns number of bytes available for reading in cache after rewinding. */
            ///	ev_size_t avail() const
            ///	{
            ///		return mValidBytes - mPos;
            ///	}
            ///	/** Clear the cache */
            ///	void clear()
            ///	{
            ///		mValidBytes = 0;
            ///		mPos = 0;
            ///	}
            ///};
            /*
            [7/2/2012 WangJian]
              add for 1.8
            */
            /** Specialisation of ZipArchiveFactory for embedded Zip files. */
            class EV_GRAPHIC_PRIVATE CEmbeddedZipArchiveFactory : public CZipArchiveFactory
            {
            protected:
                //// A static pointer to file io alternative implementation for the embedded files
                static zzip_plugin_io_handlers *mPluginIo;
            public:
                CEmbeddedZipArchiveFactory();
                virtual ~CEmbeddedZipArchiveFactory();
                //// @copydoc FactoryObj::getType
                EVString getType() const;
                //// @copydoc FactoryObj::createInstance
                EarthView::World::Core::CArchive *createInstance( const EVString &name )
                {
                    CZipArchive *resZipArchive = EV_NEW CZipArchive(name, "EmbeddedZip", mPluginIo);
                    return resZipArchive;
                }

                //// Add an embedded file to the embedded file list
                static void addEmbbeddedFile(const EVString &name, const ev_uint8 *fileData,
                                             size_t fileSize, void *decryptFunc);
                //// Remove an embedded file to the embedded file list
                static void removeEmbbeddedFile(const EVString &name);
            ev_private:

                /** a function type to decrypt embedded zip file
                @param pos pos in file
                @param buf current buffer to decrypt
                @param len - length of buffer
                @return success
                */
                typedef bool (*DecryptEmbeddedZipFileFunc)(size_t pos, void *buf, size_t len);

            };
            /** Dummy version of cache to test no caching.
            If you want to test, just uncomment it and add 'No' prefix
            to type in line 'CStaticCache<2 * EV_STREAM_TEMP_SIZE> mCache;' of class CZipDataStream */
            /*template <ev_size_t cacheSize>
            class CNoStaticCache
            {
            public:
            	CNoStaticCache() { }

            	ev_size_t cacheData(const void* buf, ev_size_t count) { return 0; }
            	ev_size_t read(void* buf, ev_size_t count) { return 0; }

            	ev_bool rewind(ev_size_t count) { return false; }
            	ev_bool ff(ev_size_t count) { return false; }

            	ev_size_t avail() const { return 0; }

            	void clear() { }
            };*/
            /** Specialisation of CDataStream to handle streaming data from zip archives. */
            class EV_GRAPHIC_PRIVATE CZipDataStream : public EarthView::World::Core::CDataStream
            {
            protected:
                ZZIP_FILE *mZzipFile;
                //// We need caching because sometimes serializers step back in data stream and zziplib behaves slow
                EarthView::World::Core::StaticCache<2 * EV_STREAM_TEMP_SIZE> mCache;
            public:
                //// Unnamed constructor
                CZipDataStream(ZZIP_FILE *zzipFile, ev_size_t uncompressedSize);
                //// Constructor for creating named streams
                CZipDataStream(const EVString &name, ZZIP_FILE *zzipFile, ev_size_t uncompressedSize);
                ~CZipDataStream();
                //// @copydoc CDataStream::read
                ev_size_t read(void *buf, ev_size_t count);
                //// @copydoc CDataStream::write
                ev_size_t write(void *buf, ev_size_t count);
                //// @copydoc CDataStream::skip
                void skip(ev_int32 count);
                //// @copydoc CDataStream::seek
                void seek( ev_size_t pos );
                //// @copydoc CDataStream::seek
                ev_size_t tell() const;
                //// @copydoc CDataStream::eof
                ev_bool eof() const;
                //// @copydoc CDataStream::close
                void close();

            };
        }
    }
}

#endif

