#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAP_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IMAP_H

#include "spatialinterface/config.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ivectorlayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Carto{
				class IPageLayout;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				enum EVMapUnits
				{
					MU_Unknown			= 0,	//未知
					MU_Inches			= 1,	//英寸
					MU_Points			= 2,	//点
					MU_Feet				= 3,	//英尺
					MU_Yards			= 4,	//码
					MU_Miles			= 5,	//英里
					MU_NauticalMiles	= 6,	//海里
					MU_Kilometers		= 7,	//公里,千米
					MU_Meters			= 8,	//米
					MU_Decimeters		= 9,	//分米
					MU_Centimeters		= 10,	//厘米
					MU_Millimeter		= 11,	//毫米
					MU_DecimalDegrees	= 12,	//十进制度		
					MU_DMS	            = 13	//度分秒格式
				};

				class EV_INTERFACE_DLL IMapListener : public EarthView::World::Core::CAllocatedObject
				{
					/// <summary>
					/// 自动化封装构造函数
					/// </summary>
ev_private:
					IMapListener(_in EarthView::World::Core::CNameValuePairList* pList){}
				public:
					IMapListener(){}
					virtual ~IMapListener(){}

					/// <summary>
					/// 在添加图层之前的事件
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					virtual ev_void onBeforeAddLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}
					/// <summary>
					/// 在添加图层之后的事件
					/// </summary>
					/// <param name="layer">己添加的图层</param>
					/// <returns></returns>
					virtual ev_void onAfterAddLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}

					/// <summary>
					/// 在移除图层之前的事件
					/// </summary>
					/// <param name="layer">待移除的图层</param>
					/// <returns></returns>
					virtual ev_void onBeforeRemoveLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}
					/// <summary>
					/// 在移除图层之后的事件
					/// </summary>
					/// <param name="layer">己移除的图层</param>
					/// <returns></returns>
					virtual ev_void onAfterRemoveLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ){}

					/// <summary>
					/// 在移动图层之前的事件
					/// </summary>
					/// <param name="oldIndex">原来的索引</param>
					/// <param name="newIndex">新的索引</param>
					/// <returns></returns>
					virtual ev_void onBeforeMoveLayer( _in ev_int32 oldIndex, _in ev_int32 newIndex ){}
					/// <summary>
					/// 在移动图层之后的事件
					/// </summary>
					/// <param name="oldIndex">原来的索引</param>
					/// <param name="newIndex">新的索引</param>
					/// <returns></returns>
					virtual ev_void onAfterMoveLayer( _in ev_int32 oldIndex, _in ev_int32 newIndex ){}

					/// <summary>
					/// 地图的选中集合发生变化的事件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onMapSelectionChanged(){}
					/// <summary>
					/// 地图绘制事件
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="layer">正在绘制的图层</param>
					/// <param name="type">正在绘制的类型</param>
					/// <returns></returns>
					virtual ev_void onMapDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type ){}
				};

				class EV_INTERFACE_DLL IRenderInformation : public EarthView::World::Core::CAllocatedObject
				{
				public:
					IRenderInformation();
					~IRenderInformation();

				public:
					/// <summary>
					/// 检测是否正在进行渲染进程
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回渲染是否正在进行</returns>
					virtual ev_bool isRendering() const;

					/// <summary>
					/// 获取正在渲染的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>正在渲染的图层</returns>
					virtual const EarthView::World::Spatial::Atlas::ILayer * getRenderingLayer() const;

					/// <summary>
					/// 获取正在渲染图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVVectorLayerRendererType getRenderingType() const;

				ev_private:
					IRenderInformation( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IRenderInformation )
				};

				class IMapSelection;
				class IDisplayCache;
				class ISpatialScale;
				//class IScaleBar;
				//class ILegendBar;
				//class IMarkNorthArrow;
				class EV_INTERFACE_DLL IMap : public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~IMap();

				public:

					virtual ev_bool isActive() const; // added by wangwei in 2013-04-22
					virtual ev_void setActive(ev_bool isActive); // added by wangwei in 2013-04-22

					/// <summary>
					/// 获取地图名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图名字</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置地图名称
					/// </summary>
					/// <param name="name">地图名称</param>
					/// <returns></returns>
					virtual ev_void setName( _in const EVString &name );

					/// <summary>
					/// 获取关于地图的描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图的描述</returns>
					virtual EVString getDescription() const;

					/// <summary>
					/// 设置关于地图的描述
					/// </summary>
					/// <param name="desc">地图描述</param>
					/// <returns></returns>
					virtual ev_void setDescription( _in const EVString &desc );

					virtual EarthView::World::Spatial::Display::IColor* getBackground() const;
					virtual  ev_void setBackground( _in const EarthView::World::Spatial::Display::IColor* background );

					virtual ev_void updateExtent();
					/// <summary>
					/// 获取地图的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelope() const;

					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getInterestEnvelope() const;
					virtual ev_void setInterestEnvelope( _in const EarthView::World::Spatial::Geometry::IEnvelope* enve );

					virtual ev_real64 getInterestRotation() const;
					virtual ev_void setInterestRotation( _in ev_real64 rotation );

					/// <summary>
					/// 获取地图单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图单位</returns>
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getMapUnits() const;

					/// <summary>
					/// 设置地图单位
					/// </summary>
					/// <param name="units">地图单位</param>
					/// <returns></returns>
					virtual ev_void setMapUnits( _in EarthView::World::Spatial::Atlas::EVMapUnits units );

					/// <summary>
					/// 获取地图显示单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图显示单位</returns>
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getShowUnits() const;

					/// <summary>
					/// 设置地图显示单位
					/// </summary>
					/// <param name="units">地图显示单位</param>
					/// <returns></returns>
					virtual ev_void setShowUnits( _in EarthView::World::Spatial::Atlas::EVMapUnits units );

					/// <summary>
					/// 获取地图显示的最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小比例尺</returns>
					virtual ev_real64 getMinScale() const;

					/// <summary>
					/// 设置地图显示的最小比例尺
					/// </summary>
					/// <param name="scale">最小比例尺</param>
					/// <returns></returns>
					virtual ev_void setMinScale( _in ev_real64 scale );

					/// <summary>
					/// 获取地图显示的最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大比例尺</returns>
					virtual ev_real64 getMaxScale() const;

					/// <summary>
					/// 设置地图显示的最大比例尺
					/// </summary>
					/// <param name="scale">最大比例尺</param>
					/// <returns></returns>
					virtual ev_void setMaxScale( _in ev_real64 scale );

					/// <summary>
					/// 地图显示时是否忽略比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否忽略</returns>
					virtual ev_bool ignoreScale() const;

					/// <summary>
					/// 设置地图显示的时候,是否忽略比例尺
					/// </summary>
					/// <param name="ignore">忽略比例尺</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool ignore );

					/// <summary>
					/// 获取地图当前坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference * getSpatialReference() const;

					/// <summary>
					/// 设置地图显示时的坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference *sr );

					virtual EarthView::World::Spatial::Atlas::ISpatialScale* getSpatialScale() const;

					/// <summary>
					/// 获取地图集中的图层个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层个数</returns>
					virtual ev_uint32 getLayerCount() const;

					/// <summary>
					/// 获取指定索引处的图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层指针</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * getLayer( _in ev_uint32 index ) const;
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer( _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset ) const;

					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset( _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name ) const;

					/// <summary>
					/// 获取图层在地图中索引
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>图层的索引</returns>
					virtual ev_uint32 indexOfLayer( _in const EarthView::World::Spatial::Atlas::ILayer *layer ) const;
					virtual ev_bool isExist( _in const EarthView::World::Spatial::Atlas::ILayer* layer ) const;

					/// <summary>
					/// 向地图中追加一个图层
					/// </summary>
					/// <param name="layer">要追加的图层</param>
					/// <returns></returns>
					virtual ev_void addLayer( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					///<summary>
					///向图层组中添加一个图层
					///</summary>
					//virtual ev_void addLayer( _in EarthView::World::Spatial::Atlas::ILayer* parentlayer,
					//										_in EarthView::World::Spatial::Atlas::ILayer* layer);
					///<summary>
					///更新图层改变后map的状态
					///</summary>
					virtual ev_void updateLayerChanged(EarthView::World::Spatial::Atlas::ILayer* pLayer, ev_bool isAdd = false);
					/// <summary>
					/// 插入一个图层到指定索引处
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					virtual ev_void insertLayer( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer * ref_layer );

					/// <summary>
					/// 移除指定索引的图层
					/// </summary>
					/// <param name="index">要移除图层的索引</param>
					/// <returns></returns>
					/// <memo>不删除内存</memo>
					virtual ev_void removeLayer( _in ev_uint32 index );
					///<summary>
					///移除图层组中，指定索引的图层
					///</summary>
					//virtual ev_void removeLayer( _in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_uint32 index);
					/// <summary>
					/// 移除地图中的所有图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo>不删除内存</memo>
					virtual ev_void removeAll();

					/// <summary>
					/// 移动指定索引处的图层到新的索引处
					/// </summary>
					/// <param name="oldIndex">之前的索引</param>
					/// <param name="newIndex">目标索引</param>
					/// <returns></returns>
					virtual ev_void moveLayer( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );

					/// <summary>
					/// 根据设定好的配置时行选择
					/// </summary>
					/// <param name="filter">查询过滤条件</param>
					/// <param name="type">选择的类型</param>
					/// <returns></returns>
					virtual ev_void select( _in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 获取地图的选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图的选择集</returns>
					virtual EarthView::World::Spatial::Atlas::IMapSelection * getMapSelection() const;

					/// <summary>
					/// 获取地图的显示缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns>显示缓存</returns>
					virtual EarthView::World::Spatial::Atlas::IDisplayCache * getDisplayCache(EarthView::World::Spatial::Display::ISpatialDisplay *display) const;

					/// <summary>
					/// 绘制
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="info">渲染进程的反馈信息</param>
					/// <returns></returns>
					virtual ev_void draw( _in EarthView::World::Spatial::Display::ISpatialDisplay *display, IRenderInformation *info );


					/// <summary>
					/// 获取地图对应的纸张布局
					/// </summary>
					/// <param name=""></param>
					/// <returns>纸张布局对象</returns>
					virtual EarthView::World::Spatial::Carto::IPageLayout* getPageLayout() const;

					/// <summary>
					/// 创建纸张布局
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Carto::IPageLayout* createPageLayout();
					///// <summary>
					///// 获取比例尺对象
					///// </summary>
					///// <param name=""></param>
					///// <returns>当前比例尺对象</returns>
					//virtual EarthView::World::Spatial::Atlas::IScaleBar* getScaleBar() const;
					///// <summary>
					///// 设置比例尺对象
					///// </summary>
					///// <param name="scaleBar"></param>
					///// <returns></returns>
					//virtual ev_void setScaleBar(const EarthView::World::Spatial::Atlas::IScaleBar* scaleBar);

					/// <summary>
					/// 获取图例对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>当前图例对象</returns>
					/*virtual EarthView::World::Spatial::Atlas::ILegendBar* getLegendBar() const;

					/// <summary>
					/// 设置图例对象
					/// </summary>
					/// <param name="legendBar">图例对象</param>
					/// <returns></returns>
					virtual ev_void setLegendBar(const EarthView::World::Spatial::Atlas::ILegendBar* legendBar);
*/
					virtual ev_void addMapListener( _in EarthView::World::Spatial::Atlas::IMapListener* ref_listener ){}
					virtual ev_void removeMapListner( _in EarthView::World::Spatial::Atlas::IMapListener* listener ){}
					virtual ev_void registSpatialDisplay(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					virtual ev_void unRegistSpatialDisplay(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					/// <summary>
					/// 创建地图的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图的克隆体</returns>
					virtual IMap * clone() const;

					/// <summary>
					/// 将地图的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将地图的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;

					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
			ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );	
				ev_private:
					IMap( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IMap();
					C_DISABLE_COPY( IMap )
				};
			}
		}
	}
}
#endif


