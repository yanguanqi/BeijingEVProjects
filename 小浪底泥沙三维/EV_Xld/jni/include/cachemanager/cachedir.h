#ifndef EV_CACHE_DIR__H
#define EV_CACHE_DIR__H
#include "tileutility/tilepathenums.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_CACHEMANAGER_DLL  CacheDir
			{
			public:
				CacheDir();
				~CacheDir();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static ev_bool setCacheRootDir(const EVString& cacheRootDir);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static EVString& getCacheRootDir() ;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static ev_bool createCacheDir(const EVString& dir);

				/// <summary>
				///  获取各种缓存路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				static EVString getDatasetInfoRootCacheDir(const EVString& datasource);
				static EVString getDemRootCacheDir(const EVString& layerName);
				static EVString getEffectRootCacheDir();
				static EVString getEntityRootCacheDir(const EVString& layerName);
				static EVString getImageTileRootCacheDir(const EVString& layerName);
				//不单独存储 static EVString getModelMaterialRootCacheDir();
				static EVString getModelRootCacheDir(const EVString& datasourcename, const EVString& layerName);
				static EVString getModelTemplateRootCacheDir(const EVString& modelTemplateName);
				static EVString getOctreeRootCacheDir(const EVString& layerName);
				static EVString getVectorOctreeRootCacheDir(const EVString& layerName);
				static EVString getVectorTileRootCacheDir(const EVString& layerName);
				static EVString getKmlRootCacheDir();
				static EVString getWebMetadataCacheDir();
				static EVString getStreetViewCacheDir(const EVString& layerName);
				
				///  一个库文件，一个表格 ， 数据源为子目录
				static EVString calcDatasetInfoCacheFilePath(const EVString& datasource);

				/// 通过图层和级别行列号得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcDemCacheFilePath(const EVString& layerName, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);

				///  一个库文件，一批相关表格，按照图层有不同的EV_EFFECT_INSTANCE_XXX表格。
				static EVString calcEffectCacheFilePath();

				///通过图层和节点得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcEntityCacheFilePath(const EVString& layerName, const EVString& nodeCode);

				/// 通过图层和级别行列号得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcImageTileCacheFilePath(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerName, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);
				// 不单独存储 static EVString calcModelMaterialCacheFilePath();

				/// 通过图层和节点得到缓存文件的完整路径，一个库文件，一个表格，每个数据集中的模型表格是一样的
				static EVString calcModelCacheFilePath(const EVString& datasourcename, const EVString& layerName, const EVString& nodeCode);

				/// 一个库文件，一个表格，模型模板没有节点
				static EVString calcModelTemplateCacheFilePath(const EVString& modelTemplateName);

				/// 通过图层得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcOctreeCacheFilePath(const EVString& layerName);

				/// 通过图层得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcVectorOctreeCacheFilePath(const EVString& layerName);

				 /// 通过图层和级别行列号得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcVectorTileCacheFilePath(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerName, const ev_int32 level, const ev_int32  row, const ev_int32  col);
				static EVString calcVectorTileCacheFilePath(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerName);

				/// 通过相对路径获取kml缓存绝对路径
				static EVString calcKmlCacheFilePath(const EVString& folder);

				/// 获取当前缓存中的网络URL缓存文件路径
				static EVString calcWebURLCacheFilePath();

				/// 通过网络服务url获取到元数据信息缓存文件路径
				static EVString calcWebMetadataCacheFilePath(const EVString& serverurl, const EVString& servername);

				///
				static EVString calcStreetviewCacheFilePath(const EVString& layerName);

				/// <summary>
				/// 获取缓存存放目录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				static EVString getCacheFolderPath(const EVString& cachetype);

			public:
				ev_void static initFromConfigFile();
				ev_void static reInitFromConfigFile();
				ev_void static saveToConfigFile();
			private:
				static EVString mCacheRootDir;
				static ev_bool mbInit;
			};
		}}}
#endif