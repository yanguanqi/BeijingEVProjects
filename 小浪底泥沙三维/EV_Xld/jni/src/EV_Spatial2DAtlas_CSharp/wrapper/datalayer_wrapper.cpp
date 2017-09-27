/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/datalayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback)(_in ev_bool bVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback)(_in ev_real64 dMinScale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback)(_in ev_real64 dMaxScale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback)(_in ev_bool bOnTop);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback)(_in ev_bool bParallel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback)(_in ev_bool bHorizontal);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback)(_in ev_bool bIn);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback)(_in ev_bool fraction);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CLayerLabelPropertyProxy : public EarthView::World::Spatial2D::Atlas::CLayerLabelProperty
				{
				private:
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback;
				public:
					CLayerLabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayerLabelProperty(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLayerLabelPropertyProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isVisible();
					}
					virtual void setVisible(_in ev_bool bVisible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback(bVisible);
						}
						else
							return this->CLayerLabelProperty::setVisible(bVisible);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CLayerLabelProperty::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 dMinScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback(dMinScale);
						}
						else
							return this->CLayerLabelProperty::setMinScale(dMinScale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 dMaxScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback(dMaxScale);
						}
						else
							return this->CLayerLabelProperty::setMaxScale(dMaxScale);
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isOnTopOfFeature();
					}
					virtual void setOnTopOfFeature(_in ev_bool bOnTop)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback(bOnTop);
						}
						else
							return this->CLayerLabelProperty::setOnTopOfFeature(bOnTop);
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isParallelToLineAlways();
					}
					virtual void setParallelToLineAlways(_in ev_bool bParallel)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback(bParallel);
						}
						else
							return this->CLayerLabelProperty::setParallelToLineAlways(bParallel);
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isHorizontalAlways();
					}
					virtual void setHorizontalAlways(_in ev_bool bHorizontal)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback(bHorizontal);
						}
						else
							return this->CLayerLabelProperty::setHorizontalAlways(bHorizontal);
					}
					virtual ev_bool isInPolygon() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::isInPolygon();
					}
					virtual void setInPolygon(_in ev_bool bIn)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback(bIn);
						}
						else
							return this->CLayerLabelProperty::setInPolygon(bIn);
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType returnValue = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType)m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getRelationOfFontAndAxis();
					}
					virtual void setRelationOfFontAndAxis(_in EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback((int)type);
						}
						else
							return this->CLayerLabelProperty::setRelationOfFontAndAxis(type);
					}
					virtual void setTextSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLayerLabelProperty::setTextSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getTextSymbol();
					}
					virtual void setField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayerLabelProperty::setField(field);
					}
					virtual EVString getField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getField();
					}
					virtual void setFractionLabel(_in ev_bool fraction)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback(fraction);
						}
						else
							return this->CLayerLabelProperty::setFractionLabel(fraction);
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getIsFractionLabel();
					}
					virtual void setNumeratorField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayerLabelProperty::setNumeratorField(field);
					}
					virtual EVString getNumeratorField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::getNumeratorField();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLayerLabelProperty::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLayerLabelProperty::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayerLabelProperty::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayerLabelProperty::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CLayerLabelPropertyProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setVisible(bVisible);
					else
						ptrNativeObject->setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setMinScale(dMinScale);
					else
						ptrNativeObject->setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setMaxScale(dMaxScale);
					else
						ptrNativeObject->setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isOnTopOfFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isOnTopOfFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isOnTopOfFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isOnTopOfFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setOnTopOfFeature(bOnTop);
					else
						ptrNativeObject->setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setOnTopOfFeature_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isParallelToLineAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isParallelToLineAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isParallelToLineAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isParallelToLineAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setParallelToLineAlways(bParallel);
					else
						ptrNativeObject->setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setParallelToLineAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isHorizontalAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isHorizontalAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isHorizontalAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isHorizontalAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setHorizontalAlways(bHorizontal);
					else
						ptrNativeObject->setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setHorizontalAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isInPolygon();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isInPolygon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_isInPolygon_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::isInPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setInPolygon(bIn);
					else
						ptrNativeObject->setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setInPolygon_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getRelationOfFontAndAxis();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
					else
						ptrNativeObject->setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setTextSymbol(pSymbol);
					else
						ptrNativeObject->setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setField(field1);
					else
						ptrNativeObject->setField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setFractionLabel(fraction);
					else
						ptrNativeObject->setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setFractionLabel_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getIsFractionLabel();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getIsFractionLabel();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getIsFractionLabel_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getIsFractionLabel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setNumeratorField(field1);
					else
						ptrNativeObject->setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_setNumeratorField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getNumeratorField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getNumeratorField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_getNumeratorField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::getNumeratorField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_clone_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback )
				{
					CLayerLabelPropertyProxy* ptr = dynamic_cast<CLayerLabelPropertyProxy*>((EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CLayerLabelProperty_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CLayerLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback)(_in char*& fieldName);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback)(_in ev_bool show);
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback)(_in char*& filter);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CDataLayerProxy : public EarthView::World::Spatial2D::Atlas::CDataLayer
				{
				private:
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback;
				public:
					CDataLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataLayer(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CDataLayerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset(EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme(EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme(EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty(EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset(EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource(EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void(EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer(EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString(EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getType();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CDataLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getTransparentValue();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CDataLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CDataLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CDataLayer::setEditing(editing);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CDataLayer::setVisible(visible);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::isValid();
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CDataLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CDataLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 displayMaxScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback(displayMaxScale);
						}
						else
							return this->CDataLayer::setDisplayMaxScale(displayMaxScale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 displayMinScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback(displayMinScale);
						}
						else
							return this->CDataLayer::setDisplayMinScale(displayMinScale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CDataLayer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CDataLayer::draw(display, type);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDataLayer::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CDataLayer::toStream(stream);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CDataLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::toXmlElement();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDataset();
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->CDataLayer::setDataset(ref_dataset);
					}
					virtual EVString getDisplayField() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDisplayField();
					}
					virtual void setDisplayField(_in const EVString& fieldName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback(fieldName_Char);
						}
						else
							return this->CDataLayer::setDisplayField(fieldName);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getTheme();
					}
					virtual void setTheme(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback(theme);
						}
						else
							return this->CDataLayer::setTheme(theme);
					}
					virtual ev_bool isShowTip() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::isShowTip();
					}
					virtual void setShowTip(_in ev_bool show)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback(show);
						}
						else
							return this->CDataLayer::setShowTip(show);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CDataLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback();
						}
						else
							return this->CDataLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getLayerSelection();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getLayerLabelProperty();
					}
					virtual void setDisplayFilter(_in const EVString& filter)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* filter_Char = filter.makeBuffer();
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback(filter_Char);
						}
						else
							return this->CDataLayer::setDisplayFilter(filter);
					}
					virtual EVString getDisplayFilter() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDisplayFilter();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CDataLayer::fromStream(stream);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CDataLayer::setLayerSelection(selection);
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CDataLayer::setCanEdit(can);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDataLayer::toXML();
					}
				};
				REGISTER_FACTORY_CLASS(CDataLayerProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setSelectable(selected);
					else
						ptrNativeObject->setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 displayMaxScale )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayMaxScale(displayMaxScale);
					else
						ptrNativeObject->setDisplayMaxScale(displayMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 displayMaxScale )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayMaxScale(displayMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 displayMinScale )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayMinScale(displayMinScale);
					else
						ptrNativeObject->setDisplayMinScale(displayMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 displayMinScale )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayMinScale(displayMinScale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDataset(ref_dataset);
					else
						ptrNativeObject->setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayField(fieldName1);
					else
						ptrNativeObject->setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayField(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setTheme(theme);
					else
						ptrNativeObject->setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setTheme_void_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setTheme(theme);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isShowTip();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isShowTip();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_isShowTip_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::isShowTip();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setShowTip(show);
					else
						ptrNativeObject->setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setShowTip_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setShowTip(show);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getLayerLabelProperty();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->getLayerLabelProperty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getLayerLabelProperty_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getLayerLabelProperty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayFilter(filter1);
					else
						ptrNativeObject->setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_setDisplayFilter_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::setDisplayFilter(filter1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayFilter();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDisplayFilter();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_getDisplayFilter_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::getDisplayFilter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					if (dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDataLayer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CDataLayer* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDataLayer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString_Callback* pCallback )
				{
					CDataLayerProxy* ptr = dynamic_cast<CDataLayerProxy*>((EarthView::World::Spatial2D::Atlas::CDataLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDataLayer_toXML_EVString(pCallback);
					}
				}
			}
		}
	}
}
