/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/wmscharttheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback)(_in char*& displayMode);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback)(_in char*& colorMode);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback)(_in char*& symbolMode);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback)(_in char*& isoBath);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback)(_in char*& annoMode);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CEVWMSChartThemeProxy : public EarthView::World::Spatial::Theme::CEVWMSChartTheme
				{
				private:
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback;
				public:
					CEVWMSChartThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSChartTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme(EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setDisplayMode(_in const EVString& displayMode)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* displayMode_Char = displayMode.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback(displayMode_Char);
						}
						else
							return this->CEVWMSChartTheme::setDisplayMode(displayMode);
					}
					virtual EVString getDisplayMode() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getDisplayMode();
					}
					virtual void setColorMode(_in const EVString& colorMode)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* colorMode_Char = colorMode.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback(colorMode_Char);
						}
						else
							return this->CEVWMSChartTheme::setColorMode(colorMode);
					}
					virtual EVString getColorMode() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getColorMode();
					}
					virtual void setSymbolMode(_in const EVString& symbolMode)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* symbolMode_Char = symbolMode.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback(symbolMode_Char);
						}
						else
							return this->CEVWMSChartTheme::setSymbolMode(symbolMode);
					}
					virtual EVString getSymbolMode() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getSymbolMode();
					}
					virtual void setIsoBath(_in const EVString& isoBath)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* isoBath_Char = isoBath.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback(isoBath_Char);
						}
						else
							return this->CEVWMSChartTheme::setIsoBath(isoBath);
					}
					virtual EVString getIsoBath() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getIsoBath();
					}
					virtual void setAnnoMode(_in const EVString& annoMode)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* annoMode_Char = annoMode.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback(annoMode_Char);
						}
						else
							return this->CEVWMSChartTheme::setAnnoMode(annoMode);
					}
					virtual EVString getAnnoMode() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getAnnoMode();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::clone();
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::equals(theme);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVWMSChartTheme::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEVWMSChartTheme::fromStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CEVWMSChartTheme::fromXmlElement(element);
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->CEVWMSChartTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->CEVWMSChartTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CEVWMSChartTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CEVWMSChartTheme::setDefaultSymbol(symbol);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->CEVWMSChartTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->CEVWMSChartTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(CEVWMSChartThemeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString(void *pObjectXXXX, _in const char* displayMode )
				{
					EarthView::World::Core::ev_string displayMode1 = displayMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setDisplayMode(displayMode1);
					else
						ptrNativeObject->setDisplayMode(displayMode1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDisplayMode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* displayMode )
				{
					EarthView::World::Core::ev_string displayMode1 = displayMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setDisplayMode(displayMode1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getDisplayMode();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayMode();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDisplayMode_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getDisplayMode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString(void *pObjectXXXX, _in const char* colorMode )
				{
					EarthView::World::Core::ev_string colorMode1 = colorMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setColorMode(colorMode1);
					else
						ptrNativeObject->setColorMode(colorMode1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setColorMode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* colorMode )
				{
					EarthView::World::Core::ev_string colorMode1 = colorMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setColorMode(colorMode1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getColorMode();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getColorMode();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getColorMode_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getColorMode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString(void *pObjectXXXX, _in const char* symbolMode )
				{
					EarthView::World::Core::ev_string symbolMode1 = symbolMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setSymbolMode(symbolMode1);
					else
						ptrNativeObject->setSymbolMode(symbolMode1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setSymbolMode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* symbolMode )
				{
					EarthView::World::Core::ev_string symbolMode1 = symbolMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setSymbolMode(symbolMode1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getSymbolMode();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSymbolMode();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getSymbolMode_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getSymbolMode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString(void *pObjectXXXX, _in const char* isoBath )
				{
					EarthView::World::Core::ev_string isoBath1 = isoBath;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setIsoBath(isoBath1);
					else
						ptrNativeObject->setIsoBath(isoBath1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setIsoBath_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* isoBath )
				{
					EarthView::World::Core::ev_string isoBath1 = isoBath;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setIsoBath(isoBath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getIsoBath();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getIsoBath();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getIsoBath_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getIsoBath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString(void *pObjectXXXX, _in const char* annoMode )
				{
					EarthView::World::Core::ev_string annoMode1 = annoMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setAnnoMode(annoMode1);
					else
						ptrNativeObject->setAnnoMode(annoMode1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_setAnnoMode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* annoMode )
				{
					EarthView::World::Core::ev_string annoMode1 = annoMode;
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::setAnnoMode(annoMode1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getAnnoMode();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAnnoMode();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_getAnnoMode_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::getAnnoMode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					if (dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CEVWMSChartTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CEVWMSChartTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CEVWMSChartTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					CEVWMSChartThemeProxy* ptr = dynamic_cast<CEVWMSChartThemeProxy*>((EarthView::World::Spatial::Theme::CEVWMSChartTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CEVWMSChartTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
