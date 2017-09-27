#ifndef __ICOMMAND_H_
#define __ICOMMAND_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/ibitmap.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialgui/itoolbar.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				enum EVCommandType
				{
					CT_Unknown,
					CT_Separator,
					//二维命令项		
					CT_FullExtent,
					CT_Refresh,
					CT_ClearSelection,
					CT_PreviousView,
					CT_NextView,
					CT_LocateCenter,
					CT_BeginBufferAnalysis,
					CT_CreateBuffer,
					CT_SelectInBuffer,
					CT_ClearBuffer,
					//编辑
					CT_Editor,
					CT_TaskBox,
					CT_EditingLayerBox,
					CT_StartEditing,
					CT_StopEditing,
					CT_SaveEdits,
					CT_Undo,
					CT_Redo,
					CT_AddVertex,
					CT_DeleteVertex,
					CT_FinishPart,
					CT_DeletePart,
					CT_FinishSketch,
					CT_DeleteFeature,
					CT_SketchProperty,
					//海图
					/// <summary>
					/// 基础显示模式
					/// </summary>
					CT_BaseView,
					/// <summary>
					/// 标准显示模式
					/// </summary>
					CT_Standard,
					/// <summary>
					/// 完全显示模式
					/// </summary>
					CT_All,
					/// <summary>
					/// 英语标注模式
					/// </summary>
					CT_EnglishLabel,
					/// <summary>
					/// 母语标注模式
					/// </summary>
					CT_ChineseLabel,
					/// <summary>
					/// 晴天颜色模式
					/// </summary>
					CT_BrightDay,
					/// <summary>
					/// 傍晚颜色模式
					/// </summary>
					CT_BlackBack,
					/// <summary>
					/// 白天颜色模式
					/// </summary>
					CT_WhiteBack,
					/// <summary>
					/// 夜晚颜色模式
					/// </summary>
					CT_Night,
					/// <summary>
					/// 有雾颜色模式
					/// </summary>
					CT_Dusk,
					/// <summary>
					/// 空间关系不精确模式（通过包围盒判断）
					/// </summary>
					CT_BlurRelationship,
					/// <summary>
					/// 精确空间关系模式
					/// </summary>
					CT_SpecificRelationship,
					/// <summary>
					/// 5米等深线模式
					/// </summary>
					CT_SaftyContour5m,
					/// <summary>
					/// 10米等深线模式
					/// </summary>
					CT_SaftyContour10m,
					/// <summary>
					/// 20米等深线模式
					/// </summary>
					CT_SaftyContour20m,
					/// <summary>
					/// 30米等深线模式
					/// </summary>
					CT_SaftyContour30m,
					/// <summary>
					/// 简单符号模式
					/// </summary>
					CT_SimpleSymbol,
					/// <summary>
					/// 传统符号模式
					/// </summary>
					CT_Traditional,
					/// <summary>
					/// 显示类型组合框
					/// </summary>
					CT_ViewCategoryEntryBox,
					/// <summary>
					/// 颜色模式组合框
					/// </summary>
					CT_ColorModeEntryBox,
					/// <summary>
					/// 符号样式组合框
					/// </summary>
					CT_SymbolTypeEntryBox,
					/// <summary>
					/// 等深线深度组合框
					/// </summary>
					CT_SaftyContourEntryBox,
					/// <summary>
					/// 标注样式组合框
					/// </summary>
					CT_LabelTypeEntryBox,	
					
					CT_LayerConfigEntryBox,
					CT_QueryModeEntryBox,
					// 网路分析
					CT_NetworkAnalystNewBtn,
					CT_NetworkAnalystNewRoute,
					CT_NetworkAnalystLayerBox,
					CT_NetworkAnalystDatasetBox,
					CT_NetworkAnalystSolve,

					//三维编辑
					CT_StartEditing3D,
					CT_StopEditing3D,
					CT_SaveEditing3D,
					CT_Undo3D,
					CT_Redo3D,
					CT_LayerEditing3D,
					CT_ModleEditing3D,
					CT_EffectEditing3D,

					//三维分析
					CT_RegionFlood3D,
					CT_Section3D,
					CT_Volume3D,
					CT_Visibility3D,
					CT_Slope3D,

					//三维测量
					CT_MeasureVertical3D,
					CT_MeasurePoint3D,
					CT_MeasureArea3D,
					CT_MeasureLength3D,
					CT_MeasureAzimuth3D,
					CT_ClearMeasureAnalysis,

					//三维查询
					CT_SelectionSubmesh,
					CT_SelectionByPoint3D,
					CT_SelectionByCircle3D,
					CT_SelectionByPolygon3D,
					CT_SelectionByTrangle3D,
					CT_SelectionBySql3D,
					CT_SelectionClear3D,
					CT_Information3D,
					

					//路径
					CT_NewRoute,
					CT_DeleteRoute,
					CT_RouteProperty,
					CT_Start,
					CT_Pause,
					CT_Stop,
					CT_Exit,
					CT_RouteNames,
					CT_StartSample,
					CT_StopSample,
					CT_StartEdit,
					CT_StopEdit,
					//布局
					CT_PageFullExtent,
					CT_PageNormal,
					CT_InsertMap,
					CT_SquareGrid,
					CT_InsertNorthArrow,
					CT_InsertLegend,
					CT_InsertScaleText,
					CT_InsertText,
					CT_InsertScaleBar,
					CT_InsertMapTitle,
					CT_InsertPicture,
					CT_DeleteElement,

					//纸张设置
					CT_PageSetting,
					//对齐方式

					CT_AlignLeft,
					CT_AlignTop,
					CT_ALignRight,
					CT_AlignBottom,
					CT_AlignMid,
					CT_AlignHorMid,
					CT_AlignVerMid,
				};

				class EV_SPATIALGUI_DLL ICommand :public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~ICommand();

				public:
					/// <summary>
					/// 获取命令项所属的工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const;
					/// <summary>
					/// 获取命令项的类型
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
					virtual ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );
					/// <summary>
					/// 当有事件被触发时,会调用该方法
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns>如果状态发生变化则返回true,反之则否</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );

				ev_private:
					ICommand( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( ICommand )
ev_internal:
					ICommand();
				};
			}

		}
	}
}
#endif
