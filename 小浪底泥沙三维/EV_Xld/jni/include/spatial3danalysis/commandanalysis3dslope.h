#ifndef  COMMANDSLOPEANALYSIS3D_H
#define  COMMANDSLOPEANALYSIS3D_H
#include "analysis3d_config.h"
#include "globecontrol/globecommand.h"
#include "display/bitmap.h"



namespace EarthView
{
	namespace World
	{

		namespace Spatial3D
		{


			namespace Analysis
			{
				/// <summary>
				/// 工具栏坡度分析类
				/// </summary>
				class EV_ANALYSIS3D_DLL CCommandAnalysis3DSlope:public EarthView::World::Spatial3D::Controls::CGlobeCommand
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommandAnalysis3DSlope();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~ CCommandAnalysis3DSlope();

					/// <summary>
					/// 按钮名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮名称</returns>
					virtual EVString getName() const;
					
					/// <summary>
					/// 按钮目录名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮目录名称</returns>
					virtual EVString getCategory() const;
					
					/// <summary>
					/// 按钮提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮提示</returns>
					virtual EVString getToolTip() const;
					
					/// <summary>
					/// 按钮图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮图标指针</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;
					
					/// <summary>
					/// 按钮能不能按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回能否按下</returns>
					virtual ev_bool isCheckable() const;

					/// <summary>
					/// 鼠标单击响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();
				
					/// <summary>
					/// 按钮类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮类型</returns>
					virtual ev_uint32  getType() const;
					
					/// <summary>
					/// 按钮是否按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回按钮是否按下</returns>
					virtual ev_bool getChecked() const;
					
					/// <summary>
					/// 设置按钮是否按下
					/// </summary>
					/// <param name="checked">是否按下</param>
					/// <returns></returns>
					virtual ev_void setChecked( _in ev_bool checked );
				
					/// <summary>
					/// 按钮是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回是否可用</returns>
					virtual ev_bool getEnabled() const;

					/// <summary>
					/// 设置按钮是否可用
					/// </summary>
					/// <param name="enabled">是否可用</param>
					/// <returns></returns>		
					virtual ev_void setEnabled( _in ev_bool enabled );

					/// <summary>
					/// 得到工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const; 

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CCommandAnalysis3DSlope( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommandAnalysis3DSlope )
				
				};
			}
		}
	}
}

#endif
