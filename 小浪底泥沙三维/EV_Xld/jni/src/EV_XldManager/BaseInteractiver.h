#include "globecontrol\globecontrol.h"
#include "ga\guieventhandler.h"
#include "RenderLibDataType.h"
#include "AnalysisEventObject.h"
#ifndef BASEINTERACTIVER_H_
#define BASEINTERACTIVER_H_
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			namespace Base
			{
				class CBaseInteractiver : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				public:

					CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,ev_bool eventEnable[]);

					CBaseInteractiver(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

					~CBaseInteractiver();

					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent) override;

					vector<EarthView::World::Spatial::Math::CVector3*>* GetHandlePoints();
				protected:
					EarthView::World::Graphic::CTimer* mpTimer;
					ev_bool mIsDragging ;
					ev_bool mIsLoaded ;
					ev_bool mIsMouseDown ;
					EarthView::Xld::RenderLib::CMousePickState mMousePickState;
					EarthView::World::Spatial::Math::CVector2 mLastMouseDownScreenPos;
					ev_uint32 mLastMouseUpTime;
					EarthView::World::Core::CEventObject* mpEventObj;
					EarthView::World::Core::CEvent* mpEvent;
					/// <summary>
					/// 该对象指示鼠标上一次采点的地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mLastGeoPos;
					/// <summary>
					/// 该值指示鼠标当前采点的地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentGeoPos;
					EarthView::World::Spatial::Math::CVector3 mCenterWrdPos;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					EarthView::Xld::AnalysisTool::CAnalysisEventObject* mObejct;
					/// <summary>
					/// 该方法用于初始化其他的操作或参数
					/// </summary>
					virtual void InitializeOthers() {};
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					void Load();
					/// <summary>
					/// 该方法用于卸载交互事件
					/// </summary>
					void Unload();

					void SetInteractiveEnable(ev_bool mouseDown, ev_bool mouseUp, ev_bool mouseMove, ev_bool mouseDoubleClick);

					virtual bool HandleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					virtual bool HandleMouseDoubleClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

					/// <summary>
					/// 该方法用于处理采点信息,默认已添加点的拷贝，外部可正常释放
					/// </summary>
					/// <param name="vPos">该值指示鼠标操作采集的点信息，一般为地理坐标</param>
					virtual void HandlePoint(EarthView::World::Spatial::Math::CVector3* vPos);

					/// <summary>
					/// 该方法用于存储被处理的点
					/// </summary>
					/// <param name="handledPos">该值指示由HandlePoint处理的点</param>
					void EarthView::Xld::RenderLib::Base::CBaseInteractiver::AddPoint(EarthView::World::Spatial::Math::CVector3* handledPos);

					virtual void EndPickOver();

				private:
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					ev_bool mEvents[4];
					
					/// <summary>
					/// 该方法用于加载交互事件
					/// </summary>
					vector<EarthView::World::Spatial::Math::CVector3*> mHandlePoints;
				};
			}
		}
	}
}
#endif // BASEINTERACTIVER_H_


