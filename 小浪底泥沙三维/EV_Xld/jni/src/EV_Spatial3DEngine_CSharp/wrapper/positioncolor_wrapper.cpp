/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/positioncolor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CPositionColor_Position( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPositionColor*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->Position;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CPositionColor_Position( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjectXXXX)->Position = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CPositionColor_Color( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPositionColor* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPositionColor*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->Color;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CPositionColor_Color( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CPositionColor*)pObjectXXXX)->Color = *(EarthView::World::Graphic::CColourValue*)value;
				}
			}
		}
	}
}
