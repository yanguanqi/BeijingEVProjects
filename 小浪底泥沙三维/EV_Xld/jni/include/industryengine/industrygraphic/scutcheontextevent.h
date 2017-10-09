#ifndef _SCUTCHEONTEXTEVENT_H_
#define _SCUTCHEONTEXTEVENT_H_

#include "industrygraphic_cfg.h"
#include "core/event.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CScutcheonText;
			/// <summary>
			/// 标牌事件对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CScutcheonTextEvent : public EarthView::World::Core::CEvent
			{
			public:
				enum ScutcheonTextEventType
				{
					STET_MouseDown = 8001,
					STET_MouseMove,
					STET_MouseUp,
					STET_KeyDown,
					STET_KeyUp,
					STET_Selected
				};
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CScutcheonTextEvent(EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="type">事件类型</param>
				CScutcheonTextEvent(ev_uint16 type);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CScutcheonTextEvent();

				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* getSelectedScutcheon();

				void setSelectedScutcheon(EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* scutcheon);
			protected:
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* mpSelectedScutcheon;
			};
		}
	}
}
#endif
