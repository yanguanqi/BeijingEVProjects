#ifndef __GLOBENODETRACKANIMATIONSTARTEVENT_H__
#define __GLOBENODETRACKANIMATIONSTARTEVENT_H__

#include "industryengine/dynamicmodellibrary/dynamicobjectevent.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 轨迹动画开始事件
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CGlobeNodeTrackAnimationStartEvent : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent
			{
			public:
				/// <summary>
				/// 轨迹动画开始事件构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="dynamicModelObjectName">与该事件关联的动态目标名称</param>
				/// <param name="timePosition">事件发生的时间</param>
				CGlobeNodeTrackAnimationStartEvent(_in const EVString& name,_in const EVString& dynamicModelObjectName,_in Real timePosition); 
				/// <summary>
				/// 轨迹动画事件析构函数
				/// </summary>
				virtual ~CGlobeNodeTrackAnimationStartEvent(); 
				/// <summary>
				/// 到达事件发生之前触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="islooping">是否将要进入动画循环</param>
				virtual ev_void beforeEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager,Real curAnimationTime,ev_bool islooping);
				/// <summary>
				/// 到达事件发生点之后触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="isEnd">动画是否结束</param>
				virtual ev_void afterEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager,Real curAnimationTime,ev_bool isEnd);
				/// <summary>
				/// 重置事件
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual ev_void resetEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager);

ev_private:
				CGlobeNodeTrackAnimationStartEvent(_in EarthView::World::Core::CNameValuePairList *pList);

			};  //end class CGlobeNodeTrackAnimationStartEvent

		}//end namespace 
	}//end namespace 
}


#endif

