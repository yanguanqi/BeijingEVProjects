#ifndef EARTHVIEW_WORLD_SPATIAL3D__STREETVIEWUtility_H
#define EARTHVIEW_WORLD_SPATIAL3D__STREETVIEWUtility_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class EV_Spatial3DStreetView_DLL CStreetViewUtility : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CStreetViewUtility();
				virtual ~CStreetViewUtility();
				static void filterFilesByExt(const EVString& path,const EVString& ext,_out EarthView::World::Core::ev_stringArray& filterfiles);
				static void mergePath(const EVString& dir,const EVString& filename,_out EVString& mergepath);
				static ev_bool existDatasetFile( const EVString& datasourcePath,const EVString& datasetName,const EVString& extName );
				static ev_bool getRealPath( const EVString& datasourcePath,const EVString& datasetName ,const EVString& extName,_out EVString& folder,_out EVString& realPath);
				static void createMD5Guid(const EVString& str,_out EVString& md5Str);
				static ev_int32 getLevelByMetadataFile(const EVString& metadataFilePath);
ev_private:
				CStreetViewUtility(_in EarthView::World::Core::CNameValuePairList *pList);
			};
		}
	}
}
#endif