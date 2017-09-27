#ifndef _FreeImageCodec_H__
#define _FreeImageCodec_H__
#include "graphic/graphic_config.h"
#include "imagecodec.h"
//// Forward-declaration to avoid external dependency on FreeImage
struct FIBITMAP;
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
			/*

                @remarks
                    The users implementing subclasses of CImageCodec are required to return
                    a valid pointer to a CImageData class from the decode(...) function.
            ****/
            class EV_GRAPHIC_DLL CFreeImageCodec : public EarthView::World::Graphic::CImageCodec
            {
            private:
                EVString mType;
                ev_uint32 mFreeImageType;
                typedef list<EarthView::World::Graphic::CImageCodec *> RegisteredCodecList;
                static RegisteredCodecList msCodecList;
                /** Common encoding routine. */
                FIBITMAP *encode(EarthView::World::Core::MemoryDataStreamPtr &input, EarthView::World::Graphic::CCodec::CodecDataPtr &pData) const;
            ev_private:
                CFreeImageCodec(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CFreeImageCodec(const EVString &type, ev_uint32 fiType);

                virtual ~CFreeImageCodec() { }
                //// @copydoc CCodec::code
                EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr &input, EarthView::World::Graphic::CCodec::CodecDataPtr &pData) const;
                //// @copydoc CCodec::codeToFile
                void codeToFile(EarthView::World::Core::MemoryDataStreamPtr &input, const EVString &outFileName, EarthView::World::Graphic::CCodec::CodecDataPtr &pData) const;
                //// @copydoc CCodec::decode
                EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr &input) const;

                virtual EVString getType() const;

                //// @copydoc CCodec::magicNumberToFileExt
                EVString magicNumberToFileExt(const ev_char *magicNumberPtr, ev_size_t maxbytes) const;
                //// Static method to startup FreeImage and register the FreeImage codecs
                static void startup();
                //// Static method to shutdown FreeImage and unregister the FreeImage codecs
                static void shutdown();
			ev_private:
				//将多个图片流合成一张图(PNG格式)
				static EarthView::World::Core::DataStreamPtr composite(list<EarthView::World::Core::DataStreamPtr>& images,ev_bool& error);
            };
        }
    }
}
#endif

