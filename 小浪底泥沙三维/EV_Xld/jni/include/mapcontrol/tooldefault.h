#ifndef TOOLDEFAULT_H
#define TOOLDEFAULT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/tool2d.h"
	
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class EV_MAPCONTROL_DLL CToolDefault : public EarthView::World::Spatial2D::Controls::CTool2D
				{
				public:
					
					CToolDefault();
					~CToolDefault();

					//成员函数
				public:
					//获得工具类型
					ev_uint32 getToolBarType() const;
					//获取类型
					ev_uint32 getType() const;
					//获取名称
					EVString getName() const;
					//获取目录
					EVString getCategory() const;
					//获取工具
					EVString getToolTip() const;
					//获取图标 
					EarthView::World::Display::IBitmap * getIcon() const;
					//是否能选择  
					ev_bool isCheckable() const;
					//鼠标点击
					ev_void onClicked();
					//活动事件
					ev_void activate();
					//活动事件结束
					ev_void deactivate();
					//获取鼠标光标
					ev_int32 getCursor();
					//更新
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				private:	
					ev_void init();

				ev_private:
					CToolDefault( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CToolDefault )
				};
			}
		}
	}
}

#endif // TOOLGETINFORMATION_H

