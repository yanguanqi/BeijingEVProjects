/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/uniquevaluematchsymboltheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback)(_in ev_uint32 index, _in char*& subCaption);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback)(_in char*& value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback)(_in char*& value, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback)(_in char*& value, _in char*& caption, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback)(_in char*& value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback)(_in char*& value);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CUniqueValueMatchSymbolThemeProxy : public EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme
				{
				private:
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback;
				public:
					CUniqueValueMatchSymbolThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CUniqueValueMatchSymbolTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CUniqueValueMatchSymbolThemeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::fromXmlElement(element);
					}
					virtual EVString getFieldString() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getFieldString();
					}
					virtual void setFieldString(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback(field_Char);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setFieldString(field);
					}
					virtual EVString getSubCaption(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getSubCaption(index);
					}
					virtual void setSubCaption(_in ev_uint32 index, _in const EVString& subCaption)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* subCaption_Char = subCaption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback(index, subCaption_Char);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(_in const EVString& value) const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback(value_Char);
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getSymbol(value);
					}
					virtual void addValue(_in const EVString& value, _in const EVString& caption, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback(value_Char, caption_Char, symbol);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::addValue(value, caption, symbol);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback();
						}
						else
							return this->CUniqueValueMatchSymbolTheme::removeAll();
					}
					virtual ev_uint32 getValueCount() const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getValueCount();
					}
					virtual EVString getValue(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::getValue(index);
					}
					virtual ev_bool containsValue(_in const EVString& value) const
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback(value_Char);
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::containsValue(value);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->CUniqueValueMatchSymbolTheme::equals(theme);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::fromStream(stream);
					}
					virtual void setSymbol(_in const EVString& value, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback(value_Char, symbol);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::setSymbol(value, symbol);
					}
					virtual void removeValue(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback(value_Char);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::removeValue(value);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->CUniqueValueMatchSymbolTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(CUniqueValueMatchSymbolThemeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getType_EVThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getCaption();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCaption();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCaption_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setCaption(caption1);
					else
						ptrNativeObject->setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCaption_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::useDefaultSymbol();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_useDefaultSymbol_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::useDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
					else
						ptrNativeObject->setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setUseDefaultSymbol_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getDefaultSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
					else
						ptrNativeObject->setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getDefaultCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDefaultCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setDefaultCaption_void_EVString(void *pObjectXXXX, _in const char* defaultCaption )
				{
					EarthView::World::Core::ev_string defaultCaption1 = defaultCaption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->setDefaultCaption(defaultCaption1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getFieldString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getFieldString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getFieldString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setFieldString(field1);
					else
						ptrNativeObject->setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setFieldString_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSubCaption(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSubCaption(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSubCaption_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSubCaption(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption1);
					else
						ptrNativeObject->setSubCaption(index, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSubCaption_void_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::setSubCaption(index, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSymbol(value1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(value1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getSymbol(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getSymbol_ISymbol_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_ev_int32_ISymbol(void *pObjectXXXX, _in const ev_int32 index, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->setSymbol(index, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol(void *pObjectXXXX, _in const char* value, _in const char* caption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::addValue(value1, caption1, symbol);
					else
						ptrNativeObject->addValue(value1, caption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_addValue_void_EVString_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in const char* value, _in const char* caption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::addValue(value1, caption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_ev_int32(void *pObjectXXXX, _in const ev_int32 index )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->removeValue(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValueCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getValueCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValueCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValueCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValue(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getValue(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getValue_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::getValue(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::containsValue(value1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->containsValue(value1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_containsValue_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					const EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::containsValue(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_getCurrentStyle_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCurrentStyle();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setCurrentStyle_void_EVString(void *pObjectXXXX, _in const char* cStyle )
				{
					EarthView::World::Core::ev_string cStyle1 = cStyle;
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->setCurrentStyle(cStyle1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					if (dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_setSymbol_void_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_removeValue_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					CUniqueValueMatchSymbolThemeProxy* ptr = dynamic_cast<CUniqueValueMatchSymbolThemeProxy*>((EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CUniqueValueMatchSymbolTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
