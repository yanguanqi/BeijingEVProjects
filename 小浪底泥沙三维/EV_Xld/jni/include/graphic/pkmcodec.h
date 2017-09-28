#ifndef __PKMCodec_H__
#define __PKMCodec_H__

#include "graphic/imagecodec.h"

using namespace EarthView::World::Core;

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CImage;
            /**** CCodec specialized in loading DDS (Direct Draw Surface) images.
            @remarks
            	We implement our own codec here since we need to be able to keep DXT
            	data compressed if the card supports it.
            ****/
            class EV_GRAPHIC_DLL CPKMCodec : public CImageCodec
            {
			public:
				CPKMCodec();

				virtual ~CPKMCodec() { }


				//// @copydoc CCodec::code
				/****DataStreamPtr code(MemoryDataStreamPtr& input, CodecDataPtr& pData) const;****/
				DataStreamPtr code(MemoryDataStreamPtr& input, CodecDataPtr& pData) const;
				//// @copydoc CCodec::codeToFile
				void codeToFile(MemoryDataStreamPtr& input, const EVString& outFileName, CodecDataPtr& pData) const;
				//// @copydoc CCodec::decode
				DecodeResult decode(DataStreamPtr& input) const;
				//// @copydoc CCodec::magicNumberToFileExt
				EVString magicNumberToFileExt(const ev_char *magicNumberPtr, ev_size_t maxbytes) const;

				virtual EVString getType() const;        

				//// Static method to startup and register the DDS codec
				static void startup();
				//// Static method to shutdown and unregister the DDS codec
				static void shutdown();

            private:
                EVString mType;
                ev_uint32 mFreeImageType;

				ev_void writeBigEndianTwoByte(ev_uint16 twoBytes, ev_uchar * destBytes) const;
				ev_void readBigEndianTwoByte(const ev_uchar* destBytes, ev_uint16& twoBytes) const;
				ev_bool convertToRGB888(MemoryDataStreamPtr& input, CCodec::CodecDataPtr& pData, ev_uchar*& outRGB888) const;
				ev_void genPKMHeader(ev_byte* pkmHeader, ev_uint16 width, ev_uint16 height) const;

                //// Single registered codec instance
                static CPKMCodec* msInstance;
            ev_private:
                CPKMCodec(_in CNameValuePairList* pList);

            };
        }
    }
}
#endif
