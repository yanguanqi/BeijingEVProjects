/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evmetaobjectinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CServerPoint3DF_x( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerPoint3DF* ptrNativeObject = (EarthView::World::Spatial::CServerPoint3DF*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->x;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerPoint3DF_x( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CServerPoint3DF*)pObjectXXXX)->x = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CServerPoint3DF_y( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerPoint3DF* ptrNativeObject = (EarthView::World::Spatial::CServerPoint3DF*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->y;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerPoint3DF_y( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CServerPoint3DF*)pObjectXXXX)->y = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CServerPoint3DF_z( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerPoint3DF* ptrNativeObject = (EarthView::World::Spatial::CServerPoint3DF*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->z;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerPoint3DF_z( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CServerPoint3DF*)pObjectXXXX)->z = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerFont_fontFamily( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->fontFamily;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_fontFamily( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->fontFamily = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_CServerFont_fontSize( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fontSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_fontSize( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->fontSize = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerFont_fontColor( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->fontColor;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_fontColor( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->fontColor = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerFont_backColor( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->backColor;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_backColor( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->backColor = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerFont_isFontBold( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFontBold;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_isFontBold( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->isFontBold = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerFont_isFontItalic( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFontItalic;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_isFontItalic( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->isFontItalic = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerFont_isFontUnderlined( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerFont* ptrNativeObject = (EarthView::World::Spatial::CServerFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFontUnderlined;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerFont_isFontUnderlined( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerFont*)pObjectXXXX)->isFontUnderlined = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerAnnotation_isVisible( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerAnnotation* ptrNativeObject = (EarthView::World::Spatial::CServerAnnotation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVisible;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerAnnotation_isVisible( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerAnnotation*)pObjectXXXX)->isVisible = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerAnnotation_fieldName( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerAnnotation* ptrNativeObject = (EarthView::World::Spatial::CServerAnnotation*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->fieldName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerAnnotation_fieldName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerAnnotation*)pObjectXXXX)->fieldName = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerAnnotation_isSprite( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerAnnotation* ptrNativeObject = (EarthView::World::Spatial::CServerAnnotation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isSprite;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerAnnotation_isSprite( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerAnnotation*)pObjectXXXX)->isSprite = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_CServerAnnotation_font( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerAnnotation* ptrNativeObject = (EarthView::World::Spatial::CServerAnnotation*) pObjectXXXX;
				EarthView::World::Spatial::CServerFont &objXXXX = ptrNativeObject->font;
				EarthView::World::Spatial::CServerFont *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerAnnotation_font( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::CServerAnnotation*)pObjectXXXX)->font = *(EarthView::World::Spatial::CServerFont*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerIcon_iconData( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerIcon* ptrNativeObject = (EarthView::World::Spatial::CServerIcon*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->iconData;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerIcon_iconData( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerIcon*)pObjectXXXX)->iconData = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_CServerIcon_iconHeight( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerIcon* ptrNativeObject = (EarthView::World::Spatial::CServerIcon*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->iconHeight;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerIcon_iconHeight( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial::CServerIcon*)pObjectXXXX)->iconHeight = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_CServerIcon_iconWidth( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerIcon* ptrNativeObject = (EarthView::World::Spatial::CServerIcon*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->iconWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerIcon_iconWidth( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial::CServerIcon*)pObjectXXXX)->iconWidth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CServerIcon_isIconVisible( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerIcon* ptrNativeObject = (EarthView::World::Spatial::CServerIcon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isIconVisible;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerIcon_isIconVisible( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CServerIcon*)pObjectXXXX)->isIconVisible = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerStyle_strStyleName( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strStyleName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerStyle_strStyleName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerStyle*)pObjectXXXX)->strStyleName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerStyle_strFieldName( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strFieldName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerStyle_strFieldName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerStyle*)pObjectXXXX)->strFieldName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CServerStyle_strUniqueValue( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strUniqueValue;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerStyle_strUniqueValue( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CServerStyle*)pObjectXXXX)->strUniqueValue = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CServerStyle_dfMinValue( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->dfMinValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerStyle_dfMinValue( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CServerStyle*)pObjectXXXX)->dfMinValue = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CServerStyle_dfMaxValue( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->dfMaxValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CServerStyle_dfMaxValue( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CServerStyle*)pObjectXXXX)->dfMaxValue = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CServerStyle*  _stdcall EarthView_World_Spatial_CServerStyle_clone_CServerStyle(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerStyle* ptrNativeObject = (EarthView::World::Spatial::CServerStyle*) pObjectXXXX;
				EarthView::World::Spatial::CServerStyle* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTheme_getThemeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getThemeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerTheme_getThemeType_EVSSCThemeType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCThemeType objXXXX = ptrNativeObject->getThemeType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTheme_getFieldName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFieldName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerTheme_getStyleCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStyleCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerStyle*  _stdcall EarthView_World_Spatial_CServerTheme_getStyleRef_CServerStyle_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				const EarthView::World::Spatial::CServerStyle* objXXXX = ptrNativeObject->getStyleRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CServerTheme*  _stdcall EarthView_World_Spatial_CServerTheme_clone_CServerTheme(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerTheme* ptrNativeObject = (EarthView::World::Spatial::CServerTheme*) pObjectXXXX;
				EarthView::World::Spatial::CServerTheme* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_getSRS_EVSSCSRS(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->getSRS();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_getMinLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMinLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_getMaxLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMaxLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_getEnvelope_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CServerCacheLayerInfo*  _stdcall EarthView_World_Spatial_CServerCacheLayerInfo_clone_CServerCacheLayerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerCacheLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CServerCacheLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::CServerCacheLayerInfo* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerSearchCondition_getPointCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPointCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerPoint3DF*  _stdcall EarthView_World_Spatial_CServerSearchCondition_getPointRef_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				const EarthView::World::Spatial::CServerPoint3DF* objXXXX = ptrNativeObject->getPointRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_addPoint_void_CServerPoint3DF(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* point )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->addPoint(point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_addPoint_void_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* points, _in ev_uint32 count )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->addPoint(points, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_insertPoint_void_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* point, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->insertPoint(point, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_removePoint_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->removePoint(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_clearPoints_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->clearPoints();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_setGeometryType_void_EVSSCGeometryType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->setGeometryType((EarthView::World::Spatial::EVSSCGeometryType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerSearchCondition_getGeometryType_EVSSCGeometryType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCGeometryType objXXXX = ptrNativeObject->getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_setSQL_void_EVString(void *pObjectXXXX, _in const char* strSQL )
			{
				EarthView::World::Core::ev_string strSQL1 = strSQL;
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->setSQL(strSQL1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerSearchCondition_getSQL_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSQL();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerSearchCondition_setSearchFields_void_EVString(void *pObjectXXXX, _in const char* strSearchFields )
			{
				EarthView::World::Core::ev_string strSearchFields1 = strSearchFields;
				EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				ptrNativeObject->setSearchFields(strSearchFields1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerSearchCondition_getSearchFields_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSearchCondition* ptrNativeObject = (EarthView::World::Spatial::CServerSearchCondition*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getSearchFields();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerRecord_getID_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerRecord* ptrNativeObject = (EarthView::World::Spatial::CServerRecord*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CServerRecord_getEnveloprRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerRecord* ptrNativeObject = (EarthView::World::Spatial::CServerRecord*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnveloprRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerRecord_getFieldCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerRecord* ptrNativeObject = (EarthView::World::Spatial::CServerRecord*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerRecord_getFieldValue_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerRecord* ptrNativeObject = (EarthView::World::Spatial::CServerRecord*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFieldValue(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerSet_getLayerIndex_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerSet_getMapName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMapName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerSet_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerSet_getRecordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRecordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerSet_getFieldCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerRecord*  _stdcall EarthView_World_Spatial_CServerSet_getRecordRef_CServerRecord_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				const EarthView::World::Spatial::CServerRecord* objXXXX = ptrNativeObject->getRecordRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerSet_getFieldName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerSet* ptrNativeObject = (EarthView::World::Spatial::CServerSet*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFieldName(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CServerQueryResults*  _stdcall EarthView_World_Spatial_CServerQueryResults_clone_CServerQueryResults(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerQueryResults* ptrNativeObject = (EarthView::World::Spatial::CServerQueryResults*) pObjectXXXX;
				EarthView::World::Spatial::CServerQueryResults* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerQueryResults_getResultCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerQueryResults* ptrNativeObject = (EarthView::World::Spatial::CServerQueryResults*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getResultCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerQueryResults_getValue_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerQueryResults* ptrNativeObject = (EarthView::World::Spatial::CServerQueryResults*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getValue(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CWebField_strFieldName( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebField* ptrNativeObject = (EarthView::World::Spatial::CWebField*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->strFieldName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CWebField_strFieldName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CWebField*)pObjectXXXX)->strFieldName = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_CWebField_nFieldType( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebField* ptrNativeObject = (EarthView::World::Spatial::CWebField*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCWebFieldType objXXXX = ptrNativeObject->nFieldType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CWebField_nFieldType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial::CWebField*)pObjectXXXX)->nFieldType = (EarthView::World::Spatial::EVSSCWebFieldType)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_CWebField_value( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebField* ptrNativeObject = (EarthView::World::Spatial::CWebField*) pObjectXXXX;
				EarthView::World::Core::CVariant &objXXXX = ptrNativeObject->value;
				EarthView::World::Core::CVariant *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CWebField_value( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial::CWebField*)pObjectXXXX)->value = *(EarthView::World::Core::CVariant*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerPointList_getPointCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPointCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerPoint3DF*  _stdcall EarthView_World_Spatial_CServerPointList_getPointRef_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				const EarthView::World::Spatial::CServerPoint3DF* objXXXX = ptrNativeObject->getPointRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerPointList_addPoint_void_CServerPoint3DF(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* point )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ptrNativeObject->addPoint(point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerPointList_addPoint_void_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* points, _in ev_uint32 count )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ptrNativeObject->addPoint(points, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerPointList_insertPoint_void_CServerPoint3DF_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerPoint3DF* point, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ptrNativeObject->insertPoint(point, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerPointList_removePoint_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ptrNativeObject->removePoint(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerPointList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerPointList* ptrNativeObject = (EarthView::World::Spatial::CServerPointList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CMemoryStreamResult_getDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMemoryStreamResult* ptrNativeObject = (EarthView::World::Spatial::CMemoryStreamResult*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getDataStreamPtr();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CGeometryList_getGeometryCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeometryList* ptrNativeObject = (EarthView::World::Spatial::CGeometryList*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getGeometryCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_CGeometryList_getGeometryRef_IGeometry_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CGeometryList* ptrNativeObject = (EarthView::World::Spatial::CGeometryList*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeometryList_addGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
			{
				EarthView::World::Spatial::CGeometryList* ptrNativeObject = (EarthView::World::Spatial::CGeometryList*) pObjectXXXX;
				ptrNativeObject->addGeometry(geom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CGeometryList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CGeometryList* ptrNativeObject = (EarthView::World::Spatial::CGeometryList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebFeature_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWebFeature_getGeometryType_EVGeometryType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWebField*  _stdcall EarthView_World_Spatial_CEVWebFeature_getFieldsRef_CWebField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				const EarthView::World::Spatial::CWebField* objXXXX = ptrNativeObject->getFieldsRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWebFeature_getFieldCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_CEVWebFeature_getGeometryRef_IGeometry(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWebFeature_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWebFeature* ptrNativeObject = (EarthView::World::Spatial::CEVWebFeature*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CEVPlaceNameRecord_x( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVPlaceNameRecord* ptrNativeObject = (EarthView::World::Spatial::CEVPlaceNameRecord*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->x;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CEVPlaceNameRecord_x( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CEVPlaceNameRecord*)pObjectXXXX)->x = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CEVPlaceNameRecord_y( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVPlaceNameRecord* ptrNativeObject = (EarthView::World::Spatial::CEVPlaceNameRecord*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->y;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CEVPlaceNameRecord_y( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CEVPlaceNameRecord*)pObjectXXXX)->y = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_CEVPlaceNameRecord_name( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVPlaceNameRecord* ptrNativeObject = (EarthView::World::Spatial::CEVPlaceNameRecord*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CEVPlaceNameRecord_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial::CEVPlaceNameRecord*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CPlaceNameList_getRectordCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CPlaceNameList* ptrNativeObject = (EarthView::World::Spatial::CPlaceNameList*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRectordCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVPlaceNameRecord*  _stdcall EarthView_World_Spatial_CPlaceNameList_getRecordRef_CEVPlaceNameRecord_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CPlaceNameList* ptrNativeObject = (EarthView::World::Spatial::CPlaceNameList*) pObjectXXXX;
				const EarthView::World::Spatial::CEVPlaceNameRecord* objXXXX = ptrNativeObject->getRecordRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerMeshObject_getDatasetName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDatasetName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerMeshObject_getEntityID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerMeshObject_getMeshID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMeshID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerMeshObject_getMeshName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getMeshName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CServerMeshObject_getMeshData_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getMeshData();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerMeshObject_getEntityName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getEntityName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CServerMeshObject_isFromTemplate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isFromTemplate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getPosX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getPosY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getPosZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getScaleX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScaleX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getScaleY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScaleY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getScaleZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScaleZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getRotationX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getRotationY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getRotationZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerMeshObject_getRotationW_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationW();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getMaxDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getMinDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getRotationX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getRotationY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getRotationZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getRotationW_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRotationW();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getScalX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScalX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getScalY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScalY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getScalZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScalZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getPosX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getPosY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getPosZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getPosZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getInstanceNum_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getInstanceNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getMeshInstID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMeshInstID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getMeshInstTmplID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMeshInstTmplID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getNodecode_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getNodecode();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getAliasname_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getAliasname();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getRefCount_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getRefCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getMeshTmplData_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getMeshTmplData();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getFileName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFileName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getname_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getname();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateMeshObject_getTmplId_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateMeshObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateMeshObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTmplId();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerModelResource_getResourceID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResourceID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerModelResource_getResourceType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResourceType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerModelResource_getResourceCount_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CServerModelResource_getResourceData_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerModelResource*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getResourceData();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerModelResource_getSourceFileName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerModelResource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getSourceFileName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getRefCount_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getRefCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getResData_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getResData();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getResFilename_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getResFilename();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getResType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getResId_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResId();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getSubMeshIndex_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSubMeshIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateModelResource_getChangeFromTemplate_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateModelResource* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateModelResource*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getChangeFromTemplate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerResourceObject_getDatasetName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerResourceObject* ptrNativeObject = (EarthView::World::Spatial::CServerResourceObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDatasetName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerResourceObject_getEntityID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerResourceObject* ptrNativeObject = (EarthView::World::Spatial::CServerResourceObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CServerResourceObject_needOrigTexture_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerResourceObject* ptrNativeObject = (EarthView::World::Spatial::CServerResourceObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->needOrigTexture();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerResourceObject_getModelResourceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerResourceObject* ptrNativeObject = (EarthView::World::Spatial::CServerResourceObject*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getModelResourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerModelResource*  _stdcall EarthView_World_Spatial_CServerResourceObject_getModelResourceRef_CServerModelResource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerResourceObject* ptrNativeObject = (EarthView::World::Spatial::CServerResourceObject*) pObjectXXXX;
				const EarthView::World::Spatial::CServerModelResource* objXXXX = ptrNativeObject->getModelResourceRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerOrigTexture_getDatasetName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOrigTexture* ptrNativeObject = (EarthView::World::Spatial::CServerOrigTexture*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDatasetName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerOrigTexture_getEntityID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOrigTexture* ptrNativeObject = (EarthView::World::Spatial::CServerOrigTexture*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerOrigTexture_getModelResourceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOrigTexture* ptrNativeObject = (EarthView::World::Spatial::CServerOrigTexture*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getModelResourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerModelResource*  _stdcall EarthView_World_Spatial_CServerOrigTexture_getModelResourceRef_CServerModelResource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerOrigTexture* ptrNativeObject = (EarthView::World::Spatial::CServerOrigTexture*) pObjectXXXX;
				const EarthView::World::Spatial::CServerModelResource* objXXXX = ptrNativeObject->getModelResourceRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CServerEntityObject_getDatasetName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerEntityObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDatasetName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerEntityObject_getEntityID_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CServerEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerEntityObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_CServerEntityObject_getMeshObjectRef_CServerMeshObject(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerEntityObject*) pObjectXXXX;
				const EarthView::World::Spatial::CServerMeshObject& objXXXX = ptrNativeObject->getMeshObjectRef();
				const EarthView::World::Spatial::CServerMeshObject *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerEntityObject_getModelResourceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerEntityObject*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getModelResourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerModelResource*  _stdcall EarthView_World_Spatial_CServerEntityObject_getModelResourceRef_CServerModelResource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerEntityObject*) pObjectXXXX;
				const EarthView::World::Spatial::CServerModelResource* objXXXX = ptrNativeObject->getModelResourceRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerTemplateEntityObject_getEntityID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateEntityObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_CServerTemplateEntityObject_getMeshObjectRef_CServerTemplateMeshObject(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateEntityObject*) pObjectXXXX;
				const EarthView::World::Spatial::CServerTemplateMeshObject& objXXXX = ptrNativeObject->getMeshObjectRef();
				const EarthView::World::Spatial::CServerTemplateMeshObject *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CServerTemplateEntityObject_getModelResourceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerTemplateEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateEntityObject*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getModelResourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerTemplateModelResource*  _stdcall EarthView_World_Spatial_CServerTemplateEntityObject_getModelResourceRef_CServerTemplateModelResource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CServerTemplateEntityObject* ptrNativeObject = (EarthView::World::Spatial::CServerTemplateEntityObject*) pObjectXXXX;
				const EarthView::World::Spatial::CServerTemplateModelResource* objXXXX = ptrNativeObject->getModelResourceRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerOctreeNode_getNodeCode_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getNodeCode();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMinX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMaxX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMinY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMaxY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMinZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CServerOctreeNode_getMaxZ_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerOctreeNode_getVersion_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_CServerOctreeNode_getObjects_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerOctreeNode* ptrNativeObject = (EarthView::World::Spatial::CServerOctreeNode*) pObjectXXXX;
				const EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getObjects();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerDBField_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerDBField_getAliasName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getAliasName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerDBField_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CServerDBField_getFieldType_EVFieldType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerDBField_getPrecision_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getPrecision();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CServerDBField_getSize_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerDBField* ptrNativeObject = (EarthView::World::Spatial::CServerDBField*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CEVTileInfo_getDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getDataStreamPtr();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_bool*  _stdcall EarthView_World_Spatial_CEVTileInfo_isLastest_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				const ev_bool* objXXXX = ptrNativeObject->isLastest();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVTileInfo_getFileFormat_EVSSCFileFormat(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCFileFormat objXXXX = ptrNativeObject->getFileFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVTileInfo_getDataTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDataTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVTileInfo_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVTileInfo_getProperty_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getProperty();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVTileInfo_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVTileInfo* ptrNativeObject = (EarthView::World::Spatial::CEVTileInfo*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_inout ev_real64& north, _inout ev_real64& south, _inout ev_real64& east, _inout ev_real64& west);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVDEMLayerInfoProxy : public EarthView::World::Spatial::CEVDEMLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVDEMLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVDEMLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode(EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString(EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerInfo::getEnvelopeRef();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerInfo::getDatasetType();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerInfo::getSpatialReference();
				}
				virtual void getExtentForZeroLevel(_inout ev_real64& north, _inout ev_real64& south, _inout ev_real64& east, _inout ev_real64& west) const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(north, south, east, west);
					}
					else
						return this->CEVDEMLayerInfo::getExtentForZeroLevel(north, south, east, west);
				}
				virtual EarthView::World::Spatial::EVSSCCacheMode getOriginType() const
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCCacheMode returnValue = (EarthView::World::Spatial::EVSSCCacheMode)m_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMLayerInfo::getOriginType();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVDEMLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVDEMLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getCacheDataType_EVSSCCacheDataType(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->getCacheDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getDataType_EVSSCLayerDataType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCLayerDataType objXXXX = ptrNativeObject->getDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getFileFormat_EVSSCFileFormat(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCFileFormat objXXXX = ptrNativeObject->getFileFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSpanForZeroLevel_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getSpanForZeroLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getLevelNum_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLevelNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSamplesPerTile_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSamplesPerTile();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getMaxDataLavel_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxDataLavel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getMinDataLevel_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinDataLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getCacheMode_EVSSCCacheMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheMode objXXXX = ptrNativeObject->getCacheMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSRS_EVSSCSRS(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->getSRS();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getDataTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDataTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_setTemplateEnvelope_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* env )
			{
				EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ptrNativeObject->setTemplateEnvelope(env);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getTemplateEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getTemplateEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& north, _inout ev_real64& south, _inout ev_real64& east, _inout ev_real64& west )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getExtentForZeroLevel(north, south, east, west);
				else
					ptrNativeObject->getExtentForZeroLevel(north, south, east, west);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getExtentForZeroLevel_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _inout ev_real64& north, _inout ev_real64& south, _inout ev_real64& east, _inout ev_real64& west )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getExtentForZeroLevel(north, south, east, west);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCCacheMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getOriginType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCCacheMode objXXXX = ptrNativeObject->getOriginType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_getOriginType_EVSSCCacheMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::getOriginType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVDEMLayerInfoProxy* ptr = dynamic_cast<CEVDEMLayerInfoProxy*>((EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVDEMLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVDEMLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVDEMLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVDEMLayerInfo::clone(pOther);
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVGeoCodeLayerInfoProxy : public EarthView::World::Spatial::CEVGeoCodeLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVGeoCodeLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeoCodeLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString(EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerInfo::getEnvelopeRef();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerInfo::getDatasetType();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeLayerInfo::getSpatialReference();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVGeoCodeLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeoCodeLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getGeocodeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getGeocodeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getFieldName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFieldName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getMaxVisibleHeight_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxVisibleHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getMinVisibleHeight_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinVisibleHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getMaxLabelHeight_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxLabelHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getMinLabelHeight_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinLabelHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getLabelDockStyle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getLabelDockStyle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerFont*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getFont_CServerFont(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerFont* objXXXX = ptrNativeObject->getFont();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerIcon*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getIcon_CServerIcon(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerIcon* objXXXX = ptrNativeObject->getIcon();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVGeoCodeLayerInfoProxy* ptr = dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVGeoCodeLayerInfoProxy* ptr = dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVGeoCodeLayerInfoProxy* ptr = dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVGeoCodeLayerInfoProxy* ptr = dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVGeoCodeLayerInfoProxy* ptr = dynamic_cast<CEVGeoCodeLayerInfoProxy*>((EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeoCodeLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVGeoCodeLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVGeoCodeLayerInfo::clone(pOther);
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback)(_in ev_int32 version);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVOBQDataMetaInfoProxy : public EarthView::World::Spatial::CEVOBQDataMetaInfo
			{
			private:
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVOBQDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVOBQDataMetaInfo(pList)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32(EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32(EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32(EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString(EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getSpatialReference();
				}
				virtual ev_int32 getSrid() const
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getSrid();
				}
				virtual void setVersion(_in ev_int32 version)
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback(version);
					}
					else
						return this->CEVOBQDataMetaInfo::setVersion(version);
				}
				virtual ev_int32 getVersion()
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVOBQDataMetaInfo::getVersion();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVOBQDataMetaInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVOBQDataMetaInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getSrid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getSrid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getSrid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getSrid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::setVersion(version);
				else
					ptrNativeObject->setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_setVersion_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_getVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVOBQDataMetaInfoProxy* ptr = dynamic_cast<CEVOBQDataMetaInfoProxy*>((EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVOBQDataMetaInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVOBQDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVOBQDataMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVOBQDataMetaInfo::clone(pOther);
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback)(_in ev_int32 version);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback)(_in int model);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 value);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerOctreeNode*  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerDBField*  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVBaseModelLayerInfoProxy : public EarthView::World::Spatial::CEVBaseModelLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVBaseModelLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVBaseModelLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32(EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode(EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64(EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64(EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString(EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getSpatialReference();
				}
				virtual ev_int32 getSrid() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getSrid();
				}
				virtual ev_int32 getEvid() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getEvid();
				}
				virtual void setVersion(_in ev_int32 version)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback(version);
					}
					else
						return this->CEVBaseModelLayerInfo::setVersion(version);
				}
				virtual ev_int32 getVersion()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getVersion();
				}
				virtual ev_int32 getOctreeVersion()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getOctreeVersion();
				}
				virtual void setAltitudeModel(_in EarthView::World::Spatial::Utility::EVAltitudeMode model)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback((int)model);
					}
					else
						return this->CEVBaseModelLayerInfo::setAltitudeModel(model);
				}
				virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeModel() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode returnValue = (EarthView::World::Spatial::Utility::EVAltitudeMode)m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getAltitudeModel();
				}
				virtual void setAltitudeValue(_in ev_real64 value)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback(value);
					}
					else
						return this->CEVBaseModelLayerInfo::setAltitudeValue(value);
				}
				virtual ev_real64 getAltitudeValue() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getAltitudeValue();
				}
				virtual ev_uint32 getOctreeNodeCount()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getOctreeNodeCount();
				}
				virtual const EarthView::World::Spatial::CServerOctreeNode* getOctreeNodeRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerOctreeNode* returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getOctreeNodeRef(index);
				}
				virtual ev_uint32 getDBFieldCount()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getDBFieldCount();
				}
				virtual const EarthView::World::Spatial::CServerDBField* getDBFieldRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerDBField* returnValue = m_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVBaseModelLayerInfo::getDBFieldRef(index);
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVBaseModelLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVBaseModelLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getSrid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getSrid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getSrid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getSrid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getEvid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEvid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getEvid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getEvid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setVersion(version);
				else
					ptrNativeObject->setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setVersion_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getOctreeVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(void *pObjectXXXX, _in int model )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
				else
					ptrNativeObject->setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_NoVirtual(void *pObjectXXXX, _in int model )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getAltitudeModel();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeModel();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeModel_EVAltitudeMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getAltitudeModel();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setAltitudeValue(value);
				else
					ptrNativeObject->setAltitudeValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_setAltitudeValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::setAltitudeValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getAltitudeValue();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getAltitudeValue_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getAltitudeValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeNodeCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getOctreeNodeCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeNodeCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerOctreeNode*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeNodeRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->getOctreeNodeRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerOctreeNode*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getOctreeNodeRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDBFieldCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDBFieldCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDBFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerDBField*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDBFieldRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->getDBFieldRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerDBField*  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::getDBFieldRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVBaseModelLayerInfoProxy* ptr = dynamic_cast<CEVBaseModelLayerInfoProxy*>((EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVBaseModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVBaseModelLayerInfo::clone(pOther);
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback)(_in ev_int32 version);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback)(_in int model);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 value);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerOctreeNode*  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerDBField*  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVModelLayerInfoProxy : public EarthView::World::Spatial::CEVModelLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVModelLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32(EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32(EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32(EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32(EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32(EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode(EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64(EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64(EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32(EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32(EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString(EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getSpatialReference();
				}
				virtual ev_int32 getSrid() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getSrid();
				}
				virtual ev_int32 getEvid() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getEvid();
				}
				virtual void setVersion(_in ev_int32 version)
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback(version);
					}
					else
						return this->CEVModelLayerInfo::setVersion(version);
				}
				virtual ev_int32 getVersion()
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getVersion();
				}
				virtual ev_int32 getOctreeVersion()
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getOctreeVersion();
				}
				virtual void setAltitudeModel(_in EarthView::World::Spatial::Utility::EVAltitudeMode model)
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback((int)model);
					}
					else
						return this->CEVModelLayerInfo::setAltitudeModel(model);
				}
				virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeModel() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode returnValue = (EarthView::World::Spatial::Utility::EVAltitudeMode)m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getAltitudeModel();
				}
				virtual void setAltitudeValue(_in ev_real64 value)
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback(value);
					}
					else
						return this->CEVModelLayerInfo::setAltitudeValue(value);
				}
				virtual ev_real64 getAltitudeValue() const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getAltitudeValue();
				}
				virtual ev_uint32 getOctreeNodeCount()
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getOctreeNodeCount();
				}
				virtual const EarthView::World::Spatial::CServerOctreeNode* getOctreeNodeRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerOctreeNode* returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getOctreeNodeRef(index);
				}
				virtual ev_uint32 getDBFieldCount()
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getDBFieldCount();
				}
				virtual const EarthView::World::Spatial::CServerDBField* getDBFieldRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerDBField* returnValue = m_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelLayerInfo::getDBFieldRef(index);
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVModelLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getSrid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getSrid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getSrid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getSrid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getEvid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEvid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getEvid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getEvid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setVersion(version);
				else
					ptrNativeObject->setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setVersion_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getOctreeVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(void *pObjectXXXX, _in int model )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
				else
					ptrNativeObject->setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeModel_void_EVAltitudeMode_NoVirtual(void *pObjectXXXX, _in int model )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setAltitudeModel((EarthView::World::Spatial::Utility::EVAltitudeMode)model);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getAltitudeModel();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeModel();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeModel_EVAltitudeMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getAltitudeModel();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setAltitudeValue(value);
				else
					ptrNativeObject->setAltitudeValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_setAltitudeValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::setAltitudeValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getAltitudeValue();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getAltitudeValue_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getAltitudeValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeNodeCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getOctreeNodeCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeNodeCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerOctreeNode*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeNodeRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->getOctreeNodeRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerOctreeNode*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerOctreeNode* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getOctreeNodeRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDBFieldCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDBFieldCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDBFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerDBField*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDBFieldRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->getDBFieldRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerDBField*  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerDBField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::getDBFieldRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVModelLayerInfoProxy* ptr = dynamic_cast<CEVModelLayerInfoProxy*>((EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVModelLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVModelLayerInfo::clone(pOther);
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback)(_in ev_int32 version);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback)(_in int model);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback)(_in ev_real64 value);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerOctreeNode*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::CServerDBField*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVModelTemplateLayerInfoProxy : public EarthView::World::Spatial::CEVModelTemplateLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVModelTemplateLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelTemplateLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode(EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getSpatialReference();
				}
				virtual ev_int32 getSrid() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getSrid();
				}
				virtual ev_int32 getEvid() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getEvid();
				}
				virtual void setVersion(_in ev_int32 version)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback(version);
					}
					else
						return this->CEVModelTemplateLayerInfo::setVersion(version);
				}
				virtual ev_int32 getVersion()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getVersion();
				}
				virtual ev_int32 getOctreeVersion()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getOctreeVersion();
				}
				virtual void setAltitudeModel(_in EarthView::World::Spatial::Utility::EVAltitudeMode model)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback((int)model);
					}
					else
						return this->CEVModelTemplateLayerInfo::setAltitudeModel(model);
				}
				virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeModel() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Utility::EVAltitudeMode returnValue = (EarthView::World::Spatial::Utility::EVAltitudeMode)m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getAltitudeModel();
				}
				virtual void setAltitudeValue(_in ev_real64 value)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback(value);
					}
					else
						return this->CEVModelTemplateLayerInfo::setAltitudeValue(value);
				}
				virtual ev_real64 getAltitudeValue() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getAltitudeValue();
				}
				virtual ev_uint32 getOctreeNodeCount()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getOctreeNodeCount();
				}
				virtual const EarthView::World::Spatial::CServerOctreeNode* getOctreeNodeRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerOctreeNode* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getOctreeNodeRef(index);
				}
				virtual ev_uint32 getDBFieldCount()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getDBFieldCount();
				}
				virtual const EarthView::World::Spatial::CServerDBField* getDBFieldRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CServerDBField* returnValue = m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelTemplateLayerInfo::getDBFieldRef(index);
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVModelTemplateLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelTemplateLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelTemplateLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelTemplateLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSrid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEvid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setVersion_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeModel_void_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeModel_EVAltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_setAltitudeValue_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getAltitudeValue_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getOctreeNodeRef_CServerOctreeNode_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getDBFieldRef_CServerDBField_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVModelTemplateLayerInfoProxy* ptr = dynamic_cast<CEVModelTemplateLayerInfoProxy*>((EarthView::World::Spatial::CEVModelTemplateLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVKMLLayerInfoProxy : public EarthView::World::Spatial::CEVKMLLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVKMLLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVKMLLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString(EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayerInfo::getEnvelopeRef();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayerInfo::getDatasetType();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLLayerInfo::getSpatialReference();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVKMLLayerInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVKMLLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVKMLLayerInfoProxy* ptr = dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVKMLLayerInfoProxy* ptr = dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVKMLLayerInfoProxy* ptr = dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVKMLLayerInfoProxy* ptr = dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVKMLLayerInfoProxy* ptr = dynamic_cast<CEVKMLLayerInfoProxy*>((EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVKMLLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVKMLLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVKMLLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVKMLLayerInfo::clone(pOther);
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback)(_in ev_int32 version);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback)(_in int type);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback)(_in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback)(_inout void* objStream);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVVector3DMetaInfoProxy : public EarthView::World::Spatial::CEVVector3DMetaInfo
			{
			private:
				EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVVector3DMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVVector3DMetaInfo(pList)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32(EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32(EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32(EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType(EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType(EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType(EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType(EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream(EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString(EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getSpatialReference();
				}
				virtual ev_int32 getSrid() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getSrid();
				}
				virtual void setVersion(_in ev_int32 version)
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback(version);
					}
					else
						return this->CEVVector3DMetaInfo::setVersion(version);
				}
				virtual ev_int32 getVersion()
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getVersion();
				}
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getGeometryType();
				}
				virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback((int)type);
					}
					else
						return this->CEVVector3DMetaInfo::setGeometryType(type);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getLayerType() const
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CEVVector3DMetaInfo::getLayerType();
				}
				virtual void setLayerType(_in EarthView::World::Spatial::Atlas::EVLayerType type)
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback((int)type);
					}
					else
						return this->CEVVector3DMetaInfo::setLayerType(type);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& objStream)
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback(&objStream);
					}
					else
						return this->CEVVector3DMetaInfo::fromStream(objStream);
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVVector3DMetaInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVVector3DMetaInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getSrid();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getSrid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getSrid_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getSrid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setVersion(version);
				else
					ptrNativeObject->setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setVersion_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 version )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setVersion(version);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getVersion();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getVersion_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getGeometryType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				else
					ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setGeometryType_void_EVGeometryType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getLayerType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getLayerType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_getLayerType_EVLayerType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::getLayerType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setLayerType((EarthView::World::Spatial::Atlas::EVLayerType)type);
				else
					ptrNativeObject->setLayerType((EarthView::World::Spatial::Atlas::EVLayerType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_setLayerType_void_EVLayerType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::setLayerType((EarthView::World::Spatial::Atlas::EVLayerType)type);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* objStream )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::fromStream(*(EarthView::World::Core::CDataStream*)objStream);
				else
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)objStream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* objStream )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::fromStream(*(EarthView::World::Core::CDataStream*)objStream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVVector3DMetaInfoProxy* ptr = dynamic_cast<CEVVector3DMetaInfoProxy*>((EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVVector3DMetaInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVVector3DMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CEVVector3DMetaInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVVector3DMetaInfo::clone(pOther);
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVLayerInfoProxy : public EarthView::World::Spatial::CEVLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString(EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString(EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString(EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString(EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS(EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat(EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType(EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType(EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32(EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32(EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32(EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32(EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64(EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64(EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32(EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32(EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getName_EVString(EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getLayerDescription() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getLayerDescription();
				}
				virtual EVString getDataTime() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getDataTime();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getUpdateTime();
				}
				virtual EVString getLayerName() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getLayerName();
				}
				virtual EarthView::World::Spatial::EVSSCSRS getSRS() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCSRS returnValue = (EarthView::World::Spatial::EVSSCSRS)m_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getSRS();
				}
				virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCFileFormat returnValue = (EarthView::World::Spatial::EVSSCFileFormat)m_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getFileFormat();
				}
				virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCLayerDataType returnValue = (EarthView::World::Spatial::EVSSCLayerDataType)m_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getLayerDataType();
				}
				virtual EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCGeometryType returnValue = (EarthView::World::Spatial::EVSSCGeometryType)m_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getGeometryType();
				}
				virtual ev_int32 getMaxDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMaxDataLevel();
				}
				virtual ev_int32 getMinDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMinDataLevel();
				}
				virtual ev_int32 getMaxFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMaxFieldLevel();
				}
				virtual ev_int32 getMinFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMinFieldLevel();
				}
				virtual ev_real64 getMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMaxScale();
				}
				virtual ev_real64 getMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getMinScale();
				}
				virtual ev_uint32 getAttributesCount() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getAttributesCount();
				}
				virtual EVString getAttribute(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getAttribute(index);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getSpatialReference();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVLayerInfo::clone(pOther);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVLayerInfo::getName();
				}
			};
			REGISTER_FACTORY_CLASS(CEVLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLayerDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getDataTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDataTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getDataTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getDataTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLayerName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getSRS();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->getSRS();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getSRS_EVSSCSRS_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getSRS();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCFileFormat objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getFileFormat();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCFileFormat objXXXX = ptrNativeObject->getFileFormat();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getFileFormat_EVSSCFileFormat_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCFileFormat objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getFileFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCLayerDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerDataType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCLayerDataType objXXXX = ptrNativeObject->getLayerDataType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getLayerDataType_EVSSCLayerDataType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCLayerDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getLayerDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getGeometryType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVLayerInfo_getGeometryType_EVSSCGeometryType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxDataLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMaxDataLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxDataLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxDataLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinDataLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMinDataLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinDataLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinDataLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxFieldLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMaxFieldLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxFieldLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxFieldLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinFieldLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMinFieldLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinFieldLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinFieldLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxScale();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getMaxScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMaxScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinScale();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getMinScale();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVLayerInfo_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getMinScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getAttributesCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getAttributesCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttributesCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getAttributesCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getAttribute(index);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getAttribute(index);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getAttribute_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getAttribute(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVLayerInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVLayerInfo::clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVLayerInfoProxy* ptr = dynamic_cast<CEVLayerInfoProxy*>((EarthView::World::Spatial::CEVLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVLayerInfo_getName_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWMTSLayerInfoProxy : public EarthView::World::Spatial::CEVWMTSLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWMTSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMTSLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString(EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString(EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString(EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString(EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS(EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat(EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType(EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType(EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32(EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32(EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32(EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32(EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64(EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64(EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32(EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32(EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString(EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getName();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVWMTSLayerInfo::clone(pOther);
				}
				virtual EVString getLayerDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getLayerDescription();
				}
				virtual EVString getDataTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getDataTime();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getUpdateTime();
				}
				virtual EVString getLayerName() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getLayerName();
				}
				virtual EarthView::World::Spatial::EVSSCSRS getSRS() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCSRS returnValue = (EarthView::World::Spatial::EVSSCSRS)m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getSRS();
				}
				virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCFileFormat returnValue = (EarthView::World::Spatial::EVSSCFileFormat)m_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getFileFormat();
				}
				virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCLayerDataType returnValue = (EarthView::World::Spatial::EVSSCLayerDataType)m_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getLayerDataType();
				}
				virtual EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCGeometryType returnValue = (EarthView::World::Spatial::EVSSCGeometryType)m_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getGeometryType();
				}
				virtual ev_int32 getMaxDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMaxDataLevel();
				}
				virtual ev_int32 getMinDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMinDataLevel();
				}
				virtual ev_int32 getMaxFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMaxFieldLevel();
				}
				virtual ev_int32 getMinFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMinFieldLevel();
				}
				virtual ev_real64 getMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMaxScale();
				}
				virtual ev_real64 getMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getMinScale();
				}
				virtual ev_uint32 getAttributesCount() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getAttributesCount();
				}
				virtual EVString getAttribute(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getAttribute(index);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSLayerInfo::getSpatialReference();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMTSLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getAnnotationField_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getAnnotationField();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getCacheMode_EVSSCCacheMode(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheMode objXXXX = ptrNativeObject->getCacheMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getStyleName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getStyleName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getTheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getQuaryable_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getQuaryable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getTileHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getTileWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTileWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getCacheDataType_EVSSCCacheDataType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->getCacheDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMTSLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMTSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVWMTSLayerInfo::clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getDataTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSRS_EVSSCSRS(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getFileFormat_EVSSCFileFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getLayerDataType_EVSSCLayerDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getGeometryType_EVSSCGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttributesCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getAttribute_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMTSLayerInfoProxy* ptr = dynamic_cast<CEVWMTSLayerInfoProxy*>((EarthView::World::Spatial::CEVWMTSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVMapLayerInfoProxy : public EarthView::World::Spatial::CEVMapLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVMapLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVMapLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString(EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString(EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString(EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString(EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS(EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat(EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType(EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType(EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32(EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32(EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32(EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32(EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64(EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64(EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32(EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32(EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString(EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getDatasetType();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVMapLayerInfo::clone(pOther);
				}
				virtual EVString getLayerDescription() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getLayerDescription();
				}
				virtual EVString getDataTime() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getDataTime();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getUpdateTime();
				}
				virtual EVString getLayerName() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getLayerName();
				}
				virtual EarthView::World::Spatial::EVSSCSRS getSRS() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCSRS returnValue = (EarthView::World::Spatial::EVSSCSRS)m_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getSRS();
				}
				virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCFileFormat returnValue = (EarthView::World::Spatial::EVSSCFileFormat)m_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getFileFormat();
				}
				virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCLayerDataType returnValue = (EarthView::World::Spatial::EVSSCLayerDataType)m_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getLayerDataType();
				}
				virtual EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCGeometryType returnValue = (EarthView::World::Spatial::EVSSCGeometryType)m_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getGeometryType();
				}
				virtual ev_int32 getMaxDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMaxDataLevel();
				}
				virtual ev_int32 getMinDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMinDataLevel();
				}
				virtual ev_int32 getMaxFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMaxFieldLevel();
				}
				virtual ev_int32 getMinFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMinFieldLevel();
				}
				virtual ev_real64 getMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMaxScale();
				}
				virtual ev_real64 getMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getMinScale();
				}
				virtual ev_uint32 getAttributesCount() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getAttributesCount();
				}
				virtual EVString getAttribute(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getAttribute(index);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVMapLayerInfo::getSpatialReference();
				}
			};
			REGISTER_FACTORY_CLASS(CEVMapLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_hasCache_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasCache();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerTheme*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getThemeRef_CServerTheme(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerTheme* objXXXX = ptrNativeObject->getThemeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerStyle*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getStyleRef_CServerStyle(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerStyle* objXXXX = ptrNativeObject->getStyleRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerCacheLayerInfo*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getCacheLayerInfoRef_CServerCacheLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerCacheLayerInfo* objXXXX = ptrNativeObject->getCacheLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CServerAnnotation*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getAnnotationRef_CServerAnnotation(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CServerAnnotation* objXXXX = ptrNativeObject->getAnnotationRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVMapLayerInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVMapLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVMapLayerInfo::clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getDataTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSRS_EVSSCSRS(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getFileFormat_EVSSCFileFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getLayerDataType_EVSSCLayerDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getGeometryType_EVSSCGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttributesCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getAttribute_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVMapLayerInfoProxy* ptr = dynamic_cast<CEVMapLayerInfoProxy*>((EarthView::World::Spatial::CEVMapLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVMapLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVGeometryInfoProxy : public EarthView::World::Spatial::CEVGeometryInfo
			{
			private:
				EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVGeometryInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeometryInfo(pList)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString(EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryInfo::getSpatialReference();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVGeometryInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeometryInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVGeometryInfoProxy* ptr = dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_Callback* pCallback )
			{
				CEVGeometryInfoProxy* ptr = dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVGeometryInfoProxy* ptr = dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVGeometryInfoProxy* ptr = dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVGeometryInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				if (dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVGeometryInfoProxy* ptr = dynamic_cast<CEVGeometryInfoProxy*>((EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVGeometryInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVGeometryInfo* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVGeometryInfo::clone(pOther);
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback)(_in ev_uint32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWFSLayerInfoProxy : public EarthView::World::Spatial::CEVWFSLayerInfo
			{
			private:
				EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWFSLayerInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWFSLayerInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString(EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString(EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString(EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString(EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS(EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat(EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType(EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType(EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32(EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32(EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32(EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32(EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64(EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64(EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32(EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32(EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString(EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getName();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVWFSLayerInfo::clone(pOther);
				}
				virtual EVString getLayerDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getLayerDescription();
				}
				virtual EVString getDataTime() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getDataTime();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getUpdateTime();
				}
				virtual EVString getLayerName() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getLayerName();
				}
				virtual EarthView::World::Spatial::EVSSCSRS getSRS() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCSRS returnValue = (EarthView::World::Spatial::EVSSCSRS)m_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getSRS();
				}
				virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCFileFormat returnValue = (EarthView::World::Spatial::EVSSCFileFormat)m_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getFileFormat();
				}
				virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCLayerDataType returnValue = (EarthView::World::Spatial::EVSSCLayerDataType)m_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getLayerDataType();
				}
				virtual EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCGeometryType returnValue = (EarthView::World::Spatial::EVSSCGeometryType)m_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getGeometryType();
				}
				virtual ev_int32 getMaxDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMaxDataLevel();
				}
				virtual ev_int32 getMinDataLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMinDataLevel();
				}
				virtual ev_int32 getMaxFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMaxFieldLevel();
				}
				virtual ev_int32 getMinFieldLevel() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMinFieldLevel();
				}
				virtual ev_real64 getMaxScale() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMaxScale();
				}
				virtual ev_real64 getMinScale() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getMinScale();
				}
				virtual ev_uint32 getAttributesCount() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getAttributesCount();
				}
				virtual EVString getAttribute(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getAttribute(index);
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSLayerInfo::getSpatialReference();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWFSLayerInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSLayerInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWFSLayerInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSLayerInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSLayerInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getDataTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSRS_EVSSCSRS(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getFileFormat_EVSSCFileFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getLayerDataType_EVSSCLayerDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getGeometryType_EVSSCGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinDataLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinFieldLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttributesCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getAttribute_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWFSLayerInfoProxy* ptr = dynamic_cast<CEVWFSLayerInfoProxy*>((EarthView::World::Spatial::CEVWFSLayerInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSLayerInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWMSMapInfoProxy : public EarthView::World::Spatial::CEVWMSMapInfo
			{
			private:
				EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWMSMapInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSMapInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString(EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapInfo::getSpatialReference();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSMapInfo::getDatasetType();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVWMSMapInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSMapInfoProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_Callback* pCallback )
			{
				CEVWMSMapInfoProxy* ptr = dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getSRS_EVSSCSRS(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->getSRS();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getMaxScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getMinScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVMapLayerInfo*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getLayerInfoRef_CEVMapLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CEVMapLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVMapLayerInfo*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getLayerInfoRef_CEVMapLayerInfo_EVString(void *pObjectXXXX, _in char* layername )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CEVMapLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(layername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWMSMapInfoProxy* ptr = dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMSMapInfoProxy* ptr = dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSMapInfoProxy* ptr = dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVWMSMapInfoProxy* ptr = dynamic_cast<CEVWMSMapInfoProxy*>((EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSMapInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSMapInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVWMSMapInfo::clone(pOther);
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWMSChartObjectInfoProxy : public EarthView::World::Spatial::CEVWMSChartObjectInfo
			{
			private:
				EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWMSChartObjectInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSChartObjectInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString(EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartObjectInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartObjectInfo::getDatasetType();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartObjectInfo::getSpatialReference();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartObjectInfo::getEnvelopeRef();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSChartObjectInfoProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_Callback* pCallback )
			{
				CEVWMSChartObjectInfoProxy* ptr = dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSChartObjectInfoProxy* ptr = dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getChartObjectName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getChartObjectName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelope_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMSChartObjectInfoProxy* ptr = dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSChartObjectInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSChartObjectInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMSChartObjectInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX;
				ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWMSChartObjectInfoProxy* ptr = dynamic_cast<CEVWMSChartObjectInfoProxy*>((EarthView::World::Spatial::CEVWMSChartObjectInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartObjectInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWMSImageInfoProxy : public EarthView::World::Spatial::CEVWMSImageInfo
			{
			private:
				EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWMSImageInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSImageInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString(EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageInfo::getSpatialReference();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageInfo::getName();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageInfo::getDatasetType();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageInfo::getEnvelopeRef();
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSImageInfoProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDataname_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDataname();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDownRightX_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getDownRightX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDownRightY_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getDownRightY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getTmageHeight_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getTmageHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getImageName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getImageName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getImageType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getImageType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getImageWidth_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getImageWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getNumberOfBand_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getNumberOfBand();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getRasterTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getRasterTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getResolutionOfX_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getResolutionOfX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getResolutionOfY_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getResolutionOfY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getUpLeftX_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getUpLeftX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getUpLeftY_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getUpLeftY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getWKTProjectInfo_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getWKTProjectInfo();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWMSImageInfoProxy* ptr = dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_Callback* pCallback )
			{
				CEVWMSImageInfoProxy* ptr = dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSImageInfoProxy* ptr = dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMSImageInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSImageInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWMSImageInfoProxy* ptr = dynamic_cast<CEVWMSImageInfoProxy*>((EarthView::World::Spatial::CEVWMSImageInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback)();
			class CEVWFSMapInfoProxy : public EarthView::World::Spatial::CEVWFSMapInfo
			{
			private:
				EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback;
				EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback;
			public:
				CEVWFSMapInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWFSMapInfo(pList)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo(EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString(EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSMapInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSMapInfo::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSMapInfo::getSpatialReference();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSMapInfo::getDatasetType();
				}
				virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					if(m_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback(pOther);
					}
					else
						return this->CEVWFSMapInfo::clone(pOther);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWFSMapInfoProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_Callback* pCallback )
			{
				CEVWFSMapInfoProxy* ptr = dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getSRS_EVSSCSRS(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCSRS objXXXX = ptrNativeObject->getSRS();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getMaxScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getMinScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWFSLayerInfo*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getLayerInfoRef_CEVWFSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWFSLayerInfo*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getLayerInfoRef_CEVWFSLayerInfo_EVString(void *pObjectXXXX, _in char* layername )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(layername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CEVWFSMapInfoProxy* ptr = dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getSpatialReference();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CEVWFSMapInfoProxy* ptr = dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_Callback* pCallback )
			{
				CEVWFSMapInfoProxy* ptr = dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				if (dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::clone(pOther);
				else
					ptrNativeObject->clone(pOther);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_Callback* pCallback )
			{
				CEVWFSMapInfoProxy* ptr = dynamic_cast<CEVWFSMapInfoProxy*>((EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVWFSMapInfo_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
			{
				EarthView::World::Spatial::CEVWFSMapInfo* ptrNativeObject = (EarthView::World::Spatial::CEVWFSMapInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVWFSMapInfo::clone(pOther);
			}
		}
	}
}
