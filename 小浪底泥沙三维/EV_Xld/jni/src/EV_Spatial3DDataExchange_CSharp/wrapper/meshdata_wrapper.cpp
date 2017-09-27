/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshdata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_push_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* key, _in char* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_OperatorIndex_EVString_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap& objYYYY = *(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					EVString& objXXXX = objYYYY[key];
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_get_EVString_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					EVString& objXXXX = ptrNativeObject->get(key1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_MeshAttrMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getPosition_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getScale_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getQuaternion_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getQuaternion();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getMeshPtr_CMeshPtr(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					const EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->getMeshPtr();
					EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getResGroupName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getResGroupName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getMeshName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getMeshName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getSourcePath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSourcePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_setSourcePath_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					ptrNativeObject->setSourcePath(path1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_setNodeAnimationStream_void_MemoryDataStreamPtr(void *pObjectXXXX, _in void* ptr )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					ptrNativeObject->setNodeAnimationStream(*(EarthView::World::Core::MemoryDataStreamPtr*)ptr);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getNodeAnimationStream_MemoryDataStreamPtr(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getNodeAnimationStream();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_getAttr_MeshAttrMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap& objXXXX = ptrNativeObject->getAttr();
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshData_setAttr_void_MeshAttrMap(void *pObjectXXXX, _in const void* attrmap )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjectXXXX;
					ptrNativeObject->setAttr(*(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*)attrmap);
				}
			}
		}
	}
}
