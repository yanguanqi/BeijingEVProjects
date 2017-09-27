#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_GROUPLAYER_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_GROUPLAYER_H
#include "spatialinterface/igrouplayer.h"
#include "spatial2datlasconfig.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				class CGroupLayerPrivate;

				class EV_SPATIAL2DATLAS_DLL CGroupLayer : public EarthView::World::Spatial::Atlas::IGroupLayer
				{
				public:
					///<summary>
					///构造函数
					///</summary>
					CGroupLayer();
					///<summary>
					///析构函数
					///</summary>
					virtual ~CGroupLayer();

				public:
					//////////// EarthView::World::Spatial::Atlas::ILayer /////////////////
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取图层的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层名称</returns>
					
					virtual EVString getName() const;
					/// <summary>
					/// 设置图层的名称
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// 获取图层的描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>描述信息</returns>
					
					virtual EVString getDescription() const;
					/// <summary>
					/// 设置图层的描述信息
					/// </summary>
					/// <param name="value">描述信息</param>
					/// <returns></returns>
					
					virtual ev_void setDescription(const EVString& value);
					/// <summary>
					/// 检测图层图层是否可以编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可以编辑,则返回true,反之则否</returns>
					
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 检测图层是否正在被编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层正在编辑则返回true,反之则否</returns>
					
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 设置图层是否正在编辑
					/// </summary>
					/// <param name="editing">如果为true,则设置图层正在编辑,反之则否</param>
					/// <returns></returns>
					
					virtual ev_void setEditing(ev_bool editing);
					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层是否可视
					/// </summary>
					/// <param name="visible">如果为true,则图层可视,反之则否</param>
					/// <returns></returns>
					
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 检测图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果有效则返回true,反之则否</returns>
					
					virtual ev_bool isValid() const;
					/// <summary>
					/// 判断图层是否支持选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ev_bool isSelected() const;
					/// <summary>
					/// 设置图层是否支持选择
					/// </summary>
					/// <param name="selectable">是否可选</param>
					/// <returns></returns>
					
					virtual ev_void setSelected(ev_bool selected);
					/// <summary>
					/// 检测图层绘制时是否忽略比例尺的因素
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果忽略,则返回true,反之则否</returns>
					
					virtual ev_bool ignoreScale() const;
					/// <summary>
					/// 设置图层的绘制是否忽略比例尺的因素
					/// </summary>
					/// <param name="bIgnore">是否忽略</param>
					/// <returns></returns>
					
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );
					/// <summary>
					/// 获取最大显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					
					virtual ev_real64 getDisplayMaxScale() const;
					/// <summary>
					/// 设置最大显示比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					
					virtual ev_void setDisplayMaxScale(ev_real64 value);
					/// <summary>
					/// 获取最小显示比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					
					virtual ev_real64 getDisplayMinScale() const;
					/// <summary>
					/// 设置最小显示比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					
					virtual ev_void setDisplayMinScale(ev_real64 value);
					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// 设置图层的坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns></returns>
					
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *sr );
					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;
					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="type">绘制类型</param>
					/// <returns></returns>
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 图层的复制,内存外部释放
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns>图层</returns>
					
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/////////////// EarthView::World::Spatial::Atlas::IGroupLayer ////////////////////
					/// <summary>
					/// 添加图层
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					
					virtual ev_void add( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 插入图层
					/// </summary>
					/// <param name="index">图层插入的位置</param>
					/// <param name="layer">待插入的图层</param>
					/// <returns></returns>
					
					virtual ev_void insert( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 移除指定索引处的图层
					/// </summary>
					/// <param name="index">待删除图层的索引</param>
					/// <returns></returns>
					
					virtual EarthView::World::Spatial::Atlas::ILayer* remove( _in ev_uint32 index );
					/// <summary>
					/// 删除所有的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ev_void removeAll();
					/// <summary>
					/// 移动图层
					/// </summary>
					/// <param name="oldIndex">图层原来的索引</param>
					/// <param name="newIndex">目标索引</param>
					/// <returns></returns>
					
					virtual ev_void move( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					/// <summary>
					/// 图层个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引处的图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>图层</returns>
					
					virtual EarthView::World::Spatial::Atlas::ILayer * getLayer( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取与指定数据集相关联的图层
					/// </summary>
					/// <param name="dataset">数据集</param>
					/// <returns>图层</returns>
					
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer( _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset ) const;
					/// <summary>
					/// 获取指定名字并且在指定数据源ds中的数据集
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="name">数据集的名称</param>
					/// <returns></returns>
					
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset( _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name ) const;
					/// <summary>
					/// 图层的索引
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>索引</returns>
					
					virtual ev_uint32 indexOfLayer( _in EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					/// <summary>
					/// 判断图层是否被包含
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>如果存在则返回true,反之则否</returns>
					
					virtual ev_bool isExist( _in const EarthView::World::Spatial::Atlas::ILayer* layer ) const;
					
					// ev_void getAllDataLayers(list<ILayer*>& layers, ev_bool isContainUnvisLayer = false) const;

					 virtual ev_void setTransparentValue(ev_uint8 transparent);

					 virtual ev_uint8 getTransparentValue() const;
				ev_private:
					CGroupLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CGroupLayer );
					CGroupLayerPrivate* mpPrivate;
				private:
					ev_void unionLayerExtent(EarthView::World::Spatial::Geometry::IEnvelope* ext,
															EarthView::World::Spatial::Atlas::ILayer* pLayer) const;	
				};
				/// <summary>
				/// CGroupLayer的类工厂
				/// 管理CGroupLayer类
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CGroupLayerFactory:public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				ev_private:
					CGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					///<summary>
					///构造函数
					///</summary>
					CGroupLayerFactory();
					///<summary>
					///析构函数
					///</summary>
					virtual ~CGroupLayerFactory();					

				public: 
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 从xml中创建一个图层实例
					/// </summary>
					/// <param name="strXml">xml</param>
					/// <returns>图层</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					
					_extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 删除图层实例
					/// </summary>
					/// <param name="layer">待删除的图层</param>
					/// <returns>如果删除成功则返回true,反之则否</returns>
					
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};
			}
		}
	}
}
#endif


