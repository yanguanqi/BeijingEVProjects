/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshdatacreator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_CEntityMetaData(void *pObjectXXXX, _in const void* modelMetaData )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshData objXXXX = ptrNativeObject->createMeshData(*(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)modelMetaData);
					EarthView::World::Spatial3D::DataExchange::CMeshData *pXXXX = new EarthView::World::Spatial3D::DataExchange::CMeshData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_EVString(void *pObjectXXXX, _in const char* meshPath )
				{
					EarthView::World::Core::ev_string meshPath1 = meshPath;
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshData objXXXX = ptrNativeObject->createMeshData(meshPath1);
					EarthView::World::Spatial3D::DataExchange::CMeshData *pXXXX = new EarthView::World::Spatial3D::DataExchange::CMeshData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_destroyMeshData_void_CMeshData(void *pObjectXXXX, _inout void* meshData )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshDataCreator* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshDataCreator*) pObjectXXXX;
					ptrNativeObject->destroyMeshData(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshData);
				}
			}
		}
	}
}
