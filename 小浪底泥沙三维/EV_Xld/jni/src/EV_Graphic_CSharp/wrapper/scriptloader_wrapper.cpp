/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptloader.h"
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
			typedef const void*  ( _stdcall EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback)();
			class CScriptLoaderProxy : public EarthView::World::Graphic::CScriptLoader
			{
			private:
				EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback;
			public:
				CScriptLoaderProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptLoader(pList)
				{
					m_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector(EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real(EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CScriptLoader::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->CScriptLoader::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->CScriptLoader::getLoadingOrder();
				}
			};
			REGISTER_FACTORY_CLASS(CScriptLoaderProxy);
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				if (dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptLoader::getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Callback* pCallback )
			{
				CScriptLoaderProxy* ptr = dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptLoader::getScriptPatterns();
				const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				if (dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScriptLoader::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
				else
					ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CScriptLoaderProxy* ptr = dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScriptLoader::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				if (dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptLoader::getLoadingOrder();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLoadingOrder();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Callback* pCallback )
			{
				CScriptLoaderProxy* ptr = dynamic_cast<CScriptLoaderProxy*>((EarthView::World::Graphic::CScriptLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptLoader* ptrNativeObject = (EarthView::World::Graphic::CScriptLoader*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptLoader::getLoadingOrder();
				return objXXXX;
			}
		}
	}
}
