/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterblock.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback)(_in ev_int32 bandIndex, _in ev_int32 offset);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback)(_in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback)(_in ev_real64 nodataValue);
				typedef ev_byte*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback)(_in ev_int32 bandIndex);
				typedef EarthView::World::Spatial2D::Raster::IRasterBlock*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback)();
				typedef ev_byte*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CRasterBlockProxy : public EarthView::World::Spatial2D::Raster::CRasterBlock
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback;
				public:
					CRasterBlockProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterBlock(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType(EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32(EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock(EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64(EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void(EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte(EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream(EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getWidth() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getWidth();
					}
					virtual ev_int32 getHeight() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getHeight();
					}
					virtual ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getBandCount();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getDataType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVRasterDataType returnValue = (EarthView::World::Spatial::GeoDataset::EVRasterDataType)m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getDataType();
					}
					virtual ev_real64 getPixelValue(_in ev_int32 bandIndex, _in ev_int32 offset) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback(bandIndex, offset);
							return returnValue;
						}
						else
							return this->CRasterBlock::getPixelValue(bandIndex, offset);
					}
					virtual void setPixelValue(_in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback(bandIndex, offset, value);
						}
						else
							return this->CRasterBlock::setPixelValue(bandIndex, offset, value);
					}
					virtual ev_real64 getNodataValue() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getNodataValue();
					}
					virtual void setNodataValue(_in ev_real64 nodataValue)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback(nodataValue);
						}
						else
							return this->CRasterBlock::setNodataValue(nodataValue);
					}
					virtual ev_byte* getDataRef(_in ev_int32 bandIndex) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_byte* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback(bandIndex);
							return returnValue;
						}
						else
							return this->CRasterBlock::getDataRef(bandIndex);
					}
					virtual EarthView::World::Spatial2D::Raster::IRasterBlock* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial2D::Raster::IRasterBlock* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::clone();
					}
					virtual void setDefaultValue(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback(value);
						}
						else
							return this->CRasterBlock::setDefaultValue(value);
					}
					virtual void createValidMask()
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback();
						}
						else
							return this->CRasterBlock::createValidMask();
					}
					virtual ev_byte* getValidMaskDataRef() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							ev_byte* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::getValidMaskDataRef();
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterBlock::toStream(stream);
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRasterBlock::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CRasterBlock::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CRasterBlock::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterBlockProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getWidth();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getHeight();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getBandCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->getDataType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataType_EVRasterDataType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getPixelValue(bandIndex, offset);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getPixelValue(bandIndex, offset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelValue_ev_real64_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getPixelValue(bandIndex, offset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setPixelValue(bandIndex, offset, value);
					else
						ptrNativeObject->setPixelValue(bandIndex, offset, value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setPixelValue_void_ev_int32_ev_int32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex, _in ev_int32 offset, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setPixelValue(bandIndex, offset, value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getNodataValue();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getNodataValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getNodataValue_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getNodataValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 nodataValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setNodataValue(nodataValue);
					else
						ptrNativeObject->setNodataValue(nodataValue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setNodataValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 nodataValue )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setNodataValue(nodataValue);
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32(void *pObjectXXXX, _in ev_int32 bandIndex )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataRef(bandIndex);
						return objXXXX;
					}
					else
					{
						ev_byte* objXXXX = ptrNativeObject->getDataRef(bandIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataRef_ev_byte_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 bandIndex )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getDataRef(bandIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterBlock*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterBlock*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_clone_IRasterBlock_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::IRasterBlock* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setDefaultValue(value);
					else
						ptrNativeObject->setDefaultValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setDefaultValue_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::setDefaultValue(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::createValidMask();
					else
						ptrNativeObject->createValidMask();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_createValidMask_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::createValidMask();
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					if (dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*)ptrNativeObject) != NULL)
					{
						ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getValidMaskDataRef();
						return objXXXX;
					}
					else
					{
						ev_byte* objXXXX = ptrNativeObject->getValidMaskDataRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getValidMaskDataRef_ev_byte_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_byte* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterBlock::getValidMaskDataRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPixelHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getPixelWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPixelWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->setSpatialReference(pSpatialRef);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getGeoEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getGeoEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getGeoTransform_CAffineTransform(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->getGeoTransform();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setGeoTransform_void_CAffineTransform(void *pObjectXXXX, _in const void* tranform )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->setGeoTransform(*(EarthView::World::Spatial2D::Raster::CAffineTransform*)tranform);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getDataset_IRasterDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setDataset_void_IRasterDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IRasterDataset* pDataset )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->setDataset(pDataset);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getRasterBandIndex_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getRasterBandIndex(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setRasterBandIndex_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 index, _in ev_int32 bandIndex )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->setRasterBandIndex(index, bandIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_setRasterResampleType_void_ev_int32(void *pObjectXXXX, _in ev_int32 resampleIndex )
				{
					EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ptrNativeObject->setRasterResampleType(resampleIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterBlock_getRasterResampleType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterBlock* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getRasterResampleType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream_Callback* pCallback )
				{
					CRasterBlockProxy* ptr = dynamic_cast<CRasterBlockProxy*>((EarthView::World::Spatial2D::Raster::CRasterBlock*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterBlock_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
