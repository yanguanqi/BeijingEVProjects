#ifndef __DYNAMICOBJECTEVENTMANAGER_H__
#define __DYNAMICOBJECTEVENTMANAGER_H__

#include "core/memoryallocatedobject.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"
#include "mathengine/ev_math.h"
#include "industryengine/dynamicmodellibrary/dynamicobjectevent.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标事件管理器
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicObjectEventManager : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 动态目标事件管理器构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_manager">动态目标管理器</param>
				CDynamicObjectEventManager(_in const EVString& name,_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* ref_manager); 
				/// <summary>
				/// 动态目标事件管理器析构函数
				/// </summary>
				virtual ~CDynamicObjectEventManager(); 

				/// <summary>
				/// 添加动态目标事件对象
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">动态目标事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual ev_void addDynamicObjectEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent); 
				/// <summary>
				/// 移除动态目标事件
				/// </summary>
				/// <param name="dynamicObjectEvent">动态目标事件</param>
				virtual ev_void removeDynamicObjectEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent); 
				/// <summary>
				/// 到达该时间点之前触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isLooping">动画是否将要进入循环状态</param>
				virtual ev_void beforeTimePosition(Real time,ev_bool isLooping);
				/// <summary>
				/// 到达该时间点之后触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isEnd">动画是否结束</param>
				virtual ev_void afterTimePosition(Real time,ev_bool isEnd);
				/// <summary>
				/// 重置事件
				/// </summary>
				virtual ev_void resetEvent();
				/// <summary>
				/// 设置动画时间
				/// </summary>
				/// <param name="time">动画时间</param>
				virtual ev_void setTimePosition(Real time);
				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				virtual const EVString& getName()const;
				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				virtual ev_void setName(const EVString& name);
ev_private:
				CDynamicObjectEventManager(_in EarthView::World::Core::CNameValuePairList *pList);
			protected:
				/// <summary>
				/// 动态目标管理器
				/// </summary>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* mDynamicModelObjectManager;
				/// <summary>
				/// 名称
				/// </summary>
				EVString mName;
				/// <summary>
				/// 动态目标事件集合
				/// </summary>
				set<EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *> mDynamicObjectEnents;
				/// <summary>
				/// 将要删除的事件集合
				/// </summary>
				set<EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent *> mRemovedDynamicObjectEvents;

			};  //end class CDynamicObjectEventManager

		}//end namespace 
	}//end namespace 
}


#endif

