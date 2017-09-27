/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irasterblock.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback)(_in ev_int32 bandIndex, _in ev_int32 offset);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback)(_in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback)(_in ev_real64 nodataValue);
				typedef ev_byte*  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback)(_in ev_int32 bandIndex);
				typedef EarthView::World::Spatial2D::Raster::IRasterBlock*  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback)();
				typedef ev_byte*  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IRasterBlockProxy : public EarthView::World::Spatial2D::Raster::IRasterBlock
				{
				private:
					EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback;
				public:
					IRasterBlockProxy(EarthView::World::Core::CNameValuePairList *pList) : IRasterBlock(pList)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32(EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32(EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType(EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64(EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64(EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32(EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock(EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64(EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void(EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte(EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getWidth() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getWidth();
					}
					virtual ev_int32 getHeight() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getHeight();
					}
					virtual ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getBandCount();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getDataType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVRasterDataType returnValue = (EarthView::World::Spatial::GeoDataset::EVRasterDataType)m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getDataType();
					}
					virtual ev_real64 getPixelValue(_in ev_int32 bandIndex, _in ev_int32 offset) const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback(bandIndex, offset);
							return returnValue;
						}
						else
							return this->IRasterBlock::getPixelValue(bandIndex, offset);
					}
					virtual void setPixelValue(_in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback(bandIndex, offset, value);
						}
						else
							return this->IRasterBlock::setPixelValue(bandIndex, offset, value);
					}
					virtual ev_real64 getNodataValue() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getNodataValue();
					}
					virtual void setNodataValue(_in ev_real64 nodataValue)
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback(nodataValue);
						}
						else
							return this->IRasterBlock::setNodataValue(nodataValue);
					}
					virtual ev_byte* getDataRef(_in ev_int32 bandIndex) const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_byte* returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback(bandIndex);
							return returnValue;
						}
						else
							return this->IRasterBlock::getDataRef(bandIndex);
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterBlock* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::IRasterBlock* returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::clone();
					}
					virtual void setDefaultValue(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback(value);
						}
						else
							return this->IRasterBlock::setDefaultValue(value);
					}
					virtual void createValidMask()
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback();
						}
						else
							return this->IRasterBlock::createValidMask();
					}
					virtual ev_byte* getValidMaskDataRef() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							ev_byte* returnValue = m_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::getValidMaskDataRef();
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRasterBlock::toStream(stream);
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IRasterBlock::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IRasterBlock::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IRasterBlock::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IRasterBlockProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getWidth();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getHeight();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getBandCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getDataType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->getDataType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataType_EVRasterDataType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getPixelValue(bandIndex, offset);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getPixelValue(bandIndex, offset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getPixelValue(bandIndex, offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setPixelValue(bandIndex, offset, value);
					else
						ptrNativeObject->setPixelValue(bandIndex, offset, value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setPixelValue(bandIndex, offset, value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getNodataValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getNodataValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getNodataValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getNodataValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 nodataValue )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setNodataValue(nodataValue);
					else
						ptrNativeObject->setNodataValue(nodataValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setNodataValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 nodataValue )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setNodataValue(nodataValue);
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32(void *pObjectXXXX, _in ev_int32 bandIndex )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getDataRef(bandIndex);
						return objXXXX;
					}
					else
					{
						ev_byte* objXXXX = ptrNativeObject->getDataRef(bandIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getDataRef_ev_byte_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getDataRef(bandIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterBlock*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterBlock*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_clone_IRasterBlock_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setDefaultValue(value);
					else
						ptrNativeObject->setDefaultValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_setDefaultValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::setDefaultValue(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::createValidMask();
					else
						ptrNativeObject->createValidMask();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_createValidMask_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::createValidMask();
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getValidMaskDataRef();
						return objXXXX;
					}
					else
					{
						ev_byte* objXXXX = ptrNativeObject->getValidMaskDataRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_getValidMaskDataRef_ev_byte_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::getValidMaskDataRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					if (dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_Callback* pCallback )
				{
					IRasterBlockProxy* ptr = dynamic_cast<IRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_IRasterBlock_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::IRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::IRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::IRasterBlock::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
