#ifndef EV_MODELMATERIALTABLE____H
#define EV_MODELMATERIALTABLE____H
#include "core/datastream.h"
#include "cachemanager/cachetable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{

			// 模型和模板材质表格一致
			struct CacheMeshMaterial
			{
				_in   ev_int32 resourceID;
				_out ev_int32  type;
				_out EVString  fileName;
				_out EarthView::World::Core::MemoryDataStreamPtr  fileData;
				_out ev_int32  refcount;
			};

			struct CacheModelResource
			{			
				ev_int32 resourceID;
				ev_int32  type;
				EVString  fileName;
				EarthView::World::Core::MemoryDataStreamPtr  fileData;
				ev_int32  refcount;
			};

		
		}}}
#endif