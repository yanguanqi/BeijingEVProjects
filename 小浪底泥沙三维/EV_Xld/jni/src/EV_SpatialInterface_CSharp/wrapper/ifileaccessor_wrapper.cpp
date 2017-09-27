/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifileaccessor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Accessor
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback)(_in char*& connectionString);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback)();
				class IFileAccessorProxy : public EarthView::World::Spatial::Accessor::IFileAccessor
				{
				private:
					EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback* m_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback;
					EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback* m_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback;
				public:
					IFileAccessorProxy(EarthView::World::Core::CNameValuePairList *pList) : IFileAccessor(pList)
					{
						m_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType(EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString(EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool(EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Accessor::EVAccessorType getType() const
					{
						if(m_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Accessor::EVAccessorType returnValue = (EarthView::World::Spatial::Accessor::EVAccessorType)m_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback();
							return returnValue;
						}
						else
							return this->IFileAccessor::getType();
					}
					virtual ev_bool open(_in const EVString& connectionString)
					{
						if(m_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* connectionString_Char = connectionString.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback(connectionString_Char);
							return returnValue;
						}
						else
							return this->IFileAccessor::open(connectionString);
					}
					virtual ev_bool close()
					{
						if(m_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IFileAccessor::close();
					}
				};
				REGISTER_FACTORY_CLASS(IFileAccessorProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType_Callback* pCallback )
				{
					IFileAccessorProxy* ptr = dynamic_cast<IFileAccessorProxy*>((EarthView::World::Spatial::Accessor::IFileAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString_Callback* pCallback )
				{
					IFileAccessorProxy* ptr = dynamic_cast<IFileAccessorProxy*>((EarthView::World::Spatial::Accessor::IFileAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool_Callback* pCallback )
				{
					IFileAccessorProxy* ptr = dynamic_cast<IFileAccessorProxy*>((EarthView::World::Spatial::Accessor::IFileAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
