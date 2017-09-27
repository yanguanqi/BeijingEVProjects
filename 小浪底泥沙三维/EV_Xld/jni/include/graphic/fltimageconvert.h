#ifndef _FLT_IMAGE_CONVERT_H_
#define _FLT_IMAGE_CONVERT_H_
#include "graphic/graphic_config.h"
#include "image.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class EV_GRAPHIC_DLL CFltImageConvert : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				CFltImageConvert(EarthView::World::Core::CNameValuePairList *pList);
			public:
				CFltImageConvert();
				~CFltImageConvert();
				// 外部需自己判断 该函数只转换 rgb rgba，sgi int inta bw六种图片
				ev_void convertImage(const EVString& file, CImage& img);
			protected:
				ev_void convertRGBStreamToImage(std::istream& fin, CImage& img);
			};
		}
	}
}

#endif