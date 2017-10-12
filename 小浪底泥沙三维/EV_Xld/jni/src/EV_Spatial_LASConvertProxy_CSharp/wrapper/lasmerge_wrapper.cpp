/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasmerge.h"
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasMerge_setParam_void_CLasMergeQuadTreeParam(void *pObjectXXXX, _inout void* param )
			{
				EarthView::World::SpatialLASConvertProxy::CLasMerge* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjectXXXX;
				ptrNativeObject->setParam(*(CLasMergeQuadTreeParam*)param);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CLasMerge_getParam_CLasMergeQuadTreeParam(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasMerge* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjectXXXX;
				CLasMergeQuadTreeParam& objXXXX = ptrNativeObject->getParam();
				CLasMergeQuadTreeParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasMerge_merge_void_EVString_LasRecordInfoList(void *pObjectXXXX, _in const char* srcFolder, _in void* lasRecordInfoList )
			{
				EarthView::World::Core::ev_string srcFolder1 = srcFolder;
				EarthView::World::SpatialLASConvertProxy::CLasMerge* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjectXXXX;
				ptrNativeObject->merge(srcFolder1, *(LasRecordInfoList*)lasRecordInfoList);
			}
		}
	}
}
