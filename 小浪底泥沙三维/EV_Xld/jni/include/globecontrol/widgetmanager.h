#ifndef _WIDGETMANAGER_H_
#define _WIDGETMANAGER_H_

#include "globecontrol/evglobecontrol_config.h"

#include "core/stringdefines.h"
#include "core/stdheaders.h"

#include "ga/guieventhandler.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class COverlay;
			class CSceneManager;
			class CViewport;
		}

		namespace Spatial3D
		{
			namespace Controls
			{
				class CWidget;

				class EV_GLOBECONTROL_DLL CWidgetList : public EarthView::World::Core::CBaseObject
				{	
ev_private:
					typedef vector<EarthView::World::Spatial3D::Controls::CWidget*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CWidgetList::iterator insert(_in CWidgetList::iterator pos, _in CWidget *const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWidgetList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWidgetList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial3D::Controls::CWidget *const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Controls::CWidget*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Controls::CWidget*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::Controls::CWidget *const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Controls::CWidget*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Controls::CWidget *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Controls::CWidget*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Controls::CWidget *const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				/// <summary>
				/// 抽象场景表层部件管理器
				/// </summary>
				class EV_GLOBECONTROL_DLL CWidgetManager:public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
					//typedef EarthView::World::Core::vector<EarthView::World::Spatial3D::Controls::CWidget*> EarthView::World::Spatial3D::Controls::CWidgetList;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CWidgetManager(_in const EVString& name,EarthView::World::Graphic::CViewport* ref_viewport);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CWidgetManager();
					/// <summary>
					/// 设置场景管理器
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <returns></returns>
					ev_void setSceneManager(_in EarthView::World::Graphic::CSceneManager* ref_sceneManager);
					/// <summary>
					/// 显示窗口部件
					/// </summary>
					/// <returns></returns>
					ev_void show();
					/// <summary>
					/// 隐藏窗口部件
					/// </summary>
					/// <returns></returns>
					ev_void hide();
					/// <summary>
					/// 对窗口部件进行排序
					/// </summary>
					/// <returns></returns>
					ev_void sort();
					/// <summary>
					/// 增加窗口部件
					/// </summary>
					/// <param name="widget">窗口部件</param>
					/// <returns></returns>
					ev_void addWidget(_in EarthView::World::Spatial3D::Controls::CWidget* ref_widget);
					/// <summary>
					/// 移除窗口部件
					/// </summary>
					/// <param name="widget">窗口部件</param>
					/// <returns></returns>
					ev_void removeWidget(_in EarthView::World::Spatial3D::Controls::CWidget* widget);
					/// <summary>
					/// 移除窗口部件
					/// </summary>
					/// <param name="widgetName">窗口部件的名字</param>
					/// <returns></returns>
					ev_void removeWidget(_in const EVString& widgetName);
					/// <summary>
					/// 获取窗口部件
					/// </summary>
					/// <param name="widgetName">窗口部件的名字</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CWidget* getWidget(_in const EVString& widgetName);
					/// <summary>
					/// 获取窗口部件的名字
					/// </summary>
					/// <returns></returns>
					EVString getName();
					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标双击事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标按键按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理鼠标按键松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理处定义事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);

ev_private:
					CWidgetManager(_in EarthView::World::Core::CNameValuePairList* pList);
				ev_internal:
					/// <summary>
					/// 挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CWidgetManager(_in const EarthView::World::Spatial3D::Controls::CWidgetManager& rhs)
					{

					}
					/// <summary>
					/// 赋值运逄符
					/// </summary>
					/// <returns></returns>
					ev_void operator =(_in const EarthView::World::Spatial3D::Controls::CWidgetManager& rhs)
					{

					}

					EarthView::World::Spatial3D::Controls::CWidgetList mWidgetList;
					EVString mName;
					EarthView::World::Graphic::CViewport* mviewport;
					EarthView::World::Graphic::COverlay* mOverlayLayer;
				};
			}
		}
	}
}
#endif
