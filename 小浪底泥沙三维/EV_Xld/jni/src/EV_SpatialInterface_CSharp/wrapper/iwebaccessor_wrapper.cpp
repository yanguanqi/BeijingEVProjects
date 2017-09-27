/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/iwebaccessor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Accessor
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback)(_in char*& connectionString);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback)();
				class IWebAccessorProxy : public EarthView::World::Spatial::Accessor::IWebAccessor
				{
				private:
					EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback* m_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback;
					EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback* m_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback;
				public:
					IWebAccessorProxy(EarthView::World::Core::CNameValuePairList *pList) : IWebAccessor(pList)
					{
						m_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType(EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString(EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool(EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Accessor::EVAccessorType getType() const
					{
						if(m_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Accessor::EVAccessorType returnValue = (EarthView::World::Spatial::Accessor::EVAccessorType)m_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback();
							return returnValue;
						}
						else
							return this->IWebAccessor::getType();
					}
					virtual ev_bool open(_in const EVString& connectionString)
					{
						if(m_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* connectionString_Char = connectionString.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback(connectionString_Char);
							return returnValue;
						}
						else
							return this->IWebAccessor::open(connectionString);
					}
					virtual ev_bool close()
					{
						if(m_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IWebAccessor::close();
					}
				};
				REGISTER_FACTORY_CLASS(IWebAccessorProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType_Callback* pCallback )
				{
					IWebAccessorProxy* ptr = dynamic_cast<IWebAccessorProxy*>((EarthView::World::Spatial::Accessor::IWebAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString_Callback* pCallback )
				{
					IWebAccessorProxy* ptr = dynamic_cast<IWebAccessorProxy*>((EarthView::World::Spatial::Accessor::IWebAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool_Callback* pCallback )
				{
					IWebAccessorProxy* ptr = dynamic_cast<IWebAccessorProxy*>((EarthView::World::Spatial::Accessor::IWebAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
