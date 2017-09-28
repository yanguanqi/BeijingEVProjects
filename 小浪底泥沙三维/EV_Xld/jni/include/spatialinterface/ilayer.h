#ifndef EARTHVIEW_WORLD_SPATIAL_ATLAS_ILAYER_H
#define EARTHVIEW_WORLD_SPATIAL_ATLAS_ILAYER_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/config.h"
#include "core/xml.h"
#include "idataset.h"

// using namespace EarthView::World::Spatial::GeoDataset;


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IQueryFilter;
			}
		}

	}
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayerSelection;

				enum EVLayerType
				{
					LT_UNKNOWN                 = 0,
					LT_VECTOR_DATALAYER        = 1,
					LT_VECTOR_NETWORKLAYER     = 2,					
					LT_VECTOR_CHARTLAYER       = 3,
					LT_VECTOR_ROUTELAYER	   = 4,
					LT_VECTOR_NETWORKANALYSTLAYER   = 5,
					LT_VECTOR_ANNOLAYER        = 6,
					LT_RASTER_IMAGE            = 11,
					LT_DBRASTER_LAYER          = 12,
					LT_GROUPLAYER			   = 21,
					LT_BASEGROUPLAYER          = 22,
					LT_MAPWFSLAYER             = 24,
					LT_MAPSERVERLAYER          = 25,
					LT_VECTORFILE_DATALAYER	   = 26,
					LT_VECTORFILE_ANNOLAYER    = 27,
					LT_VECTOR_WFSDATALAYER	   = 28,

					// 三维图层 编号从 31 开始。
					//LT_ObqLayer                = 30,
					LT_KmlLayer                = 31,
					LT_ImageOverLayer          = 32,
					LT_Smart3DLayer        = 33,
					LT_MeshXLayer          = 34,
					LT_MeshXGLayer		   = 35,
					LT_SERVER_Smart3DLayer	   = 36,
					LT_SERVER_MeshXGLayer	   = 37,
					LT_LasLayer                =38,
					LT_SERVER_LasLayer         =39,
					LT_ImageClampLayer         = 41,
					LT_VectorWebClampLayer     = 42,  
					LT_VectorDBClampLayer      = 43,  
					LT_ChartClampLayer		   = 44,
					LT_WmtsClampLayer          = 45,
					LT_ChartWmsClampLayer           = 46, 
					LT_ChartWmtsClampLayer           = 47,  
					LT_ElementClampLayer       = 48,
					LT_RasterClampLayer        = 49,
					LT_LocalRasterClampLayer   = 50,
					

					LT_VectorRelativeLayer     = 51,  
					LT_ElementRelativelayer    = 52,
					LT_EntityLayer             = 53,
					LT_EntityInstanceLayer	   = 54,
					LT_EffectLayer             = 55,

					LT_OgcWmsClampLayer           = 56, 
					LT_OgcWmtsClampLayer           = 57,  

					LT_VectorWebRelativeLayer     = 58,
					LT_VectorOctreeWebClampLayer     = 59,

					LT_TerrainLayer            = 60,
					LT_LocalTerrainLayer       = 61,
					LT_NeoVectorWebLayer       = 62,

					LT_OgcWFSVectorRelativeLayer = 63,
					LT_OgcWFSVectorClampLayer = 64,

					LT_KmlGroupLayer           = 91,
					LT_ImageGroupLayer         = 92,     
					LT_FeatureGroupLayer       = 93,
					LT_TerrainGroupLayer       = 94,
					LT_TempGroupLayer		   = 95,

					// 服务器图层
					LT_SERVER_WMTS_Layer	   = 100,
					LT_SERVER_WMS_Layer		   = 101,
					LT_SERVER_WFS_Layer		   = 102,
					LT_SERVER_DEM_Layer		   = 103,
					LT_SERVER_GEOCODE_Layer	   = 104,
					LT_SERVER_KML_Layer		   = 105,
					LT_SERVER_GEOMETRY_Layer   = 106,
					LT_SERVER_MODEL_Layer	   = 107,
					LT_SERVER_MODEL_TEMPLATE_Layer	   = 108,
					LT_SERVER_OGC_WMTS_Layer   = 110,
					LT_SERVER_OGC_WMS_Layer	   = 111,
					LT_SERVER_OGC_WFS_Layer    = 112,

					LT_LasXGLayer                =130,
					LT_SERVER_LasXGLayer         =131,
					LT_StreetView_Layer          = 132,
					LT_OSGB_Layer                = 133
					
				};

				enum EVVectorLayerRendererType
				{
					VLRT_UNKNOWN               = 0,
					VLRT_FEATURE               = 1,
					VLRT_SELECTION             = 2,
					VLRT_LABEL                 = 3
				};
				enum EVSelectionResultType
				{
					SRT_New			= 0,
					SRT_Add			= 1,
					SRT_Sub			= 2,
					SRT_And			= 3,
					SRT_XOR			= 4
				};

				class ITileReference;

				class EV_INTERFACE_DLL ILayer :	public EarthView::World::Core::CAllocatedObject
				{
				public:					
					virtual ~ILayer();
				public:
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取与图层所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 设置与图层所关联的数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// 更换数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					virtual ev_void switchDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getDatasetName();
					/// <summary>
					/// 获取数据集所在的数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource();					
					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();
					/// <summary>
					/// 设置图层的选择集
					/// </summary>
					/// <param name="selection">图层的选择集</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);
					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
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
					/// 设置图层是否可以支持编辑
					/// </summary>
					/// <param name="can">如果为true,则图层可以编辑,反之则否</param>
					/// <returns></returns>
					virtual ev_void setCanEdit(ev_bool can);
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
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// 设置图层是否支持选择
					/// </summary>
					/// <param name="selectable">是否可选</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);
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
					virtual ev_void setDisplayMaxScale(ev_real64 scale);
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
					virtual ev_void setDisplayMinScale(ev_real64 scale);
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
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
					/// <summary>
					/// 设置图层的透明度
					/// </summary>
					/// <param name="transparent">透明值</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// 获取图层的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					virtual ev_uint8 getTransparentValue() const;
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
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 把图层的信息保存到流中
					/// </summary>
					/// <param name="steam">导出流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					virtual EVString toXML() const;
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

					virtual ev_int32 baseMapFalg();// 0 不支持，1 支持但不可设置 2 支持可设置开关
					virtual ev_bool getBaseMapActive();
					virtual ev_void setBaseMapActive(ev_bool b);
					virtual ev_bool makeBaseMapping(EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
ev_private:
					ILayer( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					ILayer();
				private:
					ILayer(ILayer & obj);
				};

				class EV_INTERFACE_DLL ILayerFactory :  public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~ILayerFactory() {}
ev_private:
					ILayerFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ILayerFactory(){}
				public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 从xml中创建一个图层实例
					/// </summary>
					/// <param name="strXml">xml</param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);
					/// <summary>
					/// 从xml要素中恢复一个图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 删除图层实例
					/// </summary>
					/// <param name="layer">待删除的图层</param>
					/// <returns>如果删除成功则返回true,反之则否</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};

				class EV_INTERFACE_DLL CLayerFactoryEnumerator : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CLayerFactoryEnumerator();
					~CLayerFactoryEnumerator();
ev_private:
					CLayerFactoryEnumerator(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 返回图层工厂迭代器单体(指针类型)
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* getSingletonPtr();
					/// <summary>
					/// 返回图层工厂迭代器单体(对象引用)
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator& getSingleton();

					/// <summary>
					/// 释放图层工厂迭代器单体
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static void releaseSingletonPtr();
				protected:
					static EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* mpSingleton;

				public:
					/// <summary>
					/// 检测指定类型的工厂是否存在
					/// </summary>
					/// <param name="layerType">工厂类型</param>
					/// <returns>如果存在则返回true,反之则否</returns>
					ev_bool existLayerFactory(ev_int32 layerType);
					/// <summary>
					/// 获取指定工厂类型的指针
					/// </summary>
					/// <param name="layerType">工厂类型</param>
					/// <returns>工厂指针</returns>
					EarthView::World::Spatial::Atlas::ILayerFactory* getLayerFactory(ev_int32 layerType);
					/// <summary>
					/// 添加一个图层工厂
					/// </summary>
					/// <param name="facotry">图层工厂</param>
					/// <returns>如果成功就返回true,反之则否</returns>
					ev_bool addLayerFactory(EarthView::World::Spatial::Atlas::ILayerFactory* ref_factory);
					/// <summary>
					/// 移除指定类型的工厂
					/// </summary>
					/// <param name="layerType">待删除的工厂类型</param>
					/// <returns>如果成功则返回true,反之则否</returns>
					ev_bool removeLayerFactory(ev_int32 layerType);
					/// <summary>
					/// 移除指定工厂
					/// </summary>
					/// <param name="facotry">待移除的工厂</param>
					/// <returns>如果成功就返回true,反之则否</returns>
					ev_bool removeLayerFactory(EarthView::World::Spatial::Atlas::ILayerFactory* factory);
					ev_void clear();

				protected:
					typedef list<EarthView::World::Spatial::Atlas::ILayerFactory*> LayerFactorys;
					LayerFactorys mFactorys;
				};
			}
		}
	}
}

#endif


