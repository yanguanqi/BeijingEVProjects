#ifndef _SPATIAL_CONTROL_H_
#define _SPATIAL_CONTROL_H_

#include "spatialgui/spatialguiconfig.h"

#include "spatialgui/iviewlistener.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{

				enum EVSpatialControlType
				{
					SCT_MapControl,
					SCT_GlobeControl,
					SCT_LayoutControl,
					SCT_Custom
				};
				class EV_SPATIALGUI_DLL ISpatialControl : public EarthView::World::Core::CAllocatedObject
				{
				public:
					ISpatialControl();
					virtual ~ISpatialControl();

				public: 
					/// <summary>
					/// 获取控件类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const;
					/// <summary>
					/// 获取控件的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取控件类型的字符串形式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getTypeString() const;
					/// <summary>
					/// 接收外部通知，刷新控件的视口区域
					/// </summary>
					/// <param name="args">视口参数</param>
					/// <returns></returns>
					virtual ev_void notifyViewChanged(EarthView::World::Spatial::IViewArgs* args);
					/// <summary>
					/// 添加视口监听
					/// </summary>
					/// <param name="externalListener">监听器</param>
					/// <returns></returns>
					virtual ev_bool addViewListener(EarthView::World::Spatial::IViewListener* ref_externalListener);
					/// <summary>
					/// 获取视口监听器的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					virtual ev_uint32 getViewListenerCount()const;
					/// <summary>
					/// 获取指定索引徙的视口监听对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::IViewListener* getViewListener(ev_uint32 index)const;
					/// <summary>
					/// 判断指定的监听是否存在
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns></returns>
					virtual ev_bool existViewListener(EarthView::World::Spatial::IViewListener* externalListener)const;
					/// <summary>
					/// 移除指定索引处的监听
					/// </summary>
					/// <param name="index">监听索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					virtual ev_bool removeViewListener(ev_uint32 index);
					/// <summary>
					/// 移除指定的监听
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					virtual ev_bool removeViewListener(EarthView::World::Spatial::IViewListener* externalListener);
					/// <summary>
					/// 清空所有的监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearViewListeners();

				protected:
					virtual void fireViewChanged(EarthView::World::Spatial::IViewArgs* args);//控件的视口区域发生变化时，发出的事件

				ev_private:
					ISpatialControl( EarthView::World::Core::CNameValuePairList *pList );
				protected:					
					C_DISABLE_COPY( ISpatialControl );

				protected:
					typedef list<EarthView::World::Spatial::IViewListener*> ViewListenerList;
					ViewListenerList mViewListeners;
				};
			}
		}
	}
}
#endif


