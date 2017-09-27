#ifndef CCOMMANDLAYERSELECTIONJ_H
#define CCOMMANDLAYERSELECTIONJ_H

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globecommand.h"
#include "display/bitmap.h"
#include "spatial3dlayer/featuregrouplayer.h"
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
				/// 图层选择组合框命令
				/// </summary>
				class EV_GLOBECONTROL_DLL CCommandLayerSelection3D:public EarthView::World::Spatial::SystemUI::IEntryBox
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommandLayerSelection3D();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~CCommandLayerSelection3D();

					/// <summary>
					/// 获得此按钮是属于哪个工具条
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回所属工具条的枚举</returns>
					ev_uint32 getToolBarType() const;

					/// <summary>
					/// 按钮的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮类型的枚举</returns>
					ev_uint32 getType() const;

					/// <summary>
					/// 获得按钮的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮名称</returns>	
					EVString getName() const;

					/// <summary>
					/// 获得按钮的目录名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的目录名称</returns>	
					EVString getCategory() const;

					/// <summary>
					/// 获得按钮的提示信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的提示信息字符串</returns>	
					EVString getToolTip() const;

					/// <summary>
					/// 获得按钮的图标对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标的位图对象</returns>	
					EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 按钮是否是可以按
					/// </summary>
					/// <param name=""></param>
					/// <returns>true为按钮可以按</returns>
					ev_bool isCheckable() const;

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
					/// 初始化与按钮相关的CGlobelControl
					/// </summary>
					/// <param name="ctrl">CGlobelControl指针</param>
					/// <returns></returns>
					ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ctrl );

					/// <summary>
					/// 有事件通知过来时，更新按钮的状态
					/// </summary>
					/// <param name="e">自定义事件的指针</param>
					/// <returns>是否更新按钮状态</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );

					/// <summary>
					/// 获得下拉框中控件的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回下拉框控件的数量</returns>
					ev_uint32 getEntryCount() const;

					/// <summary>
					/// 获得下拉框中所选索引号的控件名称
					/// </summary>
					/// <param name="index">下拉框中所选的索引号</param>
					/// <returns>返回索引号对应的控件名称</returns>
					EVString getEntry( _in ev_uint32 index ) const;

					/// <summary>
					/// 下拉框选择内容变化
					/// </summary>
					/// <param name="index">下拉框中选择的索引号</param>
					/// <returns></returns>
					ev_void currentIndexChanged( _in ev_uint32 index );


ev_private:
					/// <summary>
					/// 自动化封装所需要构造函数
					/// </summary>
					/// <param name="pList">参数的键值对对象</param>
					/// <returns></returns>
					CCommandLayerSelection3D( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommandLayerSelection3D )
				ev_internal:

						/// <summary>
						/// 设置正在编辑的数据集名称
						/// </summary>
						/// <param name="datasetname">数据集名称</param>
						/// <returns></returns>
						virtual ev_void setEditDataSetName(const EVString& datasetname);

					/// <summary>
					/// 获取特征图层组下的所有可以编辑图层
					/// </summary>
					/// <param name="gl">特征图层组指针</param>
					/// <returns></returns>
					void findLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl);

					EVString mDataSetName;

					ev_bool mbEnabled;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					//ev_vector<EVString> mEditingLayers;
					ev_int32 mnCurrentIndex;
					ev_bool m_bEnabled;


				};
			}
		}
	}
}
#endif
