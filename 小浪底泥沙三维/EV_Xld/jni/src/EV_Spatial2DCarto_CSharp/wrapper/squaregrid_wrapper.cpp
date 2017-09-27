/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/squaregrid.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback)();
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback)(_in void* stream);
				class CSquareGridProxy : public EarthView::World::Spatial::Carto::CSquareGrid
				{
				private:
					EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback;
				public:
					CSquareGridProxy(EarthView::World::Core::CNameValuePairList *pList) : CSquareGrid(pList)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType(EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString(EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString(EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType(EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool(EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol(EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_draw_void(EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void(EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement(EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString(EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CSquareGrid::setName(name);
					}
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVSquareGridType returnValue = (EarthView::World::Spatial::Carto::EVSquareGridType)m_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getType();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->CSquareGrid::setEnvelope(pEnvelope);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->CSquareGrid::setMapFrame(pMapFrame);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CSquareGrid::setSelected(bSelected);
					}
					virtual ev_bool isDrawGridline()
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::isDrawGridline();
					}
					virtual void setDrawGridline(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback(bSelected);
						}
						else
							return this->CSquareGrid::setDrawGridline(bSelected);
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->CSquareGrid::setActive(bActive);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getGridlineSymbol();
					}
					virtual void setGridlineSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CSquareGrid::setGridlineSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CSquareGrid::setTextSymbol(symbol);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->CSquareGrid::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback();
						}
						else
							return this->CSquareGrid::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback();
						}
						else
							return this->CSquareGrid::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSquareGrid::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSquareGrid::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSquareGrid::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSquareGrid::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CSquareGridProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getType_EVSquareGridType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isDrawGridline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawGridline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isDrawGridline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isDrawGridline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setDrawGridline(bSelected);
					else
						ptrNativeObject->setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setDrawGridline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setActive(bActive);
					else
						ptrNativeObject->setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getGridlineSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getGridlineSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getGridlineSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getGridlineSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setGridlineSymbol(symbol);
					else
						ptrNativeObject->setGridlineSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setGridlineSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setGridlineSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setTextSymbol(symbol);
					else
						ptrNativeObject->setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_draw_void_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					if (dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSquareGridProxy* ptr = dynamic_cast<CSquareGridProxy*>((EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CSquareGrid_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::CSquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::CSquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CSquareGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
