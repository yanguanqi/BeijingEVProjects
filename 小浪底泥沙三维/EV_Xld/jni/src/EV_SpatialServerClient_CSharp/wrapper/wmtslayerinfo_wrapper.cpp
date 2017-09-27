/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtslayerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_setIdentifier_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ptrNativeObject->setIdentifier(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_getIdentifier_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_setMinTileRow_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ptrNativeObject->setMinTileRow(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_getMinTileRow_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinTileRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_setMaxTileRow_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ptrNativeObject->setMaxTileRow(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_getMaxTileRow_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxTileRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_setMinTileCol_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ptrNativeObject->setMinTileCol(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_getMinTileCol_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinTileCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_setMaxTileCol_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ptrNativeObject->setMaxTileCol(value);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_getMaxTileCol_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxTileCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCTileMatrixLimits*  _stdcall EarthView_World_Spatial_COGCTileMatrixLimits_clone_COGCTileMatrixLimits(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixLimits* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixLimits*) pObjectXXXX;
				EarthView::World::Spatial::COGCTileMatrixLimits* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCTileMatrixSetLink_getTileMatrixSet_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCTileMatrixSetLink* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTileMatrixSet();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCTileMatrixSetLink*  _stdcall EarthView_World_Spatial_COGCTileMatrixSetLink_clone_COGCTileMatrixSetLink(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCTileMatrixSetLink* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjectXXXX;
				EarthView::World::Spatial::COGCTileMatrixSetLink* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCTileMatrixSetLink_getTileMatrixLimitsCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCTileMatrixSetLink* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileMatrixLimitsCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCTileMatrixLimits*  _stdcall EarthView_World_Spatial_COGCTileMatrixSetLink_getTileMatrixLimitsRef_COGCTileMatrixLimits_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCTileMatrixSetLink* ptrNativeObject = (EarthView::World::Spatial::COGCTileMatrixSetLink*) pObjectXXXX;
				const EarthView::World::Spatial::COGCTileMatrixLimits* objXXXX = ptrNativeObject->getTileMatrixLimitsRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCResourceURL_setFormat_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				ptrNativeObject->setFormat(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCResourceURL_getFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCResourceURL_setResourceType_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				ptrNativeObject->setResourceType(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCResourceURL_getResourceType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getResourceType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCResourceURL_setTemplate_void_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				ptrNativeObject->setTemplate(value1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCResourceURL_getTemplate_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTemplate();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCResourceURL*  _stdcall EarthView_World_Spatial_COGCResourceURL_clone_COGCResourceURL(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCResourceURL* ptrNativeObject = (EarthView::World::Spatial::COGCResourceURL*) pObjectXXXX;
				EarthView::World::Spatial::COGCResourceURL* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getUOM_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUOM();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getUnitSymbol_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUnitSymbol();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getDefault_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDefault();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_isCurrent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getTitle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getTitleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getAbstract_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getKeyword_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeyword(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getKeywordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getValue_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getValue(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_getValueCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getValueCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMTSDimensionInfo*  _stdcall EarthView_World_Spatial_COGCWMTSDimensionInfo_clone_COGCWMTSDimensionInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWMTSDimensionInfo* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDimensionInfo*) pObjectXXXX;
				EarthView::World::Spatial::COGCWMTSDimensionInfo* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::COGCWebServiceBoundingBox*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const EarthView::World::Spatial::COGCWebServiceStyle*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback)(_in ev_uint32 index);
			typedef int  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CWMTSLayerInfoProxy : public EarthView::World::Spatial::CWMTSLayerInfo
			{
			private:
				EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CWMTSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString(EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getSpatialReference();
				}
				virtual const EVString getDataFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getDataFormat(index);
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getDataFormatCount();
				}
				virtual const EVString getInfoFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getInfoFormat(index);
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getInfoFormatCount();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getDatasetType();
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getBoundingBoxCount();
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceBoundingBox* returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getBoundingBoxRef(index);
				}
				virtual ev_uint32 getStyleCount() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getStyleCount();
				}
				virtual const EVString getStyle(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getStyle(index);
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceStyle* returnValue = m_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWMTSLayerInfo::getStyleDetailsRef(index);
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getDataFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDataFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDataFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getDataFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getInfoFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerInfo::getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getMetaData_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getMetaData(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getMetaDataCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMetaDataCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCResourceURL*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getResourceURL_COGCResourceURL_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCResourceURL* objXXXX = ptrNativeObject->getResourceURL(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getResourceURLCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getResourceURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWMTSDimensionInfo*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDimensionInfo_COGCWMTSDimensionInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* objXXXX = ptrNativeObject->getDimensionInfo(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getDimensionInfo_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDimensionInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getTileMatrixSetLinkCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileMatrixSetLinkCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCTileMatrixSetLink*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getTileMatrixSetLinkRef_COGCTileMatrixSetLink_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCTileMatrixSetLink* objXXXX = ptrNativeObject->getTileMatrixSetLinkRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCTileMatrixSetLink*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getTileMatrixSetLinkRef_COGCTileMatrixSetLink_EVString(void *pObjectXXXX, _in const char* tilematrixset )
			{
				EarthView::World::Core::ev_string tilematrixset1 = tilematrixset;
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCTileMatrixSetLink* objXXXX = ptrNativeObject->getTileMatrixSetLinkRef(tilematrixset1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileMatrixSet*  _stdcall EarthView_World_Spatial_CWMTSLayerInfo_getTileMatrixSetRef_CTileMatrixSet_EVString(void *pObjectXXXX, _in const char* tilematrixset )
			{
				EarthView::World::Core::ev_string tilematrixset1 = tilematrixset;
				const EarthView::World::Spatial::CWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CTileMatrixSet* objXXXX = ptrNativeObject->getTileMatrixSetRef(tilematrixset1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyle_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString_Callback* pCallback )
			{
				CWMTSLayerInfoProxy* ptr = dynamic_cast<CWMTSLayerInfoProxy*>((EarthView::World::Spatial::CWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerInfo_getName_EVString(pCallback);
				}
			}
		}
	}
}
