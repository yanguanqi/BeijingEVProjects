/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/meshstream.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_MeshStream_clone_MeshStream(void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Spatial::MeshStream objXXXX = ptrNativeObject->clone();
				EarthView::World::Spatial::MeshStream *pXXXX = new EarthView::World::Spatial::MeshStream(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_MeshStream_convertToMemoryDataStream_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->convertToMemoryDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MeshStream_resumeFromMemoryDataStream_void_MemoryDataStreamPtr(void *pObjectXXXX, _in const void* mem )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				ptrNativeObject->resumeFromMemoryDataStream(*(EarthView::World::Core::MemoryDataStreamPtr*)mem);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mMeshStream( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mMeshStream;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mMeshStream( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mMeshStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mMaterialStream( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mMaterialStream;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mMaterialStream( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mMaterialStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mTexStreamVec( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamVector &objXXXX = ptrNativeObject->mTexStreamVec;
				EarthView::World::Core::MemoryDataStreamVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mTexStreamVec( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mTexStreamVec = *(EarthView::World::Core::MemoryDataStreamVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mSkeletonStream( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mSkeletonStream;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mSkeletonStream( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mSkeletonStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mAniStream( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mAniStream;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mAniStream( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mAniStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_MeshStream_mExtendStream( void *pObjectXXXX )
			{
				EarthView::World::Spatial::MeshStream* ptrNativeObject = (EarthView::World::Spatial::MeshStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mExtendStream;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_MeshStream_mExtendStream( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::MeshStream*)pObjectXXXX)->mExtendStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CMeshStreamPackageTool_encodeMeshStreamTo7z_MemoryDataStreamPtr_MeshStream(_in const void* meshStream )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CMeshStreamPackageTool::encodeMeshStreamTo7z(*(EarthView::World::Spatial::MeshStream*)meshStream);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CMeshStreamPackageTool_encodeMeshStreamTo7z_ForBatch_MemoryDataStreamPtr_MeshStream(_in const void* meshStream )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CMeshStreamPackageTool::encodeMeshStreamTo7z_ForBatch(*(EarthView::World::Spatial::MeshStream*)meshStream);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CMeshStreamPackageTool_clearMemForBatch_void( )
			{
				EarthView::World::Spatial::CMeshStreamPackageTool::clearMemForBatch();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CMeshStreamPackageTool_decodeMeshStreamFrom7z_MeshStream_MemoryDataStreamPtr(_in const void* package7z )
			{
				EarthView::World::Spatial::MeshStream objXXXX = EarthView::World::Spatial::CMeshStreamPackageTool::decodeMeshStreamFrom7z(*(EarthView::World::Core::MemoryDataStreamPtr*)package7z);
				EarthView::World::Spatial::MeshStream *pXXXX = new EarthView::World::Spatial::MeshStream(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
