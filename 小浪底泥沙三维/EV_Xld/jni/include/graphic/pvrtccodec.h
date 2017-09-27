#ifndef __PVRTCCodec_H__
#define __PVRTCCodec_H__
#include "graphic/graphic_config.h"
#include "imagecodec.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /**** CCodec specialized in loading PVRTC (PowerVR) images.
            @remarks
            	We implement our own codec here since we need to be able to keep PVRTC
            	data compressed if the card supports it.
            ****/
            class EV_GRAPHIC_DLL CPVRTCCodec : public EarthView::World::Graphic::CImageCodec
            {
            ev_private:
                CPVRTCCodec(EarthView::World::Core::CNameValuePairList *pList);
            protected:
                EVString mType;
                void flipEndian(void *pData, ev_size_t size, ev_size_t count) const;
                void flipEndian(void *pData, ev_size_t size) const;
                //// Single registered codec instance
                static CPVRTCCodec *msInstance;
            public:
                CPVRTCCodec();
                virtual ~CPVRTCCodec() { }
                //// @copydoc CCodec::code
                EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr &input, EarthView::World::Graphic::CCodec::CodecDataPtr &pData) const;
                //// @copydoc CCodec::codeToFile
                void codeToFile(EarthView::World::Core::MemoryDataStreamPtr &input, const EVString &outFileName, EarthView::World::Graphic::CCodec::CodecDataPtr &pData) const;
                //// @copydoc CCodec::decode
                EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr &input) const;
                //// @copydoc CCodec::magicNumberToFileExt
                EVString magicNumberToFileExt(const ev_char *magicNumberPtr, ev_size_t maxbytes) const;

                virtual EVString getType() const;

                //// Static method to startup and register the PVRTC codec
                static void startup();
                //// Static method to shutdown and unregister the PVRTC codec
                static void shutdown();
            };
        }
    }
}

#endif

