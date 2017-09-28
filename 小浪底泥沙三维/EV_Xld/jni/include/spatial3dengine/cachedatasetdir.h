#pragma  once
#ifndef EV_CACHEDATASET_DIR__H
#define EV_CACHEDATASET_DIR__H
#include "spatial3dengine/spatial3denginecomdef.h"
#include "tileutility/tilepathenums.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class EV_Spatial3DEngine_DLL CCacheDatasetDir
			{
ev_private:
				CCacheDatasetDir(_in EarthView::World::Core::CNameValuePairList* pList);
			public :
				CCacheDatasetDir();
				~CCacheDatasetDir();
				/// 通过级别行列号以及缓存文件目录得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcImageTileCacheFilePath(EarthView::World::Spatial::EVTileModeType tilemode,const EVString& layerPath, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);
				/// 通过级别行列号和缓文件存目录得到缓存文件的完整路径，一个库文件，一个表格。
				static EVString calcDemCacheFilePath(const EVString& layerPath, const ev_int32 level, 	const ev_int32  row, const ev_int32  col);

			};
		}
	}
}
#endif