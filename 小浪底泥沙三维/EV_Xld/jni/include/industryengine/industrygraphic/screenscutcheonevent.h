#ifndef  _SCREENSCUTCHEONEVENT_H
#define _SCREENSCUTCHEONEVENT_H

#include "industrygraphic_cfg.h"
#include "core/event.h"


namespace EarthView
{
    namespace IndustryEngine
    {
        namespace IndustryGraphic
        {

            class CScreenScutcheon;
            class  EV_INDUSTRYGRAPHIC_DLL CScreenScutcheonEvent : public EarthView::World::Core::CEvent
            {
                friend class CScreenScutcheonHandler;

ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                CScreenScutcheonEvent(EarthView::World::Core::CNameValuePairList *pList);

            public:

                enum EVScreenScutcheonEventType
                {
                    STET_MouseDown = 8010,
                    STET_MouseMove,
                    STET_MouseUp,
                    STET_KeyDown,
                    STET_KeyUp,
                    STET_Selected,
                    STET_MouseWheel
                };

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="type">事件类型</param>
                CScreenScutcheonEvent(ev_uint16 type);

                /// <summary>
                /// 析构函数
                /// </summary>
                ~CScreenScutcheonEvent();

                /// <summary>
                /// 获取已选择的屏幕标牌
                /// </summary>
                /// <returns>屏幕标牌对象 </returns>	
                EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* getSelectedScreenScutcheon();

                /// <summary>
                /// 设置选择的屏幕标牌
                /// </summary>
                /// <param name="scutcheon">屏幕标牌对象 </param>
                void setSelectedScreenScutcheon(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* scutcheon);

                /// <summary>
                ///获取鼠标X坐标
                /// </summary>
                /// <returns>X坐标值 </returns>	
                int getX();

                /// <summary>
                ///获取鼠标Y坐标
                /// </summary>
                /// <returns>Y坐标值 </returns>	
                int getY();

            protected:

                void setX(const int& x);
                void setY(const int& y);
                int mX;
                int mY;
                static EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* mpSelectedScreenScutcheon;
            };
        }
    }
}


#endif

