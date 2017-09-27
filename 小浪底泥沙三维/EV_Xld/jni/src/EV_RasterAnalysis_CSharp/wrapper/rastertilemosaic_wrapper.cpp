/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rastertilemosaic.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback)(_in ev_uint8 percent);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback)();
				class CTileMosaicListenerProxy : public EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener
				{
				private:
					EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback* m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback;
					EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback* m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback;
				public:
					CTileMosaicListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTileMosaicListener(pList)
					{
						m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback = pCallback;
					}
					virtual void progressChanged(_in ev_uint8 percent)
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback(percent);
						}
						else
							return this->CTileMosaicListener::progressChanged(percent);
					}
					virtual void finished()
					{
						if(m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback();
						}
						else
							return this->CTileMosaicListener::finished();
					}
				};
				REGISTER_FACTORY_CLASS(CTileMosaicListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 percent )
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX;
					if (dynamic_cast<CTileMosaicListenerProxy*>((EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::progressChanged(percent);
					else
						ptrNativeObject->progressChanged(percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_Callback* pCallback )
				{
					CTileMosaicListenerProxy* ptr = dynamic_cast<CTileMosaicListenerProxy*>((EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_progressChanged_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 percent )
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::progressChanged(percent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX;
					if (dynamic_cast<CTileMosaicListenerProxy*>((EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::finished();
					else
						ptrNativeObject->finished();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void( void *pObjectXXXX, EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_Callback* pCallback )
				{
					CTileMosaicListenerProxy* ptr = dynamic_cast<CTileMosaicListenerProxy*>((EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_CTileMosaicListener_finished_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener::finished();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Analyst_CRasterTileMosaic_mosaic_ev_bool_ITileDataset_IRasterDataset_CTileMosaicListener(void *pObjectXXXX, _in EarthView::World::Spatial::ITileDataset* pTileDataset, _in EarthView::World::Spatial::GeoDataset::IRasterDataset* pDstDataset, _in EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener* pListener )
				{
					EarthView::World::Spatial2D::Analyst::CRasterTileMosaic* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CRasterTileMosaic*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mosaic(pTileDataset, pDstDataset, pListener);
					return objXXXX;
				}
			}
		}
	}
}
