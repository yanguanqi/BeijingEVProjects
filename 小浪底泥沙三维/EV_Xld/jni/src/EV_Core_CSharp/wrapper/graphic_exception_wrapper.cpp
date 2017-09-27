/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/graphic_exception.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef char*  ( _stdcall EarthView_World_Core_CException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CException_getDescription_EVString_Callback)();
			class CExceptionProxy : public EarthView::World::Core::CException
			{
			private:
				EarthView_World_Core_CException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CException_getSource_EVString_Callback* m_EarthView_World_Core_CException_getSource_EVString_Callback;
				EarthView_World_Core_CException_getFile_EVString_Callback* m_EarthView_World_Core_CException_getFile_EVString_Callback;
				EarthView_World_Core_CException_getLine_ev_int32_Callback* m_EarthView_World_Core_CException_getLine_ev_int32_Callback;
				EarthView_World_Core_CException_getDescription_EVString_Callback* m_EarthView_World_Core_CException_getDescription_EVString_Callback;
			public:
				CExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CException(pList)
				{
					m_EarthView_World_Core_CException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CException_getFullDescription_EVString(EarthView_World_Core_CException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CException_getNumber_ev_int32(EarthView_World_Core_CException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CException_getSource_EVString(EarthView_World_Core_CException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CException_getFile_EVString(EarthView_World_Core_CException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CException_getLine_ev_int32(EarthView_World_Core_CException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CException_getDescription_EVString(EarthView_World_Core_CException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CExceptionProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CException_OperatorAssign_void_CException(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Core::CException& objXXXX = *((EarthView::World::Core::CException*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CException*)rhs;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getFullDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getFullDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFullDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CException_getFullDescription_EVString_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getFullDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getFullDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CException_getNumber_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CException::getNumber();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getNumber();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CException_getNumber_ev_int32_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CException_getNumber_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CException::getNumber();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getSource_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getSource();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getSource();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CException_getSource_EVString_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getSource_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getSource();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getFile_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getFile();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFile();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CException_getFile_EVString_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getFile_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getFile();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CException_getLine_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CException::getLine();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CException_getLine_ev_int32_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CException_getLine_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CException::getLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				if (dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CException_getDescription_EVString_Callback* pCallback )
			{
				CExceptionProxy* ptr = dynamic_cast<CExceptionProxy*>((EarthView::World::Core::CException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CException_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CException_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CException::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Core_CException_what_ev_char(void *pObjectXXXX )
			{
				const EarthView::World::Core::CException* ptrNativeObject = (EarthView::World::Core::CException*) pObjectXXXX;
				const ev_char* objXXXX = ptrNativeObject->what();
				return objXXXX;
			}
			typedef char*  ( _stdcall EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback)();
			class CUnimplementedExceptionProxy : public EarthView::World::Core::CUnimplementedException
			{
			private:
				EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback* m_EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback;
				EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback* m_EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback;
				EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback* m_EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback;
				EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback* m_EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback;
			public:
				CUnimplementedExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CUnimplementedException(pList)
				{
					m_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString(EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32(EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getSource_EVString(EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getFile_EVString(EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getLine_ev_int32(EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CUnimplementedException_getDescription_EVString(EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CUnimplementedException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CUnimplementedExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getFullDescription_EVString_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getNumber_ev_int32_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getSource_EVString_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getFile_EVString_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getLine_ev_int32_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CUnimplementedException_getDescription_EVString_Callback* pCallback )
			{
				CUnimplementedExceptionProxy* ptr = dynamic_cast<CUnimplementedExceptionProxy*>((EarthView::World::Core::CUnimplementedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CUnimplementedException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback)();
			class CNotLicensedExceptionProxy : public EarthView::World::Core::CNotLicensedException
			{
			private:
				EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback* m_EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback;
				EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback* m_EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback;
				EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback* m_EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback;
				EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback* m_EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback;
			public:
				CNotLicensedExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CNotLicensedException(pList)
				{
					m_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString(EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32(EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getSource_EVString(EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getFile_EVString(EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getLine_ev_int32(EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CNotLicensedException_getDescription_EVString(EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CNotLicensedException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CNotLicensedExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getFullDescription_EVString_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getNumber_ev_int32_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getSource_EVString_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getFile_EVString_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getLine_ev_int32_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CNotLicensedException_getDescription_EVString_Callback* pCallback )
			{
				CNotLicensedExceptionProxy* ptr = dynamic_cast<CNotLicensedExceptionProxy*>((EarthView::World::Core::CNotLicensedException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CNotLicensedException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback)();
			class CFileNotFoundExceptionProxy : public EarthView::World::Core::CFileNotFoundException
			{
			private:
				EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback* m_EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback;
				EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback* m_EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback;
				EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback* m_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback;
				EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback* m_EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback;
			public:
				CFileNotFoundExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CFileNotFoundException(pList)
				{
					m_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString(EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32(EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getSource_EVString(EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getFile_EVString(EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32(EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileNotFoundException_getDescription_EVString(EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileNotFoundException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CFileNotFoundExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getSource_EVString_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getFile_EVString_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getLine_ev_int32_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CFileNotFoundException_getDescription_EVString_Callback* pCallback )
			{
				CFileNotFoundExceptionProxy* ptr = dynamic_cast<CFileNotFoundExceptionProxy*>((EarthView::World::Core::CFileNotFoundException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileNotFoundException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CIOException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CIOException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CIOException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CIOException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CIOException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CIOException_getDescription_EVString_Callback)();
			class CIOExceptionProxy : public EarthView::World::Core::CIOException
			{
			private:
				EarthView_World_Core_CIOException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CIOException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CIOException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CIOException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CIOException_getSource_EVString_Callback* m_EarthView_World_Core_CIOException_getSource_EVString_Callback;
				EarthView_World_Core_CIOException_getFile_EVString_Callback* m_EarthView_World_Core_CIOException_getFile_EVString_Callback;
				EarthView_World_Core_CIOException_getLine_ev_int32_Callback* m_EarthView_World_Core_CIOException_getLine_ev_int32_Callback;
				EarthView_World_Core_CIOException_getDescription_EVString_Callback* m_EarthView_World_Core_CIOException_getDescription_EVString_Callback;
			public:
				CIOExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CIOException(pList)
				{
					m_EarthView_World_Core_CIOException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CIOException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CIOException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CIOException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CIOException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CIOException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CIOException_getFullDescription_EVString(EarthView_World_Core_CIOException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CIOException_getNumber_ev_int32(EarthView_World_Core_CIOException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CIOException_getSource_EVString(EarthView_World_Core_CIOException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CIOException_getFile_EVString(EarthView_World_Core_CIOException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CIOException_getLine_ev_int32(EarthView_World_Core_CIOException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CIOException_getDescription_EVString(EarthView_World_Core_CIOException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CIOException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CIOException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CIOException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CIOException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CIOException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CIOException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CIOException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CIOException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CIOException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CIOException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CIOException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CIOException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CIOException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CIOException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CIOExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CIOException_getFullDescription_EVString_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CIOException_getNumber_ev_int32_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CIOException_getSource_EVString_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CIOException_getFile_EVString_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CIOException_getLine_ev_int32_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CIOException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CIOException_getDescription_EVString_Callback* pCallback )
			{
				CIOExceptionProxy* ptr = dynamic_cast<CIOExceptionProxy*>((EarthView::World::Core::CIOException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CIOException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback)();
			class CInvalidStateExceptionProxy : public EarthView::World::Core::CInvalidStateException
			{
			private:
				EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback* m_EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback;
				EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback* m_EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback;
				EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback* m_EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback;
				EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback* m_EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback;
			public:
				CInvalidStateExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CInvalidStateException(pList)
				{
					m_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString(EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32(EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getSource_EVString(EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getFile_EVString(EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getLine_ev_int32(EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidStateException_getDescription_EVString(EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidStateException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CInvalidStateExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getFullDescription_EVString_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getNumber_ev_int32_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getSource_EVString_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getFile_EVString_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getLine_ev_int32_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidStateException_getDescription_EVString_Callback* pCallback )
			{
				CInvalidStateExceptionProxy* ptr = dynamic_cast<CInvalidStateExceptionProxy*>((EarthView::World::Core::CInvalidStateException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidStateException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback)();
			class CInvalidParametersExceptionProxy : public EarthView::World::Core::CInvalidParametersException
			{
			private:
				EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback* m_EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback;
				EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback* m_EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback;
				EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback* m_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback;
				EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback* m_EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback;
			public:
				CInvalidParametersExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CInvalidParametersException(pList)
				{
					m_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString(EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32(EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getSource_EVString(EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getFile_EVString(EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32(EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInvalidParametersException_getDescription_EVString(EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInvalidParametersException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CInvalidParametersExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getSource_EVString_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getFile_EVString_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getLine_ev_int32_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInvalidParametersException_getDescription_EVString_Callback* pCallback )
			{
				CInvalidParametersExceptionProxy* ptr = dynamic_cast<CInvalidParametersExceptionProxy*>((EarthView::World::Core::CInvalidParametersException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInvalidParametersException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback)();
			class CItemIdentityExceptionProxy : public EarthView::World::Core::CItemIdentityException
			{
			private:
				EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback* m_EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback;
				EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback* m_EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback;
				EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback* m_EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback;
				EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback* m_EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback;
			public:
				CItemIdentityExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CItemIdentityException(pList)
				{
					m_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString(EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32(EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getSource_EVString(EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getFile_EVString(EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getLine_ev_int32(EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CItemIdentityException_getDescription_EVString(EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CItemIdentityException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CItemIdentityExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getFullDescription_EVString_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getNumber_ev_int32_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getSource_EVString_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getFile_EVString_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getLine_ev_int32_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CItemIdentityException_getDescription_EVString_Callback* pCallback )
			{
				CItemIdentityExceptionProxy* ptr = dynamic_cast<CItemIdentityExceptionProxy*>((EarthView::World::Core::CItemIdentityException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CItemIdentityException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback)();
			class CInternalErrorExceptionProxy : public EarthView::World::Core::CInternalErrorException
			{
			private:
				EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback* m_EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback;
				EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback* m_EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback;
				EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback* m_EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback;
				EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback* m_EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback;
			public:
				CInternalErrorExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CInternalErrorException(pList)
				{
					m_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString(EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32(EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getSource_EVString(EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getFile_EVString(EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getLine_ev_int32(EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CInternalErrorException_getDescription_EVString(EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInternalErrorException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CInternalErrorExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getFullDescription_EVString_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getNumber_ev_int32_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getSource_EVString_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getFile_EVString_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getLine_ev_int32_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CInternalErrorException_getDescription_EVString_Callback* pCallback )
			{
				CInternalErrorExceptionProxy* ptr = dynamic_cast<CInternalErrorExceptionProxy*>((EarthView::World::Core::CInternalErrorException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CInternalErrorException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback)();
			class CRenderingAPIExceptionProxy : public EarthView::World::Core::CRenderingAPIException
			{
			private:
				EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback* m_EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback;
				EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback* m_EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback;
				EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback* m_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback;
				EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback* m_EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback;
			public:
				CRenderingAPIExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderingAPIException(pList)
				{
					m_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString(EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32(EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getSource_EVString(EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getFile_EVString(EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32(EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRenderingAPIException_getDescription_EVString(EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderingAPIException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CRenderingAPIExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getSource_EVString_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getFile_EVString_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getLine_ev_int32_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CRenderingAPIException_getDescription_EVString_Callback* pCallback )
			{
				CRenderingAPIExceptionProxy* ptr = dynamic_cast<CRenderingAPIExceptionProxy*>((EarthView::World::Core::CRenderingAPIException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRenderingAPIException_getDescription_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback)();
			class CRuntimeAssertionExceptionProxy : public EarthView::World::Core::CRuntimeAssertionException
			{
			private:
				EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback;
				EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback;
				EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback;
				EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback;
				EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback;
				EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback* m_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback;
			public:
				CRuntimeAssertionExceptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CRuntimeAssertionException(pList)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback = NULL;
					m_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback = NULL;
					m_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback = NULL;
					m_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString(EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32(EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString(EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString(EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32(EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString(EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback = pCallback;
				}
				virtual EVString getFullDescription() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getFullDescription();
				}
				virtual ev_int32 getNumber() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getNumber();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getSource();
				}
				virtual EVString getFile() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getFile();
				}
				virtual ev_int32 getLine() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getLine();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRuntimeAssertionException::getDescription();
				}
			};
			REGISTER_FACTORY_CLASS(CRuntimeAssertionExceptionProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getSource_EVString_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getFile_EVString_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString( void *pObjectXXXX, EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString_Callback* pCallback )
			{
				CRuntimeAssertionExceptionProxy* ptr = dynamic_cast<CRuntimeAssertionExceptionProxy*>((EarthView::World::Core::CRuntimeAssertionException*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString(pCallback);
				}
			}
		}
	}
}
