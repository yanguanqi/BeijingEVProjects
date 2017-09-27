/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilabelproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback)(_in ev_bool bVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback)(_in ev_real64 dMinScale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback)(_in ev_real64 dMaxScale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback)(_in ev_bool bOnTop);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback)(_in ev_bool bParallel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback)(_in ev_bool bHorizontal);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback)(_in ev_bool bIn);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback)(_in ev_bool fraction);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class ILabelPropertyProxy : public EarthView::World::Spatial::Display::ILabelProperty
				{
				private:
					EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback;
				public:
					ILabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : ILabelProperty(pList)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(ILabelPropertyProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64(EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64(EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64(EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64(EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol(EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString(EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString(EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool(EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString(EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString(EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty(EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream(EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream(EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::isVisible();
					}
					virtual void setVisible(_in ev_bool bVisible)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback(bVisible);
						}
						else
							return this->ILabelProperty::setVisible(bVisible);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->ILabelProperty::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 dMinScale)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback(dMinScale);
						}
						else
							return this->ILabelProperty::setMinScale(dMinScale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 dMaxScale)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback(dMaxScale);
						}
						else
							return this->ILabelProperty::setMaxScale(dMaxScale);
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::isOnTopOfFeature();
					}
					virtual void setOnTopOfFeature(_in ev_bool bOnTop)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback(bOnTop);
						}
						else
							return this->ILabelProperty::setOnTopOfFeature(bOnTop);
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::isParallelToLineAlways();
					}
					virtual void setParallelToLineAlways(_in ev_bool bParallel)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback(bParallel);
						}
						else
							return this->ILabelProperty::setParallelToLineAlways(bParallel);
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::isHorizontalAlways();
					}
					virtual void setHorizontalAlways(_in ev_bool bHorizontal)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback(bHorizontal);
						}
						else
							return this->ILabelProperty::setHorizontalAlways(bHorizontal);
					}
					virtual ev_bool isInPolygon() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::isInPolygon();
					}
					virtual void setInPolygon(_in ev_bool bIn)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback(bIn);
						}
						else
							return this->ILabelProperty::setInPolygon(bIn);
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType returnValue = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType)m_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getRelationOfFontAndAxis();
					}
					virtual void setRelationOfFontAndAxis(_in EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback((int)type);
						}
						else
							return this->ILabelProperty::setRelationOfFontAndAxis(type);
					}
					virtual void setTextSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->ILabelProperty::setTextSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getTextSymbol();
					}
					virtual void setField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback(field_Char);
						}
						else
							return this->ILabelProperty::setField(field);
					}
					virtual EVString getField() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getField();
					}
					virtual void setFractionLabel(_in ev_bool fraction)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback(fraction);
						}
						else
							return this->ILabelProperty::setFractionLabel(fraction);
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getIsFractionLabel();
					}
					virtual void setNumeratorField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback(field_Char);
						}
						else
							return this->ILabelProperty::setNumeratorField(field);
					}
					virtual EVString getNumeratorField() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::getNumeratorField();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILabelProperty::toStream(stream);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ILabelProperty::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ILabelProperty::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ILabelProperty::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(ILabelPropertyProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setVisible(bVisible);
					else
						ptrNativeObject->setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setMinScale(dMinScale);
					else
						ptrNativeObject->setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMinScale )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setMinScale(dMinScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setMaxScale(dMaxScale);
					else
						ptrNativeObject->setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dMaxScale )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setMaxScale(dMaxScale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isOnTopOfFeature();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isOnTopOfFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isOnTopOfFeature_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isOnTopOfFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setOnTopOfFeature(bOnTop);
					else
						ptrNativeObject->setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setOnTopOfFeature_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bOnTop )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setOnTopOfFeature(bOnTop);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isParallelToLineAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isParallelToLineAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isParallelToLineAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isParallelToLineAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setParallelToLineAlways(bParallel);
					else
						ptrNativeObject->setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setParallelToLineAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bParallel )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setParallelToLineAlways(bParallel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isHorizontalAlways();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isHorizontalAlways();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isHorizontalAlways_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isHorizontalAlways();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setHorizontalAlways(bHorizontal);
					else
						ptrNativeObject->setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setHorizontalAlways_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bHorizontal )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setHorizontalAlways(bHorizontal);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isInPolygon();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isInPolygon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_isInPolygon_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::isInPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setInPolygon(bIn);
					else
						ptrNativeObject->setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setInPolygon_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIn )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setInPolygon(bIn);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->getRelationOfFontAndAxis();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVFontAndAxisRelationType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getRelationOfFontAndAxis();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
					else
						ptrNativeObject->setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setRelationOfFontAndAxis((EarthView::World::Spatial::Display::EVFontAndAxisRelationType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setTextSymbol(pSymbol);
					else
						ptrNativeObject->setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setField(field1);
					else
						ptrNativeObject->setField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setFractionLabel(fraction);
					else
						ptrNativeObject->setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setFractionLabel_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool fraction )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setFractionLabel(fraction);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getIsFractionLabel();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getIsFractionLabel();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getIsFractionLabel_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getIsFractionLabel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setNumeratorField(field1);
					else
						ptrNativeObject->setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_setNumeratorField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::setNumeratorField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getNumeratorField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getNumeratorField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_getNumeratorField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::getNumeratorField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_clone_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_ILabelProperty_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					if (dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_Callback* pCallback )
				{
					ILabelPropertyProxy* ptr = dynamic_cast<ILabelPropertyProxy*>((EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelProperty_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::ILabelProperty* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ILabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
