/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/aniserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CNodeTag_mTagName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTag* ptrNativeObject = (EarthView::World::Graphic::CNodeTag*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTagName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeTag_mTagName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CNodeTag*)pObjectXXXX)->mTagName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CNodeTag_mTagDescription( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTag* ptrNativeObject = (EarthView::World::Graphic::CNodeTag*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTagDescription;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeTag_mTagDescription( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CNodeTag*)pObjectXXXX)->mTagDescription = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CNodeTag_mID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTag* ptrNativeObject = (EarthView::World::Graphic::CNodeTag*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeTag_mID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CNodeTag*)pObjectXXXX)->mID = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_push_back_void_CNodeTag(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CNodeTag*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagList_front_CNodeTag(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTag& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CNodeTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagList_back_CNodeTag(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTag& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CNodeTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_insert_void_ev_uint32_CNodeTag(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CNodeTag*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeTagList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagList_OperatorIndex_CNodeTag_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeTagList& objYYYY = *(EarthView::World::Graphic::CNodeTagList*) pObjXXXX;
				EarthView::World::Graphic::CNodeTag& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CNodeTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagList_at_CNodeTag_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTag& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CNodeTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CNodeTagList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CFrameTag_mTagName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTag* ptrNativeObject = (EarthView::World::Graphic::CFrameTag*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTagName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFrameTag_mTagName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CFrameTag*)pObjectXXXX)->mTagName = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CFrameTag_mTimeValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTag* ptrNativeObject = (EarthView::World::Graphic::CFrameTag*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mTimeValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFrameTag_mTimeValue( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CFrameTag*)pObjectXXXX)->mTimeValue = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CFrameTag_mID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTag* ptrNativeObject = (EarthView::World::Graphic::CFrameTag*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFrameTag_mID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CFrameTag*)pObjectXXXX)->mID = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_push_back_void_CFrameTag(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CFrameTag*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagList_front_CFrameTag(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTag& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CFrameTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagList_back_CFrameTag(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTag& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CFrameTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_insert_void_ev_uint32_CFrameTag(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CFrameTag*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTagList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagList_OperatorIndex_CFrameTag_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CFrameTagList& objYYYY = *(EarthView::World::Graphic::CFrameTagList*) pObjXXXX;
				EarthView::World::Graphic::CFrameTag& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CFrameTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagList_at_CFrameTag_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTag& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CFrameTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFrameTagList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagList_sort_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagList*) pObjectXXXX;
				ptrNativeObject->sort();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CAnimationBaseSerializerProxy : public EarthView::World::Graphic::CAnimationBaseSerializer
			{
			private:
				EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback;
			public:
				CAnimationBaseSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationBaseSerializer(pList)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationBaseSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationBaseSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationBaseSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationBaseSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationBaseSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationBaseSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationBaseSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationBaseSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationBaseSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CAnimationBaseSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationBaseSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_setFlipEndian_void_ev_bool(void *pObjectXXXX, _in ev_bool flipEndian )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->setFlipEndian(flipEndian);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_getFilpEndian_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getFilpEndian();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_getLength_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_getChunkID_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getChunkID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_fromStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->fromStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_fromStream_void_DataStreamPtr_ModelAnimationChunkID(void *pObjectXXXX, _in void* stream, _in int filterChunkID )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->fromStream(*(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::CAnimationBaseSerializer::ModelAnimationChunkID)filterChunkID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_toStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->toStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CAnimationBaseSerializer_mVersion( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mVersion;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationBaseSerializer_mVersion( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CAnimationBaseSerializer*)pObjectXXXX)->mVersion = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipToLittleEndian(pData, size, count);
				else
					ptrNativeObject->flipToLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipToLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipToLittleEndian(pData, size);
				else
					ptrNativeObject->flipToLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipToLittleEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipToLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipFromLittleEndian(pData, size, count);
				else
					ptrNativeObject->flipFromLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipFromLittleEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipFromLittleEndian(pData, size);
				else
					ptrNativeObject->flipFromLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipFromLittleEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipFromLittleEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipEndian(pData, size, count);
				else
					ptrNativeObject->flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipEndian(pData, size);
				else
					ptrNativeObject->flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_flipEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::determineEndianness(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian(void *pObjectXXXX, _in int requestedEndian )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::determineEndianness((EarthView::World::Graphic::CAnimationBaseSerializer::Endian)requestedEndian);
				else
					ptrNativeObject->determineEndianness((EarthView::World::Graphic::CAnimationBaseSerializer::Endian)requestedEndian);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CAnimationBaseSerializerProxy* ptr = dynamic_cast<CAnimationBaseSerializerProxy*>((EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationBaseSerializer_determineEndianness_void_Endian_NoVirtual(void *pObjectXXXX, _in int requestedEndian )
			{
				EarthView::World::Graphic::CAnimationBaseSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationBaseSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationBaseSerializer::determineEndianness((EarthView::World::Graphic::CAnimationBaseSerializer::Endian)requestedEndian);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CFrameTagSerializerProxy : public EarthView::World::Graphic::CFrameTagSerializer
			{
			private:
				EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback;
			public:
				CFrameTagSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrameTagSerializer(pList)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CFrameTagSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CFrameTagSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFrameTagSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFrameTagSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFrameTagSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFrameTagSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CFrameTagSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CFrameTagSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CFrameTagSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CFrameTagSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CFrameTagSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CFrameTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX;
				if (dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrameTagSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CFrameTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrameTagSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CFrameTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX;
				if (dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrameTagSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CFrameTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrameTagSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFrameTagSerializer_mFrameTag( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTag &objXXXX = ptrNativeObject->mFrameTag;
				EarthView::World::Graphic::CFrameTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFrameTagSerializer_mFrameTag( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFrameTagSerializer*)pObjectXXXX)->mFrameTag = *(EarthView::World::Graphic::CFrameTag*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CFrameTagSerializerProxy* ptr = dynamic_cast<CFrameTagSerializerProxy*>((EarthView::World::Graphic::CFrameTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTagSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CFrameTagSerializerList_mFrameLength( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mFrameLength;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFrameTagSerializerList_mFrameLength( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CFrameTagSerializerList*)pObjectXXXX)->mFrameLength = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_push_back_void_CFrameTagSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CFrameTagSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_front_CFrameTagSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTagSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CFrameTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_back_CFrameTagSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTagSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CFrameTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_insert_void_ev_uint32_CFrameTagSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CFrameTagSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_OperatorIndex_CFrameTagSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CFrameTagSerializerList& objYYYY = *(EarthView::World::Graphic::CFrameTagSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CFrameTagSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CFrameTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_at_CFrameTagSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTagSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CFrameTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFrameTagSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTagSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CFrameTagSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CNodeTagSerializerProxy : public EarthView::World::Graphic::CNodeTagSerializer
			{
			private:
				EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback;
			public:
				CNodeTagSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeTagSerializer(pList)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeTagSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeTagSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeTagSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeTagSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeTagSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeTagSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeTagSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeTagSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeTagSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CNodeTagSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeTagSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX;
				if (dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeTagSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeTagSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX;
				if (dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeTagSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeTagSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeTagSerializer_mNodeTag( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTag &objXXXX = ptrNativeObject->mNodeTag;
				EarthView::World::Graphic::CNodeTag *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeTagSerializer_mNodeTag( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeTagSerializer*)pObjectXXXX)->mNodeTag = *(EarthView::World::Graphic::CNodeTag*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CNodeTagSerializerProxy* ptr = dynamic_cast<CNodeTagSerializerProxy*>((EarthView::World::Graphic::CNodeTagSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeTagSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_push_back_void_CNodeTagSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CNodeTagSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_front_CNodeTagSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTagSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CNodeTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_back_CNodeTagSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTagSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CNodeTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_insert_void_ev_uint32_CNodeTagSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CNodeTagSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_OperatorIndex_CNodeTagSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeTagSerializerList& objYYYY = *(EarthView::World::Graphic::CNodeTagSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CNodeTagSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CNodeTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_at_CNodeTagSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTagSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CNodeTagSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CNodeTagSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeTagSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeTagSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeTagSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCategory_mTagName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategory* ptrNativeObject = (EarthView::World::Graphic::CCategory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTagName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategory_mTagName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCategory*)pObjectXXXX)->mTagName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCategory_mTagDescription( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategory* ptrNativeObject = (EarthView::World::Graphic::CCategory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTagDescription;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategory_mTagDescription( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCategory*)pObjectXXXX)->mTagDescription = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CCategory_mID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategory* ptrNativeObject = (EarthView::World::Graphic::CCategory*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategory_mID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CCategory*)pObjectXXXX)->mID = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCategory_mCategoryAttributeList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategory* ptrNativeObject = (EarthView::World::Graphic::CCategory*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList &objXXXX = ptrNativeObject->mCategoryAttributeList;
				EarthView::World::Core::CommonStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategory_mCategoryAttributeList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCategory*)pObjectXXXX)->mCategoryAttributeList = *(EarthView::World::Core::CommonStringPairList*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_push_back_void_CCategory(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CCategory*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategoryList_front_CCategory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				EarthView::World::Graphic::CCategory& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategoryList_back_CCategory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				EarthView::World::Graphic::CCategory& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_insert_void_ev_uint32_CCategory(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CCategory*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCategoryList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategoryList_OperatorIndex_CCategory_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCategoryList& objYYYY = *(EarthView::World::Graphic::CCategoryList*) pObjXXXX;
				EarthView::World::Graphic::CCategory& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategoryList_at_CCategory_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				EarthView::World::Graphic::CCategory& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCategoryList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategoryList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategoryList* ptrNativeObject = (EarthView::World::Graphic::CCategoryList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CCategorySerializerProxy : public EarthView::World::Graphic::CCategorySerializer
			{
			private:
				EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback;
			public:
				CCategorySerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCategorySerializer(pList)
				{
					m_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CCategorySerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CCategorySerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CCategorySerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CCategorySerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CCategorySerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CCategorySerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CCategorySerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CCategorySerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CCategorySerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CCategorySerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CCategorySerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				if (dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCategorySerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCategorySerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				if (dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCategorySerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCategorySerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCategorySerializer_mCategory( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				EarthView::World::Graphic::CCategory &objXXXX = ptrNativeObject->mCategory;
				EarthView::World::Graphic::CCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategorySerializer_mCategory( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCategorySerializer*)pObjectXXXX)->mCategory = *(EarthView::World::Graphic::CCategory*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCategorySerializer_mNodeTagSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTagSerializerList &objXXXX = ptrNativeObject->mNodeTagSerializerList;
				EarthView::World::Graphic::CNodeTagSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCategorySerializer_mNodeTagSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCategorySerializer*)pObjectXXXX)->mNodeTagSerializerList = *(EarthView::World::Graphic::CNodeTagSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategorySerializer_getNodeTagList_CNodeTagList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializer* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeTagList objXXXX = ptrNativeObject->getNodeTagList();
				EarthView::World::Graphic::CNodeTagList *pXXXX = new EarthView::World::Graphic::CNodeTagList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CCategorySerializerProxy* ptr = dynamic_cast<CCategorySerializerProxy*>((EarthView::World::Graphic::CCategorySerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCategorySerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_push_back_void_CCategorySerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CCategorySerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategorySerializerList_front_CCategorySerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CCategorySerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CCategorySerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategorySerializerList_back_CCategorySerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CCategorySerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CCategorySerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_insert_void_ev_uint32_CCategorySerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CCategorySerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCategorySerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategorySerializerList_OperatorIndex_CCategorySerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCategorySerializerList& objYYYY = *(EarthView::World::Graphic::CCategorySerializerList*) pObjXXXX;
				EarthView::World::Graphic::CCategorySerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CCategorySerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCategorySerializerList_at_CCategorySerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CCategorySerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CCategorySerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCategorySerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCategorySerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCategorySerializerList* ptrNativeObject = (EarthView::World::Graphic::CCategorySerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CTranslationSerializerProxy : public EarthView::World::Graphic::CTranslationSerializer
			{
			private:
				EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback;
			public:
				CTranslationSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTranslationSerializer(pList)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CTranslationSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CTranslationSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CTranslationSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CTranslationSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CTranslationSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CTranslationSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CTranslationSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CTranslationSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CTranslationSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CTranslationSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CTranslationSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CTranslationSerializer* ptrNativeObject = (EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX;
				if (dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTranslationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTranslationSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CTranslationSerializer* ptrNativeObject = (EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTranslationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CTranslationSerializer* ptrNativeObject = (EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX;
				if (dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTranslationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTranslationSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CTranslationSerializer* ptrNativeObject = (EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTranslationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTranslationSerializer_mpostion( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTranslationSerializer* ptrNativeObject = (EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mpostion;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTranslationSerializer_mpostion( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTranslationSerializer*)pObjectXXXX)->mpostion = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CTranslationSerializerProxy* ptr = dynamic_cast<CTranslationSerializerProxy*>((EarthView::World::Graphic::CTranslationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTranslationSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CRotationSerializerProxy : public EarthView::World::Graphic::CRotationSerializer
			{
			private:
				EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback;
			public:
				CRotationSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRotationSerializer(pList)
				{
					m_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CRotationSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CRotationSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CRotationSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CRotationSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CRotationSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CRotationSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CRotationSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CRotationSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CRotationSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CRotationSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CRotationSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CRotationSerializer* ptrNativeObject = (EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX;
				if (dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRotationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CRotationSerializer* ptrNativeObject = (EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRotationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CRotationSerializer* ptrNativeObject = (EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX;
				if (dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRotationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRotationSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CRotationSerializer* ptrNativeObject = (EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRotationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CRotationSerializer_mquaterniion( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRotationSerializer* ptrNativeObject = (EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mquaterniion;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRotationSerializer_mquaterniion( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CRotationSerializer*)pObjectXXXX)->mquaterniion = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CRotationSerializerProxy* ptr = dynamic_cast<CRotationSerializerProxy*>((EarthView::World::Graphic::CRotationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRotationSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CScaleSerializerProxy : public EarthView::World::Graphic::CScaleSerializer
			{
			private:
				EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback;
			public:
				CScaleSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScaleSerializer(pList)
				{
					m_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CScaleSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CScaleSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CScaleSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CScaleSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CScaleSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CScaleSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CScaleSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CScaleSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CScaleSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CScaleSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CScaleSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CScaleSerializer* ptrNativeObject = (EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX;
				if (dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScaleSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScaleSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CScaleSerializer* ptrNativeObject = (EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScaleSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CScaleSerializer* ptrNativeObject = (EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX;
				if (dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScaleSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScaleSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CScaleSerializer* ptrNativeObject = (EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScaleSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CScaleSerializer_msacle( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScaleSerializer* ptrNativeObject = (EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->msacle;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CScaleSerializer_msacle( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CScaleSerializer*)pObjectXXXX)->msacle = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CScaleSerializerProxy* ptr = dynamic_cast<CScaleSerializerProxy*>((EarthView::World::Graphic::CScaleSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CKeyframeSerializerProxy : public EarthView::World::Graphic::CKeyframeSerializer
			{
			private:
				EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback;
			public:
				CKeyframeSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKeyframeSerializer(pList)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CKeyframeSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CKeyframeSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CKeyframeSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CKeyframeSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CKeyframeSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CKeyframeSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CKeyframeSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CKeyframeSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CKeyframeSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CKeyframeSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CKeyframeSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				if (dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CKeyframeSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CKeyframeSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				if (dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CKeyframeSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CKeyframeSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CKeyframeSerializer_mmartix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mmartix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CKeyframeSerializer_mmartix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CKeyframeSerializer*)pObjectXXXX)->mmartix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CKeyframeSerializer_mtime( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializer* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mtime;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CKeyframeSerializer_mtime( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CKeyframeSerializer*)pObjectXXXX)->mtime = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CKeyframeSerializerProxy* ptr = dynamic_cast<CKeyframeSerializerProxy*>((EarthView::World::Graphic::CKeyframeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CKeyframeSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_push_back_void_CKeyframeSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CKeyframeSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_front_CKeyframeSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CKeyframeSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CKeyframeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_back_CKeyframeSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CKeyframeSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CKeyframeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_insert_void_ev_uint32_CKeyframeSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CKeyframeSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_OperatorIndex_CKeyframeSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CKeyframeSerializerList& objYYYY = *(EarthView::World::Graphic::CKeyframeSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CKeyframeSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CKeyframeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_at_CKeyframeSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CKeyframeSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CKeyframeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CKeyframeSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CKeyframeSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CKeyframeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CKeyframeSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CAnimationSerializerProxy : public EarthView::World::Graphic::CAnimationSerializer
			{
			private:
				EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback;
			public:
				CAnimationSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationSerializer(pList)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAnimationSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAnimationSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAnimationSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CAnimationSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				if (dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_mkeyFrameSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CKeyframeSerializerList &objXXXX = ptrNativeObject->mkeyFrameSerializerList;
				EarthView::World::Graphic::CKeyframeSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_mkeyFrameSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->mkeyFrameSerializerList = *(EarthView::World::Graphic::CKeyframeSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_mname( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mname;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_mname( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->mname = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_menable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->menable;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_menable( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->menable = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_mloop( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mloop;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_mloop( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->mloop = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_minterpolationMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->minterpolationMode;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_minterpolationMode( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->minterpolationMode = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_mrotationInterpolationMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mrotationInterpolationMode;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_mrotationInterpolationMode( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->mrotationInterpolationMode = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Graphic_CAnimationSerializer_mAnimationLength( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializer* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mAnimationLength;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CAnimationSerializer_mAnimationLength( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Graphic::CAnimationSerializer*)pObjectXXXX)->mAnimationLength = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CAnimationSerializerProxy* ptr = dynamic_cast<CAnimationSerializerProxy*>((EarthView::World::Graphic::CAnimationSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_push_back_void_CAnimationSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CAnimationSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationSerializerList_front_CAnimationSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CAnimationSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationSerializerList_back_CAnimationSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CAnimationSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_insert_void_ev_uint32_CAnimationSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CAnimationSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationSerializerList_OperatorIndex_CAnimationSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationSerializerList& objYYYY = *(EarthView::World::Graphic::CAnimationSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CAnimationSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CAnimationSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationSerializerList_at_CAnimationSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CAnimationSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimationSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationSerializerList* ptrNativeObject = (EarthView::World::Graphic::CAnimationSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CMatrixSerializerProxy : public EarthView::World::Graphic::CMatrixSerializer
			{
			private:
				EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback;
			public:
				CMatrixSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMatrixSerializer(pList)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CMatrixSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CMatrixSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX;
				if (dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMatrixSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMatrixSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX;
				if (dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMatrixSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMatrixSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMatrixSerializer_mmartix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mmartix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMatrixSerializer_mmartix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMatrixSerializer*)pObjectXXXX)->mmartix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CMatrixSerializerProxy* ptr = dynamic_cast<CMatrixSerializerProxy*>((EarthView::World::Graphic::CMatrixSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CColorSerializerProxy : public EarthView::World::Graphic::CColorSerializer
			{
			private:
				EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback;
			public:
				CColorSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorSerializer(pList)
				{
					m_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CColorSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CColorSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CColorSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CColorSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CColorSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CColorSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CColorSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CColorSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CColorSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CColorSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CColorSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CColorSerializer*) pObjectXXXX;
				if (dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CColorSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColorSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CColorSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CColorSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CColorSerializer*) pObjectXXXX;
				if (dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CColorSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColorSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CColorSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CColorSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CColorSerializer_mcolor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CColorSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mcolor;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CColorSerializer_mcolor( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CColorSerializer*)pObjectXXXX)->mcolor = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CColorSerializerProxy* ptr = dynamic_cast<CColorSerializerProxy*>((EarthView::World::Graphic::CColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CColorSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CSubMeshSerializerProxy : public EarthView::World::Graphic::CSubMeshSerializer
			{
			private:
				EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback;
			public:
				CSubMeshSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubMeshSerializer(pList)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CSubMeshSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CSubMeshSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				if (dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubMeshSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubMeshSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				if (dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubMeshSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubMeshSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CSubMeshSerializer_msubMeshID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->msubMeshID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshSerializer_msubMeshID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CSubMeshSerializer*)pObjectXXXX)->msubMeshID = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CSubMeshSerializer_mInstanceIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mInstanceIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshSerializer_mInstanceIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CSubMeshSerializer*)pObjectXXXX)->mInstanceIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CSubMeshSerializer_mIndexBegun( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mIndexBegun;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshSerializer_mIndexBegun( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CSubMeshSerializer*)pObjectXXXX)->mIndexBegun = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CSubMeshSerializer_mIndexEnd( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mIndexEnd;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshSerializer_mIndexEnd( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CSubMeshSerializer*)pObjectXXXX)->mIndexEnd = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CSubMeshSerializerProxy* ptr = dynamic_cast<CSubMeshSerializerProxy*>((EarthView::World::Graphic::CSubMeshSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_push_back_void_CSubMeshSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CSubMeshSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_front_CSubMeshSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CSubMeshSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_back_CSubMeshSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CSubMeshSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_insert_void_ev_uint32_CSubMeshSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CSubMeshSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_OperatorIndex_CSubMeshSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshSerializerList& objYYYY = *(EarthView::World::Graphic::CSubMeshSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CSubMeshSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CSubMeshSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_at_CSubMeshSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CSubMeshSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSubMeshSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshSerializerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CNodeSerializerProxy : public EarthView::World::Graphic::CNodeSerializer
			{
			private:
				EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback;
			public:
				CNodeSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeSerializer(pList)
				{
					m_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CNodeSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CNodeSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CNodeSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CNodeSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_push_back_void_CNodeSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CNodeSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_front_CNodeSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CNodeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_back_CNodeSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CNodeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_insert_void_ev_uint32_CNodeSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CNodeSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_OperatorIndex_CNodeSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList& objYYYY = *(EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CNodeSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CNodeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_at_CNodeSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CNodeSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_CNodeSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				if (dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				if (dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeSerializer_hasAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeSerializer_childHasAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->childHasAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mxmlElementDescription( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mxmlElementDescription;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mxmlElementDescription( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mxmlElementDescription = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mxmlElementName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mxmlElementName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mxmlElementName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mxmlElementName = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mID( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mID = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mmatrixSerializer( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixSerializer &objXXXX = ptrNativeObject->mmatrixSerializer;
				EarthView::World::Graphic::CMatrixSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mmatrixSerializer( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mmatrixSerializer = *(EarthView::World::Graphic::CMatrixSerializer*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_moffsetMatrixSerializer( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixSerializer &objXXXX = ptrNativeObject->moffsetMatrixSerializer;
				EarthView::World::Graphic::CMatrixSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_moffsetMatrixSerializer( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->moffsetMatrixSerializer = *(EarthView::World::Graphic::CMatrixSerializer*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_manimationSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationSerializerList &objXXXX = ptrNativeObject->manimationSerializerList;
				EarthView::World::Graphic::CAnimationSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_manimationSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->manimationSerializerList = *(EarthView::World::Graphic::CAnimationSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_msubMeshSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshSerializerList &objXXXX = ptrNativeObject->msubMeshSerializerList;
				EarthView::World::Graphic::CSubMeshSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_msubMeshSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->msubMeshSerializerList = *(EarthView::World::Graphic::CSubMeshSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mHasAnimation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mHasAnimation;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mHasAnimation( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mHasAnimation = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_msubNodeSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList &objXXXX = ptrNativeObject->msubNodeSerializerList;
				EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_msubNodeSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->msubNodeSerializerList = *(EarthView::World::Graphic::CNodeSerializer::CNodeSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CNodeSerializer_mBoundingBox( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeSerializer* ptrNativeObject = (EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->mBoundingBox;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CNodeSerializer_mBoundingBox( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CNodeSerializer*)pObjectXXXX)->mBoundingBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CNodeSerializerProxy* ptr = dynamic_cast<CNodeSerializerProxy*>((EarthView::World::Graphic::CNodeSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMatrixColor_mmartix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CMatrixColor*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mmartix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMatrixColor_mmartix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMatrixColor*)pObjectXXXX)->mmartix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMatrixColor_mcolor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CMatrixColor*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mcolor;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMatrixColor_mcolor( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMatrixColor*)pObjectXXXX)->mcolor = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMatrixColor_mInstanceIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CMatrixColor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mInstanceIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMatrixColor_mInstanceIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMatrixColor*)pObjectXXXX)->mInstanceIndex = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_push_back_void_CMatrixColor(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CMatrixColor*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorList_front_CMatrixColor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColor& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorList_back_CMatrixColor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColor& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_insert_void_ev_uint32_CMatrixColor(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CMatrixColor*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMatrixColorList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorList_OperatorIndex_CMatrixColor_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMatrixColorList& objYYYY = *(EarthView::World::Graphic::CMatrixColorList*) pObjXXXX;
				EarthView::World::Graphic::CMatrixColor& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorList_at_CMatrixColor_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColor& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMatrixColorList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CMatrixColorSerializerProxy : public EarthView::World::Graphic::CMatrixColorSerializer
			{
			private:
				EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback;
			public:
				CMatrixColorSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMatrixColorSerializer(pList)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixColorSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixColorSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixColorSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixColorSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixColorSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixColorSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CMatrixColorSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CMatrixColorSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CMatrixColorSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CMatrixColorSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CMatrixColorSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX;
				if (dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMatrixColorSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMatrixColorSerializer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX;
				if (dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMatrixColorSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMatrixColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMatrixColorSerializer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMatrixColorSerializer_mMatrixColor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorSerializer* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColor &objXXXX = ptrNativeObject->mMatrixColor;
				EarthView::World::Graphic::CMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMatrixColorSerializer_mMatrixColor( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMatrixColorSerializer*)pObjectXXXX)->mMatrixColor = *(EarthView::World::Graphic::CMatrixColor*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CMatrixColorSerializerProxy* ptr = dynamic_cast<CMatrixColorSerializerProxy*>((EarthView::World::Graphic::CMatrixColorSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMatrixColorSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_push_back_void_CMatrixColorSerializer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CMatrixColorSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_front_CMatrixColorSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColorSerializer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CMatrixColorSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_back_CMatrixColorSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColorSerializer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CMatrixColorSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_insert_void_ev_uint32_CMatrixColorSerializer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CMatrixColorSerializer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_OperatorIndex_CMatrixColorSerializer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList& objYYYY = *(EarthView::World::Graphic::CMatrixColorSerializerList*) pObjXXXX;
				EarthView::World::Graphic::CMatrixColorSerializer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CMatrixColorSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_at_CMatrixColorSerializer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColorSerializer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CMatrixColorSerializer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMatrixColorSerializerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMatrixColorSerializerList* ptrNativeObject = (EarthView::World::Graphic::CMatrixColorSerializerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CSubMeshMatrixColor_mSubMeshId( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColor*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mSubMeshId;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshMatrixColor_mSubMeshId( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CSubMeshMatrixColor*)pObjectXXXX)->mSubMeshId = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CSubMeshMatrixColor_mIndexBegun( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColor*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mIndexBegun;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshMatrixColor_mIndexBegun( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CSubMeshMatrixColor*)pObjectXXXX)->mIndexBegun = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CSubMeshMatrixColor_mIndexEnd( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColor*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mIndexEnd;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshMatrixColor_mIndexEnd( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CSubMeshMatrixColor*)pObjectXXXX)->mIndexEnd = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSubMeshMatrixColor_mMatrixColorSerializerList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColor* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColor*) pObjectXXXX;
				EarthView::World::Graphic::CMatrixColorSerializerList &objXXXX = ptrNativeObject->mMatrixColorSerializerList;
				EarthView::World::Graphic::CMatrixColorSerializerList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshMatrixColor_mMatrixColorSerializerList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSubMeshMatrixColor*)pObjectXXXX)->mMatrixColorSerializerList = *(EarthView::World::Graphic::CMatrixColorSerializerList*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_push_back_void_CSubMeshMatrixColor(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CSubMeshMatrixColor*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_front_CSubMeshMatrixColor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColor& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CSubMeshMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_back_CSubMeshMatrixColor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColor& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CSubMeshMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_insert_void_ev_uint32_CSubMeshMatrixColor(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CSubMeshMatrixColor*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_OperatorIndex_CSubMeshMatrixColor_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList& objYYYY = *(EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColor& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CSubMeshMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_at_CSubMeshMatrixColor_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColor& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CSubMeshMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CSubMeshMatrixColorSeriailzerProxy : public EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer
			{
			private:
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback;
			public:
				CSubMeshMatrixColorSeriailzerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubMeshMatrixColorSeriailzer(pList)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian(EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CSubMeshMatrixColorSeriailzer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CSubMeshMatrixColorSeriailzerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX;
				if (dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_fromStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer::fromStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX;
				if (dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
				else
					ptrNativeObject->toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_toStreamImplement_void_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer::toStreamImplement(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_mSubMeshMatrixColor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColor &objXXXX = ptrNativeObject->mSubMeshMatrixColor;
				EarthView::World::Graphic::CSubMeshMatrixColor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_mSubMeshMatrixColor( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*)pObjectXXXX)->mSubMeshMatrixColor = *(EarthView::World::Graphic::CSubMeshMatrixColor*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CSubMeshMatrixColorSeriailzerProxy* ptr = dynamic_cast<CSubMeshMatrixColorSeriailzerProxy*>((EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSubMeshMatrixColorSeriailzer_determineEndianness_void_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_push_back_void_CSubMeshMatrixColorSeriailzer(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_front_CSubMeshMatrixColorSeriailzer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_back_CSubMeshMatrixColorSeriailzer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_insert_void_ev_uint32_CSubMeshMatrixColorSeriailzer(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_OperatorIndex_CSubMeshMatrixColorSeriailzer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList& objYYYY = *(EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& objXXXX = objYYYY[n];
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_at_CSubMeshMatrixColorSeriailzer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMeshMatrixColorSeriailzerList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList* ptrNativeObject = (EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback)(_in void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback)(_in int requestedEndian);
			class CAniFileSerializerProxy : public EarthView::World::Graphic::CAniFileSerializer
			{
			private:
				EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback* m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback;
			public:
				CAniFileSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAniFileSerializer(pList)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr(EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr(EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian(EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback = pCallback;
				}
				virtual void fromStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAniFileSerializer::fromStreamImplement(stream);
				}
				virtual void toStreamImplement(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAniFileSerializer::toStreamImplement(stream);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAniFileSerializer::flipToLittleEndian(pData, size, count);
				}
				virtual void flipToLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAniFileSerializer::flipToLittleEndian(pData, size);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAniFileSerializer::flipFromLittleEndian(pData, size, count);
				}
				virtual void flipFromLittleEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAniFileSerializer::flipFromLittleEndian(pData, size);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CAniFileSerializer::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CAniFileSerializer::flipEndian(pData, size);
				}
				virtual void determineEndianness(_in EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CAniFileSerializer::determineEndianness(stream);
				}
				virtual void determineEndianness(_in EarthView::World::Graphic::CAnimationBaseSerializer::Endian requestedEndian)
				{
					if(m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback((int)requestedEndian);
					}
					else
						return this->CAniFileSerializer::determineEndianness(requestedEndian);
				}
			};
			REGISTER_FACTORY_CLASS(CAniFileSerializerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_fromStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->fromStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_toStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->toStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_toStream_void_DataStreamPtr_Endian(void *pObjectXXXX, _in void* stream, _in int endianMode )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->toStream(*(EarthView::World::Core::DataStreamPtr*)stream, (EarthView::World::Graphic::CAnimationBaseSerializer::Endian)endianMode);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getRootNodeSerializer_CNodeSerializer_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer objXXXX = ptrNativeObject->getRootNodeSerializer(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CNodeSerializer *pXXXX = new EarthView::World::Graphic::CNodeSerializer(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getRootNodeSerializer_CNodeSerializer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CNodeSerializer objXXXX = ptrNativeObject->getRootNodeSerializer();
				EarthView::World::Graphic::CNodeSerializer *pXXXX = new EarthView::World::Graphic::CNodeSerializer(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_setRootNodeSerializer_void_CNodeSerializer(void *pObjectXXXX, _in void* rootNodeSerializer )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->setRootNodeSerializer(*(EarthView::World::Graphic::CNodeSerializer*)rootNodeSerializer);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getFrameTagList_CFrameTagList_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTagList objXXXX = ptrNativeObject->getFrameTagList(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CFrameTagList *pXXXX = new EarthView::World::Graphic::CFrameTagList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getFrameTagList_CFrameTagList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CFrameTagList objXXXX = ptrNativeObject->getFrameTagList();
				EarthView::World::Graphic::CFrameTagList *pXXXX = new EarthView::World::Graphic::CFrameTagList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_setFrameTagSerializerList_void_CFrameTagSerializerList(void *pObjectXXXX, _in void* frameTagSerializerList )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->setFrameTagSerializerList(*(EarthView::World::Graphic::CFrameTagSerializerList*)frameTagSerializerList);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CAniFileSerializer_getFrameTagLength_ev_real64_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getFrameTagLength(*(EarthView::World::Core::DataStreamPtr*)stream);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CAniFileSerializer_getFrameTagLength_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getFrameTagLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getCategoryList_CCategoryList_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CCategoryList objXXXX = ptrNativeObject->getCategoryList(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CCategoryList *pXXXX = new EarthView::World::Graphic::CCategoryList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_setCategorySerializerList_void_CCategorySerializerList(void *pObjectXXXX, _in void* categatorySerializerList )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->setCategorySerializerList(*(EarthView::World::Graphic::CCategorySerializerList*)categatorySerializerList);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getSubMeshMatrixColorList_CSubMeshMatrixColorList_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CSubMeshMatrixColorList objXXXX = ptrNativeObject->getSubMeshMatrixColorList(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CSubMeshMatrixColorList *pXXXX = new EarthView::World::Graphic::CSubMeshMatrixColorList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_setMatrixColorSerializerList_void_CSubMeshMatrixColorSeriailzerList(void *pObjectXXXX, _in void* subMeshMatrixColorSerializerList )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->setMatrixColorSerializerList(*(EarthView::World::Graphic::CSubMeshMatrixColorSeriailzerList*)subMeshMatrixColorSerializerList);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAniFileSerializer_getAnimation_ev_bool_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAnimation(*(EarthView::World::Core::DataStreamPtr*)stream);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAniFileSerializer_setReadStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ptrNativeObject->setReadStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAniFileSerializer_getCategorySerializerList_CCategorySerializerList_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				EarthView::World::Graphic::CCategorySerializerList objXXXX = ptrNativeObject->getCategorySerializerList(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CCategorySerializerList *pXXXX = new EarthView::World::Graphic::CCategorySerializerList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAniFileSerializer_initAniFileVersion_ev_bool_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CAniFileSerializer* ptrNativeObject = (EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->initAniFileVersion(*(EarthView::World::Core::DataStreamPtr*)stream);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_fromStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_toStreamImplement_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipToLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipFromLittleEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian( void *pObjectXXXX, EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian_Callback* pCallback )
			{
				CAniFileSerializerProxy* ptr = dynamic_cast<CAniFileSerializerProxy*>((EarthView::World::Graphic::CAniFileSerializer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAniFileSerializer_determineEndianness_void_Endian(pCallback);
				}
			}
		}
	}
}
