#ifndef CCOMMANDMODELSELECTION_H
#define CCOMMANDMODELSELECTION_H

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globecommand.h"
#include "display/bitmap.h"
#include "spatial3dlayer/featuregrouplayer.h"




namespace EarthView
{
	namespace World
	{

		namespace Spatial3D
		{


			namespace Controls
			{
				/// <summary>
				/// 显示模型库编辑素材命令
				/// </summary>
				class EV_GLOBECONTROL_DLL CCommandModelSelection3D:public EarthView::World::Spatial3D::Controls::CGlobeCommand
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCommandModelSelection3D();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~CCommandModelSelection3D();

					/// <summary>
					/// 获得此按钮是属于哪个工具条
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回所属工具条的枚举</returns>	
					virtual ev_uint32 getToolBarType() const;

					/// <summary>
					/// 按钮的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮类型的枚举</returns>	
					virtual ev_uint32 getType() const;

					/// <summary>
					/// 获得按钮的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮名称</returns>	
					virtual EVString getName() const;

					/// <summary>
					/// 获得按钮的目录名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的目录名称</returns>	
					virtual EVString getCategory() const;

					/// <summary>
					/// 获得按钮的提示信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的提示信息字符串</returns>	
					virtual EVString getToolTip() const;

					/// <summary>
					/// 获得按钮的图标对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标的位图对象</returns>	
					virtual EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 按钮是否是可以按
					/// </summary>
					/// <param name=""></param>
					/// <returns>true为按钮可以按</returns>	
					virtual ev_bool isCheckable() const;

					/// <summary>
					/// 点击工具栏按钮
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ev_void onClicked();

					/// <summary>
					/// 获得按钮是否被按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>按下为true</returns>	
					ev_bool getChecked() const;

					/// <summary>
					/// 设置按钮按下的状态
					/// </summary>
					/// <param name="checked">true为按钮已经被按</param>
					/// <returns></returns>	
					ev_void setChecked( _in ev_bool checked );

					/// <summary>
					/// 获得按钮是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮可用返回true</returns>
					ev_bool getEnabled() const;

					/// <summary>
					/// 设置按钮可用状态
					/// </summary>
					/// <param name="enabled">为true时，按钮可用</param>
					/// <returns></returns>
					ev_void setEnabled( _in ev_bool enabled );

					/// <summary>
					/// 有事件通知过来时，更新按钮的状态
					/// </summary>
					/// <param name="e">自定义事件的指针</param>
					/// <returns>是否更新按钮状态</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );


ev_private:
					/// <summary>
					/// 自动化封装所需要构造函数
					/// </summary>
					/// <param name="pList">参数的键值对对象</param>
					/// <returns></returns>
					CCommandModelSelection3D( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommandModelSelection3D )

						/// <summary>
						/// 设置正在编辑的数据集名称
						/// </summary>
						/// <param name="datasetname">数据集名称</param>
						/// <returns></returns>
						virtual ev_void setEditDataSetName(const EVString& datasetname);
				private:
					EVString mDataSetName;

					/// <summary>
					/// 获取特征图层组下的所有可以编辑图层
					/// </summary>
					/// <param name="gl">特征图层组指针</param>
					/// <returns></returns>
					void findLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl);


				};
			}
		}
	}
}
#endif
