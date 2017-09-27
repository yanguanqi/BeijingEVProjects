#ifndef _ImageCodec_H__
#define _ImageCodec_H__
#include "graphic/graphic_config.h"
#include "codec.h"
#include "pixelformat.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /**** EarthView::World::Graphic::CCodec specialized in images.
                @remarks
                    The users implementing subclasses of CImageCodec are required to return
                    a valid pointer to a CImageData class from the decode(...) function.
            ****/
            class EV_GRAPHIC_DLL CImageCodec : public EarthView::World::Graphic::CCodec
            {
            ev_private:
                CImageCodec(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CImageCodec() {}

                virtual ~CImageCodec();
                /**** CCodec return class for images. Has information about the size and the
                    pixel format of the image. ****/
                class EV_GRAPHIC_DLL CImageData : public EarthView::World::Graphic::CCodec::CCodecData
                {
                public:
                    CImageData():
                        height(0), width(0), depth(1), size(0),
                        num_mipmaps(0), flags(0), format(PF_UNKNOWN)
                    {
                    }
                    ev_size_t height;
                    ev_size_t width;
                    ev_size_t depth;
                    ev_size_t size;

                    ev_uint16 num_mipmaps;
                    ev_uint32 flags;
                    EarthView::World::Graphic::PixelFormat format;
                public:
                    EVString dataType() const
                    {
                        return "CImageData";
                    }
				ev_private:
					CImageData(_in EarthView::World::Core::CNameValuePairList* pList):
						height(0), width(0), depth(1), size(0),
						num_mipmaps(0), flags(0), format(PF_UNKNOWN)
					{
					}
                };
            public:
                EVString getDataType() const
                {
                    return "CImageData";
                }
            };
        }
    }
}

#endif

