#ifndef __FileSystem_H__
#define __FileSystem_H__
#include "core/archive.h"
#include "core/archivefactory.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /**** Specialisation of the CArchive class to allow reading of files from
                filesystem folders / directories.
            ****/
            class EV_CORE_DLL CFileSystemArchive : public EarthView::World::Core::CArchive
            {
            protected:
                /**** Utility method to retrieve all files in a directory matching pattern.
                @param pattern File pattern
                @param recursive Whether to cascade down directories
                @param dirs Set to true if you want the directories to be listed
                    instead of files
                @param simpleList Populated if retrieving a simple list
                @param detailList Populated if retrieving a detailed list
                @param currentDir The current directory relative to the base of the
                    archive, for file naming
                ****/
                void findFiles(const EVString &pattern, ev_bool recursive, ev_bool dirs,
                               StringVector *simpleList, FileInfoList *detailList) const;
                EV_AUTO_MUTEX
            ev_private:
                CFileSystemArchive(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CFileSystemArchive(const EVString &name, const EVString &archType );

                ~CFileSystemArchive();
                //// @copydoc CArchive::isCaseSensitive
                ev_bool isCaseSensitive() const;
                //// @copydoc CArchive::load
                void load();
                //// @copydoc CArchive::unload
                void unload();
                //// @copydoc CArchive::open
                EarthView::World::Core::DataStreamPtr open(const EVString &filename) const;
                EarthView::World::Core::DataStreamPtr open(const EVString &filename, ev_bool readOnly) const;
                //// @copydoc CArchive::create
                EarthView::World::Core::DataStreamPtr create(const EVString &filename) const;
                //// @copydoc CArchive::delete
                void remove(const EVString &filename) const;
                //// @copydoc CArchive::list
                EarthView::World::Core::StringVectorPtr list(ev_bool recursive , ev_bool dirs );
                EarthView::World::Core::StringVectorPtr list(ev_bool recursive);
                EarthView::World::Core::StringVectorPtr list();
                //// @copydoc CArchive::listFileInfo
                EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive , ev_bool dirs);
                EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive );
                EarthView::World::Core::FileInfoListPtr listFileInfo( );
                //// @copydoc CArchive::find
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive , ev_bool dirs );
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern, ev_bool recursive );
                EarthView::World::Core::StringVectorPtr find(const EVString &pattern);
                //// @copydoc CArchive::findFileInfo
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive, ev_bool dirs) const;
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive) const;
                EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString &pattern) const;
                //// @copydoc CArchive::exists
                ev_bool exists(const EVString &filename);

                //// Set whether filesystem enumeration will include hidden files or not.
                //// This should be called prior to declaring and/or initializing filesystem
                //// resource locations. The default is true (ignore hidden files).
                static void setIgnoreHidden(ev_bool ignore)
                {
                    ms_IgnoreHidden = ignore;
                }
                //// Get whether hidden files are ignored during filesystem enumeration.
                static ev_bool getIgnoreHidden()
                {
                    return ms_IgnoreHidden;
                }
                static ev_bool ms_IgnoreHidden;
                ////ev_private:
                //// @copydoc CArchive::getModifiedTime
                ev_int64 getModifiedTime(const EVString &filename);
            };
            /**** Specialisation of EarthView::World::Core::CArchiveFactory for FileSystem files. ****/
            ////class EV_GRAPHIC_PRIVATE CFileSystemArchiveFactory : public EarthView::World::Core::CArchiveFactory
            class EV_CORE_DLL CFileSystemArchiveFactory : public EarthView::World::Core::CArchiveFactory
            {
            ev_private:
                CFileSystemArchiveFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CFileSystemArchiveFactory() {}
                virtual ~CFileSystemArchiveFactory() {}
                //// @copydoc FactoryObj::getType
                EVString getType() const;
                //// @copydoc FactoryObj::createInstance
                EarthView::World::Core::CArchive *createInstance( const EVString &name )
                {
                    return EV_NEW CFileSystemArchive(name, "FileSystem");
                }
                //// @copydoc FactoryObj::destroyInstance
                void destroyInstance( EarthView::World::Core::CArchive *arch)
                {
                    delete arch;
                }
            };
        }
    }
}

#endif

