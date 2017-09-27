/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/statistics3dtheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback)(_in char*& field, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback)(_in char*& field);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback)(_in char*& field);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback)(_in char*& field, _in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback)(_in int type);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback)(_in int policy);
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback)(_in char*& field);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CStatistics3DThemeProxy : public EarthView::World::Spatial::Theme::CStatistics3DTheme
				{
				private:
					EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback;
				public:
					CStatistics3DThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CStatistics3DTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CStatistics3DThemeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void(EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32(EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32(EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32(EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType(EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType(EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy(EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy(EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme(EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getType();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::clone();
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CStatistics3DTheme::fromXmlElement(element);
					}
					virtual void addField(_in const EVString& field, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback(field_Char, symbol);
						}
						else
							return this->CStatistics3DTheme::addField(field, symbol);
					}
					virtual void deleteField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback(field_Char);
						}
						else
							return this->CStatistics3DTheme::deleteField(field);
					}
					virtual void deleteAllField()
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback();
						}
						else
							return this->CStatistics3DTheme::deleteAllField();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getFieldCount();
					}
					virtual EVString getFieldName(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getFieldName(index);
					}
					virtual void moveField(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->CStatistics3DTheme::moveField(oldIndex, newIndex);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getBackground() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getBackground();
					}
					virtual void setBackground(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback(symbol);
						}
						else
							return this->CStatistics3DTheme::setBackground(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFieldSymbol(_in const EVString& field) const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback(field_Char);
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getFieldSymbol(field);
					}
					virtual void setFieldSymbol(_in const EVString& field, _in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback(field_Char, symbol);
						}
						else
							return this->CStatistics3DTheme::setFieldSymbol(field, symbol);
					}
					virtual EarthView::World::Spatial::Theme::EVStatisticsThemeType getStatisticsType() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVStatisticsThemeType returnValue = (EarthView::World::Spatial::Theme::EVStatisticsThemeType)m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getStatisticsType();
					}
					virtual void setStatisticsType(_in EarthView::World::Spatial::Theme::EVStatisticsThemeType type)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback((int)type);
						}
						else
							return this->CStatistics3DTheme::setStatisticsType(type);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getStatisticsSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getStatisticsSymbol();
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::equals(theme);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CStatistics3DTheme::setDefaultSymbol(symbol);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->CStatistics3DTheme::setUseDefaultSymbol(usable);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStatistics3DTheme::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStatistics3DTheme::fromStream(stream);
					}
					virtual EarthView::World::Spatial::Theme::EVPieSizePolicy getPieSizePolicy() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVPieSizePolicy returnValue = (EarthView::World::Spatial::Theme::EVPieSizePolicy)m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getPieSizePolicy();
					}
					virtual void setPieSizePolicy(_in EarthView::World::Spatial::Theme::EVPieSizePolicy policy)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback((int)policy);
						}
						else
							return this->CStatistics3DTheme::setPieSizePolicy(policy);
					}
					virtual EVString getProportionField() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getProportionField();
					}
					virtual void setProportionField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback(field_Char);
						}
						else
							return this->CStatistics3DTheme::setProportionField(field);
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->CStatistics3DTheme::setCaption(caption);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->CStatistics3DTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->CStatistics3DTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(CStatistics3DThemeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getType_EVThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol(void *pObjectXXXX, _in const char* field, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::addField(field1, symbol);
					else
						ptrNativeObject->addField(field1, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_addField_void_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in const char* field, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::addField(field1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteField(field1);
					else
						ptrNativeObject->deleteField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteField(field1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteField_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->deleteField(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteAllField();
					else
						ptrNativeObject->deleteAllField();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_deleteAllField_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::deleteAllField();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldName(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFieldName(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldName_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::moveField(oldIndex, newIndex);
					else
						ptrNativeObject->moveField(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_moveField_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::moveField(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getBackground();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getBackground_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setBackground(symbol);
					else
						ptrNativeObject->setBackground(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setBackground_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setBackground(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldSymbol(field1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFieldSymbol(field1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getFieldSymbol(field1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFieldSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol(void *pObjectXXXX, _in const char* field, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setFieldSymbol(field1, symbol);
					else
						ptrNativeObject->setFieldSymbol(field1, symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in const char* field, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setFieldSymbol(field1, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldSymbol_void_ev_uint32_ISymbol(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->setFieldSymbol(index, symbol);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVStatisticsThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVStatisticsThemeType objXXXX = ptrNativeObject->getStatisticsType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsType_EVStatisticsThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVStatisticsThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setStatisticsType((EarthView::World::Spatial::Theme::EVStatisticsThemeType)type);
					else
						ptrNativeObject->setStatisticsType((EarthView::World::Spatial::Theme::EVStatisticsThemeType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setStatisticsType_void_EVStatisticsThemeType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setStatisticsType((EarthView::World::Spatial::Theme::EVStatisticsThemeType)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getStatisticsSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getStatisticsSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getStatisticsSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getAdaptFieldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAdaptFieldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setAdaptFieldName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->setAdaptFieldName(name1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getSymbolSizePolicy_EVStatistics3DSymbolSizePolicy(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy objXXXX = ptrNativeObject->getSymbolSizePolicy();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setSymbolSizePolicy_void_EVStatistics3DSymbolSizePolicy(void *pObjectXXXX, _in int policy )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->setSymbolSizePolicy((EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy)policy);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getDefaultSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getDefaultSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::getDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setDefaultSymbol(symbol);
					else
						ptrNativeObject->setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setDefaultSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::useDefaultSymbol();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_useDefaultSymbol_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::useDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setUseDefaultSymbol(usable);
					else
						ptrNativeObject->setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setUseDefaultSymbol_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_getFieldValuePolicy_EVStatisticsFieldValuePolicy(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy objXXXX = ptrNativeObject->getFieldValuePolicy();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_setFieldValuePolicy_void_EVStatisticsFieldValuePolicy(void *pObjectXXXX, _in int policy )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->setFieldValuePolicy((EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy)policy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CStatistics3DTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CStatistics3DTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CStatistics3DTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getPieSizePolicy_EVPieSizePolicy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setPieSizePolicy_void_EVPieSizePolicy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getProportionField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setProportionField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					CStatistics3DThemeProxy* ptr = dynamic_cast<CStatistics3DThemeProxy*>((EarthView::World::Spatial::Theme::CStatistics3DTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CStatistics3DTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
