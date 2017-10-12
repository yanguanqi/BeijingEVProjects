/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/layerlabelproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Display
			{
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback)(_in void* flag);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback)(_in ev_bool b);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback)(_in ev_bool bVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback)(_in ev_real64 dMinScale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback)(_in ev_real64 dMaxScale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback)(_in ev_bool bOnTop);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback)(_in ev_bool bParallel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback)(_in ev_bool bHorizontal);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback)(_in ev_bool bIn);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback)(_in ev_bool fraction);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CLayerLabelPropertyProxy : public EarthView::World::Spatial2D::Display::CLayerLabelProperty
				{
				private:
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback;
				public:
					CLayerLabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayerLabelProperty(pList)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLayerLabelPropertyProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString(EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString(EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty(EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream(EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream(EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isVisible();
					}
					virtual void setVisible(_in ev_bool bVisible)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback(bVisible);
						}
						else
							return this->CLayerLabelProperty::setVisible(bVisible);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CLayerLabelProperty::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 dMinScale)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback(dMinScale);
						}
						else
							return this->CLayerLabelProperty::setMinScale(dMinScale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 dMaxScale)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback(dMaxScale);
						}
						else
							return this->CLayerLabelProperty::setMaxScale(dMaxScale);
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isOnTopOfFeature();
					}
					virtual void setOnTopOfFeature(_in ev_bool bOnTop)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback(bOnTop);
						}
						else
							return this->CLayerLabelProperty::setOnTopOfFeature(bOnTop);
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isParallelToLineAlways();
					}
					virtual void setParallelToLineAlways(_in ev_bool bParallel)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback(bParallel);
						}
						else
							return this->CLayerLabelProperty::setParallelToLineAlways(bParallel);
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isHorizontalAlways();
					}
					virtual void setHorizontalAlways(_in ev_bool bHorizontal)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback(bHorizontal);
						}
						else
							return this->CLayerLabelProperty::setHorizontalAlways(bHorizontal);
					}
					virtual ev_bool isInPolygon() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isInPolygon();
					}
					virtual void setInPolygon(_in ev_bool bIn)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback(bIn);
						}
						else
							return this->CLayerLabelProperty::setInPolygon(bIn);
					}
					virtual EarthView::World::Spatial::Display::EVLabelDuplicateFlag getDuplicateFlag() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLabelDuplicateFlag returnValue = *(EarthView::World::Spatial::Display::EVLabelDuplicateFlag*)m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getDuplicateFlag();
					}
					virtual void setDuplicateFlag(_in EarthView::World::Spatial::Display::EVLabelDuplicateFlag flag)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback(&flag);
						}
						else
							return this->CLayerLabelProperty::setDuplicateFlag(flag);
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType returnValue = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType)m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getRelationOfFontAndAxis();
					}
					virtual void setRelationOfFontAndAxis(_in EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback((int)type);
						}
						else
							return this->CLayerLabelProperty::setRelationOfFontAndAxis(type);
					}
					virtual void setFeatureWeightEnable(_in ev_bool b)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback(b);
						}
						else
							return this->CLayerLabelProperty::setFeatureWeightEnable(b);
					}
					virtual ev_bool getFeatureWeightEnable()
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getFeatureWeightEnable();
					}
					virtual void setTextSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLayerLabelProperty::setTextSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getTextSymbol();
					}
					virtual void setField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayerLabelProperty::setField(field);
					}
					virtual EVString getField() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getField();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLayerLabelProperty::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayerLabelProperty::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayerLabelProperty::fromStream(stream);
					}
					virtual void setFractionLabel(_in ev_bool fraction)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback(fraction);
						}
						else
							return this->CLayerLabelProperty::setFractionLabel(fraction);
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getIsFractionLabel();
					}
					virtual void setNumeratorField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayerLabelProperty::setNumeratorField(field);
					}
					virtual EVString getNumeratorField() const
					{
						if(m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getNumeratorField();
					}
				};
				REGISTER_FACTORY_CLASS(CLayerLabelPropertyProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setName_void_EVString(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setName(strName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setVisible(bVisible);
					else
						ptrNativeObject->setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setMinScale(dMinScale);
					else
						ptrNativeObject->setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setMaxScale(dMaxScale);
					else
						ptrNativeObject->setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isOnTopOfFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isOnTopOfFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isOnTopOfFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isOnTopOfFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setOnTopOfFeature(bOnTop);
					else
						ptrNativeObject->setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getPointLabelPositionPriority_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPointLabelPositionPriority();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setPointLabelPositionPriority_void_EVString(void *pObjectXXXX, _in char* positionPriority )
				{
					EarthView::World::Core::ev_string positionPriority1 = positionPriority;
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setPointLabelPositionPriority(positionPriority1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isParallelToLineAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isParallelToLineAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isParallelToLineAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isParallelToLineAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setParallelToLineAlways(bParallel);
					else
						ptrNativeObject->setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isSegmentLabelLine_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSegmentLabelLine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setSegmentLabelLine_void_ev_bool(void *pObjectXXXX, _in ev_bool bSegmentLabel )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setSegmentLabelLine(bSegmentLabel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isHorizontalAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isHorizontalAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isHorizontalAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isHorizontalAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setHorizontalAlways(bHorizontal);
					else
						ptrNativeObject->setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isInPolygon();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isInPolygon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isInPolygon_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::isInPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setInPolygon(bIn);
					else
						ptrNativeObject->setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setInPolygon_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVLabelDuplicateFlag objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getDuplicateFlag();
						EarthView::World::Spatial::Display::EVLabelDuplicateFlag *pXXXX = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVLabelDuplicateFlag objXXXX = ptrNativeObject->getDuplicateFlag();
						EarthView::World::Spatial::Display::EVLabelDuplicateFlag *pXXXX = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDuplicateFlag_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVLabelDuplicateFlag objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getDuplicateFlag();
					EarthView::World::Spatial::Display::EVLabelDuplicateFlag *pXXXX = new EarthView::World::Spatial::Display::EVLabelDuplicateFlag(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(void *pObjectXXXX, _in void* flag )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setDuplicateFlag(*(EarthView::World::Spatial::Display::EVLabelDuplicateFlag*)flag);
					else
						ptrNativeObject->setDuplicateFlag(*(EarthView::World::Spatial::Display::EVLabelDuplicateFlag*)flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDuplicateFlag_void_EarthView_World_Spatial_Display_EVLabelDuplicateFlag_NoVirtual(void *pObjectXXXX, _in void* flag )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setDuplicateFlag(*(EarthView::World::Spatial::Display::EVLabelDuplicateFlag*)flag);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getRelationOfFontAndAxis();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
					else
						ptrNativeObject->setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setFeatureWeightEnable(b);
					else
						ptrNativeObject->setFeatureWeightEnable(b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFeatureWeightEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setFeatureWeightEnable(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getFeatureWeightEnable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getFeatureWeightEnable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getFeatureWeightEnable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getFeatureWeightEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setTextSymbol(pSymbol);
					else
						ptrNativeObject->setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setField(field1);
					else
						ptrNativeObject->setField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::setField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::getField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_createSubLabelProperty_ILabelProperty(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->createSubLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_addSubLabelProperty_void_ILabelProperty(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelProperty* pLProperty )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->addSubLabelProperty(pLProperty);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_removeSubLabelProperty_void_ILabelProperty(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelProperty* pLProperty )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->removeSubLabelProperty(pLProperty);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getSubLabelPropertyCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSubLabelPropertyCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getSubLabelProperty_ILabelProperty_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->getSubLabelProperty(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isClassify_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isClassify();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setClassify_void_ev_bool(void *pObjectXXXX, _in ev_bool bClassify )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setClassify(bClassify);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_isSubLabelProperty_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSubLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setDisplayFilter_void_EVString(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getDisplayFilter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDisplayFilter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_getLabelConflictBuffer_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getLabelConflictBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_setLabelConflictBuffer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 labelBuffer )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->setLabelConflictBuffer(labelBuffer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_clearSubLabelProperty_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->clearSubLabelProperty();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_clone_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_CLayerLabelProperty_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Display::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::CLayerLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setFractionLabel_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getIsFractionLabel_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_setNumeratorField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Display::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_CLayerLabelProperty_getNumeratorField_EVString(pCallback);
					}
				}
			}
		}
	}
}
