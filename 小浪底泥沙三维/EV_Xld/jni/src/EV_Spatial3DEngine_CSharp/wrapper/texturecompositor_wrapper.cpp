/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/texturecompositor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTextureCompositor_thumbImage_void_EarthView_World_Core_ev_wstring_EarthView_World_Core_ev_wstring(void *pObjectXXXX, _in const ev_wchar* path, _in const ev_wchar* imagefilename )
			{
				EarthView::World::Core::ev_wstring path1 = path;
				EarthView::World::Core::ev_wstring imagefilename1 = imagefilename;
				EarthView::World::Spatial3D::CTextureCompositor* ptrNativeObject = (EarthView::World::Spatial3D::CTextureCompositor*) pObjectXXXX;
				ptrNativeObject->thumbImage(path1, imagefilename1);
			}
		}
	}
}
