/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbolrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback)(_in EarthView::World::Display::IDisplay2D* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback)(_in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback)(_in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount, _in ev_bool bUseOutline);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback)(_in EarthView::World::Display::CDataPath* pPath);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback)(_in EarthView::World::Display::CDataPath* pPath, _in ev_bool bUseOutline);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 left, _in ev_real64 top, _in ev_real64 width, _in ev_real64 height);
				class CSymbolRendererProxy : public EarthView::World::Spatial::Display::CSymbolRenderer
				{
				private:
					EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback;
					EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CSymbolRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolRenderer(pList)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual void startDraw(_in EarthView::World::Display::IDisplay2D* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback(ref_display, ref_pSymbol);
						}
						else
							return this->CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
					}
					virtual void draw(_in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback(dx, dy, pSegments, nCount);
						}
						else
							return this->CSymbolRenderer::draw(dx, dy, pSegments, nCount);
					}
					virtual void draw(_in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount, _in ev_bool bUseOutline)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback(dx, dy, pSegments, nCount, bUseOutline);
						}
						else
							return this->CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
					}
					virtual void drawPath(_in EarthView::World::Display::CDataPath* pPath)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback(pPath);
						}
						else
							return this->CSymbolRenderer::drawPath(pPath);
					}
					virtual void drawPath(_in EarthView::World::Display::CDataPath* pPath, _in ev_bool bUseOutline)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback(pPath, bUseOutline);
						}
						else
							return this->CSymbolRenderer::drawPath(pPath, bUseOutline);
					}
					virtual void endDraw()
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback();
						}
						else
							return this->CSymbolRenderer::endDraw();
					}
					virtual void drawLegend(_in ev_real64 left, _in ev_real64 top, _in ev_real64 width, _in ev_real64 height)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(left, top, width, height);
						}
						else
							return this->CSymbolRenderer::drawLegend(left, top, width, height);
					}
				};
				REGISTER_FACTORY_CLASS(CSymbolRendererProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(void *pObjectXXXX, _in EarthView::World::Display::IDisplay2D* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
					else
						ptrNativeObject->startDraw(ref_display, ref_pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IDisplay2D* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::startDraw(ref_display, ref_pSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount);
					else
						ptrNativeObject->draw(dx, dy, pSegments, nCount);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount, _in ev_bool bUseOutline )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
					else
						ptrNativeObject->draw(dx, dy, pSegments, nCount, bUseOutline);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_real64* dx, _in ev_real64* dy, _in ev_int32* pSegments, _in ev_int32 nCount, _in ev_bool bUseOutline )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::draw(dx, dy, pSegments, nCount, bUseOutline);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* pPath )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath);
					else
						ptrNativeObject->drawPath(pPath);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* pPath )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* pPath, _in ev_bool bUseOutline )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath, bUseOutline);
					else
						ptrNativeObject->drawPath(pPath, bUseOutline);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* pPath, _in ev_bool bUseOutline )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawPath(pPath, bUseOutline);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::endDraw();
					else
						ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::endDraw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 left, _in ev_real64 top, _in ev_real64 width, _in ev_real64 height )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					if (dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawLegend(left, top, width, height);
					else
						ptrNativeObject->drawLegend(left, top, width, height);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSymbolRendererProxy* ptr = dynamic_cast<CSymbolRendererProxy*>((EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 left, _in ev_real64 top, _in ev_real64 width, _in ev_real64 height )
				{
					EarthView::World::Spatial::Display::CSymbolRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolRenderer::drawLegend(left, top, width, height);
				}
			}
		}
	}
}
