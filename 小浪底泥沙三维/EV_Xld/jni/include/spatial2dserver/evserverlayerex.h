#ifndef EARTHVIEW_WORLD_SPATIAL_EVSERVERLAYEREX_H
#define EARTHVIEW_WORLD_SPATIAL_EVSERVERLAYEREX_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/drawserverlayertheme.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialserverclient/weblayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				class EV_2DWMS_DLL CEVServerLayerEx
					: public EarthView::World::Spatial::CWebLayer
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CEVServerLayerEx();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVServerLayerEx();
					/// <summary>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset() const;
					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数据集</returns>
					virtual void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* dataset);
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
					/// 渲染
					/// </summary>
					/// <param name="display">渲染设备信息</param>
					/// <param name="type">渲染类型</param>
					/// <returns>成功返回true</returns>
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

					/// <summary>
					/// 获取包围盒信息
					/// </summary>
					/// <returns>包围盒对象指针，不需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent()const;
					/// <summary>
					/// 获取空间参考信息
					/// </summary>
					/// <returns>空间参考对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summary>
					/// 设置空间参考
					/// </summary>
					/// <param name="sr">空间参考对象</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr );
					/// <summary>
					/// 获取专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>

					ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆对象指针</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
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

					virtual ev_int32 baseMapFalg();// 0 不支持，1 支持但不可设置 2 支持可设置开关
					virtual ev_bool getBaseMapActive();
					virtual ev_void setBaseMapActive(ev_bool b);
					ev_bool makeBaseMapping(EarthView::World::Spatial::Display::ISpatialDisplay* display,
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

					ev_bool getNoBoundaryRoamActive();
					ev_void setNoBoundaryRoamActive(ev_bool b);
ev_private:
					CEVServerLayerEx(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void iniBaseMapDrawTheme();
					EVString makeCacheName( const EVString& srcName );
					ev_uint8 m_TransparentValue;

					EarthView::World::Spatial::Display::CDrawServerLayerTheme* m_pBaseMapDrawTheme;
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					EarthView::World::Spatial::Geometry::IEnvelope *mGeoExtent;
					EVString mDatasetName;
					EVString mDatasourceName;
					ev_bool  mbBaseMapActive;
					ev_bool  mbNoBoundaryRoamActive;
				};

				class EV_2DWMS_DLL CEVServerLayerExFactory
					:public EarthView::World::Spatial::CWebLayerFactory
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CEVServerLayerExFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEVServerLayerExFactory();
ev_private:
					CEVServerLayerExFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂类型</returns>
					
					EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 创建图层实例
					/// </summary>
					/// <returns>图层对象指针，用相应图层类工厂析构</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 从xml结点要素还原图层对象
					/// </summary>
					/// <param name="element">xml结点对象</param>
					/// <returns>图层对象指针</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
				private:
					EarthView::World::Spatial::Atlas::EVLayerType m_eLayerType;
				};
			}
		}
	}
}

#endif