/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/pagelayout.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback)(_in char*& name);
				typedef IPage*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback)(_in IPage* pPage);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback)(_in IElement* ref_pElement);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback)(_in ev_int32 nIndex, _in IElement* ref_pElement);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback)(_in IElement* pOldElement, _in IElement* pNewElement);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 srcIndex, _in ev_int32 destIndex);
				typedef IElement*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback)(_in ev_int32 nIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback)(_in IElement* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback)(_in IElement* pElement);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback)();
				typedef IElement*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback)();
				typedef IPageLayout*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CPageLayoutProxy : public EarthView::World::Spatial::Carto::CPageLayout
				{
				private:
					EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback;
				public:
					CPageLayoutProxy(EarthView::World::Core::CNameValuePairList *pList) : CPageLayout(pList)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CPageLayoutProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString(EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString(EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage(EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage(EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement(EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement(EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32(EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32(EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement(EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32(EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement(EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void(EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void(EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool(EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement(EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void(EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap(EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_reset_void(EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_next_IElement(EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void(EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool(EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool(EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_draw_void(EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void(EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout(EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString(EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CPageLayout::setName(name);
					}
					virtual IPage* getPage() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback != NULL && this->isCustomExtend())
						{
							IPage* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getPage();
					}
					virtual void setPage(_in IPage* pPage)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback(pPage);
						}
						else
							return this->CPageLayout::setPage(pPage);
					}
					virtual void addElement(_in IElement* ref_pElement)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback(ref_pElement);
						}
						else
							return this->CPageLayout::addElement(ref_pElement);
					}
					virtual void insertElement(_in ev_int32 nIndex, _in IElement* ref_pElement)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback(nIndex, ref_pElement);
						}
						else
							return this->CPageLayout::insertElement(nIndex, ref_pElement);
					}
					virtual ev_int32 getElementCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getElementCount();
					}
					virtual ev_int32 getSelectedElementCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getSelectedElementCount();
					}
					virtual ev_bool replaceElement(_in IElement* pOldElement, _in IElement* pNewElement)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback(pOldElement, pNewElement);
							return returnValue;
						}
						else
							return this->CPageLayout::replaceElement(pOldElement, pNewElement);
					}
					virtual ev_bool exchangeElement(_in ev_int32 srcIndex, _in ev_int32 destIndex)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback(srcIndex, destIndex);
							return returnValue;
						}
						else
							return this->CPageLayout::exchangeElement(srcIndex, destIndex);
					}
					virtual IElement* getElement(_in ev_int32 nIndex)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							IElement* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback(nIndex);
							return returnValue;
						}
						else
							return this->CPageLayout::getElement(nIndex);
					}
					virtual void removeElement(_in IElement* element)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback(element);
						}
						else
							return this->CPageLayout::removeElement(element);
					}
					virtual void removeSelectedElement()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback();
						}
						else
							return this->CPageLayout::removeSelectedElement();
					}
					virtual void removeAllElement()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback();
						}
						else
							return this->CPageLayout::removeAllElement();
					}
					virtual ev_bool isExistMapFrame() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::isExistMapFrame();
					}
					virtual ev_bool isExist(_in IElement* pElement) const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback(pElement);
							return returnValue;
						}
						else
							return this->CPageLayout::isExist(pElement);
					}
					virtual void removeMapFrame()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback();
						}
						else
							return this->CPageLayout::removeMapFrame();
					}
					virtual EarthView::World::Display::IBitmap* getLayoutImage()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getLayoutImage();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback();
						}
						else
							return this->CPageLayout::reset();
					}
					virtual IElement* next()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback != NULL && this->isCustomExtend())
						{
							IElement* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::next();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getInterestEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::getInterestEnvelope();
					}
					virtual void setInterestEnvelope(_in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CPageLayout::setInterestEnvelope(pEnvelope);
					}
					virtual void updateEnvelop()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback();
						}
						else
							return this->CPageLayout::updateEnvelop();
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->CPageLayout::setActive(bActive);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CPageLayout::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback();
						}
						else
							return this->CPageLayout::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback();
						}
						else
							return this->CPageLayout::drawOver();
					}
					virtual IPageLayout* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback != NULL && this->isCustomExtend())
						{
							IPageLayout* returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPageLayout::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CPageLayout::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CPageLayout::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPageLayout::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CPageLayoutProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  IPage*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getPage();
						return objXXXX;
					}
					else
					{
						IPage* objXXXX = ptrNativeObject->getPage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  IPage*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getPage_IPage_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getPage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage(void *pObjectXXXX, _in IPage* pPage )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setPage(pPage);
					else
						ptrNativeObject->setPage(pPage);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setPage_void_IPage_NoVirtual(void *pObjectXXXX, _in IPage* pPage )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setPage(pPage);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement(void *pObjectXXXX, _in IElement* ref_pElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::addElement(ref_pElement);
					else
						ptrNativeObject->addElement(ref_pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_addElement_void_IElement_NoVirtual(void *pObjectXXXX, _in IElement* ref_pElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::addElement(ref_pElement);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement(void *pObjectXXXX, _in ev_int32 nIndex, _in IElement* ref_pElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::insertElement(nIndex, ref_pElement);
					else
						ptrNativeObject->insertElement(nIndex, ref_pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_insertElement_void_ev_int32_IElement_NoVirtual(void *pObjectXXXX, _in ev_int32 nIndex, _in IElement* ref_pElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::insertElement(nIndex, ref_pElement);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getElementCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getElementCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElementCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getElementCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getSelectedElementCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSelectedElementCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getSelectedElementCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getSelectedElementCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement(void *pObjectXXXX, _in IElement* pOldElement, _in IElement* pNewElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_replaceElement_ev_bool_IElement_IElement_NoVirtual(void *pObjectXXXX, _in IElement* pOldElement, _in IElement* pNewElement )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::replaceElement(pOldElement, pNewElement);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_exchangeElement_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::exchangeElement(srcIndex, destIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  IElement*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getElement(nIndex);
						return objXXXX;
					}
					else
					{
						IElement* objXXXX = ptrNativeObject->getElement(nIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  IElement*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getElement_IElement_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getElement(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement(void *pObjectXXXX, _in IElement* element )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeElement(element);
					else
						ptrNativeObject->removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeElement_void_IElement_NoVirtual(void *pObjectXXXX, _in IElement* element )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeSelectedElement();
					else
						ptrNativeObject->removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeSelectedElement_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeAllElement();
					else
						ptrNativeObject->removeAllElement();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeAllElement_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeAllElement();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isExistMapFrame();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExistMapFrame();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExistMapFrame_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isExistMapFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement(void *pObjectXXXX, _in IElement* pElement )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isExist(pElement);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExist(pElement);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isExist_ev_bool_IElement_NoVirtual(void *pObjectXXXX, _in IElement* pElement )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isExist(pElement);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeMapFrame();
					else
						ptrNativeObject->removeMapFrame();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_removeMapFrame_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::removeMapFrame();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getLayoutImage();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getLayoutImage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getLayoutImage_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getLayoutImage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_reset_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_reset_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::reset();
				}
				extern "C" EV_DLL_EXPORT  IElement*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_next_IElement(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::next();
						return objXXXX;
					}
					else
					{
						IElement* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_next_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_next_IElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_next_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  IElement*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_next_IElement_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getInterestEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getInterestEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getInterestEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::getInterestEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setInterestEnvelope(pEnvelope);
					else
						ptrNativeObject->setInterestEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setInterestEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setInterestEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::updateEnvelop();
					else
						ptrNativeObject->updateEnvelop();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_updateEnvelop_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::updateEnvelop();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setActive(bActive);
					else
						ptrNativeObject->setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_draw_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::drawOver();
				}
				extern "C" EV_DLL_EXPORT  IPageLayout*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::clone();
						return objXXXX;
					}
					else
					{
						IPageLayout* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  IPageLayout*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_clone_IPageLayout_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::CCartoOutput2D*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_getCartoOutput_CCartoOutput2D(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EarthView::World::Spatial::Carto::CCartoOutput2D* objXXXX = ptrNativeObject->getCartoOutput();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CPageLayout_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					if (dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_Callback* pCallback )
				{
					CPageLayoutProxy* ptr = dynamic_cast<CPageLayoutProxy*>((EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPageLayout_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::CPageLayout* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageLayout*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPageLayout::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
