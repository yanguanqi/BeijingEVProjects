/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/billboard3dsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CBillboard3DSymbolProxy : public EarthView::World::Spatial::Display::CBillboard3DSymbol
				{
				private:
					EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback;
				public:
					CBillboard3DSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CBillboard3DSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol(EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString(EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CBillboard3DSymbol::setImage(index, imageID, stream);
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getSymbolType();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CBillboard3DSymbol::toStream(stream);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::clone();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::equal(pSymbol);
					}
					virtual ev_bool similar(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::similar(pSymbol);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CBillboard3DSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CBillboard3DSymbol::fromStream(stream);
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getFontColor();
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getFontOutlineColor();
					}
					virtual void setFontOutlineColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback(color);
						}
						else
							return this->CBillboard3DSymbol::setFontOutlineColor(color);
					}
					virtual void setFontColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback(color);
						}
						else
							return this->CBillboard3DSymbol::setFontColor(color);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CBillboard3DSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CBillboard3DSymbol::setColor(color);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::toSLD();
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CBillboard3DSymbol::fromSLD(sld);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CBillboard3DSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CBillboard3DSymbolProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getBillboardOriginType_EVBillboardOriginType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVBillboardOriginType objXXXX = ptrNativeObject->getBillboardOriginType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setBillboardOriginType_void_EVBillboardOriginType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setBillboardOriginType((EarthView::World::Spatial::Display::EVBillboardOriginType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getBillboardWidth_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getBillboardWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setBillboardWidth_void_ev_real32(void *pObjectXXXX, _in ev_real32 w )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setBillboardWidth(w);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getBillboardHeight_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getBillboardHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setBillboardHeight_void_ev_real32(void *pObjectXXXX, _in ev_real32 h )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setBillboardHeight(h);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getPictureID_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPictureID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setPictureID_void_EVString(void *pObjectXXXX, _in const char* id )
				{
					EarthView::World::Core::ev_string id1 = id;
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPictureID(id1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::hasImage();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasImage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_hasImage_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::hasImage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImageCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getImageCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImageCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImageID(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getImageID(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageID_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImageID(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					else
						ptrNativeObject->setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getPictureScale_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPictureScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setPictureScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 scale )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPictureScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getLiedown_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLiedown();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setLiedown_void_ev_bool(void *pObjectXXXX, _in ev_bool liedown )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setLiedown(liedown);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getPictureAngle_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPictureAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setPictureAngle_void_ev_real32(void *pObjectXXXX, _in ev_real32 angle )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPictureAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getPictureAngleField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPictureAngleField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setPictureAngleField_void_EVString(void *pObjectXXXX, _in const char* paf )
				{
					EarthView::World::Core::ev_string paf1 = paf;
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPictureAngleField(paf1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getShowPicture_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getShowPicture();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setShowPicture_void_ev_bool(void *pObjectXXXX, _in ev_bool bShow )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setShowPicture(bShow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getImageDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getImageDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setImageDirty_void_ev_bool(void *pObjectXXXX, _in ev_bool dirty )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setImageDirty(dirty);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getPicTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPicTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setPicTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 t )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPicTransparency(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_setDownToGround_void_ev_bool(void *pObjectXXXX, _in ev_bool downToGround )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->setDownToGround(downToGround);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getDownToGround_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDownToGround();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::similar(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->similar(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_similar_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::similar(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CBillboard3DSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CBillboard3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CBillboard3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getFontOutlineColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontOutlineColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setFontColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CBillboard3DSymbolProxy* ptr = dynamic_cast<CBillboard3DSymbolProxy*>((EarthView::World::Spatial::Display::CBillboard3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CBillboard3DSymbol_fromSLD_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
