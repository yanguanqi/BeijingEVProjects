/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fltimageconvert.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFltImageConvert_convertImage_void_EVString_CImage(void *pObjectXXXX, _in const char* file, _inout void* img )
			{
				EarthView::World::Core::ev_string file1 = file;
				EarthView::World::Graphic::CFltImageConvert* ptrNativeObject = (EarthView::World::Graphic::CFltImageConvert*) pObjectXXXX;
				ptrNativeObject->convertImage(file1, *(EarthView::World::Graphic::CImage*)img);
			}
		}
	}
}
