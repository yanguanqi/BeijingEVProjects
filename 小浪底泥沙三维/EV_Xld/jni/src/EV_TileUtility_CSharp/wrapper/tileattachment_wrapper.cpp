/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileattachment.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef void  ( _stdcall EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback)(_in const void* param);
			typedef void  ( _stdcall EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback)(_in const void* param);
			typedef void  ( _stdcall EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback)();
			class ITileAttachmentProxy : public EarthView::World::Spatial::ITileAttachment
			{
			private:
				EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback* m_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback;
				EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback* m_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback;
				EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback* m_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback;
				EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback* m_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback;
			public:
				ITileAttachmentProxy(EarthView::World::Core::CNameValuePairList *pList) : ITileAttachment(pList)
				{
					m_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback = NULL;
					m_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback = NULL;
					m_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback = NULL;
					m_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback = pCallback;
				}
				virtual void onTileShown(_in const EarthView::World::Spatial::ITileAttachment::LodParam& param)
				{
					if(m_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback(&param);
					}
					else
						return this->ITileAttachment::onTileShown(param);
				}
				virtual void onTileHid(_in const EarthView::World::Spatial::ITileAttachment::LodParam& param)
				{
					if(m_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback(&param);
					}
					else
						return this->ITileAttachment::onTileHid(param);
				}
				virtual void onDetachFromTile()
				{
					if(m_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback();
					}
					else
						return this->ITileAttachment::onDetachFromTile();
				}
				virtual void onTileDestroyed()
				{
					if(m_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback();
					}
					else
						return this->ITileAttachment::onTileDestroyed();
				}
			};
			REGISTER_FACTORY_CLASS(ITileAttachmentProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel( void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment::LodParam* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment::LodParam*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->tileLevel;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileLevel( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial::ITileAttachment::LodParam*)pObjectXXXX)->tileLevel = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel( void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment::LodParam* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment::LodParam*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->cameraLevel;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_ITileAttachment_LodParam_cameraLevel( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial::ITileAttachment::LodParam*)pObjectXXXX)->cameraLevel = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount( void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment::LodParam* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment::LodParam*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->tileChildCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_ITileAttachment_LodParam_tileChildCount( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Spatial::ITileAttachment::LodParam*)pObjectXXXX)->tileChildCount = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(void *pObjectXXXX, _in const void* param )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				if (dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileShown(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
				else
					ptrNativeObject->onTileShown(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam( void *pObjectXXXX, EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_Callback* pCallback )
			{
				ITileAttachmentProxy* ptr = dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileShown_void_LodParam_NoVirtual(void *pObjectXXXX, _in const void* param )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileShown(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(void *pObjectXXXX, _in const void* param )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				if (dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileHid(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
				else
					ptrNativeObject->onTileHid(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam( void *pObjectXXXX, EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_Callback* pCallback )
			{
				ITileAttachmentProxy* ptr = dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileHid_void_LodParam_NoVirtual(void *pObjectXXXX, _in const void* param )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileHid(*(EarthView::World::Spatial::ITileAttachment::LodParam*)param);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				if (dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onDetachFromTile();
				else
					ptrNativeObject->onDetachFromTile();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void( void *pObjectXXXX, EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_Callback* pCallback )
			{
				ITileAttachmentProxy* ptr = dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onDetachFromTile_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onDetachFromTile();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				if (dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileDestroyed();
				else
					ptrNativeObject->onTileDestroyed();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void( void *pObjectXXXX, EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_Callback* pCallback )
			{
				ITileAttachmentProxy* ptr = dynamic_cast<ITileAttachmentProxy*>((EarthView::World::Spatial::ITileAttachment*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_ITileAttachment_onTileDestroyed_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::ITileAttachment* ptrNativeObject = (EarthView::World::Spatial::ITileAttachment*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::ITileAttachment::onTileDestroyed();
			}
		}
	}
}
