#ifndef __ITOOLBAR_H_
#define __ITOOLBAR_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/ibitmap.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialControl;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				enum EV_ToolBarType
				{
					/// 二维工具栏 1－－200 /////
					TBT_Roam_2D				=	1,
					TBT_Query_2D			=	2,			// 二维图查属性
					TBT_Attribute_2D		=	4,			// 二维属性查图
					TBT_Measure_2D			=	8,
					TBT_Editing_2D			=	16,
					TBT_NewGeometry_2D		=	32,
					TBT_AdvancedEditing_2D  =	33,
					TBT_NetworkAnalyst_2D	=	64,
					TBT_GeoCorrection_2D	=	128,

					TBT_ChartTool			=	256,
					///	三维工具栏 201－－400 ////
					TBT_Measure_3d			=	512,
					TBT_Query_3d			=	1024,		// 三维图查属性
					TBT_Attribute_3d		=	2048,		// 三维属性查图
					TBT_ModelLayerSelection =   2049,       // 三维模型图层点选
					TBT_Analyse_3d			=	4096,
					TBT_Editing_3d			=	8192,
					TBT_FlyProperty_3d		=	16384,

					TBT_ChartTool_3d		=	32768,

					/// 自定义 401 －－－ /////
					TBT_Custom				=	65536,
					TBT_Roam_2D_InPage = 65537,
					TBT_Skim_Layout,
					TBT_Element_Layout,
					TBT_Element_Operation,
					TBT_Output_Layout,
					
					TBT_StreetViewTool_3d,
				};
				class ICommand;
				class IItem;
				class IEntryBox;
				class IToolButton;
				
				class EV_SPATIALGUI_DLL IToolBar : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~IToolBar();

				public:
					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取工具栏名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 设置工具栏名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					virtual ev_void setName( _in const EVString& name );
					/// <summary>
					/// 检测工具栏是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可用则返回true,反之则否</returns>
					virtual ev_bool isEnabled() const;
					/// <summary>
					/// 设置工具栏是否可用
					/// </summary>
					/// <param name="enable">如果为true,则工具栏可用,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEnabled( ev_bool enable );
					/// <summary>
					/// 检测工具栏是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可视则返回true,反之则否</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置工具栏是否可视
					/// </summary>
					/// <param name="visible">如果为true则工具栏可视,反之则否</param>
					/// <returns></returns>
					virtual ev_void setVisible( _in ev_bool visible );
					/// <summary>
					/// 获取显示项数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					virtual ev_uint32 getItemCount() const;
					/// <summary>
					/// 移除指定索引处的显示项
					/// </summary>
					/// <param name="index">待移除的工具索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					virtual ev_bool removeItem( _in ev_uint32 index );
					/// <summary>
					/// 获取指定索引处的显示项
					/// </summary>
					/// <param name="index">显示项的索引</param>
					/// <returns>显示项</returns>
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem( _in ev_uint32 index ) const;
					/// <summary>
					/// 清空所有的显示项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clear();
					/// <summary>
					/// 追加命令项
					/// </summary>
					/// <param name="command">待追加的命令项</param>
					/// <returns></returns>
					virtual ev_bool appendItem( _in EarthView::World::Spatial::SystemUI::ICommand *ref_command );
					/// <summary>
					/// 插入命令项
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <param name="command">待插入的命令项</param>
					/// <returns></returns>
					virtual ev_bool insertItem( _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand *ref_command );
					/// <summary>
					/// 追加分隔符
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool appendSeperator();
					/// <summary>
					/// 插入分隔符
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns></returns>
					virtual ev_bool insertSeperator( _in ev_uint32 index );
					/// <summary>
					/// 将工具栏与指定的控件相关联
					/// </summary>
					/// <param name="ctrl">待关联的控件</param>
					/// <returns></returns>
					virtual ev_void connect( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
ev_private:
					IToolBar( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IToolBar )
ev_internal:
					IToolBar( ev_uint32 type );
				};
			}
		}
	}
}
#endif

