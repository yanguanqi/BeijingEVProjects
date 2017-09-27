#ifndef _DBML_ARCHIVE_H_
#define _DBML_ARCHIVE_H_

#pragma once

#include "dbmlsql.h"
#include "core/archivefactory.h"

namespace EarthView {
	namespace World{
		namespace Graphic {


			class  EV_GRAPHIC_DLL CDbmlArchive   : public  EarthView::World::Core::CArchive  
			{

			ev_private:
				CDbmlArchive(_in EarthView::World::Core::CNameValuePairList *pList );

			public:
				CDbmlArchive(const EVString &name, const EVString &archType);
				~CDbmlArchive();


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

			protected:
				CDbmlSQL *mDmblSql;
				 EarthView::World::Core::FileInfoList mFileList;
				 EV_AUTO_MUTEX
			};



			class  EV_GRAPHIC_DLL CDbmlArchiveFactory   : public  EarthView::World::Core::CArchiveFactory  
			{
			public:
				CDbmlArchiveFactory();			
				virtual ~CDbmlArchiveFactory();
			ev_private:
				CDbmlArchiveFactory(EarthView::World::Core::CNameValuePairList* pList);	
			public:
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

#endif //_DBML_ARCHIVE_H_
