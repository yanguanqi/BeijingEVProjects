/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/stringinterface.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_CParameterDef_name( void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CParameterDef_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::CParameterDef*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_CParameterDef_description( void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->description;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CParameterDef_description( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::CParameterDef*)pObjectXXXX)->description = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Core_CParameterDef_paramType( void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				EarthView::World::Core::ParameterType objXXXX = ptrNativeObject->paramType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CParameterDef_paramType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Core::CParameterDef*)pObjectXXXX)->paramType = (EarthView::World::Core::ParameterType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Core_CParameterDef_mbReadOnly( void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mbReadOnly;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CParameterDef_mbReadOnly( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Core::CParameterDef*)pObjectXXXX)->mbReadOnly = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Core_CParameterDef_mbEnabled( void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mbEnabled;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CParameterDef_mbEnabled( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Core::CParameterDef*)pObjectXXXX)->mbEnabled = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParameterDef_release_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ptrNativeObject->release();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParameterDef_setParameter_void_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 min, _in ev_int32 max, _in ev_int32 singleStep )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ptrNativeObject->setParameter(min, max, singleStep);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParameterDef_setParameter_void_ev_real64_ev_real64_ev_uint8_ev_real64(void *pObjectXXXX, _in ev_real64 min, _in ev_real64 max, _in ev_uint8 decimals, _in ev_real64 singleStep )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ptrNativeObject->setParameter(min, max, decimals, singleStep);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParameterDef_setParameter_void_StringVector(void *pObjectXXXX, _in void* options )
			{
				EarthView::World::Core::CParameterDef* ptrNativeObject = (EarthView::World::Core::CParameterDef*) pObjectXXXX;
				ptrNativeObject->setParameter(*(EarthView::World::Core::StringVector*)options);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_push_back_void_CParameterDef(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Core::CParameterDef*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParameterList_front_CParameterDef(void *pObjectXXXX )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				EarthView::World::Core::CParameterDef& objXXXX = ptrNativeObject->front();
				EarthView::World::Core::CParameterDef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParameterList_back_CParameterDef(void *pObjectXXXX )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				EarthView::World::Core::CParameterDef& objXXXX = ptrNativeObject->back();
				EarthView::World::Core::CParameterDef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_insert_void_ev_uint32_CParameterDef(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Core::CParameterDef*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParameterList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParameterList_OperatorIndex_CParameterDef_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::ParameterList& objYYYY = *(EarthView::World::Core::ParameterList*) pObjXXXX;
				EarthView::World::Core::CParameterDef& objXXXX = objYYYY[n];
				EarthView::World::Core::CParameterDef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParameterList_at_CParameterDef_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				EarthView::World::Core::CParameterDef& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Core::CParameterDef *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_ParameterList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParameterList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::ParameterList* ptrNativeObject = (EarthView::World::Core::ParameterList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef char*  ( _stdcall EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CParamCommandProxy : public EarthView::World::Core::CParamCommand
			{
			private:
				EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback* m_EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback;
				EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback* m_EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback;
				EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CParamCommandProxy(EarthView::World::Core::CNameValuePairList *pList) : CParamCommand(pList)
				{
					m_EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CParamCommand_doGet_EVString_void(EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CParamCommand_doSet_void_void_EVString(EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString(EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CParamCommand::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CParamCommand::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CParamCommand::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CParamCommandProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CParamCommand_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				if (dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CParamCommand::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CParamCommand_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Core_CParamCommand_doGet_EVString_void_Callback* pCallback )
			{
				CParamCommandProxy* ptr = dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CParamCommand_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CParamCommand_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CParamCommand::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParamCommand_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				if (dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CParamCommand::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CParamCommand_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Callback* pCallback )
			{
				CParamCommandProxy* ptr = dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CParamCommand_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParamCommand_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CParamCommand::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString(void *pObjectXXXX, _in void* target, _in const char* val, _inout char*& reason )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::ev_string reason1 = reason;
				EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				if (dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CParamCommand::trySet(target, val1, reason1);
					reason=reason1.makeBuffer();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->trySet(target, val1, reason1);
					reason=reason1.makeBuffer();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CParamCommandProxy* ptr = dynamic_cast<CParamCommandProxy*>((EarthView::World::Core::CParamCommand*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val, _inout char*& reason )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::ev_string reason1 = reason;
				EarthView::World::Core::CParamCommand* ptrNativeObject = (EarthView::World::Core::CParamCommand*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CParamCommand::trySet(target, val1, reason1);
				reason=reason1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamCommandMap_push_ev_bool_EVString_CParamCommand(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Core::CParamCommand*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamCommandMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CParamCommand*  _stdcall EarthView_World_Core_ParamCommandMap_OperatorIndex_CParamCommand_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Core::ParamCommandMap& objYYYY = *(EarthView::World::Core::ParamCommandMap*) pObjXXXX;
				EarthView::World::Core::CParamCommand* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CParamCommand*  _stdcall EarthView_World_Core_ParamCommandMap_get_CParamCommand_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				EarthView::World::Core::CParamCommand* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParamCommandMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_ParamCommandMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParamCommandMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamCommandMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParamCommandMap* ptrNativeObject = (EarthView::World::Core::ParamCommandMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CParamDictionary_addParameter_void_CParameterDef_CParamCommand(void *pObjectXXXX, _in const void* paramDef, _in EarthView::World::Core::CParamCommand* paramCmd )
			{
				EarthView::World::Core::CParamDictionary* ptrNativeObject = (EarthView::World::Core::CParamDictionary*) pObjectXXXX;
				ptrNativeObject->addParameter(*(EarthView::World::Core::CParameterDef*)paramDef, paramCmd);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CParamDictionary_getParameters_ParameterList(void *pObjectXXXX )
			{
				const EarthView::World::Core::CParamDictionary* ptrNativeObject = (EarthView::World::Core::CParamDictionary*) pObjectXXXX;
				const EarthView::World::Core::ParameterList& objXXXX = ptrNativeObject->getParameters();
				const EarthView::World::Core::ParameterList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamDictionaryMap_push_ev_bool_EVString_CParamDictionary(void *pObjectXXXX, _in const char* key, _in const void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Core::CParamDictionary*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamDictionaryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParamDictionaryMap_OperatorIndex_CParamDictionary_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Core::ParamDictionaryMap& objYYYY = *(EarthView::World::Core::ParamDictionaryMap*) pObjXXXX;
				EarthView::World::Core::CParamDictionary& objXXXX = objYYYY[key];
				EarthView::World::Core::CParamDictionary *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_ParamDictionaryMap_get_CParamDictionary_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				EarthView::World::Core::CParamDictionary& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Core::CParamDictionary *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParamDictionaryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_ParamDictionaryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_ParamDictionaryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_ParamDictionaryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::ParamDictionaryMap* ptrNativeObject = (EarthView::World::Core::ParamDictionaryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback)(_in char*& name, _in int status);
			typedef void  ( _stdcall EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback)(_in char*& name);
			class IStringInterfaceObserverProxy : public EarthView::World::Core::IStringInterfaceObserver
			{
			private:
				EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback* m_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback;
				EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback* m_EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback;
				EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback* m_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback;
				EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback* m_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback;
			public:
				IStringInterfaceObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IStringInterfaceObserver(pList)
				{
					m_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback = NULL;
					m_EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback = NULL;
					m_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback = NULL;
					m_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString(EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_IStringInterfaceObserver_destroyed_void(EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback* pCallback)
				{
					m_EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus(EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback* pCallback)
				{
					m_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString(EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback = pCallback;
				}
				virtual void valueChanged(_in const EVString& name)
				{
					if(m_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback(name_Char);
					}
					else
						return this->IStringInterfaceObserver::valueChanged(name);
				}
				virtual void destroyed()
				{
					if(m_EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback();
					}
					else
						return this->IStringInterfaceObserver::destroyed();
				}
				virtual void statusChanged(_in const EVString& name, _in EarthView::World::Core::ParamStatus status)
				{
					if(m_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback(name_Char, (int)status);
					}
					else
						return this->IStringInterfaceObserver::statusChanged(name, status);
				}
				virtual void valueModified(_in const EVString& name)
				{
					if(m_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback(name_Char);
					}
					else
						return this->IStringInterfaceObserver::valueModified(name);
				}
			};
			REGISTER_FACTORY_CLASS(IStringInterfaceObserverProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				if (dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::valueChanged(name1);
				else
					ptrNativeObject->valueChanged(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString( void *pObjectXXXX, EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_Callback* pCallback )
			{
				IStringInterfaceObserverProxy* ptr = dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_valueChanged_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::valueChanged(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_destroyed_void(void *pObjectXXXX )
			{
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				if (dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::destroyed();
				else
					ptrNativeObject->destroyed();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_IStringInterfaceObserver_destroyed_void( void *pObjectXXXX, EarthView_World_Core_IStringInterfaceObserver_destroyed_void_Callback* pCallback )
			{
				IStringInterfaceObserverProxy* ptr = dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_IStringInterfaceObserver_destroyed_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_destroyed_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::destroyed();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus(void *pObjectXXXX, _in const char* name, _in int status )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				if (dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::statusChanged(name1, (EarthView::World::Core::ParamStatus)status);
				else
					ptrNativeObject->statusChanged(name1, (EarthView::World::Core::ParamStatus)status);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus( void *pObjectXXXX, EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_Callback* pCallback )
			{
				IStringInterfaceObserverProxy* ptr = dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_statusChanged_void_EVString_ParamStatus_NoVirtual(void *pObjectXXXX, _in const char* name, _in int status )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::statusChanged(name1, (EarthView::World::Core::ParamStatus)status);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				if (dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::valueModified(name1);
				else
					ptrNativeObject->valueModified(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString( void *pObjectXXXX, EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_Callback* pCallback )
			{
				IStringInterfaceObserverProxy* ptr = dynamic_cast<IStringInterfaceObserverProxy*>((EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IStringInterfaceObserver_valueModified_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::IStringInterfaceObserver* ptrNativeObject = (EarthView::World::Core::IStringInterfaceObserver*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::IStringInterfaceObserver::valueModified(name1);
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CStringInterfaceProxy : public EarthView::World::Core::CStringInterface
			{
			private:
				EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback* m_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback;
				EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback;
			public:
				CStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CStringInterface(pList)
				{
					m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString(EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList(EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString(EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface(EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CStringInterface::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CStringInterface::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CStringInterface::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CStringInterface::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CStringInterface::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CStringInterfaceProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_startEdit_void_ev_bool_bool(void *pObjectXXXX, _in ev_bool immediate, _in bool restoreable )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->startEdit(immediate, restoreable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_endEdit_void_ev_bool(void *pObjectXXXX, _in ev_bool apply )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->endEdit(apply);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_hasValueChanged_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasValueChanged();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_appendObserver_void_IStringInterfaceObserver(void *pObjectXXXX, _in EarthView::World::Core::IStringInterfaceObserver* observer )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->appendObserver(observer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_removeObserver_void_IStringInterfaceObserver(void *pObjectXXXX, _in EarthView::World::Core::IStringInterfaceObserver* observer )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->removeObserver(observer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_notifyValueChanged_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->notifyValueChanged(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_notifyStatusChanged_void_EVString_ParamStatus(void *pObjectXXXX, _in const char* name, _in int status )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->notifyStatusChanged(name1, (EarthView::World::Core::ParamStatus)status);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_createParamDictionary_ev_bool_EVString(void *pObjectXXXX, _in const char* className )
			{
				EarthView::World::Core::ev_string className1 = className;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createParamDictionary(className1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringInterface_getLastErrorMessage_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getLastErrorMessage();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CParamDictionary*  _stdcall EarthView_World_Core_CStringInterface_getParamDictionary_CParamDictionary(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				EarthView::World::Core::CParamDictionary* objXXXX = ptrNativeObject->getParamDictionary();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CStringInterface_getParameters_ParameterList(void *pObjectXXXX )
			{
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				const EarthView::World::Core::ParameterList& objXXXX = ptrNativeObject->getParameters();
				const EarthView::World::Core::ParameterList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* value )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				if (dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::setParameter(name1, value1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setParameter(name1, value1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CStringInterfaceProxy* ptr = dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* value )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::setParameter(name1, value1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool readOnly, _in ev_bool enable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				if (dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::setParameter(name1, readOnly, enable);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setParameter(name1, readOnly, enable);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CStringInterfaceProxy* ptr = dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool readOnly, _in ev_bool enable )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::setParameter(name1, readOnly, enable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList(void *pObjectXXXX, _in const void* paramList )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				if (dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CStringInterface::setParameterList(*(EarthView::World::Core::CommonStringPairList*)paramList);
				else
					ptrNativeObject->setParameterList(*(EarthView::World::Core::CommonStringPairList*)paramList);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CStringInterfaceProxy* ptr = dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const void* paramList )
			{
				EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CStringInterface::setParameterList(*(EarthView::World::Core::CommonStringPairList*)paramList);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringInterface_getParameter_EVString_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				if (dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::getParameter(name1);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getParameter(name1);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Callback* pCallback )
			{
				CStringInterfaceProxy* ptr = dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CStringInterface_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CStringInterface::getParameter(name1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface(void *pObjectXXXX, _in EarthView::World::Core::CStringInterface* dest )
			{
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				if (dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CStringInterface::copyParametersTo(dest);
				else
					ptrNativeObject->copyParametersTo(dest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CStringInterfaceProxy* ptr = dynamic_cast<CStringInterfaceProxy*>((EarthView::World::Core::CStringInterface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CStringInterface* dest )
			{
				const EarthView::World::Core::CStringInterface* ptrNativeObject = (EarthView::World::Core::CStringInterface*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CStringInterface::copyParametersTo(dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringInterface_cleanupDictionary_void( )
			{
				EarthView::World::Core::CStringInterface::cleanupDictionary();
			}
		}
	}
}
