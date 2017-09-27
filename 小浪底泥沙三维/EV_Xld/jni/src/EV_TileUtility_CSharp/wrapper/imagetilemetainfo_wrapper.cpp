/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/imagetilemetainfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef int  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback)();
			class CImageTileMetaInfoProxy : public EarthView::World::Spatial::CImageTileMetaInfo
			{
			private:
				EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback;
				EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback* m_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback;
			public:
				CImageTileMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CImageTileMetaInfo(pList)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType(EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString(EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32(EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32(EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32(EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType(EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::EVTileDatasetType getDatasetType() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVTileDatasetType returnValue = (EarthView::World::Spatial::EVTileDatasetType)m_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getDatasetType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getName();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getEnvelopeRef();
				}
				virtual ev_int32 getSRID() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getSRID();
				}
				virtual ev_int32 getMinLevel() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getMinLevel();
				}
				virtual ev_int32 getMaxLevel() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getMaxLevel();
				}
				virtual EarthView::World::Spatial::EVTileRasterDataType getDataType() const
				{
					if(m_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVTileRasterDataType returnValue = (EarthView::World::Spatial::EVTileRasterDataType)m_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback();
						return returnValue;
					}
					else
						return this->CImageTileMetaInfo::getDataType();
				}
			};
			REGISTER_FACTORY_CLASS(CImageTileMetaInfoProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDatasetType_EVTileDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVTileDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getDatasetType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getSRID();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getSRID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getSRID_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getSRID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getMinLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMinLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMinLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getMinLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getMaxLevel();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMaxLevel();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getMaxLevel_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getMaxLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				if (dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVTileRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getDataType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVTileRasterDataType objXXXX = ptrNativeObject->getDataType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType( void *pObjectXXXX, EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_Callback* pCallback )
			{
				CImageTileMetaInfoProxy* ptr = dynamic_cast<CImageTileMetaInfoProxy*>((EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CImageTileMetaInfo_getDataType_EVTileRasterDataType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CImageTileMetaInfo* ptrNativeObject = (EarthView::World::Spatial::CImageTileMetaInfo*) pObjectXXXX;
				EarthView::World::Spatial::EVTileRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::CImageTileMetaInfo::getDataType();
				return (int)objXXXX;
			}
		}
	}
}
