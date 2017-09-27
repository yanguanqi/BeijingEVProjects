/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterclassificationrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback)(_in ev_int32 channel);
				typedef EarthView::World::Spatial2D::Raster::IRasterRenderer*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback)(_in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRasterClassificationRendererProxy : public EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback;
					EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback;
				public:
					CRasterClassificationRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterClassificationRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Raster::EVRasterRendererType getRendererType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::EVRasterRendererType returnValue = (EarthView::World::Spatial2D::Raster::EVRasterRendererType)m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback();
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::getRendererType();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback(pDisplay, pRaster, leftUpX, leftUpY, width, height);
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
					}
					virtual ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::getBandCount();
					}
					virtual ev_int32 getBandIndex(_in ev_int32 channel) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback(channel);
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::getBandIndex(channel);
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterRenderer* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::IRasterRenderer* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback();
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::clone();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRasterClassificationRenderer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback(other);
							return returnValue;
						}
						else
							return this->CRasterClassificationRenderer::equal(other);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterClassificationRenderer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterClassificationRenderer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterClassificationRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getRendererType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->getRendererType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getRendererType_EVRasterRendererType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::EVRasterRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getRendererType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_draw_ev_bool_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pRaster, _in ev_int32 leftUpX, _in ev_int32 leftUpY, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::draw(pDisplay, pRaster, leftUpX, leftUpY, width, height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 channel )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandIndex(channel);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandIndex(channel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 channel )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::getBandIndex(channel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_clone_IRasterRenderer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setCaption_void_EVString(void *pObjectXXXX, _inout char*& caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setCaption(caption1);
					caption=caption1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getSubCaption_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSubCaption(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setSubCaption_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _inout char*& subCaption )
				{
					EarthView::World::Core::ev_string subCaption1 = subCaption;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setSubCaption(index, subCaption1);
					subCaption=subCaption1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBandIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getBandIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setBandIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setBandIndex(index);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getFieldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFieldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setFieldName_void_EVString(void *pObjectXXXX, _inout char*& fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setFieldName(fieldName1);
					fieldName=fieldName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getColor_IColor_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColor(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getColor_IColor_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColor(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setColor_void_ev_uint32_IColor(void *pObjectXXXX, _in ev_uint32 index, _in const void* pColor )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setColor(index, *(EarthView::World::Spatial::Display::IColor*)pColor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_addBreak_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->addBreak(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_removeBreak_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->removeBreak(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBreakCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getBreakCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getBreakValue_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getBreakValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setBreakValue_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setBreakValue(index, value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getMaxValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setMaxValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setMaxValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getMinValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_setMinValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->setMinValue(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_getValueRange_void_ev_uint32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _inout ev_real64& dfMinValue, _inout ev_real64& dfMaxValue )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->getValueRange(index, dfMinValue, dfMaxValue);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::equal(other);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(other);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_equal_ev_bool_IRasterRenderer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterRenderer* other )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::equal(other);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					if (dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRasterClassificationRendererProxy* ptr = dynamic_cast<CRasterClassificationRendererProxy*>((EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterClassificationRenderer_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
