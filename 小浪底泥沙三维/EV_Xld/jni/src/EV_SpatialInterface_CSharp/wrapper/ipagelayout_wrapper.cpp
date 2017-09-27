/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipagelayout.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Carto::IPage*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback)(_in EarthView::World::Spatial::Carto::IPage* pPage);
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback)(_in int elementType);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* pElement);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback)(_in ev_int32 nIndex, _in EarthView::World::Spatial::Carto::IElement* pElement);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 srcIndex, _in ev_int32 destIndex);
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback)(_in ev_int32 nIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* pElement);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IPageLayout*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IPageLayoutProxy : public EarthView::World::Spatial::Carto::IPageLayout
				{
				private:
					EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback;
				public:
					IPageLayoutProxy(EarthView::World::Core::CNameValuePairList *pList) : IPageLayout(pList)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IPageLayoutProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString(EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString(EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage(EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage(EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType(EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement(EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement(EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32(EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32(EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement(EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement(EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32(EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void(EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void(EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool(EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement(EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void(EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap(EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_reset_void(EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_next_IElement(EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool(EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool(EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void(EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_draw_void(EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void(EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout(EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString(EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IPageLayout::setName(name);
					}
					virtual EarthView::World::Spatial::Carto::IPage* getPage() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IPage* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getPage();
					}
					virtual void setPage(_in EarthView::World::Spatial::Carto::IPage* pPage)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback(pPage);
						}
						else
							return this->IPageLayout::setPage(pPage);
					}
					virtual EarthView::World::Spatial::Carto::IElement* createElement(_in EarthView::World::Spatial::Carto::EVElementType elementType)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback((int)elementType);
							return returnValue;
						}
						else
							return this->IPageLayout::createElement(elementType);
					}
					virtual void addElement(_in EarthView::World::Spatial::Carto::IElement* pElement)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback(pElement);
						}
						else
							return this->IPageLayout::addElement(pElement);
					}
					virtual void insertElement(_in ev_int32 nIndex, _in EarthView::World::Spatial::Carto::IElement* pElement)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback(nIndex, pElement);
						}
						else
							return this->IPageLayout::insertElement(nIndex, pElement);
					}
					virtual ev_int32 getElementCount() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getElementCount();
					}
					virtual ev_int32 getSelectedElementCount() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getSelectedElementCount();
					}
					virtual void removeElement(_in EarthView::World::Spatial::Carto::IElement* element)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback(element);
						}
						else
							return this->IPageLayout::removeElement(element);
					}
					virtual ev_bool replaceElement(_in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback(pOldElement, pNewElement);
							return returnValue;
						}
						else
							return this->IPageLayout::replaceElement(pOldElement, pNewElement);
					}
					virtual ev_bool exchangeElement(_in ev_int32 srcIndex, _in ev_int32 destIndex)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback(srcIndex, destIndex);
							return returnValue;
						}
						else
							return this->IPageLayout::exchangeElement(srcIndex, destIndex);
					}
					virtual EarthView::World::Spatial::Carto::IElement* getElement(_in ev_int32 nIndex)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback(nIndex);
							return returnValue;
						}
						else
							return this->IPageLayout::getElement(nIndex);
					}
					virtual void removeSelectedElement()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback();
						}
						else
							return this->IPageLayout::removeSelectedElement();
					}
					virtual void removeAllElement()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback();
						}
						else
							return this->IPageLayout::removeAllElement();
					}
					virtual ev_bool isExistMapFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::isExistMapFrame();
					}
					virtual ev_bool isExist(_in EarthView::World::Spatial::Carto::IElement* pElement) const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback(pElement);
							return returnValue;
						}
						else
							return this->IPageLayout::isExist(pElement);
					}
					virtual void removeMapFrame()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback();
						}
						else
							return this->IPageLayout::removeMapFrame();
					}
					virtual EarthView::World::Display::IBitmap* getLayoutImage()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getLayoutImage();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback();
						}
						else
							return this->IPageLayout::reset();
					}
					virtual EarthView::World::Spatial::Carto::IElement* next()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::next();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getInterestEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::getInterestEnvelope();
					}
					virtual void setInterestEnvelope(_in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IPageLayout::setInterestEnvelope(pEnvelope);
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->IPageLayout::setActive(bActive);
					}
					virtual void updateEnvelop()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback();
						}
						else
							return this->IPageLayout::updateEnvelop();
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IPageLayout::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback();
						}
						else
							return this->IPageLayout::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback();
						}
						else
							return this->IPageLayout::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IPageLayout* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IPageLayout* returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IPageLayout::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IPageLayout::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IPageLayout::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IPageLayout::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IPageLayoutProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPage*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getPage();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPage* objXXXX = ptrNativeObject->getPage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPage*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getPage_IPage_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getPage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPage* pPage )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setPage(pPage);
					else
						ptrNativeObject->setPage(pPage);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setPage_void_IPage_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPage* pPage )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setPage(pPage);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType(void *pObjectXXXX, _in int elementType )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::createElement((EarthView::World::Spatial::Carto::EVElementType)elementType);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->createElement((EarthView::World::Spatial::Carto::EVElementType)elementType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_createElement_IElement_EVElementType_NoVirtual(void *pObjectXXXX, _in int elementType )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::createElement((EarthView::World::Spatial::Carto::EVElementType)elementType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::addElement(pElement);
					else
						ptrNativeObject->addElement(pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_addElement_void_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::addElement(pElement);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement(void *pObjectXXXX, _in ev_int32 nIndex, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::insertElement(nIndex, pElement);
					else
						ptrNativeObject->insertElement(nIndex, pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_insertElement_void_ev_int32_IElement_NoVirtual(void *pObjectXXXX, _in ev_int32 nIndex, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::insertElement(nIndex, pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getElementCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getElementCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElementCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getElementCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getSelectedElementCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSelectedElementCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getSelectedElementCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getSelectedElementCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* element )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeElement(element);
					else
						ptrNativeObject->removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeElement_void_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* element )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_replaceElement_ev_bool_IElement_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::replaceElement(pOldElement, pNewElement);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::exchangeElement(srcIndex, destIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getElement(nIndex);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->getElement(nIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getElement_IElement_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getElement(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeSelectedElement();
					else
						ptrNativeObject->removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeSelectedElement_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeAllElement();
					else
						ptrNativeObject->removeAllElement();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeAllElement_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeAllElement();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isExistMapFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExistMapFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExistMapFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isExistMapFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isExist(pElement);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExist(pElement);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isExist_ev_bool_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pElement )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isExist(pElement);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeMapFrame();
					else
						ptrNativeObject->removeMapFrame();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_removeMapFrame_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::removeMapFrame();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getLayoutImage();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getLayoutImage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getLayoutImage_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getLayoutImage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_reset_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_reset_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::reset();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_next_IElement(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_next_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_next_IElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_next_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_next_IElement_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getInterestEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getInterestEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_getInterestEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::getInterestEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setInterestEnvelope(pEnvelope);
					else
						ptrNativeObject->setInterestEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setInterestEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setInterestEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setActive(bActive);
					else
						ptrNativeObject->setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::updateEnvelop();
					else
						ptrNativeObject->updateEnvelop();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_updateEnvelop_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::updateEnvelop();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_draw_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_clone_IPageLayout_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IPageLayout_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					if (dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_Callback* pCallback )
				{
					IPageLayoutProxy* ptr = dynamic_cast<IPageLayoutProxy*>((EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IPageLayout_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::IPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::IPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IPageLayout::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
