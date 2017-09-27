/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/serverlayerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_COGCMetaDataURLInfo_strType( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo* ptrNativeObject = (EarthView::World::Spatial::COGCMetaDataURLInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCMetaDataURLInfo_strType( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjectXXXX)->strType = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_COGCMetaDataURLInfo_strFormat( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo* ptrNativeObject = (EarthView::World::Spatial::COGCMetaDataURLInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strFormat;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCMetaDataURLInfo_strFormat( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjectXXXX)->strFormat = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_COGCMetaDataURLInfo_strHref( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo* ptrNativeObject = (EarthView::World::Spatial::COGCMetaDataURLInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strHref;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCMetaDataURLInfo_strHref( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::COGCMetaDataURLInfo*)pObjectXXXX)->strHref = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_COGCMetaDataURLInfo_clone_COGCMetaDataURLInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCMetaDataURLInfo* ptrNativeObject = (EarthView::World::Spatial::COGCMetaDataURLInfo*) pObjectXXXX;
				EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWebServiceBoundingBox_getSRSName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSRSName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_COGCWebServiceBoundingBox_getResX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getResX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_COGCWebServiceBoundingBox_getResY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getResY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_COGCWebServiceBoundingBox_getBoundingBox_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_COGCWebServiceBoundingBox_clone_COGCWebServiceBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceBoundingBox* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceBoundingBox*) pObjectXXXX;
				EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_strFormat( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strFormat;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_strFormat( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->strFormat = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_strHref( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strHref;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_strHref( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->strHref = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_real64*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_pdfMinScaleDenominator( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				ev_real64* objXXXX = ptrNativeObject->pdfMinScaleDenominator;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_pdfMinScaleDenominator( void *pObjectXXXX, ev_real64*  value )
			{
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->pdfMinScaleDenominator = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_pdfMaxScaleDenominator( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				ev_real64* objXXXX = ptrNativeObject->pdfMaxScaleDenominator;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_pdfMaxScaleDenominator( void *pObjectXXXX, ev_real64*  value )
			{
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->pdfMaxScaleDenominator = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_pnWidth( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				ev_uint32* objXXXX = ptrNativeObject->pnWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_pnWidth( void *pObjectXXXX, ev_uint32*  value )
			{
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->pnWidth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32*  _stdcall Get_EarthView_World_Spatial_COGCWebServiceLegendURL_pnHeight( void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				ev_uint32* objXXXX = ptrNativeObject->pnHeight;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_COGCWebServiceLegendURL_pnHeight( void *pObjectXXXX, ev_uint32*  value )
			{
				((EarthView::World::Spatial::COGCWebServiceLegendURL*)pObjectXXXX)->pnHeight = value;
			}
			extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial_COGCWebServiceLegendURL_getMinScaleDenominator_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				const ev_real64* objXXXX = ptrNativeObject->getMinScaleDenominator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial_COGCWebServiceLegendURL_getMaxScaleDenominator_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				const ev_real64* objXXXX = ptrNativeObject->getMaxScaleDenominator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint32*  _stdcall EarthView_World_Spatial_COGCWebServiceLegendURL_getWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				const ev_uint32* objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint32*  _stdcall EarthView_World_Spatial_COGCWebServiceLegendURL_getHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				const ev_uint32* objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWebServiceLegendURL*  _stdcall EarthView_World_Spatial_COGCWebServiceLegendURL_clone_COGCWebServiceLegendURL(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceLegendURL* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceLegendURL*) pObjectXXXX;
				EarthView::World::Spatial::COGCWebServiceLegendURL* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getTitleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getKeywordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getLegendURLCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLegendURLCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getStyleSheetURL_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStyleSheetURL();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getIdentifier_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getIdentifier();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_isDefault_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isDefault();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getTitle_EVString_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getAbstract_EVString_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getKeyword_EVString_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeyword(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceLegendURL*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getLegendURLRef_COGCWebServiceLegendURL_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceLegendURL* objXXXX = ptrNativeObject->getLegendURLRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCMetaDataURLInfo*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_getStyleSheetURLRef_COGCMetaDataURLInfo_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
			{
				const EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				const EarthView::World::Spatial::COGCMetaDataURLInfo* objXXXX = ptrNativeObject->getStyleSheetURLRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWebServiceStyle*  _stdcall EarthView_World_Spatial_COGCWebServiceStyle_clone_COGCWebServiceStyle(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCWebServiceStyle* ptrNativeObject = (EarthView::World::Spatial::COGCWebServiceStyle*) pObjectXXXX;
				EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef const char*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::COGCWebServiceBoundingBox*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const EarthView::World::Spatial::COGCWebServiceStyle*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback)(_in ev_uint32 index);
			typedef int  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CServerLayerInfoProxy : public EarthView::World::Spatial::CServerLayerInfo
			{
			private:
				EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CServerLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CServerLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getName_EVString(EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getDatasetType();
				}
				virtual const EVString getDataFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getDataFormat(index);
				}
				virtual ev_uint32 getDataFormatCount() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getDataFormatCount();
				}
				virtual const EVString getInfoFormat(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getInfoFormat(index);
				}
				virtual ev_uint32 getInfoFormatCount() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getInfoFormatCount();
				}
				virtual ev_uint32 getBoundingBoxCount() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getBoundingBoxCount();
				}
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceBoundingBox* returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getBoundingBoxRef(index);
				}
				virtual ev_uint32 getStyleCount() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getStyleCount();
				}
				virtual const EVString getStyle(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getStyle(index);
				}
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::COGCWebServiceStyle* returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getStyleDetailsRef(index);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CServerLayerInfo::getSpatialReference();
				}
			};
			REGISTER_FACTORY_CLASS(CServerLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getName_EVString_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerLayerInfo_getType_EVServerLayerInfoType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVServerLayerInfoType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getLayerTitle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getLayerTitle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getLayerTitleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerTitleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getLayerAbstractCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerAbstractCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getLayerAbstract_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getLayerAbstract(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDataFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getDataFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDataFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDataFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDataFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getDataFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getDataFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormat_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getInfoFormatCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getInfoFormatCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getKeywords_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getKeywords(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getKeywordsCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeywordsCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getBoundingBoxCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->getBoundingBoxRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceBoundingBox*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getBoundingBoxRef_COGCWebServiceBoundingBox_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getBoundingBoxRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyleCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getStyleCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyle(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getStyle(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyle_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyle(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceStyle*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyleDetailsRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->getStyleDetailsRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::COGCWebServiceStyle*  _stdcall EarthView_World_Spatial_CServerLayerInfo_getStyleDetailsRef_COGCWebServiceStyle_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::COGCWebServiceStyle* objXXXX = ptrNativeObject->EarthView::World::Spatial::CServerLayerInfo::getStyleDetailsRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CServerLayerInfoProxy* ptr = dynamic_cast<CServerLayerInfoProxy*>((EarthView::World::Spatial::CServerLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CServerLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
		}
	}
}
