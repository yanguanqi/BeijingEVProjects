/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effectdbmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3DProxy::CEffectDBManager*  _stdcall EarthView_World_Spatial3DProxy_CEffectDBManager_getSingletonPtr_CEffectDBManager( )
			{
				EarthView::World::Spatial3DProxy::CEffectDBManager* objXXXX = EarthView::World::Spatial3DProxy::CEffectDBManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_Spatial3DProxy_CEffectDBManager_getStringInterface_CStringInterface_CEffectObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffectObject* obj )
			{
				EarthView::World::Spatial3DProxy::CEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CEffectDBManager*) pObjectXXXX;
				EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->getStringInterface(obj);
				return objXXXX;
			}
		}
	}
}
