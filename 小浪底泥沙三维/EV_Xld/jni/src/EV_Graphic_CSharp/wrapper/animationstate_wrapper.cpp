/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animationstate.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_push_back_void_ev_real32(void *pObjectXXXX, _in const ev_real32& t )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_front_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_back_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_insert_void_ev_uint32_ev_real32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_real32& t )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_OperatorIndex_ev_real32_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask& objYYYY = *(EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjXXXX;
				ev_real32& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32&  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_at_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ev_real32& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_BoneBlendMask_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationState::BoneBlendMask* ptrNativeObject = (EarthView::World::Graphic::CAnimationState::BoneBlendMask*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CAnimationState_getAnimationName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getAnimationName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationState_getTimePosition_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTimePosition();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setTimePosition_void_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setTimePosition(timePos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setTimePositionInRange_void_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setTimePositionInRange(timePos);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationState_getLength_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setLength_void_Real(void *pObjectXXXX, _in Real len )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setLength(len);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationState_getWeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getWeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setWeight_void_Real(void *pObjectXXXX, _in Real weight )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setWeight(weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_addTime_void_Real(void *pObjectXXXX, _in Real offset )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->addTime(offset);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_hasEnded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasEnded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_OperatorEquals_ev_bool_CAnimationState(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CAnimationState& objXXXX = *(EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EarthView::World::Graphic::CAnimationState& objXXXX1 = *(EarthView::World::Graphic::CAnimationState*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_OperatorNotEquals_ev_bool_CAnimationState(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CAnimationState& objXXXX = *(EarthView::World::Graphic::CAnimationState*) pObjXXXX;
				const EarthView::World::Graphic::CAnimationState& objXXXX1 = *(EarthView::World::Graphic::CAnimationState*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setLoop_void_ev_bool(void *pObjectXXXX, _in ev_bool loop )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setLoop(loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_getLoop_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLoop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_isFinished_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFinished();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_copyStateFrom_void_CAnimationState(void *pObjectXXXX, _in const void* animState )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->copyStateFrom(*(EarthView::World::Graphic::CAnimationState*)animState);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationStateSet*  _stdcall EarthView_World_Graphic_CAnimationState_getParent_CAnimationStateSet(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationStateSet* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_createBlendMask_void_ev_size_t_ev_real32(void *pObjectXXXX, _in ev_uint64  blendMaskSizeHint, _in ev_real32 initialWeight )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->createBlendMask(blendMaskSizeHint, initialWeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_createBlendMask_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  blendMaskSizeHint )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->createBlendMask(blendMaskSizeHint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_destroyBlendMask_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->destroyBlendMask();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState__setBlendMaskData_void_ev_real32(void *pObjectXXXX, _in const ev_real32* blendMaskData )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->_setBlendMaskData(blendMaskData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState__setBlendMask_void_BoneBlendMask(void *pObjectXXXX, _in const EarthView::World::Graphic::CAnimationState::BoneBlendMask* blendMask )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->_setBlendMask(blendMask);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CAnimationState::BoneBlendMask*  _stdcall EarthView_World_Graphic_CAnimationState_getBlendMask_BoneBlendMask(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				const EarthView::World::Graphic::CAnimationState::BoneBlendMask* objXXXX = ptrNativeObject->getBlendMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_hasBlendMask_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasBlendMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setBlendMaskEntry_void_ev_size_t_ev_real32(void *pObjectXXXX, _in ev_uint64  boneHandle, _in ev_real32 weight )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setBlendMaskEntry(boneHandle, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CAnimationState_getBlendMaskEntry_ev_real32_ev_size_t(void *pObjectXXXX, _in ev_uint64  boneHandle )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getBlendMaskEntry(boneHandle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setClipToRange_void_ev_bool(void *pObjectXXXX, _in ev_bool clip )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setClipToRange(clip);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationState_getClipToRange_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getClipToRange();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationState_setRange_void_Real_Real(void *pObjectXXXX, _in Real start, _in Real end )
			{
				EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				ptrNativeObject->setRange(start, end);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationState_getRangeStart_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getRangeStart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationState_getRangeEnd_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationState* ptrNativeObject = (EarthView::World::Graphic::CAnimationState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getRangeEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AnimationStateMap_push_ev_bool_EVString_CAnimationState(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CAnimationState*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AnimationStateMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateMap_OperatorIndex_CAnimationState_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::AnimationStateMap& objYYYY = *(EarthView::World::Graphic::AnimationStateMap*) pObjXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateMap_get_CAnimationState_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_AnimationStateMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AnimationStateMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateMap* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_AnimationStatePair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStatePair* ptrNativeObject = (EarthView::World::Graphic::AnimationStatePair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_AnimationStatePair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::AnimationStatePair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall Get_EarthView_World_Graphic_AnimationStatePair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStatePair* ptrNativeObject = (EarthView::World::Graphic::AnimationStatePair*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_AnimationStatePair_second( void *pObjectXXXX, EarthView::World::Graphic::CAnimationState*  value )
			{
				((EarthView::World::Graphic::AnimationStatePair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_nextValue_CAnimationState(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState**  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_nextValuePtr_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_next_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_getBegin_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_getEnd_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_AnimationStateMapIterator_getCurrent_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::AnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_nextValue_CAnimationState(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState**  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_nextValuePtr_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_next_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_getBegin_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_getEnd_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_ConstAnimationStateMapIterator_getCurrent_AnimationStatePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateMapIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::AnimationStatePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::AnimationStatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_push_back_void_CAnimationState(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationState*& t )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_push_front_void_CAnimationState(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationState*& t )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->push_front(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateList_front_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateList_back_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_AnimationStateList_at_CAnimationState_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_insert_void_ev_uint32_CAnimationState(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CAnimationState*& t )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_remove_void_CAnimationState(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationState*& val )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->remove(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_AnimationStateList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_AnimationStateList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_AnimationStateList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::AnimationStateList* ptrNativeObject = (EarthView::World::Graphic::AnimationStateList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_getCurrent_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_next_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_getBegin_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_ConstAnimationStateListIterator_getEnd_CAnimationState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstAnimationStateListIterator* ptrNativeObject = (EarthView::World::Graphic::ConstAnimationStateListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CAnimationStateSet_createAnimationState_CAnimationState_EVString_Real_Real_Real_ev_bool(void *pObjectXXXX, _in const char* animName, _in Real timePos, _in Real length, _in Real weight, _in ev_bool enabled )
			{
				EarthView::World::Core::ev_string animName1 = animName;
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->createAnimationState(animName1, timePos, length, weight, enabled);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CAnimationStateSet_createAnimationState_CAnimationState_EVString_Real_Real_Real(void *pObjectXXXX, _in const char* animName, _in Real timePos, _in Real length, _in Real weight )
			{
				EarthView::World::Core::ev_string animName1 = animName;
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->createAnimationState(animName1, timePos, length, weight);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CAnimationStateSet_createAnimationState_CAnimationState_EVString_Real_Real(void *pObjectXXXX, _in const char* animName, _in Real timePos, _in Real length )
			{
				EarthView::World::Core::ev_string animName1 = animName;
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->createAnimationState(animName1, timePos, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CAnimationStateSet_getAnimationState_CAnimationState_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getAnimationState(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationStateSet_hasAnimationState_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasAnimationState(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateSet_removeAnimationState_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ptrNativeObject->removeAnimationState(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateSet_removeAllAnimationStates_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ptrNativeObject->removeAllAnimationStates();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationStateSet_getAnimationStateIterator_AnimationStateMapIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::AnimationStateMapIterator objXXXX = ptrNativeObject->getAnimationStateIterator();
				EarthView::World::Graphic::AnimationStateMapIterator *pXXXX = new EarthView::World::Graphic::AnimationStateMapIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateSet_copyMatchingState_void_CAnimationStateSet(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* target )
			{
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ptrNativeObject->copyMatchingState(target);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateSet__notifyDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ptrNativeObject->_notifyDirty();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CAnimationStateSet_getDirtyFrameNumber_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDirtyFrameNumber();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateSet__notifyAnimationStateEnabled_void_CAnimationState_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationState* ref_target, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ptrNativeObject->_notifyAnimationStateEnabled(ref_target, enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationStateSet_hasEnabledAnimationState_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasEnabledAnimationState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CAnimationStateSet_getEnabledAnimationStateIterator_ConstAnimationStateListIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				EarthView::World::Graphic::ConstAnimationStateListIterator objXXXX = ptrNativeObject->getEnabledAnimationStateIterator();
				EarthView::World::Graphic::ConstAnimationStateListIterator *pXXXX = new EarthView::World::Graphic::ConstAnimationStateListIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CAnimationStateSet_getNumOfEnabledAnimationStates_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateSet* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumOfEnabledAnimationStates();
				return objXXXX;
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CAnimationStateControllerValueProxy : public EarthView::World::Graphic::CAnimationStateControllerValue
			{
			private:
				EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback;
			public:
				CAnimationStateControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationStateControllerValue(pList)
				{
					m_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real(EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real(EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CAnimationStateControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CAnimationStateControllerValue::setValue(value);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationStateControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateControllerValue* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX;
				if (dynamic_cast<CAnimationStateControllerValueProxy*>((EarthView::World::Graphic::CAnimationStateControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationStateControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_Callback* pCallback )
			{
				CAnimationStateControllerValueProxy* ptr = dynamic_cast<CAnimationStateControllerValueProxy*>((EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationStateControllerValue* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationStateControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CAnimationStateControllerValue* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX;
				if (dynamic_cast<CAnimationStateControllerValueProxy*>((EarthView::World::Graphic::CAnimationStateControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationStateControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CAnimationStateControllerValueProxy* ptr = dynamic_cast<CAnimationStateControllerValueProxy*>((EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationStateControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CAnimationStateControllerValue* ptrNativeObject = (EarthView::World::Graphic::CAnimationStateControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationStateControllerValue::setValue(value);
			}
		}
	}
}
