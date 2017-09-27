/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilitiesserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeScript_void_CRenderSystemCapabilities_EVString_EVString(void *pObjectXXXX, _in const EarthView::World::Graphic::CRenderSystemCapabilities* caps, _in char* name, _in char* filename )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjectXXXX;
				ptrNativeObject->writeScript(caps, name1, filename1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_writeString_EVString_CRenderSystemCapabilities_EVString(void *pObjectXXXX, _in const EarthView::World::Graphic::CRenderSystemCapabilities* caps, _in char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->writeString(caps, name1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilitiesSerializer_parseScript_void_DataStreamPtr(void *pObjectXXXX, _inout void* stream )
			{
				EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilitiesSerializer*) pObjectXXXX;
				ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
		}
	}
}
