/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irangetheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback)(_in ev_real64 value, _in char*& subCaption);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback)(_in ev_real64 value);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback)(_in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback)(_in ev_real64 value, _in char*& subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback)(_in ev_real64 minValue);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IRangeThemeProxy : public EarthView::World::Spatial::Theme::IRangeTheme
				{
				private:
					EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback;
				public:
					IRangeThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : IRangeTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString(EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString(EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString(EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32(EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol(EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32(EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void(EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32(EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32(EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64(EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString(EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme(EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EVString getFieldString() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getFieldString();
					}
					virtual void setFieldString(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback(field_Char);
						}
						else
							return this->IRangeTheme::setFieldString(field);
					}
					virtual EVString getSubCaption(_in ev_real64 value) const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback(value);
							return returnValue;
						}
						else
							return this->IRangeTheme::getSubCaption(value);
					}
					virtual void setSubCaption(_in ev_real64 value, _in const EVString& subCaption)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* subCaption_Char = subCaption.makeBuffer();
							m_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback(value, subCaption_Char);
						}
						else
							return this->IRangeTheme::setSubCaption(value, subCaption);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(_in ev_real64 value) const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback(value);
							return returnValue;
						}
						else
							return this->IRangeTheme::getSymbol(value);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IRangeTheme::getSymbol(index);
					}
					virtual void setSymbol(_in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback(value, symbol);
						}
						else
							return this->IRangeTheme::setSymbol(value, symbol);
					}
					virtual void addBreak(_in ev_real64 value, _in const EVString& subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* subCaption_Char = subCaption.makeBuffer();
							m_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback(value, subCaption_Char, symbol);
						}
						else
							return this->IRangeTheme::addBreak(value, subCaption, symbol);
					}
					virtual void removeBreak(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback(value);
						}
						else
							return this->IRangeTheme::removeBreak(value);
					}
					virtual void removeBreak(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback(index);
						}
						else
							return this->IRangeTheme::removeBreak(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback();
						}
						else
							return this->IRangeTheme::removeAll();
					}
					virtual ev_real64 getBreakValue(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IRangeTheme::getBreakValue(index);
					}
					virtual ev_uint32 getBreakCount() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getBreakCount();
					}
					virtual ev_real64 getMaxValue() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getMaxValue();
					}
					virtual ev_real64 getMinValue() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getMinValue();
					}
					virtual void setMinValue(_in ev_real64 minValue)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback(minValue);
						}
						else
							return this->IRangeTheme::setMinValue(minValue);
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->IRangeTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->IRangeTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->IRangeTheme::setDefaultSymbol(symbol);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->IRangeTheme::equals(theme);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRangeTheme::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IRangeTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IRangeTheme::fromXmlElement(element);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->IRangeTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->IRangeTheme::onAfterQuery(fs, dst);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRangeTheme::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IRangeThemeProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getFieldString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getFieldString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getFieldString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setFieldString(field1);
					else
						ptrNativeObject->setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setFieldString_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setFieldString(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSubCaption(value);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSubCaption(value);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSubCaption_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSubCaption(value);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setSubCaption(value, subCaption1);
					else
						ptrNativeObject->setSubCaption(value, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSubCaption_void_ev_real64_EVString_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setSubCaption(value, subCaption1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(value);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(value);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getSymbol_ISymbol_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol(void *pObjectXXXX, _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setSymbol(value, symbol);
					else
						ptrNativeObject->setSymbol(value, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setSymbol_void_ev_real64_ISymbol_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setSymbol(value, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::addBreak(value, subCaption1, symbol);
					else
						ptrNativeObject->addBreak(value, subCaption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_addBreak_void_ev_real64_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in ev_real64 value, _in const char* subCaption, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::addBreak(value, subCaption1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(value);
					else
						ptrNativeObject->removeBreak(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(index);
					else
						ptrNativeObject->removeBreak(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeBreak_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeBreak(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getBreakValue(index);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getBreakValue(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakValue_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getBreakValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getBreakCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getBreakCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getBreakCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getBreakCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getMaxValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMaxValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getMaxValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getMinValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_getMinValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::getMinValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 minValue )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					if (dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setMinValue(minValue);
					else
						ptrNativeObject->setMinValue(minValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_IRangeTheme_setMinValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 minValue )
				{
					EarthView::World::Spatial::Theme::IRangeTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::IRangeTheme::setMinValue(minValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					IRangeThemeProxy* ptr = dynamic_cast<IRangeThemeProxy*>((EarthView::World::Spatial::Theme::IRangeTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_IRangeTheme_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
