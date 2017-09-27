/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterstretchrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback)(_in ev_int32 channel);
				typedef EarthView::World::Spatial2D::Raster::IRasterRenderer*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback)(_in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRasterStretchRendererProxy : public EarthView::World::Spatial2D::Raster::CRasterStretchRenderer
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback;
				public:
					CRasterStretchRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterStretchRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Raster::EVRasterRendererType getRendererType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::EVRasterRendererType returnValue = (EarthView::World::Spatial2D::Raster::EVRasterRendererType)m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback();
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::getRendererType();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback(pDisplay, pRaster, leftUpX, leftUpY, width, height);
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
					}
					virtual ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::getBandCount();
					}
					virtual ev_int32 getBandIndex(_in ev_int32 channel) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback(channel);
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::getBandIndex(channel);
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterRenderer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::IRasterRenderer* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback();
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::clone();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRasterStretchRenderer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback(other);
							return returnValue;
						}
						else
							return this->CRasterStretchRenderer::equal(other);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterStretchRenderer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterStretchRenderer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterStretchRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getRendererType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->getRendererType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getRendererType_EVRasterRendererType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getRendererType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getBandCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 channel )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getBandIndex(channel);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandIndex(channel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 channel )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::getBandIndex(channel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_clone_IRasterRenderer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setCaption_void_EVString(void *pObjectXXXX, _inout char*& caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setCaption(caption1);
					caption=caption1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getBandIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getBandIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setBandIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setBandIndex(index);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getColorRamp_CColorRamp(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->getColorRamp();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setColorRamp_void_CColorRamp(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setColorRamp(pColorRamp);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getMinValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setMinValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfMinValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setMinValue(dfMinValue);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getMaxValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setMaxValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfMaxValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setMaxValue(dfMaxValue);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getDemRender_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDemRender();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setDemRender_void_int(void *pObjectXXXX, _in int bDEMRender )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setDemRender(bDEMRender);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getAzimuth_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getAzimuth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setAzimuth_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 azimuth )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setAzimuth(azimuth);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getAltitude_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setAltitude_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 altitude )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setAltitude(altitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_getZfactor_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getZfactor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_setZfactor_void_ev_real32(void *pObjectXXXX, _in ev_real32 z )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->setZfactor(z);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::equal(other);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(other);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_equal_ev_bool_IRasterRenderer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::equal(other);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRasterStretchRendererProxy* ptr = dynamic_cast<CRasterStretchRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterStretchRenderer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CRasterStretchRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterStretchRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterStretchRenderer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
