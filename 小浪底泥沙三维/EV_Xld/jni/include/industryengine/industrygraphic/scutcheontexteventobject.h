#ifndef _SCUTCHEONTEXTEVENTOBJECT_H_
#define _SCUTCHEONTEXTEVENTOBJECT_H_

#include "industrygraphic_cfg.h"
#include "industryengine/industrygraphic/scutcheontextevent.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 标牌事件处理响应对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CScutcheonTextEventObject : public EarthView::World::Core::CEventObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CScutcheonTextEventObject(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				CScutcheonTextEventObject();

				/// <summary>
				/// 析构函数
				/// </summary>
				~CScutcheonTextEventObject();

				/// <summary>
				/// 鼠标按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onMouseDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);

				/// <summary>
				/// 鼠标移动响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onMouseMoveEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);

				/// <summary>
				/// 鼠标弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onMouseUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);

				/// <summary>
				/// 键盘按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onKeyDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);

				/// <summary>
				/// 键盘弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onKeyUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);

				/// <summary>
				/// 标牌选中响应事件
				/// </summary>
				/// <param name="e">事件</param>
				virtual bool onSelectedEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
ev_internal:
				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
			};
		}
	}
}
#endif

