#ifndef __APKFileSystemArchive_H__
#define __APKFileSystemArchive_H__

#include "core/archive.h"
#include "core/archivefactory.h"
#include <android/asset_manager.h>
using namespace  EarthView::World::Core;
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{

			class APKFileSystemArchive : public EarthView::World::Core::CArchive
			{
			private:
				AAssetManager* mAssetMgr;
				EVString mPathPreFix;

			public:
				APKFileSystemArchive(const EVString& name, const EVString& archType, AAssetManager* assetMgr);
				~APKFileSystemArchive();

				/// @copydoc CArchive::isCaseSensitive
				bool isCaseSensitive(void) const;

				/// @copydoc CArchive::load
				void load();
				/// @copydoc CArchive::unload
				void unload();

				/// @copydoc CArchive::open
				//DataStreamPtr open(const EVString& filename, bool readOnly = true) const;
				DataStreamPtr open(const EVString &filename) const;
				DataStreamPtr open(const EVString &filename, ev_bool readOnly ) const;

				/// @copydoc CArchive::create
				DataStreamPtr create(const EVString& filename) const;

				/// @copydoc CArchive::delete
				void remove(const EVString& filename) const;

				/// @copydoc CArchive::list
				//StringVectorPtr list(bool recursive = true, bool dirs = false);
				StringVectorPtr list(ev_bool recursive, ev_bool dirs);
				StringVectorPtr list(ev_bool recursive);
				StringVectorPtr list();

				/// @copydoc CArchive::listFileInfo
				//FileInfoListPtr listFileInfo(bool recursive = true, bool dirs = false);
				FileInfoListPtr listFileInfo(ev_bool recursive , ev_bool dirs );
				FileInfoListPtr listFileInfo(ev_bool recursive);
				FileInfoListPtr listFileInfo();

				/// @copydoc CArchive::find
				//StringVectorPtr find(const EVString& pattern, bool recursive = true);
				StringVectorPtr find(const EVString &pattern, ev_bool recursive , ev_bool dirs );
				StringVectorPtr find(const EVString &pattern, ev_bool recursive );
				StringVectorPtr find(const EVString &pattern);

				/// @copydoc CArchive::findFileInfo
				//FileInfoListPtr findFileInfo(const EVString& pattern, bool recursive = true, bool dirs = false) const;
				FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive, ev_bool dirs ) const;
				FileInfoListPtr findFileInfo(const EVString &pattern, ev_bool recursive ) const;
				FileInfoListPtr findFileInfo(const EVString &pattern) const;

				/// @copydoc CArchive::exists
				bool exists(const EVString& filename);

				/// @copydoc CArchive::getModifiedTime
				ev_int64 getModifiedTime(const EVString& filename);
			};

			class APKFileSystemArchiveFactory : public CArchiveFactory
			{
			public:
				APKFileSystemArchiveFactory(AAssetManager* assetMgr) : mAssetMgr(assetMgr) {}
				virtual ~APKFileSystemArchiveFactory() {}
				/// @copydoc FactoryObj::getType
				EVString getType(void) const;
				/// @copydoc FactoryObj::createInstance
				CArchive *createInstance( const EVString& name )
				{
					return EV_NEW APKFileSystemArchive(name, getType(), mAssetMgr);
				}

				/// @copydoc FactoryObj::destroyInstance
				void destroyInstance( CArchive* arch) { EV_DELETE arch; }
			private:
				AAssetManager* mAssetMgr;
			};
		}}}
#endif
