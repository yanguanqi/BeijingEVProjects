/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/rangetheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback)(_in ev_real64 value, _in char*& subCaption);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback)(_in ev_real64 value);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback)(_in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback)(_in ev_real64 value, _in char*& subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback)(_in ev_real64 minValue);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRangeThemeProxy : public EarthView::World::Spatial::Theme::CRangeTheme
				{
				private:
					EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback;
				public:
					CRangeThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CRangeTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRangeThemeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString(EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString(EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString(EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32(EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol(EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32(EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void(EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32(EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32(EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64(EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString(EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme(EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->CRangeTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->CRangeTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CRangeTheme::setDefaultSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRangeTheme::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRangeTheme::fromXmlElement(element);
					}
					virtual EVString getFieldString() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getFieldString();
					}
					virtual void setFieldString(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback(field_Char);
						}
						else
							return this->CRangeTheme::setFieldString(field);
					}
					virtual EVString getSubCaption(_in ev_real64 value) const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback(value);
							return returnValue;
						}
						else
							return this->CRangeTheme::getSubCaption(value);
					}
					virtual void setSubCaption(_in ev_real64 value, _in const EVString& subCaption)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* subCaption_Char = subCaption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback(value, subCaption_Char);
						}
						else
							return this->CRangeTheme::setSubCaption(value, subCaption);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(_in ev_real64 value) const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback(value);
							return returnValue;
						}
						else
							return this->CRangeTheme::getSymbol(value);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CRangeTheme::getSymbol(index);
					}
					virtual void setSymbol(_in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback(value, symbol);
						}
						else
							return this->CRangeTheme::setSymbol(value, symbol);
					}
					virtual void addBreak(_in ev_real64 value, _in const EVString& subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* subCaption_Char = subCaption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback(value, subCaption_Char, symbol);
						}
						else
							return this->CRangeTheme::addBreak(value, subCaption, symbol);
					}
					virtual ev_real64 getBreakValue(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CRangeTheme::getBreakValue(index);
					}
					virtual ev_uint32 getBreakCount() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getBreakCount();
					}
					virtual void removeBreak(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback(value);
						}
						else
							return this->CRangeTheme::removeBreak(value);
					}
					virtual void removeBreak(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback(index);
						}
						else
							return this->CRangeTheme::removeBreak(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback();
						}
						else
							return this->CRangeTheme::removeAll();
					}
					virtual ev_real64 getMaxValue() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getMaxValue();
					}
					virtual ev_real64 getMinValue() const
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRangeTheme::getMinValue();
					}
					virtual void setMinValue(_in ev_real64 minValue)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback(minValue);
						}
						else
							return this->CRangeTheme::setMinValue(minValue);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->CRangeTheme::equals(theme);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRangeTheme::fromStream(stream);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->CRangeTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->CRangeTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(CRangeThemeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getType_EVThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getCaption();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCaption();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getCaption_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setCaption(caption1);
					else
						ptrNativeObject->setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setCaption_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::useDefaultSymbol();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_useDefaultSymbol_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::useDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setUseDefaultSymbol(usable);
					else
						ptrNativeObject->setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setUseDefaultSymbol_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getDefaultSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getDefaultSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setDefaultSymbol(symbol);
					else
						ptrNativeObject->setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setDefaultSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getFieldString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getFieldString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getFieldString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setFieldString(field1);
					else
						ptrNativeObject->setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setFieldString_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSubCaption(value);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSubCaption(value);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSubCaption(value);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setSubCaption(value, subCaption1);
					else
						ptrNativeObject->setSubCaption(value, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_real64_EVString_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setSubCaption(value, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSubCaption_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSubCaption(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSubCaption_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->setSubCaption(index, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSymbol(value);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(value);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSymbol(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSymbol(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getSymbol_ISymbol_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol(void *pObjectXXXX, _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setSymbol(value, symbol);
					else
						ptrNativeObject->setSymbol(value, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setSymbol_void_ev_real64_ISymbol_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setSymbol(value, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::addBreak(value, subCaption1, symbol);
					else
						ptrNativeObject->addBreak(value, subCaption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::addBreak(value, subCaption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setBreakValue_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 breakValue )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->setBreakValue(index, breakValue);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getBreakValue(index);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getBreakValue(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakValue_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getBreakValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getBreakCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getBreakCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getBreakCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getBreakCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeBreak(value);
					else
						ptrNativeObject->removeBreak(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeBreak(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeBreak(index);
					else
						ptrNativeObject->removeBreak(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeBreak_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeBreak(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getMaxValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMaxValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getMaxValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getMinValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_getMinValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::getMinValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 minValue )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setMinValue(minValue);
					else
						ptrNativeObject->setMinValue(minValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setMinValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 minValue )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::setMinValue(minValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_setMaxValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxValue )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->setMaxValue(maxValue);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					if (dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CRangeTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CRangeTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					CRangeThemeProxy* ptr = dynamic_cast<CRangeThemeProxy*>((EarthView::World::Spatial::Theme::CRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
