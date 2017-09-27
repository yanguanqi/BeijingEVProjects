/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effecttype.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChildNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getChildNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getChild_CEffectUserTypeTree_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* objXXXX = ptrNativeObject->getChild(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfoNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectInfoNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getEffectInfo_CEffectInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->getEffectInfo(index);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_getInfo_CEffectUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo objXXXX = ptrNativeObject->getInfo();
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_setInfo_void_CEffectUserTypeInfo(void *pObjectXXXX, _in void* typeInfo )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					ptrNativeObject->setInfo(*(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*)typeInfo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeTree_addChild_void_CEffectUserTypeTree(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ref_node )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) pObjectXXXX;
					ptrNativeObject->addChild(ref_node);
				}
			}
		}
	}
}
