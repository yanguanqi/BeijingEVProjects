/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelanimation.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_checkRelationShip_TimeRelationShip_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 startTime, _in ev_real64 endTime )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::TimeRelationShip objXXXX = ptrNativeObject->checkRelationShip(startTime, endTime);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_manimationState( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->manimationState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_manimationState( void *pObjectXXXX, EarthView::World::Graphic::CAnimationState*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->manimationState = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_menable( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->menable;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_menable( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->menable = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mpause( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mpause;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mpause( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->mpause = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_manimationType( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType objXXXX = ptrNativeObject->manimationType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_manimationType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->manimationType = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mvalidStartTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mvalidStartTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mvalidStartTime( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->mvalidStartTime = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mvalidEndTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mvalidEndTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CModelAnimationInfomation_mvalidEndTime( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*)pObjectXXXX)->mvalidEndTime = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_fromAnimationSeriailzer_void_CAnimationSerializer(void *pObjectXXXX, _in const void* animationSeriailzer )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					ptrNativeObject->fromAnimationSeriailzer(*(EarthView::World::Graphic::CAnimationSerializer*)animationSeriailzer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_fromXml_void_CXmlElement(void *pObjectXXXX, _in void* xmlElement )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					ptrNativeObject->fromXml(*(EarthView::World::Core::CXmlElement*)xmlElement);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getPostion_CVector3_CXmlElement(void *pObjectXXXX, _in void* xmlElement )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPostion(*(EarthView::World::Core::CXmlElement*)xmlElement);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getQuaternion_CQuaternion_CXmlElement(void *pObjectXXXX, _in void* xmlElement )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getQuaternion(*(EarthView::World::Core::CXmlElement*)xmlElement);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getScale_CVector3_CXmlElement(void *pObjectXXXX, _in void* xmlElement )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale(*(EarthView::World::Core::CXmlElement*)xmlElement);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getAnimationState_CAnimationState(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getAnimationState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getAnimationName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getAnimationName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getValidStartTime_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getValidStartTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getValidEndTime_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getValidEndTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimation_getNode_CNode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_push_back_void_CModelNodeAnimation(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& t )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_front_CModelNodeAnimation(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_back_CModelNodeAnimation(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_insert_void_ev_uint32_CModelNodeAnimation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& t )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_OperatorIndex_CModelNodeAnimation_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList& objYYYY = *(EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_at_CModelNodeAnimation_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelNodeAnimationList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelNodeAnimationList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_push_ev_bool_EVString_CModelAnimationInfomation(void *pObjectXXXX, _in const char* key, _in EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*& val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_OperatorIndex_CModelAnimationInfomation_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_get_CModelAnimationInfomation_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* objXXXX = ptrNativeObject->get(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_getKey_ev_bool_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 index, _inout char*& key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getKey(index, key1);
					key=key1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimationInformationMap_getValue_CModelAnimationInfomation_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 index, _inout ev_bool& succes )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* objXXXX = ptrNativeObject->getValue(index, succes);
					return objXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
				class CModelAnimationProxy : public EarthView::World::Spatial3D::ModelManager::CModelAnimation
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback;
				public:
					CModelAnimationProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelAnimation(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent(EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent(EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
					}
					virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
							return returnValue;
						}
						else
							return this->CModelAnimation::frameRenderingQueued(evt);
					}
					virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback(evt);
							return returnValue;
						}
						else
							return this->CModelAnimation::frameStarted(evt);
					}
					virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback(evt);
							return returnValue;
						}
						else
							return this->CModelAnimation::frameEnded(evt);
					}
				};
				REGISTER_FACTORY_CLASS(CModelAnimationProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_enableAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->enableAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_disableAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->disableAnimation();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_addAnimationState_CModelAnimationInfomation_EVString_CAnimationState_AnimationType(void *pObjectXXXX, _in const char* animationName, _in EarthView::World::Graphic::CAnimationState* animationState, _in int animationType )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* objXXXX = ptrNativeObject->addAnimationState(animationName1, animationState, (EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType)animationType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->removeAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_startAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->startAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_startAllNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->startAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_stopAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->stopAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_stopAllNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->stopAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_stopRangeAnimation_void_Real(void *pObjectXXXX, _in Real timePosition )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->stopRangeAnimation(timePosition);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_pauseAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->pauseAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_continueAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->continueAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setAllAnimationLoop_void_ev_bool(void *pObjectXXXX, _in ev_bool loop )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setAllAnimationLoop(loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_startAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->startAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_startAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->startAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_stopAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->stopAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_stopAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->stopAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_pauseAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->pauseAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_pauseAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->pauseAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_continueAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->continueAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_continueAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->continueAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setAnimationLoop_void_EVString_bool(void *pObjectXXXX, _in const char* animationName, _in bool loop )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setAnimationLoop(animationName1, loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setAnimationLoop_void_EVString_bool_ev_bool(void *pObjectXXXX, _in const char* animationName, _in bool loop, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setAnimationLoop(animationName1, loop, processChild);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					if (dynamic_cast<CModelAnimationProxy*>((EarthView::World::Spatial3D::ModelManager::CModelAnimation*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelAnimation::frameRenderingQueued(evt);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
				{
					CModelAnimationProxy* ptr = dynamic_cast<CModelAnimationProxy*>((EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelAnimation::frameRenderingQueued(evt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_readNodeAnimation_void_CSceneManager_CNode_CXmlElement(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneManager, _in EarthView::World::Graphic::CNode* node, _in void* xmlElement )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->readNodeAnimation(sceneManager, node, *(EarthView::World::Core::CXmlElement*)xmlElement);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_readNodeAnimation_void_CSceneManager_CNode_CAnimationSerializer(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneManager, _in EarthView::World::Graphic::CNode* node, _in const void* animation )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->readNodeAnimation(sceneManager, node, *(EarthView::World::Graphic::CAnimationSerializer*)animation);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getModelAnimationInformationMap_CModelAnimationInformationMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap objXXXX = ptrNativeObject->getModelAnimationInformationMap();
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setClipToRange_void_ev_bool(void *pObjectXXXX, _in ev_bool clip )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setClipToRange(clip);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getClipToRange_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getClipToRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setRange_void_Real_Real(void *pObjectXXXX, _in Real start, _in Real end )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setRange(start, end);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setRangeStart_void_Real(void *pObjectXXXX, _in Real start )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setRangeStart(start);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setRangeEnd_void_Real(void *pObjectXXXX, _in Real end )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setRangeEnd(end);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getRangeStart_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getRangeStart();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getRangeEnd_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getRangeEnd();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setFrameTagList_void_CFrameTagList(void *pObjectXXXX, _in void* frameTagList )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setFrameTagList(*(EarthView::World::Graphic::CFrameTagList*)frameTagList);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getFrameTagList_CFrameTagList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					EarthView::World::Graphic::CFrameTagList objXXXX = ptrNativeObject->getFrameTagList();
					EarthView::World::Graphic::CFrameTagList *pXXXX = new EarthView::World::Graphic::CFrameTagList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_setNodeAnimtionLength_void_Real(void *pObjectXXXX, _in Real timeLength )
				{
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					ptrNativeObject->setNodeAnimtionLength(timeLength);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_ModelManager_CModelAnimation_getNodeAnimtionLength_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelAnimation* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getNodeAnimtionLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
				{
					CModelAnimationProxy* ptr = dynamic_cast<CModelAnimationProxy*>((EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameStarted_ev_bool_FrameEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
				{
					CModelAnimationProxy* ptr = dynamic_cast<CModelAnimationProxy*>((EarthView::World::Spatial3D::ModelManager::CModelAnimation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelAnimation_frameEnded_ev_bool_FrameEvent(pCallback);
					}
				}
			}
		}
	}
}
