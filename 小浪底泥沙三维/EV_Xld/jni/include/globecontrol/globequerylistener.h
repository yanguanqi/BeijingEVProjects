#ifndef _GLOBE_QUERY_LISTENER_H
#define _GLOBE_QUERY_LISTENER_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"

#include "graphic/scenequery.h"
#include "globecontrol/globeselection.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{	

			class RaySceneQueryResultSimple;
			namespace Controls
			{
				class CGlobeControl;
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

				/// <summary>
				/// 三维场景查询监听器基类
				/// </summary>
				class EV_GLOBECONTROL_DLL IGlobeQueryListener : public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 鼠标状态
					/// </summary>
					enum MouseOpType
					{
						MOT_MouseDown,
						MOT_MouseMove,
						MOT_MouseUp
					};
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					IGlobeQueryListener();
					/// <summary>
					/// 析构函数
					/// </summary>
					virtual ~IGlobeQueryListener();
ev_private:
					IGlobeQueryListener(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">所有三维图层选择集的集合</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);
					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线求交结果</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);					
					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景空间查询结果</param>
					/// <returns></returns>	
					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					/// <summary>
					/// 通知选中的物体被移动了
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线求交结果排序算子</param>
					/// <param name="newMatrix">物体新的世界变换矩阵</param>
					/// <param name="type">鼠标状态</param>
					/// <returns></returns>	
					virtual void onSelectedObjectMoved(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResultEntry& entry, const EarthView::World::Spatial::Math::CMatrix4& newMatrix, EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type);
					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线求交结果</param>
					/// <returns></returns>	
 					virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::RaySceneQueryResultSimple* result);
					
					/// <summary>
					/// Delete键按下事件处理
					/// </summary>
					/// <returns></returns>	
					virtual void onDeleteKeyPressed();
				};
			}
		}
	}
}


#endif


