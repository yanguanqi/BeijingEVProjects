#ifndef __DYNAMICOBJECTEVENT_H__
#define __DYNAMICOBJECTEVENT_H__

#include "core/memoryallocatedobject.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include "mathengine/ev_math.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class CDynamicModelObject;
			class CDynamicModelObjectManager;
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标事件
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicObjectEvent : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 动态目标事件构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="dynamicModelObjectName">与该事件关联的动态目标名称</param>
				/// <param name="timePosition">事件发生的时间</param>
				CDynamicObjectEvent(_in const EVString& name,_in const EVString& dynamicModelObjectName,_in Real timePosition); 
				/// <summary>
				/// 动态目标事件析构函数
				/// </summary>
				virtual ~CDynamicObjectEvent(); 
				/// <summary>
				/// 到达事件发生之前触发
				/// </summary>
				/// <param name="manager">动目标管理器</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="islooping">是否将要进入动画循环</param>
				virtual ev_void beforeEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager,Real curAnimationTime,ev_bool islooping);
				/// <summary>
				/// 到达事件发生点之后触发
				/// </summary>
				/// <param name="manager">动目标管理器</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="isEnd">动画是否结束</param>
				virtual ev_void afterEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager,Real curAnimationTime,ev_bool isEnd);
				/// <summary>
				/// 重置事件
				/// </summary>
				/// <param name="manager">动目标管理器</param>
				virtual ev_void resetEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager);
				/// <summary>
				/// 设置事件发生的时间
				/// </summary>
				/// <param name="timePosition">事件发生的时间</param>
				virtual ev_void setTimePosition(Real timePosition);
				/// <summary>
				/// 获取事件发生的时间
				/// </summary>
				/// <returns>事件发生的时间</returns>
				virtual Real getTimePosition()const;
				/// <summary>
				/// 设置该事件是否被触发过
				/// </summary>
				/// <param name="fired">是否触发</param>
				virtual ev_void setIsFired(ev_bool fired);
				/// <summary>
				/// 获取该事件是否被触发过
				/// </summary>
				/// <returns>是否触发</returns>
				virtual ev_bool getIsFired()const;
				/// <summary>
				/// 在指定的时间点是否可以触发该事件
				/// </summary>
				/// <param name="timePosition">时间点</param>
				/// <returns>是否可以触发该事件</returns>
				virtual ev_bool canFired(Real timePosition);
				/// <summary>
				/// 获取事件名称
				/// </summary>
				/// <returns>事件名称</returns>
				virtual EarthView::World::Core::ev_string getName()const;
				/// <summary>
				/// 设置事件名称
				/// </summary>
				/// <param name="name">事件名称</param>
				virtual ev_void setName(const EVString& name);

			protected:
				/// <summary>
				/// 获取该事件是否被触发过
				/// </summary>
				ev_bool mIsFired;
				/// <summary>
				/// 事件名称
				/// </summary>
				EarthView::World::Core::ev_string mName;
				/// <summary>
				/// 与该事件关联的动态目标对象
				/// </summary>
				EarthView::World::Core::ev_string mDynamicModelObjectName;
				/// <summary>
				/// 事件发生的时间点
				/// </summary>
				Real mTimePosition;
ev_private:
				CDynamicObjectEvent(_in EarthView::World::Core::CNameValuePairList *pList);

			};  //end class CDynamicObjectEvent

		}//end namespace 
	}//end namespace 
}


#endif

