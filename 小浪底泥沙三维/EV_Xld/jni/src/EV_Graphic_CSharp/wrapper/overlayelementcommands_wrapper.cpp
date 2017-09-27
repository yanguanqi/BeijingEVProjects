/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlayelementcommands.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace OverlayElementCommands
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdLeftProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdLeft
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdLeftProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdLeft(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdLeft::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdLeft::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdLeft::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdLeftProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdLeft* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX;
					if (dynamic_cast<CCmdLeftProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdLeft::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_Callback* pCallback )
				{
					CCmdLeftProxy* ptr = dynamic_cast<CCmdLeftProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdLeft* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdLeft::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdLeft* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX;
					if (dynamic_cast<CCmdLeftProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdLeft::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdLeftProxy* ptr = dynamic_cast<CCmdLeftProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdLeft* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdLeft::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdLeftProxy* ptr = dynamic_cast<CCmdLeftProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdLeft*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdTopProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdTop
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdTopProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdTop(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdTop::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdTop::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdTop::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdTopProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdTop* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX;
					if (dynamic_cast<CCmdTopProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdTop*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdTop::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_Callback* pCallback )
				{
					CCmdTopProxy* ptr = dynamic_cast<CCmdTopProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdTop* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdTop::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdTop* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX;
					if (dynamic_cast<CCmdTopProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdTop*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdTop::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdTopProxy* ptr = dynamic_cast<CCmdTopProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdTop* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdTop::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdTopProxy* ptr = dynamic_cast<CCmdTopProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdTop*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdWidthProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdWidth
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdWidthProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdWidth(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdWidth::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdWidth::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdWidth::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdWidthProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdWidth* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX;
					if (dynamic_cast<CCmdWidthProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdWidth::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_Callback* pCallback )
				{
					CCmdWidthProxy* ptr = dynamic_cast<CCmdWidthProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdWidth* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdWidth::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdWidth* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX;
					if (dynamic_cast<CCmdWidthProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdWidth::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdWidthProxy* ptr = dynamic_cast<CCmdWidthProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdWidth* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdWidth::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdWidthProxy* ptr = dynamic_cast<CCmdWidthProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdWidth*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdHeightProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdHeight
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdHeightProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdHeight(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdHeight::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdHeight::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdHeight::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdHeightProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdHeight* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX;
					if (dynamic_cast<CCmdHeightProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHeight::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_Callback* pCallback )
				{
					CCmdHeightProxy* ptr = dynamic_cast<CCmdHeightProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdHeight* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHeight::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdHeight* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX;
					if (dynamic_cast<CCmdHeightProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHeight::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdHeightProxy* ptr = dynamic_cast<CCmdHeightProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdHeight* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHeight::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdHeightProxy* ptr = dynamic_cast<CCmdHeightProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHeight*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMaterialProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMaterialProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMaterial(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMaterial::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMaterial::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMaterial::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMaterialProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX;
					if (dynamic_cast<CCmdMaterialProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMaterialProxy* ptr = dynamic_cast<CCmdMaterialProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX;
					if (dynamic_cast<CCmdMaterialProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMaterialProxy* ptr = dynamic_cast<CCmdMaterialProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMaterialProxy* ptr = dynamic_cast<CCmdMaterialProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdCaptionProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdCaption
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdCaptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdCaption(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdCaption::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdCaption::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdCaption::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdCaptionProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdCaption* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX;
					if (dynamic_cast<CCmdCaptionProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdCaption::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_Callback* pCallback )
				{
					CCmdCaptionProxy* ptr = dynamic_cast<CCmdCaptionProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdCaption* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdCaption::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdCaption* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX;
					if (dynamic_cast<CCmdCaptionProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdCaption::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdCaptionProxy* ptr = dynamic_cast<CCmdCaptionProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdCaption* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdCaption::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdCaptionProxy* ptr = dynamic_cast<CCmdCaptionProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdCaption*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdMetricsModeProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdMetricsModeProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMetricsMode(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdMetricsMode::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdMetricsMode::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdMetricsMode::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdMetricsModeProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX;
					if (dynamic_cast<CCmdMetricsModeProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_Callback* pCallback )
				{
					CCmdMetricsModeProxy* ptr = dynamic_cast<CCmdMetricsModeProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX;
					if (dynamic_cast<CCmdMetricsModeProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdMetricsModeProxy* ptr = dynamic_cast<CCmdMetricsModeProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdMetricsModeProxy* ptr = dynamic_cast<CCmdMetricsModeProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdHorizontalAlignProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdHorizontalAlignProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdHorizontalAlign(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdHorizontalAlign::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdHorizontalAlign::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdHorizontalAlign::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdHorizontalAlignProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX;
					if (dynamic_cast<CCmdHorizontalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_Callback* pCallback )
				{
					CCmdHorizontalAlignProxy* ptr = dynamic_cast<CCmdHorizontalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX;
					if (dynamic_cast<CCmdHorizontalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdHorizontalAlignProxy* ptr = dynamic_cast<CCmdHorizontalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdHorizontalAlignProxy* ptr = dynamic_cast<CCmdHorizontalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdVerticalAlignProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdVerticalAlignProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdVerticalAlign(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdVerticalAlign::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdVerticalAlign::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdVerticalAlign::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdVerticalAlignProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX;
					if (dynamic_cast<CCmdVerticalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_Callback* pCallback )
				{
					CCmdVerticalAlignProxy* ptr = dynamic_cast<CCmdVerticalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX;
					if (dynamic_cast<CCmdVerticalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdVerticalAlignProxy* ptr = dynamic_cast<CCmdVerticalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdVerticalAlignProxy* ptr = dynamic_cast<CCmdVerticalAlignProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback)(_in const void* target);
				typedef void  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
				typedef ev_bool  ( _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
				class CCmdVisibleProxy : public EarthView::World::Graphic::OverlayElementCommands::CCmdVisible
				{
				private:
					EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback;
					EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback;
				public:
					CCmdVisibleProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdVisible(pList)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback = NULL;
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
					}
					virtual EVString doGet(_in const void* target) const
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback(target);
							return returnValue;
						}
						else
							return this->CCmdVisible::doGet(target);
					}
					virtual void doSet(_in void* target, _in const EVString& val)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback(target, val_Char);
						}
						else
							return this->CCmdVisible::doSet(target, val);
					}
					virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
					{
						if(m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* val_Char = val.makeBuffer();
							char* reason_Char = reason.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
							reason = reason_Char;
							if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
							return returnValue;
						}
						else
							return this->CCmdVisible::trySet(target, val, reason);
					}
				};
				REGISTER_FACTORY_CLASS(CCmdVisibleProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdVisible* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX;
					if (dynamic_cast<CCmdVisibleProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVisible::doGet(target);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->doGet(target);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_Callback* pCallback )
				{
					CCmdVisibleProxy* ptr = dynamic_cast<CCmdVisibleProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
				{
					const EarthView::World::Graphic::OverlayElementCommands::CCmdVisible* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVisible::doGet(target);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdVisible* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX;
					if (dynamic_cast<CCmdVisibleProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVisible::doSet(target, val1);
					else
						ptrNativeObject->doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_Callback* pCallback )
				{
					CCmdVisibleProxy* ptr = dynamic_cast<CCmdVisibleProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Graphic::OverlayElementCommands::CCmdVisible* ptrNativeObject = (EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::OverlayElementCommands::CCmdVisible::doSet(target, val1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
				{
					CCmdVisibleProxy* ptr = dynamic_cast<CCmdVisibleProxy*>((EarthView::World::Graphic::OverlayElementCommands::CCmdVisible*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString(pCallback);
					}
				}
			}
		}
	}
}
