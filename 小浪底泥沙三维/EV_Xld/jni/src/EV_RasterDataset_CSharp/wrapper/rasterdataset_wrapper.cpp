/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef const EarthView::World::Spatial2D::Raster::CBandHistogram*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CRasterHistogram*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback)();
				typedef const EarthView::World::Spatial::Display::CColorTable*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback)(_in ev_bool isApprox);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback)(_in int bFlag, _inout void* pDstBuffer, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iWidth, _in ev_int32 iHeight, _in int eDataType, _in ev_int32 iBufferX, _in ev_int32 iBufferY);
				typedef EarthView::World::Spatial2D::Raster::CRasterDataSet*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback)(_in ev_real64 dfNodataValue);
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback)();
				class CRasterBandProxy : public EarthView::World::Spatial2D::Raster::CRasterBand
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback;
				public:
					CRasterBandProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterBand(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram(EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram(EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable(EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable(EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool(EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet(EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial2D::Raster::CBandHistogram* getBandHistogram()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CBandHistogram* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::getBandHistogram();
					}
					virtual const EarthView::World::Spatial2D::Raster::CRasterHistogram* getHistogram()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CRasterHistogram* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::getHistogram();
					}
					virtual const EarthView::World::Spatial::Display::CColorTable* getColorTable()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::CColorTable* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::getColorTable();
					}
					virtual const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* getAttributeTable()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::getAttributeTable();
					}
					virtual const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* getBandStatistics(_in ev_bool isApprox)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback(isApprox);
							return returnValue;
						}
						else
							return this->CRasterBand::getBandStatistics(isApprox);
					}
					virtual ev_bool iRasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bFlag, _inout void* pDstBuffer, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iWidth, _in ev_int32 iHeight, _in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType, _in ev_int32 iBufferX, _in ev_int32 iBufferY)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback((int)bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, (int)eDataType, iBufferX, iBufferY);
							return returnValue;
						}
						else
							return this->CRasterBand::iRasterIO(bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, eDataType, iBufferX, iBufferY);
					}
					virtual EarthView::World::Spatial2D::Raster::CRasterDataSet* asDataset()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::CRasterDataSet* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::asDataset();
					}
					virtual void setNodatavalue(_in ev_real64 dfNodataValue)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback(dfNodataValue);
						}
						else
							return this->CRasterBand::setNodatavalue(dfNodataValue);
					}
					virtual const ev_real64 getNodatavalue() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRasterBand::getNodatavalue();
					}
				};
				REGISTER_FACTORY_CLASS(CRasterBandProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CBandHistogram* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getBandHistogram();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CBandHistogram* objXXXX = ptrNativeObject->getBandHistogram();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandHistogram_CBandHistogram_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CBandHistogram* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getBandHistogram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CRasterHistogram* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getHistogram();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CRasterHistogram* objXXXX = ptrNativeObject->getHistogram();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getHistogram_CRasterHistogram_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getHistogram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CColorTable*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getColorTable();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->getColorTable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CColorTable*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getColorTable_CColorTable_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getColorTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getAttributeTable();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* objXXXX = ptrNativeObject->getAttributeTable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getAttributeTable_CRasterAttributeTable_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getAttributeTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool(void *pObjectXXXX, _in ev_bool isApprox )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getBandStatistics(isApprox);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* objXXXX = ptrNativeObject->getBandStatistics(isApprox);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isApprox )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getBandStatistics(isApprox);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(void *pObjectXXXX, _in int bFlag, _inout void* pDstBuffer, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iWidth, _in ev_int32 iHeight, _in int eDataType, _in ev_int32 iBufferX, _in ev_int32 iBufferY )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::iRasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, iBufferX, iBufferY);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->iRasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, iBufferX, iBufferY);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_iRasterIO_ev_bool_EVIOFlag_void_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in int bFlag, _inout void* pDstBuffer, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iWidth, _in ev_int32 iHeight, _in int eDataType, _in ev_int32 iBufferX, _in ev_int32 iBufferY )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::iRasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, iBufferX, iBufferY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::asDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = ptrNativeObject->asDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_asDataset_CRasterDataSet_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::asDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfNodataValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::setNodatavalue(dfNodataValue);
					else
						ptrNativeObject->setNodatavalue(dfNodataValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_setNodatavalue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dfNodataValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::setNodatavalue(dfNodataValue);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					if (dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getNodatavalue();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getNodatavalue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_Callback* pCallback )
				{
					CRasterBandProxy* ptr = dynamic_cast<CRasterBandProxy*>((EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBand_getNodatavalue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBand*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBand::getNodatavalue();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_pDataSrc);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CSensorInfo*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback)();
				typedef EarthView::World::Spatial2D::Raster::CRasterBand*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback)(_out ev_int32 iband);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback)(_in const void* objSensorInfo);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback)(_in const void* objGeoTransForm);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback)(_inout ev_uchar*& pBuffer, _inout ev_uint64& longLenth);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY);
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CAffineTransform*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback)(_out char*& strWKT);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback)(_in char*& strWKT);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback)(_in char*& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback)(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback)(_in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback)(_in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CRasterDataSetProxy : public EarthView::World::Spatial2D::Raster::CRasterDataSet
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CRasterDataSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterDataSet(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource(EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope(EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo(EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference(EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo(EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform(EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64(EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform(EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType(EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo(EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType(EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64(EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource(EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getDataSourceRef();
					}
					virtual void setDataSourceRef(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_pDataSrc)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback(ref_pDataSrc);
						}
						else
							return this->CRasterDataSet::setDataSourceRef(ref_pDataSrc);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CRasterDataSet::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CRasterDataSet::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CRasterDataSet::endEditingOperation(isConfirm);
					}
					virtual void getRasterRect(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
						}
						else
							return this->CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeoEnvelope()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getGeoEnvelope();
					}
					virtual const ev_int32 getRasterWidth() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getRasterWidth();
					}
					virtual const ev_int32 getRasterHeight() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getRasterHeight();
					}
					virtual const ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getBandCount();
					}
					virtual const EarthView::World::Spatial2D::Raster::CSensorInfo* getSensorInfo() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CSensorInfo* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getSensorInfo();
					}
					virtual EarthView::World::Spatial2D::Raster::CRasterBand* getRasterBand(_out ev_int32 iband)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::CRasterBand* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback(iband);
							return returnValue;
						}
						else
							return this->CRasterDataSet::getRasterBand(iband);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVRasterDataType returnValue = (EarthView::World::Spatial::GeoDataset::EVRasterDataType)m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getRasterDataType();
					}
					virtual void getSpatialReferenceWkt(_out EVString& strWKT) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback(strWKT_Char);
							strWKT = strWKT_Char;
							if(strWKT_Char != NULL){ delete[] strWKT_Char;strWKT_Char = NULL;}
						}
						else
							return this->CRasterDataSet::getSpatialReferenceWkt(strWKT);
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getSpatialReference();
					}
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform* getGeoTransform() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CAffineTransform* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getGeoTransform();
					}
					virtual void setSensorInfo(_in const EarthView::World::Spatial2D::Raster::CSensorInfo& objSensorInfo)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback(&objSensorInfo);
						}
						else
							return this->CRasterDataSet::setSensorInfo(objSensorInfo);
					}
					virtual void setGeoTransform(_in const EarthView::World::Spatial2D::Raster::CAffineTransform& objGeoTransForm)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback(&objGeoTransForm);
						}
						else
							return this->CRasterDataSet::setGeoTransform(objGeoTransForm);
					}
					virtual void setSpatialReference(_in const EVString& strWKT)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback(strWKT_Char);
						}
						else
							return this->CRasterDataSet::setSpatialReference(strWKT);
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback(pSpatialRef);
						}
						else
							return this->CRasterDataSet::setSpatialReference(pSpatialRef);
					}
					virtual ev_bool read(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pDstRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual ev_bool write(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pSrcRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual ev_bool buildOverViews(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
							return returnValue;
						}
						else
							return this->CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					}
					virtual ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback((int)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (int)eDataType);
							return returnValue;
						}
						else
							return this->CRasterDataSet::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
					}
					virtual void read(_in EVString& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback(strWKT_Char, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						}
						else
							return this->CRasterDataSet::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
					virtual ev_int32 reference()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::reference();
					}
					virtual ev_int32 deReference()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::deReference();
					}
					virtual void toStream(_inout ev_uchar*& pBuffer, _inout ev_uint64& longLenth)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback(pBuffer, longLenth);
						}
						else
							return this->CRasterDataSet::toStream(pBuffer, longLenth);
					}
					virtual ev_int32 getOverViewLevels() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getOverViewLevels();
					}
					virtual ev_bool buildDefaultOverViews(_inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback(pDataProgress);
							return returnValue;
						}
						else
							return this->CRasterDataSet::buildDefaultOverViews(pDataProgress);
					}
					virtual EVString getDatasetFullpath() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSet::getDatasetFullpath();
					}
				};
				REGISTER_FACTORY_CLASS(CRasterDataSetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_pDataSrc )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setDataSourceRef(ref_pDataSrc);
					else
						ptrNativeObject->setDataSourceRef(ref_pDataSrc);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setDataSourceRef_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_pDataSrc )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setDataSourceRef(ref_pDataSrc);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					else
						ptrNativeObject->getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoEnvelope();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getGeoEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterWidth();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterWidth_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterHeight();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterHeight_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getBandCount();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CSensorInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CSensorInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSensorInfo();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CSensorInfo* objXXXX = ptrNativeObject->getSensorInfo();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CSensorInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSensorInfo_CSensorInfo_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CSensorInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSensorInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterBand*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32(void *pObjectXXXX, _out ev_int32 iband )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::CRasterBand* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterBand(iband);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CRasterBand* objXXXX = ptrNativeObject->getRasterBand(iband);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterBand*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterBand_CRasterBand_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_int32 iband )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CRasterBand* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterBand(iband);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterDataType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->getRasterDataType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getRasterDataType_EVRasterDataType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getRasterDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDataTypeSize_ev_int32_EVRasterDataType(_in int dataType )
				{
					ev_int32 objXXXX = EarthView::World::Spatial2D::Raster::CRasterDataSet::getDataTypeSize((EarthView::World::Spatial::GeoDataset::EVRasterDataType)dataType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReferenceWkt(strWKT1);
					else
						ptrNativeObject->getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReferenceWkt_void_EVString_NoVirtual(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoTransform();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->getGeoTransform();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getGeoTransform_CAffineTransform_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getGeoTransform();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo(void *pObjectXXXX, _in const void* objSensorInfo )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSensorInfo(*(EarthView::World::Spatial2D::Raster::CSensorInfo*)objSensorInfo);
					else
						ptrNativeObject->setSensorInfo(*(EarthView::World::Spatial2D::Raster::CSensorInfo*)objSensorInfo);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSensorInfo_void_CSensorInfo_NoVirtual(void *pObjectXXXX, _in const void* objSensorInfo )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSensorInfo(*(EarthView::World::Spatial2D::Raster::CSensorInfo*)objSensorInfo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform(void *pObjectXXXX, _in const void* objGeoTransForm )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setGeoTransform(*(EarthView::World::Spatial2D::Raster::CAffineTransform*)objGeoTransForm);
					else
						ptrNativeObject->setGeoTransform(*(EarthView::World::Spatial2D::Raster::CAffineTransform*)objGeoTransForm);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setGeoTransform_void_CAffineTransform_NoVirtual(void *pObjectXXXX, _in const void* objGeoTransForm )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setGeoTransform(*(EarthView::World::Spatial2D::Raster::CAffineTransform*)objGeoTransForm);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(strWKT1);
					else
						ptrNativeObject->setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(pSpatialRef);
					else
						ptrNativeObject->setSpatialReference(pSpatialRef);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::setSpatialReference(pSpatialRef);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					else
						ptrNativeObject->read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::reference();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->reference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_reference_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::reference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::deReference();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->deReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_deReference_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::deReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64(void *pObjectXXXX, _inout ev_uchar*& pBuffer, _inout ev_uint64& longLenth )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::toStream(pBuffer, longLenth);
					else
						ptrNativeObject->toStream(pBuffer, longLenth);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_toStream_void_ev_uchar_ev_uint64_NoVirtual(void *pObjectXXXX, _inout ev_uchar*& pBuffer, _inout ev_uint64& longLenth )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::toStream(pBuffer, longLenth);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getOverViewLevels();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getOverViewLevels();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getOverViewLevels_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getOverViewLevels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo(void *pObjectXXXX, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_buildDefaultOverViews_ev_bool_CProgressInfo_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::buildDefaultOverViews(pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDatasetFullpath();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDatasetFullpath();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_Callback* pCallback )
				{
					CRasterDataSetProxy* ptr = dynamic_cast<CRasterDataSetProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSet_getDatasetFullpath_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSet* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSet::getDatasetFullpath();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
