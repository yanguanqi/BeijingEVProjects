/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/mapselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback)();
				class CMapSelectionProxy : public EarthView::World::Spatial2D::Atlas::CMapSelection
				{
				private:
					EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback;
				public:
					CMapSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapSelection(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CMapSelectionProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32(EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32(EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void(EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback = pCallback;
					}
					virtual ev_uint32 getSelectionCount() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMapSelection::getSelectionCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMapSelection::getLayerSelection(index);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback();
						}
						else
							return this->CMapSelection::clearSelection();
					}
				};
				REGISTER_FACTORY_CLASS(CMapSelectionProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					if (dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::getSelectionCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSelectionCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_Callback* pCallback )
				{
					CMapSelectionProxy* ptr = dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::getSelectionCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getSelectionLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSelectionLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					if (dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::getLayerSelection(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_Callback* pCallback )
				{
					CMapSelectionProxy* ptr = dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::getLayerSelection(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_getLayerSelection_ILayerSelection_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* pLayer )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection(pLayer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_exist_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					if (dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_Callback* pCallback )
				{
					CMapSelectionProxy* ptr = dynamic_cast<CMapSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSelection_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CMapSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapSelection::clearSelection();
				}
			}
		}
	}
}
