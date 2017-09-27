/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/vertexindexdata.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BufferUsageList_push_back_void_Usage(void *pObjectXXXX, _in int& t )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				ptrNativeObject->push_back((EarthView::World::Graphic::CHardwareBuffer::Usage&)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BufferUsageList_insert_void_ev_uint32_Usage(void *pObjectXXXX, _in ev_uint32 pos, _in int& t )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				ptrNativeObject->insert(pos, (EarthView::World::Graphic::CHardwareBuffer::Usage&)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BufferUsageList_erase_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				ptrNativeObject->erase(pos);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_BufferUsageList_OperatorIndex_Usage_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::BufferUsageList& objYYYY = *(EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage& objXXXX = objYYYY[n];
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_BufferUsageList_at_Usage_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage& objXXXX = ptrNativeObject->at(n);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BufferUsageList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BufferUsageList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BufferUsageList* ptrNativeObject = (EarthView::World::Graphic::BufferUsageList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall Get_EarthView_World_Graphic_CVertexData_vertexDeclaration( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->vertexDeclaration;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_vertexDeclaration( void *pObjectXXXX, EarthView::World::Graphic::CVertexDeclaration*  value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->vertexDeclaration = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall Get_EarthView_World_Graphic_CVertexData_vertexBufferBinding( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->vertexBufferBinding;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_vertexBufferBinding( void *pObjectXXXX, EarthView::World::Graphic::CVertexBufferBinding*  value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->vertexBufferBinding = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CVertexData_mDeleteDclBinding( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mDeleteDclBinding;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_mDeleteDclBinding( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->mDeleteDclBinding = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CVertexData_vertexStart( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->vertexStart;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_vertexStart( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->vertexStart = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CVertexData_vertexCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->vertexCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_vertexCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->vertexCount = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CVertexData_CHardwareAnimationData_targetBufferIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData* ptrNativeObject = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->targetBufferIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_CHardwareAnimationData_targetBufferIndex( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjectXXXX)->targetBufferIndex = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CVertexData_CHardwareAnimationData_parametric( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData* ptrNativeObject = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->parametric;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_CHardwareAnimationData_parametric( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjectXXXX)->parametric = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_push_back_void_CHardwareAnimationData(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_insert_void_ev_uint32_CHardwareAnimationData(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_OperatorIndex_CHardwareAnimationData_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList& objYYYY = *(EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_at_CHardwareAnimationData_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_HardwareAnimationDataList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList* ptrNativeObject = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CVertexData_hwAnimationDataList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList &objXXXX = ptrNativeObject->hwAnimationDataList;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_hwAnimationDataList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->hwAnimationDataList = *(EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CVertexData_hwAnimDataItemsUsed( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->hwAnimDataItemsUsed;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_hwAnimDataItemsUsed( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->hwAnimDataItemsUsed = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CVertexData_clone_CVertexData_ev_bool_CHardwareBufferManagerBase(void *pObjectXXXX, _in ev_bool copyData, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				const EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->clone(copyData, mgr);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CVertexData_clone_CVertexData_ev_bool(void *pObjectXXXX, _in ev_bool copyData )
			{
				const EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->clone(copyData);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CVertexData_clone_CVertexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_prepareForShadowVolume_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->prepareForShadowVolume();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CVertexData_hardwareShadowVolWBuffer( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &objXXXX = ptrNativeObject->hardwareShadowVolWBuffer;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CVertexData_hardwareShadowVolWBuffer( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CVertexData*)pObjectXXXX)->hardwareShadowVolWBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_reorganiseBuffers_void_CVertexDeclaration_BufferUsageList_CHardwareBufferManagerBase(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* newDeclaration, _in const void* bufferUsage, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->reorganiseBuffers(newDeclaration, *(EarthView::World::Graphic::BufferUsageList*)bufferUsage, mgr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_reorganiseBuffers_void_CVertexDeclaration_BufferUsageList(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* newDeclaration, _in const void* bufferUsage )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->reorganiseBuffers(newDeclaration, *(EarthView::World::Graphic::BufferUsageList*)bufferUsage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_reorganiseBuffers_void_CVertexDeclaration_CHardwareBufferManagerBase(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* newDeclaration, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->reorganiseBuffers(newDeclaration, mgr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_reorganiseBuffers_void_CVertexDeclaration(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* newDeclaration )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->reorganiseBuffers(newDeclaration);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_closeGapsInBindings_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->closeGapsInBindings();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_removeUnusedBuffers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->removeUnusedBuffers();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexData_convertPackedColour_void_VertexElementType_VertexElementType(void *pObjectXXXX, _in int srcType, _in int destType )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ptrNativeObject->convertPackedColour((EarthView::World::Graphic::VertexElementType)srcType, (EarthView::World::Graphic::VertexElementType)destType);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexData_allocateHardwareAnimationElements_ev_uint16_ev_uint16_bool(void *pObjectXXXX, _in ev_uint16 count, _in bool animateNormals )
			{
				EarthView::World::Graphic::CVertexData* ptrNativeObject = (EarthView::World::Graphic::CVertexData*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->allocateHardwareAnimationElements(count, animateNormals);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CIndexData_indexBuffer( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &objXXXX = ptrNativeObject->indexBuffer;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CIndexData_indexBuffer( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CIndexData*)pObjectXXXX)->indexBuffer = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CIndexData_indexStart( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->indexStart;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CIndexData_indexStart( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CIndexData*)pObjectXXXX)->indexStart = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CIndexData_indexCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->indexCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CIndexData_indexCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CIndexData*)pObjectXXXX)->indexCount = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CIndexData_clone_CIndexData_ev_bool_CHardwareBufferManagerBase(void *pObjectXXXX, _in ev_bool copyData, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				const EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->clone(copyData, mgr);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CIndexData_clone_CIndexData_ev_bool(void *pObjectXXXX, _in ev_bool copyData )
			{
				const EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->clone(copyData);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CIndexData_clone_CIndexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CIndexData_optimiseVertexCacheTriList_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CIndexData* ptrNativeObject = (EarthView::World::Graphic::CIndexData*) pObjectXXXX;
				ptrNativeObject->optimiseVertexCacheTriList();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_profile_void_CHardwareIndexBufferSharedPtr(void *pObjectXXXX, _in const void* indexBuffer )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ptrNativeObject->profile(*(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_flush_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ptrNativeObject->flush();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_getHits_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getHits();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_getMisses_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMisses();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CVertexCacheProfiler_getSize_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexCacheProfiler* ptrNativeObject = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSize();
				return objXXXX;
			}
		}
	}
}
