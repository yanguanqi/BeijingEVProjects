/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geopolylineex.h"
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
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback)();
			class CGeoPolylineExProxy : public EarthView::World::Geometry3D::CGeoPolylineEx
			{
			private:
				EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback;
				EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback;
			public:
				CGeoPolylineExProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoPolylineEx(pList)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_build_void(EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void(EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_render_void(EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void(EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool(EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback = pCallback;
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback();
					}
					else
						return this->CGeoPolylineEx::build();
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolylineEx::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CGeoPolylineEx::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CGeoPolylineEx::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CGeoPolylineEx::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolylineEx::getGeoObjectCount();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback();
					}
					else
						return this->CGeoPolylineEx::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback();
					}
					else
						return this->CGeoPolylineEx::derender();
				}
				virtual ev_bool isRendering()
				{
					if(m_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeoPolylineEx::isRendering();
				}
			};
			REGISTER_FACTORY_CLASS(CGeoPolylineExProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_build_void_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::build();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::appendGeoObject(ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_appendGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::appendGeoObject(ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::removeGeoObject(geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeGeoObject_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::removeGeoObject(geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::removeAllGeoObjects();
				else
					ptrNativeObject->removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_removeAllGeoObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::removeAllGeoObjects();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::getGeoObject(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObject_CGeoObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::getGeoObject(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::getGeoObjectCount();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getGeoObjectCount_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::getGeoObjectCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_render_void_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::derender();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				if (dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::isRendering();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRendering();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_Callback* pCallback )
			{
				CGeoPolylineExProxy* ptr = dynamic_cast<CGeoPolylineExProxy*>((EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeoPolylineEx::isRendering();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_getClampMode_int(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getClampMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeoPolylineEx_setClampMode_void_ClampMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Geometry3D::CGeoPolylineEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeoPolylineEx*) pObjectXXXX;
				ptrNativeObject->setClampMode((EarthView::World::Spatial3D::Atlas::ClampMode)mode);
			}
		}
	}
}
