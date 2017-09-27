#ifndef ISCENELAYER_H
#define ISCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include <spatialinterface/ilayer.h>
#include <spatialinterface/itheme.h>
#include <tileutility/tiledata.h>
#include <spatialserverclient/evmetaobjectinfo.h>

#include "geometry3d/iglobelayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{							

				/// <summary>
				/// 聚合二维的图层，提供在三维中渲染的接口
				/// 管理三维中二维图层
				/// </summary>
				class EV_GEOMETRY3D_DLL ISceneLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ISceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ISceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ISceneLayer(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~ISceneLayer();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 取消绑定二维图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void detachLayer();
					/// <summary>
					/// 获取绑定的二维图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>绑定的二维图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer() const;
					/// <summary>
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					                    
					/// <summary>
                    /// 获取专题图
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
					virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
				
					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;					
					
					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

					/// <summary>
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;			

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					virtual EVString toXML() const;

					/// <summary>
					/// 格式化缓存名称，将不规范字符转为"_"
					/// </summary>
					/// <param name="srcName">缓存名称</param>   
					/// <returns>缓存名称</returns>		
					static EVString makeCacheName(const EVString& srcName);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
				protected:
					
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(ISceneLayer);

				protected:
					EarthView::World::Spatial::Atlas::ILayer* mLayer;	
				};
				
			}
		}
	}
}
#endif
