/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataaccessor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Accessor
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback)(_in char*& connectionString);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback)();
				class IDataAccessorProxy : public EarthView::World::Spatial::Accessor::IDataAccessor
				{
				private:
					EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback* m_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback;
					EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback* m_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback;
				public:
					IDataAccessorProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataAccessor(pList)
					{
						m_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Accessor::EVAccessorType getType() const
					{
						if(m_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Accessor::EVAccessorType returnValue = (EarthView::World::Spatial::Accessor::EVAccessorType)m_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback();
							return returnValue;
						}
						else
							return this->IDataAccessor::getType();
					}
					virtual ev_bool open(_in const EVString& connectionString)
					{
						if(m_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* connectionString_Char = connectionString.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback(connectionString_Char);
							return returnValue;
						}
						else
							return this->IDataAccessor::open(connectionString);
					}
					virtual ev_bool close()
					{
						if(m_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataAccessor::close();
					}
				};
				REGISTER_FACTORY_CLASS(IDataAccessorProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					if (dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Accessor::EVAccessorType objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Accessor::EVAccessorType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Callback* pCallback )
				{
					IDataAccessorProxy* ptr = dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					EarthView::World::Spatial::Accessor::EVAccessorType objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(void *pObjectXXXX, _in const char* connectionString )
				{
					EarthView::World::Core::ev_string connectionString1 = connectionString;
					EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					if (dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::open(connectionString1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->open(connectionString1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Callback* pCallback )
				{
					IDataAccessorProxy* ptr = dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* connectionString )
				{
					EarthView::World::Core::ev_string connectionString1 = connectionString;
					EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::open(connectionString1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					if (dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::close();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->close();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Callback* pCallback )
				{
					IDataAccessorProxy* ptr = dynamic_cast<IDataAccessorProxy*>((EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Accessor::IDataAccessor* ptrNativeObject = (EarthView::World::Spatial::Accessor::IDataAccessor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Accessor::IDataAccessor::close();
					return objXXXX;
				}
			}
		}
	}
}
