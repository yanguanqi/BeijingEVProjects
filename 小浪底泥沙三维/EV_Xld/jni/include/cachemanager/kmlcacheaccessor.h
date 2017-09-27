#ifndef EARTHVIEW_WORLD_SPATIAL_KML_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_KML_CACHE_ACCESSOR_H
#include "core/datastream.h"
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
namespace EarthView{
	namespace World{
		namespace Spatial{


			class EV_CACHEMANAGER_DLL KmlCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				KmlCacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~KmlCacheAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool write(const EVString& cacheFolder, 
					const EVString& fileName, 
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::MemoryDataStreamPtr read(const EVString& cacheFolder, const EVString& fileName);
				ev_bool existCache(const EVString& cacheFolder, const EVString& fileName,_out EVString& cacheFullPath);

			public :

			protected:
			private:
			};

			class EV_CACHEMANAGER_DLL KmlCacheSyncAccessor : public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				KmlCacheSyncAccessor();

				~KmlCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool write(const EVString& cacheFolder, 
					const EVString& fileName, 
					const EarthView::World::Core::MemoryDataStreamPtr& dataValue);

			protected:
			private:
				class Param : public EarthView::World::Spatial::CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString cacheFolder;
					EVString fileName;
					const EarthView::World::Core::MemoryDataStreamPtr dataValue;

					Param(const EVString& cacheFolder, 
						const EVString& fileName, 
						const EarthView::World::Core::MemoryDataStreamPtr& dataValue)
						:cacheFolder(cacheFolder), fileName(fileName), dataValue(dataValue)
					{

					};
					~Param(){};
				};
			};
		}}}
#endif