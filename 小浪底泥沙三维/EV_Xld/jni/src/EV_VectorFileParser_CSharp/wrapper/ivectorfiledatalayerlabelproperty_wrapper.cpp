/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfiledatalayerlabelproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback)(_in ev_bool bVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback)(_in ev_real64 dMinScale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback)(_in ev_real64 dMaxScale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback)(_in ev_bool bOnTop);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback)(_in ev_bool bParallel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback)(_in ev_bool bHorizontal);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback)(_in ev_bool bIn);
				typedef int  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback)(_in ev_bool fraction);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IVectorFileDataLayerLabelPropertyProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty
				{
				private:
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback;
				public:
					IVectorFileDataLayerLabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileDataLayerLabelProperty(pList)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::isVisible();
					}
					virtual void setVisible(_in ev_bool bVisible)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback(bVisible);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setVisible(bVisible);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 dMinScale)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback(dMinScale);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 dMaxScale)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback(dMaxScale);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
					}
					virtual void setOnTopOfFeature(_in ev_bool bOnTop)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback(bOnTop);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
					}
					virtual void setParallelToLineAlways(_in ev_bool bParallel)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback(bParallel);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::isHorizontalAlways();
					}
					virtual void setHorizontalAlways(_in ev_bool bHorizontal)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback(bHorizontal);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
					}
					virtual ev_bool isInPolygon() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::isInPolygon();
					}
					virtual void setInPolygon(_in ev_bool bIn)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback(bIn);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType returnValue = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType)m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
					}
					virtual void setRelationOfFontAndAxis(_in EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback((int)type);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis(type);
					}
					virtual void setTextSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getTextSymbol();
					}
					virtual void setField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback(field_Char);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setField(field);
					}
					virtual EVString getField() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getField();
					}
					virtual void setFractionLabel(_in ev_bool fraction)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback(fraction);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getIsFractionLabel();
					}
					virtual void setNumeratorField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback(field_Char);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::setNumeratorField(field);
					}
					virtual EVString getNumeratorField() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::getNumeratorField();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerLabelProperty::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IVectorFileDataLayerLabelProperty::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IVectorFileDataLayerLabelPropertyProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setVisible(bVisible);
					else
						ptrNativeObject->setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
					else
						ptrNativeObject->setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
					else
						ptrNativeObject->setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isOnTopOfFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isOnTopOfFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isOnTopOfFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
					else
						ptrNativeObject->setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setOnTopOfFeature_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isParallelToLineAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isParallelToLineAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isParallelToLineAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
					else
						ptrNativeObject->setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setParallelToLineAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isHorizontalAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isHorizontalAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isHorizontalAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isHorizontalAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
					else
						ptrNativeObject->setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setHorizontalAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isInPolygon();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isInPolygon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_isInPolygon_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::isInPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
					else
						ptrNativeObject->setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setInPolygon_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getRelationOfFontAndAxis();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
					else
						ptrNativeObject->setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
					else
						ptrNativeObject->setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setField(field1);
					else
						ptrNativeObject->setField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
					else
						ptrNativeObject->setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setFractionLabel_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getIsFractionLabel();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getIsFractionLabel();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getIsFractionLabel_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getIsFractionLabel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setNumeratorField(field1);
					else
						ptrNativeObject->setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_setNumeratorField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getNumeratorField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getNumeratorField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_getNumeratorField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::getNumeratorField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_clone_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream_Callback* pCallback )
				{
					IVectorFileDataLayerLabelPropertyProxy* ptr = dynamic_cast<IVectorFileDataLayerLabelPropertyProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerLabelProperty_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
