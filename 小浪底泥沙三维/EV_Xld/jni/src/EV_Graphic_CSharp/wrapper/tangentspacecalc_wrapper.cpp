/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/tangentspacecalc.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_VertexSplit_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_VertexSplit_first( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_VertexSplit_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_VertexSplit_second( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_indexSet( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->indexSet;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_indexSet( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjectXXXX)->indexSet = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_faceIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->faceIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_faceIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjectXXXX)->faceIndex = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_splitVertex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &objXXXX = ptrNativeObject->splitVertex;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_IndexRemap_splitVertex( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjectXXXX)->splitVertex = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_push_back_void_IndexRemap(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_push_front_void_IndexRemap(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_front_IndexRemap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_back_IndexRemap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_at_IndexRemap_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_insert_void_ev_uint32_IndexRemap(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_IndexRemapList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_push_back_void_VertexSplit(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_push_front_void_VertexSplit(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_front_VertexSplit(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_back_VertexSplit(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_at_VertexSplit_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_insert_void_ev_uint32_VertexSplit(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_VertexSplits_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_Result_vertexSplits( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::Result*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits &objXXXX = ptrNativeObject->vertexSplits;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_Result_vertexSplits( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjectXXXX)->vertexSplits = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTangentSpaceCalc_Result_indexesRemapped( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc::Result*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList &objXXXX = ptrNativeObject->indexesRemapped;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTangentSpaceCalc_Result_indexesRemapped( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjectXXXX)->indexesRemapped = *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_setVertexData_void_CVertexData(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* v_in )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->setVertexData(v_in);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_addIndexData_void_CIndexData(void *pObjectXXXX, _in EarthView::World::Graphic::CIndexData* i_in )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->addIndexData(i_in);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_addIndexData_void_CIndexData_OperationType(void *pObjectXXXX, _in EarthView::World::Graphic::CIndexData* i_in, _in int opType )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->addIndexData(i_in, (EarthView::World::Graphic::CRenderOperation::OperationType)opType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_setStoreParityInW_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->setStoreParityInW(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_getStoreParityInW_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getStoreParityInW();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_setSplitMirrored_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->setSplitMirrored(split);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_getSplitMirrored_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSplitMirrored();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_setSplitRotated_void_ev_bool(void *pObjectXXXX, _in ev_bool split )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ptrNativeObject->setSplitRotated(split);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_getSplitRotated_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSplitRotated();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_build_Result(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result objXXXX = ptrNativeObject->build();
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pXXXX = new EarthView::World::Graphic::CTangentSpaceCalc::Result(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_build_Result_VertexElementSemantic(void *pObjectXXXX, _in int targetSemantic )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result objXXXX = ptrNativeObject->build((EarthView::World::Graphic::VertexElementSemantic)targetSemantic);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pXXXX = new EarthView::World::Graphic::CTangentSpaceCalc::Result(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_build_Result_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result objXXXX = ptrNativeObject->build((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pXXXX = new EarthView::World::Graphic::CTangentSpaceCalc::Result(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTangentSpaceCalc_build_Result_VertexElementSemantic_ev_uint16_ev_uint16(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CTangentSpaceCalc* ptrNativeObject = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjectXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result objXXXX = ptrNativeObject->build((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pXXXX = new EarthView::World::Graphic::CTangentSpaceCalc::Result(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
