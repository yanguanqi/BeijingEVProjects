/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pose.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CPose_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPose_getTarget_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_push_ev_bool_ev_size_t_CVector3(void *pObjectXXXX, _in const ev_uint64 & key, _in const void* val )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push((ev_size_t&)key, *(EarthView::World::Spatial::Math::CVector3*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_exist_ev_bool_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_OperatorIndex_CVector3_ev_size_t(void *pObjXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap& objYYYY = *(EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = objYYYY[key];
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_get_CVector3_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->get((ev_size_t&)key);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_erase_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_VertexOffsetMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::VertexOffsetMap* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CPose_VertexOffsetPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetPair*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPose_VertexOffsetPair_first( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CPose_VertexOffsetPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetPair* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetPair*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->second;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPose_VertexOffsetPair_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CPose::VertexOffsetPair*)pObjectXXXX)->second = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_nextValue_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CVector3*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_nextValuePtr_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_next_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->next();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_getBegin_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_getEnd_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_VertexOffsetIterator_getCurrent_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::VertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::VertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_nextKey_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_nextValue_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CVector3*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_nextValuePtr_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_next_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->next();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_getBegin_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_getEnd_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstVertexOffsetIterator_getCurrent_VertexOffsetPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstVertexOffsetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CPose::VertexOffsetPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_NormalsMap_push_ev_bool_ev_size_t_CVector3(void *pObjectXXXX, _in const ev_uint64 & key, _in const void* val )
			{
				EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push((ev_size_t&)key, *(EarthView::World::Spatial::Math::CVector3*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_NormalsMap_exist_ev_bool_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_NormalsMap_OperatorIndex_CVector3_ev_size_t(void *pObjXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::NormalsMap& objYYYY = *(EarthView::World::Graphic::CPose::NormalsMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = objYYYY[key];
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_NormalsMap_get_CVector3_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->get((ev_size_t&)key);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_NormalsMap_erase_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPose_NormalsMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_NormalsMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_NormalsMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::NormalsMap* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CPose_NormalsPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsPair* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsPair*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPose_NormalsPair_first( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CPose::NormalsPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CPose_NormalsPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsPair* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsPair*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->second;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPose_NormalsPair_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CPose::NormalsPair*)pObjectXXXX)->second = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_nextValue_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CVector3*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_nextValuePtr_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_next_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->next();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_getBegin_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_getEnd_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_NormalsIterator_getCurrent_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::NormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::NormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_nextKey_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_nextValue_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CVector3*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_nextValuePtr_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_next_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->next();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_getBegin_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_getEnd_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_ConstNormalsIterator_getCurrent_NormalsPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose::ConstNormalsIterator* ptrNativeObject = (EarthView::World::Graphic::CPose::ConstNormalsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CPose::NormalsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CPose_getIncludesNormals_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getIncludesNormals();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_addVertex_void_ev_size_t_CVector3(void *pObjectXXXX, _in ev_uint64  index, _in const void* offset )
			{
				EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				ptrNativeObject->addVertex(index, *(EarthView::World::Spatial::Math::CVector3*)offset);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_addVertex_void_size_t_CVector3_CVector3(void *pObjectXXXX, _in ev_uint64  index, _in const void* offset, _in const void* normal )
			{
				EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				ptrNativeObject->addVertex(index, *(EarthView::World::Spatial::Math::CVector3*)offset, *(EarthView::World::Spatial::Math::CVector3*)normal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_removeVertex_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				ptrNativeObject->removeVertex(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPose_clearVertices_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				ptrNativeObject->clearVertices();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_getVertexOffsetIterator_ConstVertexOffsetIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator objXXXX = ptrNativeObject->getVertexOffsetIterator();
				EarthView::World::Graphic::CPose::ConstVertexOffsetIterator *pXXXX = new EarthView::World::Graphic::CPose::ConstVertexOffsetIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_getVertexOffsets_VertexOffsetMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::VertexOffsetMap& objXXXX = ptrNativeObject->getVertexOffsets();
				const EarthView::World::Graphic::CPose::VertexOffsetMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPose_getNormalsIterator_ConstNormalsIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				EarthView::World::Graphic::CPose::ConstNormalsIterator objXXXX = ptrNativeObject->getNormalsIterator();
				EarthView::World::Graphic::CPose::ConstNormalsIterator *pXXXX = new EarthView::World::Graphic::CPose::ConstNormalsIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose_getNormals_NormalsMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				const EarthView::World::Graphic::CPose::NormalsMap& objXXXX = ptrNativeObject->getNormals();
				const EarthView::World::Graphic::CPose::NormalsMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPose__getHardwareVertexBuffer_CHardwareVertexBufferSharedPtr_CVertexData(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexData* origData )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->_getHardwareVertexBuffer(origData);
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CPose_clone_CPose(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPose* ptrNativeObject = (EarthView::World::Graphic::CPose*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_push_back_void_CPose(void *pObjectXXXX, _in EarthView::World::Graphic::CPose*& t )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_PoseList_front_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_PoseList_back_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_insert_void_ev_uint32_CPose(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CPose*& t )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_PoseList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_PoseList_OperatorIndex_CPose_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::PoseList& objYYYY = *(EarthView::World::Graphic::PoseList*) pObjXXXX;
				EarthView::World::Graphic::CPose* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_PoseList_at_CPose_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_PoseList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PoseList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PoseList* ptrNativeObject = (EarthView::World::Graphic::PoseList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
