/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterhistogram.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback)(_in ev_byte grayIndex);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback)(_in ev_byte grayIndex, _in ev_uint32 frequence);
				typedef ev_byte  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback)(_in ev_real64 value);
				class CRasterHistogramProxy : public EarthView::World::Spatial2D::Raster::CRasterHistogram
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback* m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback;
					EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback;
				public:
					CRasterHistogramProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterHistogram(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte(EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32(EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64(EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback = pCallback;
					}
					virtual ev_uint32 getFrequence(_in ev_byte grayIndex) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback(grayIndex);
							return returnValue;
						}
						else
							return this->CRasterHistogram::getFrequence(grayIndex);
					}
					virtual void setFrequence(_in ev_byte grayIndex, _in ev_uint32 frequence)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback(grayIndex, frequence);
						}
						else
							return this->CRasterHistogram::setFrequence(grayIndex, frequence);
					}
					virtual ev_byte getGrayIndex(_in ev_real64 value) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_byte returnValue = m_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback(value);
							return returnValue;
						}
						else
							return this->CRasterHistogram::getGrayIndex(value);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterHistogramProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte(void *pObjectXXXX, _in ev_byte grayIndex )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					if (dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::getFrequence(grayIndex);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFrequence(grayIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_Callback* pCallback )
				{
					CRasterHistogramProxy* ptr = dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getFrequence_ev_uint32_ev_byte_NoVirtual(void *pObjectXXXX, _in ev_byte grayIndex )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::getFrequence(grayIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32(void *pObjectXXXX, _in ev_byte grayIndex, _in ev_uint32 frequence )
				{
					EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					if (dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::setFrequence(grayIndex, frequence);
					else
						ptrNativeObject->setFrequence(grayIndex, frequence);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_Callback* pCallback )
				{
					CRasterHistogramProxy* ptr = dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_setFrequence_void_ev_byte_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_byte grayIndex, _in ev_uint32 frequence )
				{
					EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::setFrequence(grayIndex, frequence);
				}
				extern "C" EV_DLL_EXPORT  ev_byte  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					if (dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*)ptrNativeObject) != NULL)
					{
						ev_byte objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::getGrayIndex(value);
						return objXXXX;
					}
					else
					{
						ev_byte objXXXX = ptrNativeObject->getGrayIndex(value);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_Callback* pCallback )
				{
					CRasterHistogramProxy* ptr = dynamic_cast<CRasterHistogramProxy*>((EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_byte  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_getGrayIndex_ev_byte_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ev_byte objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterHistogram::getGrayIndex(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterHistogram_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterHistogram* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterHistogram*) pObjectXXXX;
					ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
			}
		}
	}
}
