/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/parseshapefile.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_push_back_void_EVString(void *pObjectXXXX, _in char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->push_back(field1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_front_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					EVString& objXXXX = ptrNativeObject->front();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_back_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					EVString& objXXXX = ptrNativeObject->back();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_insert_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 pos, _in char* ref_t )
				{
					EarthView::World::Core::ev_string ref_t1 = ref_t;
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->insert(pos, ref_t1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_OperatorIndex_EVString_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList& objYYYY = *(EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjXXXX;
					const EVString& objXXXX = objYYYY[n];
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_at_EVString_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->at(n);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_ShapeFieldsList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::ShapeFieldsList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_push_back_void_CEntityMetaData(void *pObjectXXXX, _in void* data )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)data);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_front_CEntityMetaData(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_back_CEntityMetaData(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_insert_void_ev_uint32_CEntityMetaData(void *pObjectXXXX, _in ev_uint32 pos, _in void* ref_t )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_OperatorIndex_CEntityMetaData_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList& objYYYY = *(EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData& objXXXX = objYYYY[n];
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_at_CEntityMetaData_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData& objXXXX = ptrNativeObject->at(n);
					const EarthView::World::Spatial3D::DataExchange::CEntityMetaData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_EntityMetaDataList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::EntityMetaDataList* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CParseShapeFile_open_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Spatial3D::DataExchange::CParseShapeFile* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CParseShapeFile*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->open(filename1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CParseShapeFile_readFields_ev_bool_EVString_ShapeFieldsList(_in const char* file, _out void* fields )
				{
					EarthView::World::Core::ev_string file1 = file;
					ev_bool objXXXX = EarthView::World::Spatial3D::DataExchange::CParseShapeFile::readFields(file1, *(EarthView::World::Spatial3D::DataExchange::ShapeFieldsList*)fields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_DataExchange_CParseShapeFile_readSrsID_ev_int32_EVString(_in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					ev_int32 objXXXX = EarthView::World::Spatial3D::DataExchange::CParseShapeFile::readSrsID(file1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_DataExchange_CParseShapeFile_readShapeData_ev_int32_EVString_CShapeAssignedFields_EntityMetaDataList(void *pObjectXXXX, _in const char* modelFilePath, _in const void* assignedValue, _out void* meshEntitis )
				{
					EarthView::World::Core::ev_string modelFilePath1 = modelFilePath;
					EarthView::World::Spatial3D::DataExchange::CParseShapeFile* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CParseShapeFile*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->readShapeData(modelFilePath1, *(EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields*)assignedValue, *(EarthView::World::Spatial3D::DataExchange::EntityMetaDataList*)meshEntitis);
					return objXXXX;
				}
			}
		}
	}
}
