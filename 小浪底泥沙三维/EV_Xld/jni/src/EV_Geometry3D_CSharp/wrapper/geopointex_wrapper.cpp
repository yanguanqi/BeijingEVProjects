/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geopointex.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback)();
			class CGeoPointExProxy : public EarthView::World::Geometry3D::CGeoPointEx
			{
			private:
				EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback;
				EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback;
			public:
				CGeoPointExProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoPointEx(pList)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_build_void(EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void(EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_render_void(EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_derender_void(EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool(EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback = pCallback;
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback();
					}
					else
						return this->CGeoPointEx::build();
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CGeoPointEx::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CGeoPointEx::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CGeoPointEx::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CGeoPointEx::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CGeoPointEx::getGeoObjectCount();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback();
					}
					else
						return this->CGeoPointEx::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback();
					}
					else
						return this->CGeoPointEx::derender();
				}
				virtual ev_bool isRendering()
				{
					if(m_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPointEx::isRendering();
				}
			};
			REGISTER_FACTORY_CLASS(CGeoPointExProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_build_void_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::build();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::appendGeoObject(ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_appendGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::appendGeoObject(ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::removeGeoObject(geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::removeGeoObject(geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::removeAllGeoObjects();
				else
					ptrNativeObject->removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_removeAllGeoObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::getGeoObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObject_CGeoObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::getGeoObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::getGeoObjectCount();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPointEx_getGeoObjectCount_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::getGeoObjectCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_render_void_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_derender_void_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::derender();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::isRendering();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRendering();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_Callback* pCallback )
			{
				CGeoPointExProxy* ptr = dynamic_cast<CGeoPointExProxy*>((EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPointEx_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPointEx::isRendering();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CGeoPointEx_getClampMode_int(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getClampMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPointEx_setClampMode_void_ClampMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Geometry3D::CGeoPointEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPointEx*) pObjectXXXX;
				ptrNativeObject->setClampMode((EarthView::World::Spatial3D::Atlas::ClampMode)mode);
			}
		}
	}
}
