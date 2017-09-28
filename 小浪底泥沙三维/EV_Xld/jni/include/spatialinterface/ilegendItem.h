#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_ILEGENDITEM_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_ILEGENDITEM_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ilayer.h"
#include "core/xml.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_INTERFACE_DLL ILegendItem :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~ILegendItem();
				public:

					/// <summary>
					/// 获取图例名称
					/// </summary>
					/// <param name="c"></param>
					/// <returns>图例名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 设置图例名称
					/// </summary>
					/// <param name="c">图例名称</param>
					/// <returns></returns>
					virtual ev_void setName(_in const EVString& strName);

					/// <summary>
					/// 获取图例风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol() const;

					/// <summary>
					/// 设置图例风格
					/// </summary>
					/// <param name="c">图例风格</param>
					/// <returns>名称</returns>
					virtual ev_void setSymbol(_in EarthView::World::Spatial::Display::ISymbol * pSymbol);

					/// <summary>
					/// 获取图例几何类型
					/// </summary>
					/// <param name="c">图例几何类型</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;

					/// <summary>
					/// 设置图例几何类型
					/// </summary>
					/// <param name="type">图例几何类型</param>
					/// <returns></returns>
					virtual ev_void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type);

					/// <summary>
					/// 获取图例对应的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图例对应的图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer();

					/// <summary>
					/// 设置图例对应的图层
					/// </summary>
					/// <param name="pLayer">图层对象</param>
					/// <returns></returns>
					virtual ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* pLayer);

					/// <summary>
					/// 设置图例项的透明度
					/// </summary>
					/// <param name="nValue">透明值</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(_in ev_uint8 nValue);

					/// <summary>
					/// 获取图例项的透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					virtual ev_uint8 getTransparentValue() const;

					/// <summary>
					/// 判断是否是父项（在复杂专题图情况下，有父项和子项之分）
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否是父项</returns>
					virtual  ev_bool isParentItem() const;

					/// <summary>
					/// 设置是否是父项
					/// </summary>
					/// <param name="bParent">是否是父项</param>
					/// <returns></returns>
					virtual ev_void setParentItem(_in const ev_bool bParent);

					/// <summary>
					/// 克隆图例项
					/// </summary>
					/// <param name=""></param>
					/// <returns>克隆的对象</returns>
					virtual _extfree EarthView::World::Spatial::Carto::ILegendItem *clone() const;

					/// <summary>
					/// 从xml元素中恢复图例的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 把图例的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				protected:
					ILegendItem();
             ev_private:
					ILegendItem( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ILegendItem(ILegendItem & obj);
				};
			}
		}
	}
}

#endif

