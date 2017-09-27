/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmldocument.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback)();
				class CEnvelopListenerProxy : public EarthView::World::Spatial::Kml::CEnvelopListener
				{
				private:
					EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback* m_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback;
				public:
					CEnvelopListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEnvelopListener(pList)
					{
						m_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void(EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback = pCallback;
					}
					virtual void envelopChangedUpdate()
					{
						if(m_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback();
						}
						else
							return this->CEnvelopListener::envelopChangedUpdate();
					}
				};
				REGISTER_FACTORY_CLASS(CEnvelopListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CEnvelopListener* ptrNativeObject = (EarthView::World::Spatial::Kml::CEnvelopListener*) pObjectXXXX;
					if (dynamic_cast<CEnvelopListenerProxy*>((EarthView::World::Spatial::Kml::CEnvelopListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Kml::CEnvelopListener::envelopChangedUpdate();
					else
						ptrNativeObject->envelopChangedUpdate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void( void *pObjectXXXX, EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_Callback* pCallback )
				{
					CEnvelopListenerProxy* ptr = dynamic_cast<CEnvelopListenerProxy*>((EarthView::World::Spatial::Kml::CEnvelopListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CEnvelopListener_envelopChangedUpdate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CEnvelopListener* ptrNativeObject = (EarthView::World::Spatial::Kml::CEnvelopListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Kml::CEnvelopListener::envelopChangedUpdate();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_GeoObjects_mEnvelope( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope &objXXXX = ptrNativeObject->mEnvelope;
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_GeoObjects_mEnvelope( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::GeoObjects*)pObjectXXXX)->mEnvelope = *(EarthView::World::Spatial::Geometry::CEnvelope*)value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_addListener_void_CEnvelopListener(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CEnvelopListener* ref_listener )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->addListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_removeListener_void_CEnvelopListener(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CEnvelopListener* listener )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->removeListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_clearAllListener_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->clearAllListener();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects__notifyEnvelopChange_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->_notifyEnvelopChange();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_push_back_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension*& ref_t )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->push_back(ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_GeoObjects_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial_Kml_GeoObjects_OperatorIndex_CGeoObjectExtension_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::GeoObjects& objYYYY = *(EarthView::World::Spatial::Kml::GeoObjects*) pObjXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial_Kml_GeoObjects_at_CGeoObjectExtension_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Kml_GeoObjects_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_GeoObjects_getEnvelopRef_CEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelopRef();
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_GeoObjects_computeEnvelop_void_CGeoObjectExtension_CEnvelope(void *pObjectXXXX, _inout void* t, _inout void* envelop )
				{
					EarthView::World::Spatial::Kml::GeoObjects* ptrNativeObject = (EarthView::World::Spatial::Kml::GeoObjects*) pObjectXXXX;
					ptrNativeObject->computeEnvelop(*(EarthView::World::Spatial::Kml::CGeoObjectExtension*)t, *(EarthView::World::Spatial::Geometry::CEnvelope*)envelop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_push_back_void_CTour(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour*& ref_t )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->push_back(ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTour*  _stdcall EarthView_World_Spatial_Kml_CTours_front_CTour(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTour* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTour*  _stdcall EarthView_World_Spatial_Kml_CTours_back_CTour(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTour* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_insert_void_ev_uint32_CTour(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CTour*& ref_t )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->insert(pos, ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CTours_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTour*  _stdcall EarthView_World_Spatial_Kml_CTours_OperatorIndex_CTour_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CTours& objYYYY = *(EarthView::World::Spatial::Kml::CTours*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTour* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTour*  _stdcall EarthView_World_Spatial_Kml_CTours_at_CTour_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTour* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Kml_CTours_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTours_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTours* ptrNativeObject = (EarthView::World::Spatial::Kml::CTours*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_push_back_void_CKmlNetworkLink(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink*& ref_t )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->push_back(ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_front_CKmlNetworkLink(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_back_CKmlNetworkLink(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_insert_void_ev_uint32_CKmlNetworkLink(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CKmlNetworkLink*& ref_t )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->insert(pos, ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_OperatorIndex_CKmlNetworkLink_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks& objYYYY = *(EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_at_CKmlNetworkLink_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLinks_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLinks* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLinks*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback)();
				class CKmlDocumentProxy : public EarthView::World::Spatial::Kml::CKmlDocument
				{
				private:
					EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback* m_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback;
				public:
					CKmlDocumentProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDocument(pList)
					{
						m_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void(EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback = pCallback;
					}
					virtual void envelopChangedUpdate()
					{
						if(m_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback();
						}
						else
							return this->CKmlDocument::envelopChangedUpdate();
					}
				};
				REGISTER_FACTORY_CLASS(CKmlDocumentProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlWorkQueueState*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_WorkQueueState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* objXXXX = ptrNativeObject->WorkQueueState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_WorkQueueState( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlWorkQueueState*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->WorkQueueState = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_BatchWorkQueueState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState &objXXXX = ptrNativeObject->BatchWorkQueueState;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_BatchWorkQueueState( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->BatchWorkQueueState = *(EarthView::World::Spatial::Kml::CKmlWorkQueueState*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_DynamicBatchWorkQueueState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState &objXXXX = ptrNativeObject->DynamicBatchWorkQueueState;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_DynamicBatchWorkQueueState( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->DynamicBatchWorkQueueState = *(EarthView::World::Spatial::Kml::CKmlWorkQueueState*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mKmlPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mKmlPath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mKmlPath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mKmlPath = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mId( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mId;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mId( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mId = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mDesiription( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mDesiription;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mDesiription( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mDesiription = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsExpand( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsExpand;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsExpand( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsExpand = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsNetworkLink( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsNetworkLink;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsNetworkLink( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsNetworkLink = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsBelongToNetLink( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsBelongToNetLink;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsBelongToNetLink( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsBelongToNetLink = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mpParentNetworkLink( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->mpParentNetworkLink;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mpParentNetworkLink( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlNetworkLink*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mpParentNetworkLink = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mpParent( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mpParent;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mpParent( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mpParent = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_m_isFolder( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_isFolder;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_m_isFolder( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->m_isFolder = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mRelativeNetworkLink( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->mRelativeNetworkLink;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mRelativeNetworkLink( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlNetworkLink*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mRelativeNetworkLink = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_GeoObjectExtAttr( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &objXXXX = ptrNativeObject->GeoObjectExtAttr;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_GeoObjectExtAttr( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsVisible( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsVisible;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsVisible( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsVisible = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsLodPassed( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsLodPassed;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsLodPassed( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsLodPassed = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mLatitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLatitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mLatitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mLatitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mLongitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLongitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mLongitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mLongitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mHeading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mHeading( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mHeading = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mTilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mTilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mTilt( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mTilt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mOriAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mOriAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mOriAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mOriAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsDirty( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsDirty;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsDirty( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsDirty = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mRange( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRange;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mRange( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mRange = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_mIsCameraAltComputed( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsCameraAltComputed;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_mIsCameraAltComputed( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->mIsCameraAltComputed = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseObject*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_BatchObjects( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Core::CBaseObject* objXXXX = ptrNativeObject->BatchObjects;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_BatchObjects( void *pObjectXXXX, EarthView::World::Core::CBaseObject*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->BatchObjects = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseObject*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_NewBatchObjects( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Core::CBaseObject* objXXXX = ptrNativeObject->NewBatchObjects;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_NewBatchObjects( void *pObjectXXXX, EarthView::World::Core::CBaseObject*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->NewBatchObjects = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseObject*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlDocument_RegionBatchObjects( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Core::CBaseObject* objXXXX = ptrNativeObject->RegionBatchObjects;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlDocument_RegionBatchObjects( void *pObjectXXXX, EarthView::World::Core::CBaseObject*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlDocument*)pObjectXXXX)->RegionBatchObjects = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_loadDocument_ev_bool_EVString(void *pObjectXXXX, _in const char* kml_uri )
				{
					EarthView::World::Core::ev_string kml_uri1 = kml_uri;
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->loadDocument(kml_uri1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_newDocument_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->newDocument();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_save_ev_bool_EVString(void *pObjectXXXX, _in const char* kmlPath )
				{
					EarthView::World::Core::ev_string kmlPath1 = kmlPath;
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->save(kmlPath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_addSubDocument_ev_bool_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_doc )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addSubDocument(ref_doc);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getSubDocumentCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSubDocumentCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getSubDocument_CKmlDocument_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getSubDocument(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_removeSubDocument_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeSubDocument(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_addNetworkLink_ev_bool_CKmlNetworkLink(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_doc )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addNetworkLink(ref_doc);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getNetworkLinkCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNetworkLinkCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getNetworkLink_CKmlNetworkLink_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->getNetworkLink(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_netLinkStateUpdate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ptrNativeObject->netLinkStateUpdate();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_removeNetworkLink_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeNetworkLink(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_addGeoObject_ev_bool_CGeoObjectExtension(void *pObjectXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addGeoObject(*(EarthView::World::Spatial::Kml::CGeoObjectExtension*)obj);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_removeGeoObject_ev_bool_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObject )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(geoObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getGeoObjects_GeoObjects(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::GeoObjects& objXXXX = ptrNativeObject->getGeoObjects();
					EarthView::World::Spatial::Kml::GeoObjects *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getTours_CTours(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTours& objXXXX = ptrNativeObject->getTours();
					EarthView::World::Spatial::Kml::CTours *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_uint16  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getmode_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					const ev_uint16 objXXXX = ptrNativeObject->getmode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					if (dynamic_cast<CKmlDocumentProxy*>((EarthView::World::Spatial::Kml::CKmlDocument*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Kml::CKmlDocument::envelopChangedUpdate();
					else
						ptrNativeObject->envelopChangedUpdate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void( void *pObjectXXXX, EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_Callback* pCallback )
				{
					CKmlDocumentProxy* ptr = dynamic_cast<CKmlDocumentProxy*>((EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_envelopChangedUpdate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Kml::CKmlDocument::envelopChangedUpdate();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getEnvelopRef_CEnvelope_ev_bool(void *pObjectXXXX, _inout ev_bool& hasData )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelopRef(hasData);
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_setKmlDocumentRefCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ptrNativeObject->setKmlDocumentRefCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_getKmlDocumentRefCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getKmlDocumentRefCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_parseKmzStringToFile_void_EVString_EVString(void *pObjectXXXX, _in const char* kmzPath, _in const char* kml_uri )
				{
					EarthView::World::Core::ev_string kmzPath1 = kmzPath;
					EarthView::World::Core::ev_string kml_uri1 = kml_uri;
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ptrNativeObject->parseKmzStringToFile(kmzPath1, kml_uri1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_modifyed_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ptrNativeObject->modifyed(val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlDocument_isModifyed_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlDocument* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlDocument*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isModifyed();
					return objXXXX;
				}
			}
		}
	}
}
