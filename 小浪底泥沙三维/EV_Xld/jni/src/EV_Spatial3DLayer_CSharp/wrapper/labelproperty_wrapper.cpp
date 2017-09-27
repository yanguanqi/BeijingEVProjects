/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/labelproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback)(_in ev_bool bVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback)(_in ev_real64 dMinScale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback)(_in ev_real64 dMaxScale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback)(_in ev_bool bOnTop);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback)(_in ev_bool bParallel);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback)(_in ev_bool bHorizontal);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback)(_in ev_bool bIn);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback)(_in ev_bool fraction);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback)(_in char*& field);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelProperty*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CLayer3DLabelPropertyProxy : public EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty
				{
				private:
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback;
				public:
					CLayer3DLabelPropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayer3DLabelProperty(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLayer3DLabelPropertyProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream(EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::isVisible();
					}
					virtual void setVisible(_in ev_bool bVisible)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback(bVisible);
						}
						else
							return this->CLayer3DLabelProperty::setVisible(bVisible);
					}
					virtual void setTextSymbol(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLayer3DLabelProperty::setTextSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getTextSymbol();
					}
					virtual void setField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayer3DLabelProperty::setField(field);
					}
					virtual EVString getField() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getField();
					}
					virtual EarthView::World::Spatial::Display::ILabelProperty* clone() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelProperty* returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLayer3DLabelProperty::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayer3DLabelProperty::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLayer3DLabelProperty::fromStream(stream);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CLayer3DLabelProperty::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 dMinScale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback(dMinScale);
						}
						else
							return this->CLayer3DLabelProperty::setMinScale(dMinScale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 dMaxScale)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback(dMaxScale);
						}
						else
							return this->CLayer3DLabelProperty::setMaxScale(dMaxScale);
					}
					virtual ev_bool isOnTopOfFeature() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::isOnTopOfFeature();
					}
					virtual void setOnTopOfFeature(_in ev_bool bOnTop)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback(bOnTop);
						}
						else
							return this->CLayer3DLabelProperty::setOnTopOfFeature(bOnTop);
					}
					virtual ev_bool isParallelToLineAlways() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::isParallelToLineAlways();
					}
					virtual void setParallelToLineAlways(_in ev_bool bParallel)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback(bParallel);
						}
						else
							return this->CLayer3DLabelProperty::setParallelToLineAlways(bParallel);
					}
					virtual ev_bool isHorizontalAlways() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::isHorizontalAlways();
					}
					virtual void setHorizontalAlways(_in ev_bool bHorizontal)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback(bHorizontal);
						}
						else
							return this->CLayer3DLabelProperty::setHorizontalAlways(bHorizontal);
					}
					virtual ev_bool isInPolygon() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::isInPolygon();
					}
					virtual void setInPolygon(_in ev_bool bIn)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback(bIn);
						}
						else
							return this->CLayer3DLabelProperty::setInPolygon(bIn);
					}
					virtual EarthView::World::Spatial::Display::EVFontAndAxisRelationType getRelationOfFontAndAxis() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVFontAndAxisRelationType returnValue = (EarthView::World::Spatial::Display::EVFontAndAxisRelationType)m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getRelationOfFontAndAxis();
					}
					virtual void setRelationOfFontAndAxis(_in EarthView::World::Spatial::Display::EVFontAndAxisRelationType type)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback((int)type);
						}
						else
							return this->CLayer3DLabelProperty::setRelationOfFontAndAxis(type);
					}
					virtual void setFractionLabel(_in ev_bool fraction)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback(fraction);
						}
						else
							return this->CLayer3DLabelProperty::setFractionLabel(fraction);
					}
					virtual ev_bool getIsFractionLabel() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getIsFractionLabel();
					}
					virtual void setNumeratorField(_in const EVString& field)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* field_Char = field.makeBuffer();
							m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback(field_Char);
						}
						else
							return this->CLayer3DLabelProperty::setNumeratorField(field);
					}
					virtual EVString getNumeratorField() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayer3DLabelProperty::getNumeratorField();
					}
				};
				REGISTER_FACTORY_CLASS(CLayer3DLabelPropertyProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setVisible(bVisible);
					else
						ptrNativeObject->setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bVisible )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setVisible(bVisible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setTextSymbol(pSymbol);
					else
						ptrNativeObject->setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setTextSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setField(field1);
					else
						ptrNativeObject->setField(field1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setField_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* field )
				{
					EarthView::World::Core::ev_string field1 = field;
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::setField(field1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::getField();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getField();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getField_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::getField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setLineLabel_void_ev_bool(void *pObjectXXXX, _in ev_bool bLineLabel )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->setLineLabel(bLineLabel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getLineLabel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLineLabel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setLabelShadowEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool hasShadow )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->setLabelShadowEnabled(hasShadow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getLabelShadowEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLabelShadowEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setAntiAliasEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isAntiAlias )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->setAntiAliasEnabled(isAntiAlias);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getAntiAliasEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAntiAliasEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOverlapCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->setOverlapCheckEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getOverlapCheckEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOverlapCheckEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelProperty*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_clone_ILabelProperty_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelProperty* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					if (dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isOnTopOfFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setOnTopOfFeature_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isParallelToLineAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setParallelToLineAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isHorizontalAlways_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setHorizontalAlways_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_isInPolygon_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setInPolygon_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getRelationOfFontAndAxis_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setRelationOfFontAndAxis_void_EVFontAndAxisRelationType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setFractionLabel_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getIsFractionLabel_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_setNumeratorField_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString_Callback* pCallback )
				{
					CLayer3DLabelPropertyProxy* ptr = dynamic_cast<CLayer3DLabelPropertyProxy*>((EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayer3DLabelProperty_getNumeratorField_EVString(pCallback);
					}
				}
			}
		}
	}
}
