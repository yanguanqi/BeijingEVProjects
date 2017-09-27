/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmlnetworklink.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsLodPassed( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsLodPassed;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsLodPassed( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mIsLodPassed = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlWorkQueueState*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_WorkState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* objXXXX = ptrNativeObject->WorkState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_WorkState( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlWorkQueueState*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->WorkState = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mpDoc( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mpDoc;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mpDoc( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mpDoc = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mpParent( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mpParent;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mpParent( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mpParent = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setLoadedState_void_ev_bool(void *pObjectXXXX, _in ev_bool isLoaded )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setLoadedState(isLoaded);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getLoadedState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLoadedState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mId( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mId;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mId( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mId = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLocalPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mLocalPath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLocalPath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mLocalPath = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_GeoObjectExtAttr( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &objXXXX = ptrNativeObject->GeoObjectExtAttr;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_GeoObjectExtAttr( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setEnvelopRef_void_CEnvelope(void *pObjectXXXX, _in void* envelop )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setEnvelopRef(*(EarthView::World::Spatial::Geometry::CEnvelope*)envelop);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getEnvelopRef_CEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelopRef();
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLatitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLatitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLatitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mLatitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLongitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLongitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mLongitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mLongitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mHeading( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mHeading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mHeading( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mHeading = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mTilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mTilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mTilt( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mTilt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mOriAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mOriAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mOriAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mOriAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsDirty( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsDirty;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsDirty( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mIsDirty = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mRange( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRange;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mRange( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mRange = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsCameraAltComputed( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsCameraAltComputed;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlNetworkLink_mIsCameraAltComputed( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlNetworkLink*)pObjectXXXX)->mIsCameraAltComputed = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlNetworkLink*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_clone_CKmlNetworkLink(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_relpace_void_CKmlNetworkLink(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* destLink )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->relpace(destLink);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getLink_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getLink();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setLink_void_EVString(void *pObjectXXXX, _in const char* link )
				{
					EarthView::World::Core::ev_string link1 = link;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setLink(link1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_isVisiable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisiable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visiable )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setVisible(visiable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_isOpen_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpen();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setOpened_void_ev_bool(void *pObjectXXXX, _in ev_bool opened )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setOpened(opened);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getAddress_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getAddress();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setAddress_void_EVString(void *pObjectXXXX, _in const char* addr )
				{
					EarthView::World::Core::ev_string addr1 = addr;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setAddress(addr1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getPhoneNumber_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPhoneNumber();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setPhoneNumber_void_EVString(void *pObjectXXXX, _in const char* phoneNum )
				{
					EarthView::World::Core::ev_string phoneNum1 = phoneNum;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setPhoneNumber(phoneNum1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setDescription_void_EVString(void *pObjectXXXX, _in const char* descripton )
				{
					EarthView::World::Core::ev_string descripton1 = descripton;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setDescription(descripton1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_getStyleUrl_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getStyleUrl();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setStyleUrl_void_EVString(void *pObjectXXXX, _in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setStyleUrl(url1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_isRefreshVisibility_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRefreshVisibility();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setRefreshVisibility_void_ev_bool(void *pObjectXXXX, _in ev_bool refreshVisibility )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setRefreshVisibility(refreshVisibility);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_isFlyToView_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFlyToView();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_setFlyToView_void_ev_bool(void *pObjectXXXX, _in ev_bool flyToView )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ptrNativeObject->setFlyToView(flyToView);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CKmlNetworkLink_downloadKmlFile_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->downloadKmlFile();
					return objXXXX;
				}
			}
		}
	}
}
