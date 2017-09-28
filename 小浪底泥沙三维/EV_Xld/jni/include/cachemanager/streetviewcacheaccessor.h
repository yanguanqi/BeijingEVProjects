#ifndef EARTHVIEW_WORLD_SPATIAL_STREETVIEW_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_STREETVIEW_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/cacheaccessor.h"
#include "tileutility/tilepathenums.h"
#include "download//streetviewserviceconnection.h"


namespace EarthView{
	namespace World{
		namespace Spatial{

			class EV_CACHEMANAGER_DLL StreetViewCacheAccessor : public CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				StreetViewCacheAccessor();

				~StreetViewCacheAccessor();
		
				ev_bool writeMetadataInfo(const EVString& layerName, const EVString& stream);

				ev_bool writeStreetViewDataInfo(const EVString& layerName,
					const EarthView::World::Spatial::Download::CStreetPointList& streetviewinfolist);
				
				ev_bool writePictureData(const EVString& layerName, 
					const ev_int32 level, 
					const ev_int32 row, 
					const ev_int32 col,
					const ev_int32 photoid,
					const EarthView::World::Core::MemoryDataStreamPtr& picturestream);

				ev_bool readMetadataInfo(const EVString& layerName, EVString& stream);

				ev_bool readStreetViewDataInfo(const EVString& layerName,
					const EVString& mapCode,
					EarthView::World::Spatial::Download::CStreetPointList& streetviewinfolist);

				EarthView::World::Core::MemoryDataStreamPtr readPictureData(const EVString& layerName,
					const ev_int32 level, 
					const ev_int32 row, 
					const ev_int32 col,
					const ev_int32 photoid);
		
				/// <summary>
				/// 清除指定图层的缓存数据,删除db文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool clearCache(const EVString& layerName)	;


			protected:
			private:
			};

			
			class EV_CACHEMANAGER_DLL StreetViewCacheSyncAccessor : public CacheSyncWriteAccessor
			{
			public:
				StreetViewCacheSyncAccessor();
			
				~StreetViewCacheSyncAccessor();
			
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 writeCacheFunc();
			
				ev_bool writeMetadataInfo(const EVString& layerName, const EVString& steam);

				ev_bool writeStreetViewDataInfo(const EVString& layerName,
					const EarthView::World::Spatial::Download::CStreetPointList& streetviewinfolist);

				ev_bool writePictureData(const EVString& layerName, 
					const ev_int32 level, 
					const ev_int32 row, 
					const ev_int32 col,
					const ev_int32 photoid,
					const EarthView::World::Core::MemoryDataStreamPtr& picturestream);
			
			
			protected:
			private:
				class Param : public CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString layerName;
					EVString mMetadatainfo;
					EarthView::World::Spatial::Download::CStreetPointList mStreetviewinfolist;
					ev_int32 mLevel;
					ev_int32 mRow;
					ev_int32 mCol;
					ev_int32 mPhotoid;
					EarthView::World::Core::MemoryDataStreamPtr mPictureData;
					//更新or写入合并的数据				(0：无操作，1：写入，2：更新)
					ev_int32 mergedStreetViewData;
					Param()
					{
						layerName = "";
						mMetadatainfo = "";
						mStreetviewinfolist.clear();
						mPictureData = NULL;
						mLevel = -1;
						mRow = -1;
						mCol = -1;
						mPhotoid = -1;
					};
					~Param()
					{
					}
				};
			};
			
		}}}
#endif