/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/symboltomaterial.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_colorToLineMaterial_CMaterialPtr_IColor_EVString_EVString(_in const EarthView::World::Spatial::Display::IColor* color, _inout char*& symbolName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string symbolName1 = symbolName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMaterialPtr objXXXX = EarthView::World::Geometry3D::CSymbolToMaterial::colorToLineMaterial(color, symbolName1, groupName1);
				symbolName=symbolName1.makeBuffer();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_CMaterialPtr_ISymbol_EVString(_in EarthView::World::Spatial::Display::ISymbol* symbol, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMaterialPtr objXXXX = EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr_CMaterialPtr(_in EarthView::World::Spatial::Display::ISymbol* symbol, _in const char* groupName, _inout void* topMaterial, _inout void* exteriorSideMaterial, _inout void* interiorSideMaterial )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName1, *(EarthView::World::Graphic::CMaterialPtr*)topMaterial, *(EarthView::World::Graphic::CMaterialPtr*)exteriorSideMaterial, *(EarthView::World::Graphic::CMaterialPtr*)interiorSideMaterial);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr_CMaterialPtr(_in EarthView::World::Spatial::Display::ISymbol* symbol, _in const char* groupName, _inout void* topMaterial, _inout void* exteriorSideMaterial )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName1, *(EarthView::World::Graphic::CMaterialPtr*)topMaterial, *(EarthView::World::Graphic::CMaterialPtr*)exteriorSideMaterial);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_createMaterial_void_ISymbol_EVString_CMaterialPtr(_in EarthView::World::Spatial::Display::ISymbol* symbol, _in const char* groupName, _inout void* topMaterial )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName1, *(EarthView::World::Graphic::CMaterialPtr*)topMaterial);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSymbolToMaterial_blankLineMaterial_CMaterialPtr_EVString(_in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMaterialPtr objXXXX = EarthView::World::Geometry3D::CSymbolToMaterial::blankLineMaterial(groupName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
