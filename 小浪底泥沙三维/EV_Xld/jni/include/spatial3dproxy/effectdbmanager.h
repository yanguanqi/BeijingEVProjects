#ifndef EFFECTDBMANAGER_H
#define EFFECTDBMANAGER_H

#include "spatial3dproxy/spatial3dproxy_config.h"
#include"core/memoryallocatedobject.h"
#include"spatial3dengine/spatial3dengineconfig.h"
#include "spatial3dproxy/effectinfopanelparam.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace EffectManager{
				class CEffectObject;
			}
		}
	}
};
namespace EarthView{
	namespace World{
		namespace Core{
			class CStringInterface ;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			class EV_SPATIAL3DPROXY_DLL CEffectDBManager : public EarthView::World::Core::CAllocatedObject
			{

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CEffectDBManager(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				CEffectDBManager();

			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				virtual ~CEffectDBManager();

				/// <summary>
				/// 获取EarthView::World::Spatial3DProxy::CEffectDBManager对象指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3DProxy::CEffectDBManager对象指针</returns>	
				static EarthView::World::Spatial3DProxy::CEffectDBManager* getSingletonPtr();

				/// <summary>
				/// 获取特效对象obj的EarthView::World::Core::CStringInterface
				/// </summary>
				/// <param name="obj">特效对象</param>
				/// <returns>EarthView::World::Core::CStringInterface</returns>	
				EarthView::World::Core::CStringInterface* getStringInterface(EarthView::World::Spatial3D::EffectManager::CEffectObject* obj);
			private:
				static EarthView::World::Spatial3DProxy::CEffectDBManager* mpSingletonPtr;
				EarthView::World::Spatial3DProxy::CEffectInfoPanelParam* mpEffectStringInterface;
			};
		}
	}
}

#endif
