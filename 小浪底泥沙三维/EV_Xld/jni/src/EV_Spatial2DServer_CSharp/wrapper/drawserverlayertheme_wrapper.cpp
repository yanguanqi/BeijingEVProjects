/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/drawserverlayertheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in ev_uint8 transparent, _in EarthView::World::Spatial::Theme::ITheme* ref_pTheme, _in ev_int32 mode);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback)(_in char*& datasetName, _in char*& datasourceName, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSRS);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback)(_in EarthView::World::Core::CWorkQueue::RequestPara* req);
				class CDrawServerLayerThemeProxy : public EarthView::World::Spatial::Display::CDrawServerLayerTheme
				{
				private:
					EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback;
				public:
					CDrawServerLayerThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawServerLayerTheme(pList)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback = pCallback;
					}
					virtual void startDraw(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in ev_uint8 transparent, _in EarthView::World::Spatial::Theme::ITheme* ref_pTheme, _in ev_int32 mode)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback(ref_display, transparent, ref_pTheme, mode);
						}
						else
							return this->CDrawServerLayerTheme::startDraw(ref_display, transparent, ref_pTheme, mode);
					}
					virtual void endDraw()
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback();
						}
						else
							return this->CDrawServerLayerTheme::endDraw();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback(pDataset);
							return returnValue;
						}
						else
							return this->CDrawServerLayerTheme::draw(pDataset);
					}
					virtual ev_bool draw(_in EVString datasetName, _in EVString datasourceName, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSRS)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							char* datasourceName_Char = datasourceName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback(datasetName_Char, datasourceName_Char, pEnv, pSRS);
							return returnValue;
						}
						else
							return this->CDrawServerLayerTheme::draw(datasetName, datasourceName, pEnv, pSRS);
					}
					virtual void drawTile(_in EarthView::World::Core::CWorkQueue::RequestPara* req)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback(req);
						}
						else
							return this->CDrawServerLayerTheme::drawTile(req);
					}
				};
				REGISTER_FACTORY_CLASS(CDrawServerLayerThemeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in ev_uint8 transparent, _in EarthView::World::Spatial::Theme::ITheme* ref_pTheme, _in ev_int32 mode )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::startDraw(ref_display, transparent, ref_pTheme, mode);
					else
						ptrNativeObject->startDraw(ref_display, transparent, ref_pTheme, mode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Callback* pCallback )
				{
					CDrawServerLayerThemeProxy* ptr = dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in ev_uint8 transparent, _in EarthView::World::Spatial::Theme::ITheme* ref_pTheme, _in ev_int32 mode )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::startDraw(ref_display, transparent, ref_pTheme, mode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::endDraw();
					else
						ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Callback* pCallback )
				{
					CDrawServerLayerThemeProxy* ptr = dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::draw(pDataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(pDataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Callback* pCallback )
				{
					CDrawServerLayerThemeProxy* ptr = dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::draw(pDataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(void *pObjectXXXX, _in char* datasetName, _in char* datasourceName, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSRS )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::draw(datasetName1, datasourceName1, pEnv, pSRS);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(datasetName1, datasourceName1, pEnv, pSRS);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Callback* pCallback )
				{
					CDrawServerLayerThemeProxy* ptr = dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_NoVirtual(void *pObjectXXXX, _in char* datasetName, _in char* datasourceName, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSRS )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string datasourceName1 = datasourceName;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::draw(datasetName1, datasourceName1, pEnv, pSRS);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::RequestPara* req )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::drawTile(req);
					else
						ptrNativeObject->drawTile(req);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Callback* pCallback )
				{
					CDrawServerLayerThemeProxy* ptr = dynamic_cast<CDrawServerLayerThemeProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::RequestPara* req )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerTheme::drawTile(req);
				}
			}
		}
	}
}
