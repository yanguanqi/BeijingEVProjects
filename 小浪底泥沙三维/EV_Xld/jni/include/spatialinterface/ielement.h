#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_IELEMENT_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_IELEMENT_H

#include "core/datastream.h"
#include "core/xml.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ispatialdisplay.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				enum EVAnchorPoint
				{
					TopLeftPoint,
					TopMidPoint,
					TopRightPoint,
					LeftMidPoint,
					CenterPoint,
					RightMidPoint,
					BottomLeftPoint,
					BottomMidPoint,
					BottomRightPoint
				};

				enum EVElementType
				{
					ET_MarkerNorthArrow  = 0, //指北针
					ET_Legend            = 1, //图例
					ET_Scale             = 2, //比例尺
					ET_MapTitle			 = 3, //地图标题 
					ET_SquareGrid		 = 4, //地图框架 
					ET_MapFrame			 = 5, //方格网 
					ET_TextInsert		 = 6, //插入文本 
					ET_PictureInsert	 = 7, //插入图片 
					ET_ScaleText		 = 8, //比例尺文本  
					ET_GeometryInsert	 = 9, //插入几何图形 
				};

				class EV_INTERFACE_DLL IElement : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~IElement();

				 public:

					 /// <summary>
					 /// 获取元素类型
					 /// </summary>
					 /// <param name=""></param>
					 /// <returns>元素类型</returns>
					 virtual EVElementType getElementType() const;

					/// <summary>
					/// 获取元素名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素名称</returns>
					virtual EVString getName() const;

					/// <summary>
					///设置元素名称
					/// </summary>
					/// <param name="name">元素名称</param>
					/// <returns></returns>
					virtual ev_void setName(EVString name);

					/// <summary>
					///获取元素边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>元素边框范围</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置元素边框范围
					/// </summary>
					/// <param name="pEnvelope">元素边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);;

					/// <summary>
					/// 获取元素是否被选中
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否被选中</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置元素是否被选中
					/// </summary>
					/// <param name="bSelected">是否被选中</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool bSelected);

					/// <summary>
					/// 绘制元素准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// 绘制结束后续处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();
					/// <summary>
					/// 克隆元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图元素</returns>
					virtual IElement *clone() const;
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
					/// <summary>
					/// 从xml元素中恢复指北针的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_internal:
					virtual ev_void fromStream(_in EarthView::World::Core::CDataStream& stream);	
				protected:
					IElement();
				ev_private:
					IElement(_in EarthView::World::Core::CNameValuePairList *pList );
				private:
					IElement(IElement& obj);
				};
			}
		}
	}
}


#endif