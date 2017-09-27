/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlresult.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				typedef void*  ( _stdcall EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback)();
				class CSqlResultProxy : public EarthView::World::Core::Database::CSqlResult
				{
				private:
					EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback* m_EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback;
				public:
					CSqlResultProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlResult(pList)
					{
						m_EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Core_Database_CSqlResult_handle_CVariant(EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback = pCallback;
					}
					virtual EarthView::World::Core::CVariant handle() const
					{
						if(m_EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CSqlResult::handle();
					}
				};
				REGISTER_FACTORY_CLASS(CSqlResultProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlResult_handle_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlResult* ptrNativeObject = (EarthView::World::Core::Database::CSqlResult*) pObjectXXXX;
					if (dynamic_cast<CSqlResultProxy*>((EarthView::World::Core::Database::CSqlResult*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlResult::handle();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->handle();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlResult_handle_CVariant( void *pObjectXXXX, EarthView_World_Core_Database_CSqlResult_handle_CVariant_Callback* pCallback )
				{
					CSqlResultProxy* ptr = dynamic_cast<CSqlResultProxy*>((EarthView::World::Core::Database::CSqlResult*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlResult_handle_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlResult_handle_CVariant_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlResult* ptrNativeObject = (EarthView::World::Core::Database::CSqlResult*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlResult::handle();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
