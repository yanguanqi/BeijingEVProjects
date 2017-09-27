#ifndef  COMMAND3DMEASUREAZIMUTH_H
#define  COMMAND3DMEASUREAZIMUTH_H

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
				/// 方位角测量
				/// </summary>
				class EV_ANALYSIS3D_DLL CCommand3DMeasureAzimuth:public EarthView::World::Spatial3D::Controls::CGlobeCommand
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommand3DMeasureAzimuth();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~ CCommand3DMeasureAzimuth();

					/// <summary>
					/// 获取按钮的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取按钮目录名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getCategory() const;

					/// <summary>
					/// 获取按钮的提示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getToolTip() const;

					/// <summary>
					/// 获取按钮的图标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 按钮能否按下
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isCheckable() const;

					/// <summary>
					/// 鼠标单击响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();

					/// <summary>
					/// 获取按钮的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32  getType() const;

					/// <summary>
					/// 按钮是否按下
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool getChecked() const;

					/// <summary>
					/// 设置按钮状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setChecked( _in ev_bool checked );

					/// <summary>
					/// 获取按钮是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool getEnabled() const;

					/// <summary>
					/// 设置按钮是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setEnabled( _in ev_bool enabled );

					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getToolBarType() const; 
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CCommand3DMeasureAzimuth( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommand3DMeasureAzimuth )


				};


			}
		}
	}
}

#endif
