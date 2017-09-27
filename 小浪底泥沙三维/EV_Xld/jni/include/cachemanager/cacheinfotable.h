#ifndef EV_CAHCE_INFO_TABLE___H
#define EV_CAHCE_INFO_TABLE___H
#include "core/datastream.h"
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			//		----------------------------------------------------------------------------------------------
			//		|			缓存文件目录			|			缓存数据类型			|			最后缓存数据时间			|
			//		----------------------------------------------------------------------------------------------
			//		|											|											|													|

			// <summary>
			// 主要用于网络数据集缓存更新
			// </summary>
			class EV_CACHEMANAGER_DLL CacheInfoTable : public CacheTable
			{
			public:
				CacheInfoTable();

				~CacheInfoTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(CSqlDatabase* pdbcon);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool updateTileCacheTime(const EVString& layerName);
				ev_bool updateDemCacheTime(const EVString& layerName);
				ev_bool updateKMLCacheTime();
				ev_bool updateGeoCodeCacheTime();

				/// <summary>
				///   获取到目录和目录下缓存更新的时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				
				ev_void getKMLCacheTime(_out EVString& cacheRootPath, _out EVString& time);
				ev_void getGeoCodeCacheTime( _out EVString& cacheRootPath, _out EVString& time);
			protected:
			ev_private:
				ev_void getTileCacheTime(_out vector<EVString>& cacheRootPath, _out vector<EVString>& time);
				ev_void getDemCacheTime(_out vector<EVString>& cacheRootPath, _out vector<EVString>& time);s
			};
		}}}
#endif