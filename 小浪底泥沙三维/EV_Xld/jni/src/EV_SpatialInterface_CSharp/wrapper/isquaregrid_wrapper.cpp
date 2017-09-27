/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/isquaregrid.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback)(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback)(_in ev_bool bActive);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback)(_in void* stream);
				class ISquareGridProxy : public EarthView::World::Spatial::Carto::ISquareGrid
				{
				private:
					EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback;
				public:
					ISquareGridProxy(EarthView::World::Core::CNameValuePairList *pList) : ISquareGrid(pList)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType(EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame(EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol(EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol(EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol(EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType(EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString(EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString(EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_draw_void(EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void(EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement(EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream(EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString(EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->ISquareGrid::setName(name);
					}
					virtual EarthView::World::Spatial::Carto::EVSquareGridType getType() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVSquareGridType returnValue = (EarthView::World::Spatial::Carto::EVSquareGridType)m_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getType();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->ISquareGrid::setEnvelope(pEnvelope);
					}
					virtual void setMapFrame(_in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback(pMapFrame);
						}
						else
							return this->ISquareGrid::setMapFrame(pMapFrame);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->ISquareGrid::setSelected(bSelected);
					}
					virtual ev_bool isDrawGridline()
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::isDrawGridline();
					}
					virtual void setDrawGridline(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback(bSelected);
						}
						else
							return this->ISquareGrid::setDrawGridline(bSelected);
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::isActive();
					}
					virtual void setActive(_in ev_bool bActive)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback(bActive);
						}
						else
							return this->ISquareGrid::setActive(bActive);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getGridlineSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getGridlineSymbol();
					}
					virtual void setGridlineSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->ISquareGrid::setGridlineSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::getTextSymbol();
					}
					virtual void setTextSymbol(_in EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->ISquareGrid::setTextSymbol(symbol);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->ISquareGrid::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback();
						}
						else
							return this->ISquareGrid::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback();
						}
						else
							return this->ISquareGrid::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ISquareGrid::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ISquareGrid::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ISquareGrid::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ISquareGrid::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(ISquareGridProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getType_EVSquareGridType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVSquareGridType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setMapFrame(pMapFrame);
					else
						ptrNativeObject->setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setMapFrame_void_IMapFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Carto::IMapFrame* pMapFrame )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setMapFrame(pMapFrame);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isDrawGridline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDrawGridline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isDrawGridline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isDrawGridline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setDrawGridline(bSelected);
					else
						ptrNativeObject->setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setDrawGridline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setDrawGridline(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setActive(bActive);
					else
						ptrNativeObject->setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bActive )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setActive(bActive);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getGridlineSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getGridlineSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getGridlineSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getGridlineSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setGridlineSymbol(symbol);
					else
						ptrNativeObject->setGridlineSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setGridlineSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setGridlineSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getTextSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTextSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_getTextSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::getTextSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setTextSymbol(symbol);
					else
						ptrNativeObject->setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_setTextSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::setTextSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_draw_void_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					if (dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_Callback* pCallback )
				{
					ISquareGridProxy* ptr = dynamic_cast<ISquareGridProxy*>((EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_ISquareGrid_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::ISquareGrid* ptrNativeObject = (EarthView::World::Spatial::Carto::ISquareGrid*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::ISquareGrid::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
