#ifndef EARTHVIEW_WORLD_SPATIAL3D_LOCALTILEUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_LOCALTILEUTILITY_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "core/memoryallocatedobject.h"
#include "databaseutility/sqldatabase.h"
#include "databaseutility/sqlrecord.h"
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialserverclient/webdatametainfos.h"  
#include "vector"
using namespace std;

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DEngine_DLL CacheFile
			{
ev_private:
				CacheFile(EarthView::World::Core::CNameValuePairList* pList);
			public:
				CacheFile();
				~CacheFile();
				EVString DataSourceMetaFullName;
				EVString DatasetName;
				EVString CacheFileName;
			};

			class EV_Spatial3DEngine_DLL CLocalTileUtility 
				: public EarthView::World::Core::CAllocatedObject
			{
			public:
				CLocalTileUtility();
				virtual ~CLocalTileUtility();

ev_private:
				CLocalTileUtility(EarthView::World::Core::CNameValuePairList* pList);
			ev_private:
				static void filterFilesByExt(const EVString& path,const EVString& ext,_out EarthView::World::Core::ev_stringArray& filterfiles);
				static void mergePath(const EVString& dir,const EVString& filename,_out EVString& mergepath);
				static ev_bool existDatasetFile( const EVString& datasourcePath,const EVString& datasetName,const EVString& extName );
				static ev_bool getRealPath( const EVString& datasourcePath,const EVString& datasetName ,const EVString& extName,_out EVString& folder,_out EVString& realPath);
				static ev_bool openSqliteDB(const EVString& sqlitepath,EarthView::World::Core::Database::CSqlDatabase& db);
				static ev_bool readEtm(const EVString& etmpath,_inout EarthView::World::Spatial::CEVWMTSLayerInfo& info);
				static ev_bool readEde(const EVString& etmpath,_inout EarthView::World::Spatial::CEVDEMLayerInfo& info);
				static ev_bool execSql( const EVString& sqlitepath,const EVString& sql,EarthView::World::Core::Database::CSqlRecord& record);
				//ev_private:
				static EVString getSeparator(); 
				static EVString makeCacheName(const EVString & srcName);
				static vector<CacheFile> getImageCacheFiles(const EVString& datasourcePath); 
				static ev_bool readImageCacheMetas(vector<CacheFile> &cacheFiles,_out vector<EarthView::World::Spatial::CEVWMTSLayerInfo *>& infos);
				static ev_bool readImageCacheMeta(CacheFile &cacheFile,EarthView::World::Spatial::CEVWMTSLayerInfo *info);
				static vector<CacheFile> getDemCacheFiles(const EVString &datasourcePath);
				static ev_bool readDemCacheMetas(vector<CacheFile>& cacheFiles,_out vector<EarthView::World::Spatial::CEVDEMLayerInfo*> &infos);
				static ev_bool readDemCacheMeta(CacheFile &cacheFile,EarthView::World::Spatial::CEVDEMLayerInfo* info);
			};
		}
	}
}

#endif