#ifndef	EARTHVIEW_WORLD_SPATIAL_SYSTEMUI_CHARTENTRYBOXSYMBOLTYPE3D_H
#define EARTHVIEW_WORLD_SPATIAL_SYSTEMUI_CHARTENTRYBOXSYMBOLTYPE3D_H
#include "spatialchartproxy/chartentrybox_api.h"
#include "spatialgui/ientrybox.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				/// <summary>
				/// 场景命令类
				/// </summary>
				class CGlobeCommand;
				/// <summary>
				/// 场景控件类
				/// </summary>
				class CGlobeControl;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				/// <summary>
				/// 三维海图符号样式组合框
				/// </summary>
				class EVCHARTENTRYBOX_API CChartEntryBoxSymbolType3D
					:public EarthView::World::Spatial::SystemUI::IEntryBox
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CChartEntryBoxSymbolType3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CChartEntryBoxSymbolType3D();
				public:
					/// <summary>
					/// 获取命令项所属的工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const;
					/// <summary>
					/// 获取相应命令项的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取命令项的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取命令项所属类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>类别</returns>
					virtual EVString getCategory() const;
					/// <summary>
					/// 工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>提示信息</returns>
					virtual EVString getToolTip() const;
					/// <summary>
					/// 命令项的显示图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;
					/// <summary>
					/// 判断命令项是否支持"按下"状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果支持"按下"则返回true,反之则否</returns>
					virtual ev_bool isCheckable() const;
					/// <summary>
					/// 当命令项按钮被点击的时候,调用该方法
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();
					/// <summary>
					/// 获取命令项是否被按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果命令项被按下了则返回true,反之则否</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 设置命令项是否按下
					/// </summary>
					/// <param name="checked">如果为true,则命令项被按下,反之则否</param>
					/// <returns></returns>
					virtual ev_void setChecked( _in ev_bool checked );
					/// <summary>
					/// 获取命令项是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果命令项可用则返回true,反之则否</returns>
					virtual ev_bool getEnabled() const;
					/// <summary>
					/// 设置命令项是否可用
					/// </summary>
					/// <param name="enabled">如果为true,则设置该命令项可用,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEnabled( _in ev_bool enabled );
					/// <summary>
					/// 使命令项与指定的控件相关联
					/// </summary>
					/// <param name="ctrl">待关联的控件</param>
					/// <returns></returns>
					virtual ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ctrl );
					/// <summary>
					/// 当有事件被触发时,会调用该方法
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>如果状态发生变化则返回true,反之则否</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );
					/// <summary>
					/// 获取组合项中条目的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>条目数量</returns>
					virtual ev_uint32 getEntryCount() const;
					/// <summary>
					/// 获取指定的条目
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual EVString getEntry( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取当前的索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>索引</returns>
					virtual ev_int32 getCurrentIndex() const;
					/// <summary>
					/// 当前的索引发生变化时,会调用该方法
					/// </summary>
					/// <param name="index">新的当前索引</param>
					/// <returns></returns>
					virtual ev_void currentIndexChanged( _in ev_uint32 index );
				ev_private:
					CChartEntryBoxSymbolType3D(_in EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_vector<EarthView::World::Spatial3D::Controls::CGlobeCommand*> mlistCommand;
					ev_bool mbEnabled;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpControl;
					ev_int32 mnCurrentIndex;
					C_DISABLE_COPY( CChartEntryBoxSymbolType3D );
				};
			}
		}
	}
}
#endif


