#ifndef _STREAM_ARCHIVE_H_
#define _STREAM_ARCHIVE_H_

#pragma once

#include "graphic/graphic_config.h"
#include "core/archivefactory.h"

namespace EarthView {
	namespace World{
		namespace Graphic {


			class  EV_GRAPHIC_DLL CStreamArchive   : public  EarthView::World::Core::CArchive  
			{

			ev_private:
				CStreamArchive(_in EarthView::World::Core::CNameValuePairList *pList );

			public:
				CStreamArchive(const EVString &name, const EVString &archType);
				~CStreamArchive();


				//// @copydoc CArchive::isCaseSensitive
				ev_bool isCaseSensitive() const;


				//// @copydoc CArchive::load
				void load();
				//// @copydoc CArchive::unload
				void unload();

				//zxt add
				void addItem(const EVString &filename, EarthView::World::Core::DataStreamPtr item);



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

			protected:
				EV_AUTO_MUTEX
				mutable EarthView::World::Core::FileInfoList mFileList;
				mutable map<EVString, EarthView::World::Core::DataStreamPtr> mStreamTab;
			};



			class  EV_GRAPHIC_DLL CStreamArchiveFactory   : public  EarthView::World::Core::CArchiveFactory  
			{
ev_private:
				CStreamArchiveFactory(_in EarthView::World::Core::CNameValuePairList *pList ){}

			public:
				CStreamArchiveFactory(){}
				virtual ~CStreamArchiveFactory();


				//// @copydoc FactoryObj::getType
				EVString getType() const;


				//// @copydoc FactoryObj::createInstance
				_extfree EarthView::World::Core::CArchive *createInstance( const EVString &name );


				//// @copydoc FactoryObj::destroyInstance
				void destroyInstance( EarthView::World::Core::CArchive *arch);
			};
 
		}
	}
}

#endif //_STREAM_ARCHIVE_H_
