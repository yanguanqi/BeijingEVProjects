/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleemittercommands.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace EmitterCommands
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdAngleProxy : public EarthView::World::Graphic::EmitterCommands::CCmdAngle
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdAngleProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAngle(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdAngle::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdAngle::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdAngle::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdAngleProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdAngle* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX;
					if (dynamic_cast<CCmdAngleProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdAngle*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdAngle::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_Callback* pCallback )
				{
					CCmdAngleProxy* ptr = dynamic_cast<CCmdAngleProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdAngle* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdAngle::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdAngle* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX;
					if (dynamic_cast<CCmdAngleProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdAngle*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdAngle::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdAngleProxy* ptr = dynamic_cast<CCmdAngleProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdAngle* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdAngle::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdAngleProxy* ptr = dynamic_cast<CCmdAngleProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdAngle*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdColourProxy : public EarthView::World::Graphic::EmitterCommands::CCmdColour
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdColourProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdColour(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdColour::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdColour::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdColour::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdColourProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColour* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX;
					if (dynamic_cast<CCmdColourProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColour*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColour::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_Callback* pCallback )
				{
					CCmdColourProxy* ptr = dynamic_cast<CCmdColourProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColour* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColour::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColour* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX;
					if (dynamic_cast<CCmdColourProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColour*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColour::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdColourProxy* ptr = dynamic_cast<CCmdColourProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColour* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColour::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdColourProxy* ptr = dynamic_cast<CCmdColourProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColour*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdColourRangeStartProxy : public EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdColourRangeStartProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdColourRangeStart(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdColourRangeStart::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdColourRangeStart::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdColourRangeStart::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdColourRangeStartProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdColourRangeStartProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_Callback* pCallback )
				{
					CCmdColourRangeStartProxy* ptr = dynamic_cast<CCmdColourRangeStartProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX;
					if (dynamic_cast<CCmdColourRangeStartProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdColourRangeStartProxy* ptr = dynamic_cast<CCmdColourRangeStartProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdColourRangeStartProxy* ptr = dynamic_cast<CCmdColourRangeStartProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdColourRangeEndProxy : public EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdColourRangeEndProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdColourRangeEnd(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdColourRangeEnd::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdColourRangeEnd::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdColourRangeEnd::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdColourRangeEndProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdColourRangeEndProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_Callback* pCallback )
				{
					CCmdColourRangeEndProxy* ptr = dynamic_cast<CCmdColourRangeEndProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX;
					if (dynamic_cast<CCmdColourRangeEndProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdColourRangeEndProxy* ptr = dynamic_cast<CCmdColourRangeEndProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdColourRangeEndProxy* ptr = dynamic_cast<CCmdColourRangeEndProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdDirectionProxy : public EarthView::World::Graphic::EmitterCommands::CCmdDirection
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdDirectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdDirection(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdDirection::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdDirection::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdDirection::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdDirectionProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdDirection* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX;
					if (dynamic_cast<CCmdDirectionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDirection*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDirection::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_Callback* pCallback )
				{
					CCmdDirectionProxy* ptr = dynamic_cast<CCmdDirectionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdDirection* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDirection::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdDirection* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX;
					if (dynamic_cast<CCmdDirectionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDirection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDirection::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdDirectionProxy* ptr = dynamic_cast<CCmdDirectionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdDirection* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDirection::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdDirectionProxy* ptr = dynamic_cast<CCmdDirectionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDirection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdUpProxy : public EarthView::World::Graphic::EmitterCommands::CCmdUp
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdUpProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdUp(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdUp::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdUp::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdUp::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdUpProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdUp* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX;
					if (dynamic_cast<CCmdUpProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdUp*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdUp::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_Callback* pCallback )
				{
					CCmdUpProxy* ptr = dynamic_cast<CCmdUpProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdUp* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdUp::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdUp* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX;
					if (dynamic_cast<CCmdUpProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdUp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdUp::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdUpProxy* ptr = dynamic_cast<CCmdUpProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdUp* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdUp::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdUpProxy* ptr = dynamic_cast<CCmdUpProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdUp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdEmissionRateProxy : public EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdEmissionRateProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdEmissionRate(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdEmissionRate::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdEmissionRate::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdEmissionRate::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdEmissionRateProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX;
					if (dynamic_cast<CCmdEmissionRateProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_Callback* pCallback )
				{
					CCmdEmissionRateProxy* ptr = dynamic_cast<CCmdEmissionRateProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX;
					if (dynamic_cast<CCmdEmissionRateProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdEmissionRateProxy* ptr = dynamic_cast<CCmdEmissionRateProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdEmissionRateProxy* ptr = dynamic_cast<CCmdEmissionRateProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdVelocityProxy : public EarthView::World::Graphic::EmitterCommands::CCmdVelocity
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdVelocityProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdVelocity(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdVelocity::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdVelocity::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdVelocity::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdVelocityProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdVelocity*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdVelocity::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_Callback* pCallback )
				{
					CCmdVelocityProxy* ptr = dynamic_cast<CCmdVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdVelocity::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdVelocity*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdVelocity::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdVelocityProxy* ptr = dynamic_cast<CCmdVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdVelocity::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdVelocityProxy* ptr = dynamic_cast<CCmdVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMinVelocityProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMinVelocityProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMinVelocity(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMinVelocity::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMinVelocity::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMinVelocity::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMinVelocityProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdMinVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMinVelocityProxy* ptr = dynamic_cast<CCmdMinVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdMinVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMinVelocityProxy* ptr = dynamic_cast<CCmdMinVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMinVelocityProxy* ptr = dynamic_cast<CCmdMinVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMaxVelocityProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMaxVelocityProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMaxVelocity(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMaxVelocity::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMaxVelocity::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMaxVelocity::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMaxVelocityProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMaxVelocityProxy* ptr = dynamic_cast<CCmdMaxVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMaxVelocityProxy* ptr = dynamic_cast<CCmdMaxVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMaxVelocityProxy* ptr = dynamic_cast<CCmdMaxVelocityProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdTTLProxy : public EarthView::World::Graphic::EmitterCommands::CCmdTTL
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdTTLProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdTTL(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdTTL::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdTTL::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdTTL::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdTTLProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdTTL*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdTTL::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_Callback* pCallback )
				{
					CCmdTTLProxy* ptr = dynamic_cast<CCmdTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdTTL::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdTTL*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdTTL::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdTTLProxy* ptr = dynamic_cast<CCmdTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdTTL::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdTTLProxy* ptr = dynamic_cast<CCmdTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMinTTLProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMinTTL
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMinTTLProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMinTTL(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMinTTL::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMinTTL::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMinTTL::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMinTTLProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdMinTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinTTL::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMinTTLProxy* ptr = dynamic_cast<CCmdMinTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinTTL::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdMinTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinTTL::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMinTTLProxy* ptr = dynamic_cast<CCmdMinTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinTTL::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMinTTLProxy* ptr = dynamic_cast<CCmdMinTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMaxTTLProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMaxTTLProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMaxTTL(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMaxTTL::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMaxTTL::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMaxTTL::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMaxTTLProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMaxTTLProxy* ptr = dynamic_cast<CCmdMaxTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMaxTTLProxy* ptr = dynamic_cast<CCmdMaxTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMaxTTLProxy* ptr = dynamic_cast<CCmdMaxTTLProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdPositionProxy : public EarthView::World::Graphic::EmitterCommands::CCmdPosition
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdPositionProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdPosition(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdPosition::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdPosition::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdPosition::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdPositionProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdPosition* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX;
					if (dynamic_cast<CCmdPositionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdPosition*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdPosition::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_Callback* pCallback )
				{
					CCmdPositionProxy* ptr = dynamic_cast<CCmdPositionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdPosition* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdPosition::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdPosition* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX;
					if (dynamic_cast<CCmdPositionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdPosition*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdPosition::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdPositionProxy* ptr = dynamic_cast<CCmdPositionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdPosition* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdPosition::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdPositionProxy* ptr = dynamic_cast<CCmdPositionProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdPosition*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdDurationProxy : public EarthView::World::Graphic::EmitterCommands::CCmdDuration
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdDurationProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdDuration(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdDuration::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdDuration::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdDuration::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdDurationProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDuration*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDuration::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_Callback* pCallback )
				{
					CCmdDurationProxy* ptr = dynamic_cast<CCmdDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDuration::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDuration*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDuration::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdDurationProxy* ptr = dynamic_cast<CCmdDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdDuration::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdDurationProxy* ptr = dynamic_cast<CCmdDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMinDurationProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMinDuration
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMinDurationProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMinDuration(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMinDuration::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMinDuration::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMinDuration::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMinDurationProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdMinDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinDuration::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMinDurationProxy* ptr = dynamic_cast<CCmdMinDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinDuration::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdMinDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinDuration::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMinDurationProxy* ptr = dynamic_cast<CCmdMinDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinDuration::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMinDurationProxy* ptr = dynamic_cast<CCmdMinDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMaxDurationProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMaxDurationProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMaxDuration(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMaxDuration::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMaxDuration::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMaxDuration::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMaxDurationProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMaxDurationProxy* ptr = dynamic_cast<CCmdMaxDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMaxDurationProxy* ptr = dynamic_cast<CCmdMaxDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMaxDurationProxy* ptr = dynamic_cast<CCmdMaxDurationProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdRepeatDelayProxy : public EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdRepeatDelayProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdRepeatDelay(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdRepeatDelay::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdRepeatDelay::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdRepeatDelay::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdRepeatDelayProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_Callback* pCallback )
				{
					CCmdRepeatDelayProxy* ptr = dynamic_cast<CCmdRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdRepeatDelayProxy* ptr = dynamic_cast<CCmdRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdRepeatDelayProxy* ptr = dynamic_cast<CCmdRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMinRepeatDelayProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMinRepeatDelayProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMinRepeatDelay(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMinRepeatDelay::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMinRepeatDelay::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMinRepeatDelay::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMinRepeatDelayProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdMinRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMinRepeatDelayProxy* ptr = dynamic_cast<CCmdMinRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdMinRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMinRepeatDelayProxy* ptr = dynamic_cast<CCmdMinRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMinRepeatDelayProxy* ptr = dynamic_cast<CCmdMinRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMaxRepeatDelayProxy : public EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMaxRepeatDelayProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMaxRepeatDelay(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMaxRepeatDelay::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMaxRepeatDelay::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMaxRepeatDelay::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMaxRepeatDelayProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMaxRepeatDelayProxy* ptr = dynamic_cast<CCmdMaxRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX;
					if (dynamic_cast<CCmdMaxRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMaxRepeatDelayProxy* ptr = dynamic_cast<CCmdMaxRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMaxRepeatDelayProxy* ptr = dynamic_cast<CCmdMaxRepeatDelayProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdNameProxy : public EarthView::World::Graphic::EmitterCommands::CCmdName
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdNameProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdName(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdName::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdName::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdName::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdNameProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdName* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX;
					if (dynamic_cast<CCmdNameProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdName*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdName::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_Callback* pCallback )
				{
					CCmdNameProxy* ptr = dynamic_cast<CCmdNameProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdName* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdName::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdName* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX;
					if (dynamic_cast<CCmdNameProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdName*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdName::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdNameProxy* ptr = dynamic_cast<CCmdNameProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdName* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdName::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdNameProxy* ptr = dynamic_cast<CCmdNameProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdName*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdEmittedEmitterProxy : public EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter
				{
				private:
					EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdEmittedEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdEmittedEmitter(pList)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdEmittedEmitter::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdEmittedEmitter::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdEmittedEmitter::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdEmittedEmitterProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX;
					if (dynamic_cast<CCmdEmittedEmitterProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_Callback* pCallback )
				{
					CCmdEmittedEmitterProxy* ptr = dynamic_cast<CCmdEmittedEmitterProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX;
					if (dynamic_cast<CCmdEmittedEmitterProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdEmittedEmitterProxy* ptr = dynamic_cast<CCmdEmittedEmitterProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter* ptrNativeObject = (EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdEmittedEmitterProxy* ptr = dynamic_cast<CCmdEmittedEmitterProxy*>((EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
			}
		}
	}
}
