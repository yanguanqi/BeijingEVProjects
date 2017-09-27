/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imapselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback)();
				class IMapSelectionProxy : public EarthView::World::Spatial::Atlas::IMapSelection
				{
				private:
					EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback;
				public:
					IMapSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapSelection(pList)
					{
						m_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IMapSelectionProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32(EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32(EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void(EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback = pCallback;
					}
					virtual ev_uint32 getSelectionCount() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IMapSelection::getSelectionCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMapSelection::getLayerSelection(index);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback();
						}
						else
							return this->IMapSelection::clearSelection();
					}
				};
				REGISTER_FACTORY_CLASS(IMapSelectionProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					if (dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::getSelectionCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSelectionCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_Callback* pCallback )
				{
					IMapSelectionProxy* ptr = dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getSelectionCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::getSelectionCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					if (dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::getLayerSelection(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* pCallback )
				{
					IMapSelectionProxy* ptr = dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_getLayerSelection_ILayerSelection_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::getLayerSelection(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					if (dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_Callback* pCallback )
				{
					IMapSelectionProxy* ptr = dynamic_cast<IMapSelectionProxy*>((EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapSelection_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMapSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapSelection::clearSelection();
				}
			}
		}
	}
}
