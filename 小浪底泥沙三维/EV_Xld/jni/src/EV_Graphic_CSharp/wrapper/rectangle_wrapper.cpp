/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rectangle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_Rectangle_left( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rectangle* ptrNativeObject = (EarthView::World::Graphic::Rectangle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->left;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rectangle_left( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::Rectangle*)pObjectXXXX)->left = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_Rectangle_top( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rectangle* ptrNativeObject = (EarthView::World::Graphic::Rectangle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->top;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rectangle_top( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::Rectangle*)pObjectXXXX)->top = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_Rectangle_right( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rectangle* ptrNativeObject = (EarthView::World::Graphic::Rectangle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->right;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rectangle_right( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::Rectangle*)pObjectXXXX)->right = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_Rectangle_bottom( void *pObjectXXXX )
			{
				EarthView::World::Graphic::Rectangle* ptrNativeObject = (EarthView::World::Graphic::Rectangle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->bottom;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_Rectangle_bottom( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::Rectangle*)pObjectXXXX)->bottom = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_Rectangle_inside_ev_bool_Real_Real(void *pObjectXXXX, _in Real x, _in Real y )
			{
				const EarthView::World::Graphic::Rectangle* ptrNativeObject = (EarthView::World::Graphic::Rectangle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->inside(x, y);
				return objXXXX;
			}
		}
	}
}
