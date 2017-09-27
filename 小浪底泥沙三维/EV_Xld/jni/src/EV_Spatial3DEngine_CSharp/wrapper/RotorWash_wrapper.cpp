/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/RotorWash.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_RotorWash_Update_void_CVector3_double(void *pObjectXXXX, _in const void* pPosition, _in double pVelocity )
			{
				EarthView::World::Spatial3D::RotorWash* ptrNativeObject = (EarthView::World::Spatial3D::RotorWash*) pObjectXXXX;
				ptrNativeObject->Update(*(EarthView::World::Spatial::Math::CVector3*)pPosition, pVelocity);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_RotorWash_GetPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::RotorWash* ptrNativeObject = (EarthView::World::Spatial3D::RotorWash*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->GetPosition();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  double  _stdcall EarthView_World_Spatial3D_RotorWash_GetVelocity_double(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::RotorWash* ptrNativeObject = (EarthView::World::Spatial3D::RotorWash*) pObjectXXXX;
				double objXXXX = ptrNativeObject->GetVelocity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_RotorWash_OceanDestroyed_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::RotorWash* ptrNativeObject = (EarthView::World::Spatial3D::RotorWash*) pObjectXXXX;
				ptrNativeObject->OceanDestroyed();
			}
		}
	}
}
