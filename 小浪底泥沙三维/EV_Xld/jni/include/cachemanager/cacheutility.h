#ifndef EV_CACHE_DBCONNECT_CREATOR__H
#define  EV_CACHE_DBCONNECT_CREATOR__H
#include "core/mutex.h"
#include "core/ev_time.h"
#include "databaseutility/sqldatabase.h"
#include "cachemanager/cachemanagerglobal.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
		
			class CacheFileAccessTimeManager
			{
			public:
				CacheFileAccessTimeManager();
				~CacheFileAccessTimeManager();

				static ev_void updateAccessTime(const EVString& cachefile,const EarthView::World::Core::CCoreTime& accesstime);
				static ev_void removeManagedCacheFile(const EVString& cachefile);
				static ev_void clear();
				static ev_void saveToFile();
				static ev_void resumeFromFile();
				static ev_int32 managedCacheFileCount() ;
				static EarthView::World::Core::CTime getMinimalAccessTime();
				static ev_void getManagedCacheFileByAccessTime(multimap<EarthView::World::Core::CTime, EVString>& filemap);
				static ev_bool haveCacheFile(const EVString& cachefile);
			private:
				typedef map<EVString, EarthView::World::Core::CTime> CacheFileAccessTagMap;
				static CacheFileAccessTagMap sCacheFileAccessTagMap;
				static EarthView::World::Core::CRecursiveMutex sMtx;
			};

		}}}
#endif