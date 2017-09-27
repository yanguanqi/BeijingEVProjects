#ifndef __DYNAMICMODELMANAGERLISTENER_H__
#define __DYNAMICMODELMANAGERLISTENER_H__


#include  "graphic/scenemanager.h"
#include  "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include  "industryengine/dynamicmodellibrary/dynamicmodelobject.h"
#include  "graphic/framelistener.h"



namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标管理器
			/// </summary>
			class CDynamicModelObjectManager;
			/// <summary>
			/// 动态目标管理器场景监听
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelManagerListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
			{

			public:
				/// <summary>
				/// 动态目标管理器场景监听构造函数
				/// </summary>
				/// <param name="ref_manager">动态目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				CDynamicModelManagerListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ref_manager); 
				/// <summary>
				/// 动态目标管理器场景监听析构函数
				/// </summary>
				virtual ~CDynamicModelManagerListener(); 
				/// <summary>
				/// 在每帧更新场景图前触发			
				/// </summary>				
				/// <returns></returns>
				virtual ev_void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);
ev_private:
				/// <summary>
				/// 动态目标管理器场景监听构造函数
				/// </summary>
				/// <param name="pList">参数列表</param>
				CDynamicModelManagerListener(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:	
				/// <summary>
				/// 更新航迹
				/// </summary>
				/// <param name="model">动态目标对象</param>
				/// <param name="source">动态目标管理器</param>
				/// <param name="camera">相机</param>
				virtual ev_void preUpdateSceneGraphRefreshTrackTrail(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* model,EarthView::World::Graphic::CSceneManager* source,EarthView::World::Graphic::CCamera* camera);
				/// <summary>
				/// 更新LOD状态
				/// </summary>
				/// <param name="model">动态目标对象</param>
				/// <param name="source">动态目标管理器</param>
				/// <param name="camera">相机</param>
				virtual ev_void preUpdateSceneGraphRefreshLodState(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* model,EarthView::World::Graphic::CSceneManager* source,EarthView::World::Graphic::CCamera* camera);
				/// <summary>
				/// 更新标牌
				/// </summary>
				/// <param name="model">动态目标对象</param>
				/// <param name="source">动态目标管理器</param>
				/// <param name="camera">相机</param>
				virtual ev_void preUpdateSceneGraphRefreshScutcheon(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* model,EarthView::World::Graphic::CSceneManager* source,EarthView::World::Graphic::CCamera* camera);

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* mDynamicModelObjectManager;
			private:
				ev_int16 mRefreshCounter;

			};  //end class CLodSceneManagerListener

		}//end namespace 
	}//end namespace 

}
#endif

