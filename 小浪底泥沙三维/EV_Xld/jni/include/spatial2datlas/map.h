#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAP_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_MAP_H

#include "spatial2datlas/spatial2datlasconfig.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ispatialfilter.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ispatialscale.h"
#include "spatial2datlas/datalayer.h"
#include "spatialinterface/imarkernortharrow.h"
#include "spatialinterface/iscalebar.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class CMap;
				class CMapSelection;
				class CDisplayCache;
				class CRenderInformation;
				/// <summary>
				/// 地图类
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				class EV_SPATIAL2DATLAS_DLL CMap : public EarthView::World::Spatial::Atlas::IMap
				{
				public:
					/// <summary>
					/// 地图类
					/// </summary>
					CMap();
					/// <summary>
					/// 地图类
					/// </summary>
					~CMap();

				public:
					//废弃的方法
					ev_bool isActive() const; // added by wangwei in 2013-04-22
					//废弃的方法
					ev_void setActive(ev_bool isActive); // added by wangwei in 2013-04-22

					/// <summary>
					/// 获取地图的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					EVString getName() const;
					/// <summary>
					/// 设置地图的名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					ev_void setName( _in const EVString &name );
					/// <summary>
					/// 获取地图的描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>描述信息</returns>
					EVString getDescription() const;
					/// <summary>
					/// 设置地图的描述信息
					/// </summary>
					/// <param name="desc">描述信息</param>
					/// <returns></returns>
					ev_void setDescription( _in const EVString &desc );
					/// <summary>
					/// 获取背景色
					/// </summary>
					/// <param name=""></param>
					/// <returns>背景色</returns>
					EarthView::World::Spatial::Display::IColor* getBackground() const;
					/// <summary>
					/// 设置背景色
					/// </summary>
					/// <param name="background">背景色</param>
					/// <returns></returns>
					ev_void setBackground( _in const EarthView::World::Spatial::Display::IColor* background );
					/// <summary>
					/// 更新地图的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void updateExtent();
					/// <summary>
					/// 获取地图的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图范围</returns>
					const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelope() const;
					/// <summary>
					/// 获取感兴趣的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>兴趣范围</returns>
					const EarthView::World::Spatial::Geometry::IEnvelope * getInterestEnvelope() const;
					/// <summary>
					/// 设置感兴趣的范围
					/// </summary>
					/// <param name="enve">范围</param>
					/// <returns></returns>
					ev_void setInterestEnvelope( _in const EarthView::World::Spatial::Geometry::IEnvelope* enve );
					/// <summary>
					/// 获取感兴趣的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getInterestRotation() const;
					/// <summary>
					/// 设置感兴趣的旋转角度
					/// </summary>
					/// <param name="rotation">旋转角度</param>
					/// <returns></returns>
					ev_void setInterestRotation( _in ev_real64 rotation );
					/// <summary>
					/// 获取地图单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图单位</returns>
					EarthView::World::Spatial::Atlas::EVMapUnits getMapUnits() const;
					/// <summary>
					/// 设置地图单位
					/// </summary>
					/// <param name="units">地图单位</param>
					/// <returns></returns>
					ev_void setMapUnits( _in EarthView::World::Spatial::Atlas::EVMapUnits units );

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
					/// 获取最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小比例尺</returns>
					ev_real64 getMinScale() const;
					/// <summary>
					/// 设置最小比例尺
					/// </summary>
					/// <param name="scale">最小比例尺</param>
					/// <returns></returns>
					ev_void setMinScale( _in ev_real64 scale );
					/// <summary>
					/// 获取最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大比例尺</returns>
					ev_real64 getMaxScale() const;
					/// <summary>
					/// 设置最大比例尺
					/// </summary>
					/// <param name="scale">最大比例尺</param>
					/// <returns></returns>
					ev_void setMaxScale( _in ev_real64 scale );
					/// <summary>
					/// 在绘制时是否忽略比例尺范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果忽略则返回true,反之则否</returns>
					ev_bool ignoreScale() const;
					/// <summary>
					/// 设置是否忽略比例尺范围
					/// </summary>
					/// <param name="ignore">是否忽略比例尺范围</param>
					/// <returns></returns>
					ev_void setIgnoreScale( _in ev_bool ignore );
					/// <summary>
					/// 获取坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					EarthView::World::Spatial::Geometry::ISpatialReference * getSpatialReference() const;
					/// <summary>
					/// 设置坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns></returns>
					ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference *sr );
					/// <summary>
					/// 获取空间比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间比例尺</returns>
					EarthView::World::Spatial::Atlas::ISpatialScale* getSpatialScale() const;
					/// <summary>
					/// 获取图层个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层个数</returns>
					ev_uint32 getLayerCount() const;
					/// <summary>
					/// 获取指定索引处的图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer * getLayer( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取与指定数据集相关联的图层
					/// </summary>
					/// <param name="dataset">数据集</param>
					/// <returns>图层</returns>
					EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer( _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset ) const;
					/// <summary>
					/// 通过名字在指定数据源中去找数据集
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="name">数据集的名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset( _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name ) const;
					/// <summary>
					/// 求取指定图层在地图中的索引
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>索引</returns>
					ev_uint32 indexOfLayer( _in const EarthView::World::Spatial::Atlas::ILayer *layer ) const;
					/// <summary>
					/// 判断指定图层是否存在于地图中
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果存在则返回true,反之则返回false</returns>
					ev_bool isExist( _in const EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					/// <summary>
					/// 添加图层
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					ev_void addLayer( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					virtual ev_void addLayer( _in EarthView::World::Spatial::Atlas::IGroupLayer* parentlayer,
						_in EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 在指定索引处插入图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="layer">待插入的图层</param>
					/// <returns></returns>
					ev_void insertLayer( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer * layer );
					virtual ev_void insertLayer( _in EarthView::World::Spatial::Atlas::IGroupLayer* parentlayer, _in ev_uint32 index,
						_in EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 移除指定索引处的图层
					/// </summary>
					/// <param name="index">图层索引</param>
					/// <returns></returns>
					ev_void removeLayer( _in ev_uint32 index );
					virtual ev_void removeLayer( _in EarthView::World::Spatial::Atlas::IGroupLayer* parentlayer, _in ev_uint32 index );
					///<summary>
					///移除图层组中，指定索引的图层
					///</summary>
					///ev_void removeLayer( _in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_uint32 index);
					/// <summary>
					/// 移除所有图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeAll();
					/// <summary>
					/// 移动图层
					/// </summary>
					/// <param name="oldIndex">图层原先的索引</param>
					/// <param name="newIndex">图层新的索引</param>
					/// <returns></returns>
					ev_void moveLayer( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					virtual ev_void moveLayer( _in EarthView::World::Spatial::Atlas::IGroupLayer* fromlayer, _in ev_uint32 oldIndex, 
						_in EarthView::World::Spatial::Atlas::IGroupLayer* tolayer, _in ev_uint32 newIndex );
					/// <summary>
					/// 根据指定条件进行选择要素
					/// </summary>
					/// <param name="filter">查询过滤器</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					ev_void select( _in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type );
					/// <summary>
					/// 获取地图选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图选择集</returns>
					EarthView::World::Spatial::Atlas::IMapSelection * getMapSelection() const;
					/// <summary>
					/// 获取显示的缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns>显示缓存</returns>
					EarthView::World::Spatial::Atlas::IDisplayCache * getDisplayCache(EarthView::World::Spatial::Display::ISpatialDisplay *display) const;
					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="info">渲染信息</param>
					/// <returns></returns>
					ev_void draw( _in EarthView::World::Spatial::Display::ISpatialDisplay *display, EarthView::World::Spatial::Atlas::IRenderInformation *info );
					/// 绘制图层，无缓存，且能初步判断生成的图片是否有内容,isBlank为true图片空白
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="info">渲染信息</param>
					/// <returns></returns>
					ev_void draw( _in EarthView::World::Spatial::Display::ISpatialDisplay *display, EarthView::World::Spatial::Atlas::IRenderInformation *info,ev_bool& isBlank);
					virtual ev_bool makeBaseMapping(EarthView::World::Spatial::Display::ISpatialDisplay* display);
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
					virtual ev_void addMapListener( _in EarthView::World::Spatial::Atlas::IMapListener* ref_listener );
					virtual ev_void removeMapListner( _in EarthView::World::Spatial::Atlas::IMapListener* listener );

					/// <summary>
					/// 获取渲染顺序控制器
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染顺序控制器</returns>
					virtual EarthView::World::Spatial::Atlas::LayerRenderOrderController *getLayerRenderOrderController() const;
					/// <summary>
					/// 复制地图,内存需要外部释放
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图</returns>
					_extfree EarthView::World::Spatial::Atlas::IMap * clone() const;
					/// <summary>
					/// 把地图的配置导出成流
					/// </summary>
					/// <param name="stream">导出流</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					/// <summary>
					/// 从xml中恢复地图的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把地图的配置保存到xml要素中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					virtual ev_void registSpatialDisplay(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					virtual ev_void unRegistSpatialDisplay(EarthView::World::Spatial::Display::ISpatialDisplay* display);
				ev_internal:
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );	
				private:
					ev_bool isOrIsInBaseGroupLayer(EarthView::World::Spatial::Atlas::ILayer *pScrLayer);
				protected:

					ev_void init();
					ev_void unionLayerExtent( _out EarthView::World::Spatial::Geometry::IEnvelope* ext, _in EarthView::World::Spatial::Atlas::ILayer* layer  );
					ev_void updateMapSelection();
					ev_void addToMapSelection( _in EarthView::World::Spatial::Atlas::ILayer *layer );
					ev_void select( _in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type, _in EarthView::World::Spatial::Atlas::ILayer *layer );
					ev_bool drawFeatures( EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Display::IPaintDevice *canvas, CRenderInformation *info );
					ev_bool drawFeature( EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Display::IPaintDevice *canvas, EarthView::World::Spatial::Atlas::ILayer *layer, CRenderInformation *info );
					ev_bool drawSelections( EarthView::World::Spatial::Display::ISpatialDisplay* display, CRenderInformation *info );
					ev_bool drawLabels( EarthView::World::Spatial::Display::ISpatialDisplay* display, CRenderInformation *info );
					//ev_void drawFeatures( EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Display::IPaintDevice *canvas, CRenderInformation *info ,ev_bool& isBlank);
					//ev_void drawFeature( EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Display::IPaintDevice *canvas, EarthView::World::Spatial::Atlas::ILayer *layer, CRenderInformation *info,ev_bool& isBlank );
					//ev_void drawLabels( EarthView::World::Spatial::Display::ISpatialDisplay* display, CRenderInformation *info,ev_bool& isBlank );
					ev_void freezeDraw();
					ev_void notifySelectionChanged();
					EVString m_szName;
					EVString m_szDescription;
					EarthView::World::Spatial::Display::IColor* mpBackground;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pFullExtent;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pInterestExtent;
					ev_real64 mdInterestRotation;
					ev_real64 mdCurrentScale;//保存范围时使用
					EarthView::World::Spatial::Atlas::EVMapUnits m_eMapUnits;
					ev_real64 m_dMinScale, m_dMaxScale;
					ev_bool m_bIgnoreScale;
					EarthView::World::Spatial::Geometry::ISpatialReference *m_pSpatialReference;
					EarthView::World::Spatial::Atlas::ISpatialScale* mpSpatialScale;

					ev_vector <EarthView::World::Spatial::Atlas::ILayer*> m_vecLayer;
					mutable EarthView::World::Core::CReadWriteLock mLayerLock;

				//	CDisplayCache *m_pDisplayCache;
					CMapSelection *m_pMapSelection;
				//	EarthView::World::Spatial::Display::ISpatialDisplay* mpDisplay;
				//	EarthView::World::Spatial::Atlas::IRenderInformation* mpRenderInfo;
					mutable EarthView::World::Core::CReadWriteLock mDisplayCacheLock;
					ev_map<EarthView::World::Spatial::Display::ISpatialDisplay*,CDisplayCache*>m_pDisplayCaches;
				//	ev_map<EarthView::World::Spatial::Display::ISpatialDisplay*,
				//	EarthView::World::Spatial::Atlas::IRenderInformation*>mpRenderInfoes;

					ev_list<EarthView::World::Spatial::Atlas::IMapListener*>mListeners;
					mutable EarthView::World::Core::CReadWriteLock mListenerLock;
					EarthView::World::Spatial::Atlas::LayerRenderOrderController *m_pRenderingOrderController;
					ev_bool mbIsActive; // added by wangwei in 2013-04-22

					EarthView::World::Spatial::Carto::IPageLayout* m_pPageLayout;

				ev_private:
					CMap( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CMap )
					friend class CMapSelection;
				};
			}
		}
	}
}
#endif
