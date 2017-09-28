#ifndef __DDSCodec_H__
#define __DDSCodec_H__
#include "graphic/graphic_config.h"
#include "imagecodec.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            //// Forward declarations
            struct DXTColourBlock;
            struct DXTExplicitAlphaBlock;
            struct DXTInterpolatedAlphaBlock;

            class CImage;
            /**** CCodec specialized in loading DDS (Direct Draw Surface) images.
            @remarks
            	We implement our own codec here since we need to be able to keep DXT
            	data compressed if the card supports it.
            ****/
            class EV_GRAPHIC_DLL CDDSCodec : public EarthView::World::Graphic::CImageCodec
            {
            private:
                EVString mType;
                ev_uint32 mFreeImageType;

                void flipEndian(void * pData, ev_size_t size, ev_size_t count) const;
                void flipEndian(void * pData, ev_size_t size) const;

                PixelFormat convertFourCCFormat(ev_uint32 fourcc) const;
                PixelFormat convertPixelFormat(ev_uint32 rgbBits, ev_uint32 rMask, 
                    ev_uint32 gMask, ev_uint32 bMask, ev_uint32 aMask) const;

                //// Unpack DXT colours into array of 16 colour values
                void unpackDXTColour(PixelFormat pf, const DXTColourBlock& block, CColourValue* pCol) const;
                //// Unpack DXT alphas into array of 16 colour values
                void unpackDXTAlpha(const DXTExplicitAlphaBlock& block, CColourValue* pCol) const;
                //// Unpack DXT alphas into array of 16 colour values
                void unpackDXTAlpha(const DXTInterpolatedAlphaBlock& block, CColourValue* pCol) const;
    	        //// convert to PF_BYTE_BGRA
    	        ev_bool convertToByteBGRA(EarthView::World::Core::MemoryDataStreamPtr& input, CCodec::CodecDataPtr& pData, ev_uchar*& outPixelBytes) const;

				////开源A卡驱动下，转换为PF_BYTE_BGRA或者PF_BYTE_BGR
    	        ev_bool convertToByteBGRAOrBGR(EarthView::World::Core::MemoryDataStreamPtr& input, CCodec::CodecDataPtr& pData, ev_uchar*& outPixelBytes, PixelFormat& pixFormat) const;

                //// Single registered codec instance
                static CDDSCodec* msInstance;
            ev_private:
                CDDSCodec(_in EarthView::World::Core::CNameValuePairList* pList);
            public:
                CDDSCodec();

                virtual ~CDDSCodec() { }

                //// @copydoc CCodec::code
                /****EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr& input, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const;****/
                EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr& input, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const;
                //// @copydoc CCodec::codeToFile
                void codeToFile(EarthView::World::Core::MemoryDataStreamPtr& input, const EVString& outFileName, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const;
                //// @copydoc CCodec::decode
                EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr& input) const;
				//// @copydoc CCodec::decode
				// hll, 2014/09/25
				// 解压dds，若 ignoreMipmap = true， 则只加码其0级mipmap
				EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr& input, ev_bool ignoreMipmap) const;
				//// @copydoc CCodec::magicNumberToFileExt
                EVString magicNumberToFileExt(const ev_char *magicNumberPtr, ev_size_t maxbytes) const;

                /****ev_bool toDDSImage(CImage* pImg)const;****/
                virtual EVString getType() const;        

                //// Static method to startup and register the DDS codec
                static void startup();
                //// Static method to shutdown and unregister the DDS codec
                static void shutdown();
				/// 提取dds流中数据格式
				static PixelFormat extractPixelFormat(EarthView::World::Core::DataStreamPtr& stream);

				EarthView::World::Core::DataStreamPtr encodeImage(EarthView::World::Core::MemoryDataStreamPtr& input, ev_int32 dxtFormat, EarthView::World::Graphic::CImageCodec::CImageData& imgData);

				EarthView::World::Core::DataStreamPtr resizeDDS(EarthView::World::Core::DataStreamPtr& stream, ev_uint32 newW, ev_uint32 newH) const;

			ev_private:
				EarthView::World::Core::DataStreamPtr encodeImage(void* gpImage, ev_int32 dxtFormat, EarthView::World::Graphic::CImageCodec::CImageData& imgData);
            };
        }
    }
}
#endif

