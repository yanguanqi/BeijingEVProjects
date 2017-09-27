#ifndef _COMMON_SCENE_QUERY_LISTENER_H
#define _COMMON_SCENE_QUERY_LISTENER_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"

#include "graphic/scenequery.h"
#include "globecontrol/globeselection.h"
#include "spatialgui/guievent.h"
#include "globecontrol/guieventhandlers.h"
//

//

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{	
			namespace Controls
			{
				class C3DControl;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				class EV_GLOBECONTROL_DLL ICommonSceneQueryListener : public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					ICommonSceneQueryListener();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~ICommonSceneQueryListener();

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					ICommonSceneQueryListener(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">选择集</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl,_in EarthView::World::Spatial3D::CGlobeSelection& result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(_in EarthView::World::Graphic::RaySceneQueryResult& result);	

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl,_in EarthView::World::Graphic::RaySceneQueryResult& result);	

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景查询选择集</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl,_in EarthView::World::Graphic::SceneQueryResult& result);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线查询结果集记录</param>
					/// <param name="newMatrix">世界变换矩阵</param>
					/// <param name="type">类型标识</param>
					/// <returns></returns>	
					virtual void onSelectedObjectMoved(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl,_in EarthView::World::Graphic::RaySceneQueryResultEntry& entry, _in const EarthView::World::Spatial::Math::CMatrix4& newMatrix, _in EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type);

					/// <summary>
					/// 按下删除键处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual void onDeleteKeyPressed();
				};
			}
		}
	}
}


#endif


