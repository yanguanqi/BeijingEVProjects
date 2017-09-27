/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/multigeometry3dextensionlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback)(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback)(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in EarthView::World::Spatial::Display::ISymbol* pSymbol);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback)(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback)(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
			class CMultiGeometry3DExtensionListenerProxy : public EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener
			{
			private:
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback;
				EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback* m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback;
			public:
				CMultiGeometry3DExtensionListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMultiGeometry3DExtensionListener(pList)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback = NULL;
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback = pCallback;
				}
				virtual ev_bool userExtension(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback(extension);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtensionListener::userExtension(extension);
				}
				virtual ev_bool onSymbolNotSupported(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback(extension);
						return returnValue;
					}
					else
						return this->CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
				}
				virtual void perGeometryExtensionBegun(_in EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in EarthView::World::Spatial::Display::ISymbol* pSymbol)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback(pGeometry, pSymbol);
					}
					else
						return this->CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
				}
				virtual void perGeometryExtensionFinished(_in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback(pGeometry);
					}
					else
						return this->CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
				}
				virtual void preRender(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback(extension);
					}
					else
						return this->CMultiGeometry3DExtensionListener::preRender(extension);
				}
				virtual void postRender(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension)
				{
					if(m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback(extension);
					}
					else
						return this->CMultiGeometry3DExtensionListener::postRender(extension);
				}
			};
			REGISTER_FACTORY_CLASS(CMultiGeometry3DExtensionListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::userExtension(extension);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->userExtension(extension);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_userExtension_ev_bool_CMultiGeometry3DExtension_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::userExtension(extension);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onSymbolNotSupported(extension);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_onSymbolNotSupported_ev_bool_CMultiGeometry3DExtension_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::onSymbolNotSupported(extension);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
				else
					ptrNativeObject->perGeometryExtensionBegun(pGeometry, pSymbol);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionBegun_void_IGeometry_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionBegun(pGeometry, pSymbol);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
				else
					ptrNativeObject->perGeometryExtensionFinished(pGeometry);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_perGeometryExtensionFinished_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::perGeometryExtensionFinished(pGeometry);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::preRender(extension);
				else
					ptrNativeObject->preRender(extension);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_preRender_void_CMultiGeometry3DExtension_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::preRender(extension);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				if (dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::postRender(extension);
				else
					ptrNativeObject->postRender(extension);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension( void *pObjectXXXX, EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_Callback* pCallback )
			{
				CMultiGeometry3DExtensionListenerProxy* ptr = dynamic_cast<CMultiGeometry3DExtensionListenerProxy*>((EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CMultiGeometry3DExtensionListener_postRender_void_CMultiGeometry3DExtension_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension )
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* ptrNativeObject = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener::postRender(extension);
			}
		}
	}
}
