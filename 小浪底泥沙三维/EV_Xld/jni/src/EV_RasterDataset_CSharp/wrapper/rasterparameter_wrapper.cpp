/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterparameter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef const ev_int32*  ( _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback)();
				class CBandHistogramProxy : public EarthView::World::Spatial2D::Raster::CBandHistogram
				{
				private:
					EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback;
				public:
					CBandHistogramProxy(EarthView::World::Core::CNameValuePairList *pList) : CBandHistogram(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32(EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback = pCallback;
					}
					virtual const ev_int32* getGrayFraquaency() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32* returnValue = m_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CBandHistogram::getGrayFraquaency();
					}
				};
				REGISTER_FACTORY_CLASS(CBandHistogramProxy);
				extern "C" EV_DLL_EXPORT  const ev_int32*  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					if (dynamic_cast<CBandHistogramProxy*>((EarthView::World::Spatial2D::Raster::CBandHistogram*)ptrNativeObject) != NULL)
					{
						const ev_int32* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandHistogram::getGrayFraquaency();
						return objXXXX;
					}
					else
					{
						const ev_int32* objXXXX = ptrNativeObject->getGrayFraquaency();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_Callback* pCallback )
				{
					CBandHistogramProxy* ptr = dynamic_cast<CBandHistogramProxy*>((EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32*  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_getGrayFraquaency_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					const ev_int32* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandHistogram::getGrayFraquaency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandHistogram_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CBandHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandHistogram*) pObjectXXXX;
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback)();
				class CBandStatisticsInfoProxy : public EarthView::World::Spatial2D::Raster::CBandStatisticsInfo
				{
				private:
					EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback;
				public:
					CBandStatisticsInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CBandStatisticsInfo(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64(EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64(EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64(EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64(EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback = pCallback;
					}
					virtual const ev_real64 getMax() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBandStatisticsInfo::getMax();
					}
					virtual const ev_real64 getMin() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBandStatisticsInfo::getMin();
					}
					virtual const ev_real64 getMean() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBandStatisticsInfo::getMean();
					}
					virtual const ev_real64 getStdDev() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBandStatisticsInfo::getStdDev();
					}
				};
				REGISTER_FACTORY_CLASS(CBandStatisticsInfoProxy);
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					if (dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMax();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getMax();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_Callback* pCallback )
				{
					CBandStatisticsInfoProxy* ptr = dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMax_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMax();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					if (dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMin();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getMin();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_Callback* pCallback )
				{
					CBandStatisticsInfoProxy* ptr = dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMin_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMin();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					if (dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMean();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getMean();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_Callback* pCallback )
				{
					CBandStatisticsInfoProxy* ptr = dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getMean_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getMean();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					if (dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getStdDev();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getStdDev();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_Callback* pCallback )
				{
					CBandStatisticsInfoProxy* ptr = dynamic_cast<CBandStatisticsInfoProxy*>((EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_getStdDev_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CBandStatisticsInfo::getStdDev();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CBandStatisticsInfo_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*) pObjectXXXX;
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDataTime_getYear_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDataTime* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getYear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDataTime_getMonth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDataTime* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getMonth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDataTime_getDate_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDataTime* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getDate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDataTime_getHour_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDataTime* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getHour();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDataTime_getMinute_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDataTime* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDataTime*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getMinute();
					return objXXXX;
				}
				typedef const char*  ( _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback)();
				typedef const char*  ( _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback)();
				class CSensorInfoProxy : public EarthView::World::Spatial2D::Raster::CSensorInfo
				{
				private:
					EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback* m_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback;
				public:
					CSensorInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CSensorInfo(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString(EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString(EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime(EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback = pCallback;
					}
					virtual const EVString getRasterFormat() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSensorInfo::getRasterFormat();
					}
					virtual const EVString getSensorName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSensorInfo::getSensorName();
					}
					virtual const EarthView::World::Spatial2D::Raster::CDataTime& getDataTime() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CDataTime& returnValue = *(EarthView::World::Spatial2D::Raster::CDataTime*)m_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback();
							return returnValue;
						}
						else
							return this->CSensorInfo::getDataTime();
					}
				};
				REGISTER_FACTORY_CLASS(CSensorInfoProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_OperatorAssign_CSensorInfo_CSensorInfo(void *pObjXXXX, _in const void* objsensor )
				{
					EarthView::World::Spatial2D::Raster::CSensorInfo& objXXXX = *((EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial2D::Raster::CSensorInfo*)objsensor;
					EarthView::World::Spatial2D::Raster::CSensorInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					if (dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getRasterFormat();
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getRasterFormat();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_Callback* pCallback )
				{
					CSensorInfoProxy* ptr = dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getRasterFormat_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getRasterFormat();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					if (dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getSensorName();
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getSensorName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_Callback* pCallback )
				{
					CSensorInfoProxy* ptr = dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getSensorName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getSensorName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					if (dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CDataTime& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getDataTime();
						const EarthView::World::Spatial2D::Raster::CDataTime *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CDataTime& objXXXX = ptrNativeObject->getDataTime();
						const EarthView::World::Spatial2D::Raster::CDataTime *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_Callback* pCallback )
				{
					CSensorInfoProxy* ptr = dynamic_cast<CSensorInfoProxy*>((EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Raster_CSensorInfo_getDataTime_CDataTime_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CSensorInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CSensorInfo*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CDataTime& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CSensorInfo::getDataTime();
					const EarthView::World::Spatial2D::Raster::CDataTime *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
