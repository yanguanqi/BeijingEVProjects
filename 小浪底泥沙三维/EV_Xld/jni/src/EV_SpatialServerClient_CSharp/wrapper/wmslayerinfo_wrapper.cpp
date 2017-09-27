/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmslayerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_getAuthorityName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getAuthorityName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_getHref_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getHref();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_getIDValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIDValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_setIDValue_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				ptrNativeObject->setIDValue(value1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_setAuthorityName_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				ptrNativeObject->setAuthorityName(value1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_setHref_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				ptrNativeObject->setHref(value1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMSAuthorityURL*  _stdcall EarthView_World_Spatial_COGCWMSAuthorityURL_clone_COGCWMSAuthorityURL(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMSAuthorityURL* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAuthorityURL*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMSAuthorityURL* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getTitle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTitle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setTitle_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setTitle(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getOnlineHref_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getOnlineHref();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setOnlineHref_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setOnlineHref(value1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getLogoWidth_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLogoWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setLogoWidth_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setLogoWidth(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getLogoHeight_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLogoHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setLogoHeight_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setLogoHeight(value);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getLogoFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLogoFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setLogoFormat_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setLogoFormat(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSAttribution_getLogoHref_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLogoHref();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSAttribution_setLogoHref_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				ptrNativeObject->setLogoHref(value1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMSAttribution*  _stdcall EarthView_World_Spatial_COGCWMSAttribution_clone_COGCWMSAttribution(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMSAttribution* ptrNativeObject = (EarthView::World::Spatial::COGCWMSAttribution*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMSAttribution* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setName_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setName(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getUnits_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUnits();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setUnits_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setUnits(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getUnitSymbol_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUnitSymbol();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setUnitSymbol_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setUnitSymbol(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getDefaultValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDefaultValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setDefaultValue_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setDefaultValue(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getMultipleValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMultipleValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setMultipleValue_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setMultipleValue(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getNearestValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getNearestValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setNearestValue_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setNearestValue(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_getCurrentValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCurrentValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_setCurrentValue_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				ptrNativeObject->setCurrentValue(value1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMSDimensionInfo*  _stdcall EarthView_World_Spatial_COGCWMSDimensionInfo_clone_COGCWMSDimensionInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDimensionInfo*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMSDimensionInfo* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::COGCWebServiceBoundingBox*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const EarthView::World::Spatial::COGCWebServiceStyle*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback)(_in ev_uint32 index);
			typedef int  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CWMSLayerInfoProxy : public EarthView::World::Spatial::CWMSLayerInfo
			{
			private:
				EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CWMSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString(EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getSpatialReference();
				}
				virtual const EVString getSRS(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getSRS(index);
				}
				virtual ev_uint32 getSRSCount() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getSRSCount();
				}
				virtual ev_uint32 getStyleCount() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getStyleCount();
				}
				virtual const EVString getStyle(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getStyle(index);
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceStyle* returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getStyleDetailsRef(index);
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getBoundingBoxCount();
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceBoundingBox* returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getBoundingBoxRef(index);
				}
				virtual const EVString getDataFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getDataFormat(index);
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getDataFormatCount();
				}
				virtual const EVString getInfoFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getInfoFormat(index);
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getInfoFormatCount();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerInfo::getDatasetType();
				}
			};
			REGISTER_FACTORY_CLASS(CWMSLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSRS(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getSRS(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRS_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSRS(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSRSCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getSRSCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getSRSCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getSRSCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyleCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getStyleCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyle(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getStyle(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyle_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceStyle*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyleDetailsRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->getStyleDetailsRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceStyle*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getStyleDetailsRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getBoundingBoxCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->getBoundingBoxRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getBoundingBoxRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getDataFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getDataFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getDataFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getDataFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDataFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getDataFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getInfoFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerInfo::getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSLayerInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getLayerInfoRef_CWMSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSLayerInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getLayerInfoRef_CWMSLayerInfo_EVString(void *pObjectXXXX, _in const char* layername )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(layername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getMetaDataURLCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMetaDataURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getMetaDataURL_COGCMetaDataURLInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getMetaDataURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getFeatureListURLCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFeatureListURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getFeatureListURL_COGCMetaDataURLInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getFeatureListURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMSAuthorityURL*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getAuthorityURL_COGCWMSAuthorityURL_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMSAuthorityURL* objXXXX = ptrNativeObject->getAuthorityURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getAuthorityCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAuthorityCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMSDimensionInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDimensionInfoRef_COGCWMSDimensionInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMSDimensionInfo* objXXXX = ptrNativeObject->getDimensionInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDimensionCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDimensionCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getLatLongBoundingBoxRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getLatLongBoundingBoxRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getDataURLRef_COGCMetaDataURLInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getDataURLRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::OGCWMSScaleHint*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getWMSScaleHintRef_OGCWMSScaleHint(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::OGCWMSScaleHint* objXXXX = ptrNativeObject->getWMSScaleHintRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMSAttribution*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getAttributionRef_COGCWMSAttribution(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMSAttribution* objXXXX = ptrNativeObject->getAttributionRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSLayerInfo*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getParentLayerInfoRef_CWMSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* objXXXX = ptrNativeObject->getParentLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_isQueryable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isQueryable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint32*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getCascaded_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_uint32* objXXXX = ptrNativeObject->getCascaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_isOpaque_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isOpaque();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_isNoSubsets_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isNoSubsets();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint32*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getFixedWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_uint32* objXXXX = ptrNativeObject->getFixedWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint32*  _stdcall EarthView_World_Spatial_CWMSLayerInfo_getFixedHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				const ev_uint32* objXXXX = ptrNativeObject->getFixedHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSLayerInfo_isCategoryLayer_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCategoryLayer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerInfo_getName_EVString_Callback* pCallback )
			{
				CWMSLayerInfoProxy* ptr = dynamic_cast<CWMSLayerInfoProxy*>((EarthView::World::Spatial::CWMSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerInfo_getName_EVString(pCallback);
				}
			}
		}
	}
}
