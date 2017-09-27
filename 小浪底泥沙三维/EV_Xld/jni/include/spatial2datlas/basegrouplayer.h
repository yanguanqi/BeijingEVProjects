#ifndef JINC_WORLD2D_ATLAS_CBASEGROUPLAYER_H
#define JINC_WORLD2D_ATLAS_CBASEGROUPLAYER_H
#include "spatial2datlas/grouplayer.h"
#include "spatial2datlas/spatial2datlasconfig.h"

namespace EarthView{
	namespace World{namespace Spatial2D{
		namespace Atlas{
				class EV_SPATIAL2DATLAS_DLL CBaseGroupLayer : public EarthView::World::Spatial2D::Atlas::CGroupLayer
				{
				public:
					///<summary>
					///构造函数
					///</summary>
					CBaseGroupLayer();
					///<summary>
					///析构函数
					///</summary>
					~CBaseGroupLayer();

				public:
					//////////// EarthView::World::Spatial::Atlas::ILayer /////////////////
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					
					/// <summary>
					/// 设置图层的坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns></returns>
					
					ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *sr );
					
					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="type">绘制类型</param>
					/// <returns></returns>
					ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					/// <summary>
					/// 异步绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="type">绘制类型</param>
					/// <returns></returns>
					ev_bool startDrawBaseMap(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					ev_bool drawBaseMap();
					ev_bool endDrawBaseMap();
					ev_bool makeMapping(EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type,
						ev_bool bAddRequst);
					/// <summary>
					/// 设置缓存瓦块大小,[256,2048]
					/// </summary>
					/// <param name="size">size</param>
					/// <returns></returns>
					ev_bool setCacheTileSize( _in ev_int32 size );
					/// <summary>
					/// 获取缓存瓦块大小,默认512
					/// </summary>
					/// <param name=""></param>
					/// <returns>size</returns>
					ev_int32 getCacheTileSize( );
					/// <summary>
					/// 设置可以缓存最大瓦块数
					/// </summary>
					/// <param name="count">count</param>
					/// <returns></returns>
					ev_void setCacheTileCount( _in ev_int32 count );
					/// <summary>
					/// 获取可以缓存最大瓦块数,默认64
					/// </summary>
					/// <param name=""></param>
					/// <returns>size</returns>
					ev_int32 getCacheTileCount( );
					/// <summary>
					/// 图层的复制,内存外部释放
					/// </summary>
					/// <param name="sr">参考坐标系</param>
					/// <returns>图层</returns>
					_extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 从xml中恢复图层的配置
					/// </summary>
					/// <param name="element">xml要素</param>
					/// <returns></returns>
					
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把图层的信息导出到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml要素</returns>
					
					EarthView::World::Core::CXmlElement toXmlElement() const;

					/////////////// EarthView::World::Spatial::Atlas::IGroupLayer ////////////////////
					/// <summary>
					/// 添加图层
					/// </summary>
					/// <param name="layer">待添加的图层</param>
					/// <returns></returns>
					
					ev_void add( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 插入图层
					/// </summary>
					/// <param name="index">图层插入的位置</param>
					/// <param name="layer">待插入的图层</param>
					/// <returns></returns>
					
					ev_void insert( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 移除指定索引处的图层
					/// </summary>
					/// <param name="index">待删除图层的索引</param>
					/// <returns></returns>
					
					EarthView::World::Spatial::Atlas::ILayer* remove( _in ev_uint32 index );
					/// <summary>
					/// 删除所有的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void removeAll();
					/// <summary>
					/// 移动图层
					/// </summary>
					/// <param name="oldIndex">图层原来的索引</param>
					/// <param name="newIndex">目标索引</param>
					/// <returns></returns>
					
					ev_void move( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					
					ev_void setTransparentValue(ev_uint8 transparent);

					ev_void clearTileCache();

				ev_private:
					CBaseGroupLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CBaseGroupLayer );
				private:
					ev_void drawTile(int row, int col, int tastID );
					ev_void updateInfo(EarthView::World::Spatial::Display::ISpatialDisplay* display);
					class CBaseGroupLayerPrivate;
					CBaseGroupLayerPrivate* mpPrivate2;
					friend class CBaseGroupLayerPrivate;
				};
				/// <summary>
				/// CGroupLayer的类工厂
				/// 管理CGroupLayer类
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CBaseGroupLayerFactory:public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				ev_private:
					CBaseGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					///<summary>
					///构造函数
					///</summary>
					CBaseGroupLayerFactory();
					///<summary>
					///析构函数
					///</summary>
					virtual ~CBaseGroupLayerFactory();					

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
}}
#endif


