#ifndef _CROSSWIDGET_H_
#define _CROSSWIDGET_H_

#include "globecontrol/evglobecontrol_config.h"
#include "graphic/overlayelement.h"
#include "core/stringdefines.h"
#include "globecontrol/widget.h"

class CCenterCrossOverlayElement;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CPanelOverlayElement;
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				/// <summary>
				/// 窗口中心十字叉，目前没有使用
				/// </summary>
				class EV_GLOBECONTROL_DLL CCrossWidget:public EarthView::World::Spatial3D::Controls::CWidget
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <returns></returns>
					CCrossWidget(_in const EVString& name);					
				ev_private:
					CCrossWidget(_in EarthView::World::Core::CNameValuePairList* pList);
				ev_internal:
					friend class CWidgetManager;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CCrossWidget();
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CCrossWidget(_in const CCrossWidget& rhs)
						:CWidget(rhs)
					{

					}
					/// <summary>
					/// 赋值运算符
					/// </summary>
					/// <returns></returns>
					void operator = (_in const EarthView::World::Spatial3D::Controls::CCrossWidget& rhs)
					{

					}

					EarthView::World::Graphic::CPanelOverlayElement* mPanel;
ev_private:
					CCenterCrossOverlayElement* mCenterCross;

				};
			}
		}
	}
}
#endif
