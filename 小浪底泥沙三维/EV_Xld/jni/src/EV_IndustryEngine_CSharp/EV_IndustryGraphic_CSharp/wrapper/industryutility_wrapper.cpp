/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/industryutility.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CIndustryUtility_createDefaultMaterial_CMaterialPtr_EVString_EVString(_in const char* name, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMaterialPtr objXXXX = EarthView::IndustryEngine::IndustryGraphic::CIndustryUtility::createDefaultMaterial(name1, groupName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
