#ifndef _TERRAIN_COLOR_INFO_H_
#define _TERRAIN_COLOR_INFO_H_

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/xml.h"
#include "core/datastream.h"

#include "spatial3dengineconfig.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// 纯色地形信息类               
			/// </summary>
			class EV_Spatial3DEngine_DLL CTerrainColorInfo : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 纯色地形信息单位类               
				/// </summary>
				class EV_Spatial3DEngine_DLL TerrainColorUnit : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					TerrainColorUnit(EarthView::World::Core::CNameValuePairList* pList) : Altitude(0),R(0),G(0),B(0),PixelY(0){}
				public:
					ev_int32 Altitude;
					ev_uint8 R,G,B;
					ev_uint16 PixelY;			//纯色纹理图是一维的，上下走向的。

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					TerrainColorUnit() : Altitude(0),R(0),G(0),B(0),PixelY(0){}

					/// <summary>
					/// 重写<操作符
					/// </summary>
					/// <param name="rhs">纯色地形单位</param>
					/// <returns></returns>
					ev_bool operator< (const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& rhs){return Altitude < rhs.Altitude;}
					/// <summary>
					/// 重写>操作符
					/// </summary>
					/// <param name="rhs">纯色地形单位</param>
					/// <returns></returns>
					ev_bool operator> (const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& rhs){return Altitude > rhs.Altitude;}
					/// <summary>
					/// 重写==操作符
					/// </summary>
					/// <param name="rhs">纯色地形单位</param>
					/// <returns></returns>
					ev_bool operator== (const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& rhs)const
					{
						return Altitude == rhs.Altitude 
							&& R == rhs.R && G == rhs.G && B == rhs.B 
							&& PixelY == rhs.PixelY;
					}
					/// <summary>
					/// 重写!=操作符
					/// </summary>
					/// <param name="rhs">纯色地形单位</param>
					/// <returns></returns>
					ev_bool operator!= (const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& rhs)const
					{
						return Altitude != rhs.Altitude 
							|| R != rhs.R || G != rhs.G || B != rhs.B 
							|| PixelY != rhs.PixelY;
					}
				};
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTerrainColorInfo();
				CTerrainColorInfo(const CTerrainColorInfo& rhs);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CTerrainColorInfo();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTerrainColorInfo(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 获取颜色影像高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色影像高度</returns>
				ev_int16 getColorImageHeight()const {return 4096;}

				/// <summary>
				/// 获取最大单位
				/// </summary>
				/// <param name=""></param>
				/// <returns>最大单位</returns>
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit getMax() const;
				/// <summary>
				/// 设置最大单位
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <param name="r">r</param>
				/// <param name="g">g</param>
				/// <param name="b">b</param>
				/// <returns></returns>
				ev_void setMax(ev_int32 altitude, ev_uint8 r,ev_uint8 g ,ev_uint8 b);
				/// <summary>
				/// 获取最小单位
				/// </summary>
				/// <param name=""></param>
				/// <returns>最大单位</returns>
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit getMin() const;
				/// <summary>
				/// 设置最小单位
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <param name="r">r</param>
				/// <param name="g">g</param>
				/// <param name="b">b</param>
				/// <returns></returns>
				ev_void setMin(ev_int32 altitude, ev_uint8 r,ev_uint8 g ,ev_uint8 b);
				/// <summary>
				/// 获取单位
				/// </summary>
				/// <param name="unit">单位</param>
				/// <returns></returns>
				ev_bool insertUnit(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit unit);
				/// <summary>
				/// 判断是否存在单位
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <returns>是否存在</returns>
				ev_bool existUnit(ev_int32 altitude);
				/// <summary>
				/// 移除单位
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <returns>是否成功移除</returns>
				ev_bool removeUnit(ev_int32 altitude);
				/// <summary>
				/// 清除单位
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearUnits();
				/// <summary>
				/// 获取单位数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>单位数量</returns>
				ev_int32 getUnitCount()const;
				/// <summary>
				/// 获取单位
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>单位</returns>
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit getUnit(ev_uint32 index);
				/// <summary>
				/// 设置像素范围
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <param name="minPixel">最小像素</param>
				/// <param name="maxPixel">最大像素</param>
				/// <returns>是否成功</returns>
				ev_bool getExtent(ev_int32 altitude,_out ev_uint16& minPixel,_out ev_uint16& maxPixel);
				/// <summary>
				/// 重置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void reset();

			public:
				/// <summary>
				/// 写入XML元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>XML字符串</returns>
				EVString toXml()const;
				/// <summary>
				/// 从XML元素中恢复
				/// </summary>
				/// <param name="xmlElement">XML字符串</param>
				/// <returns>是否成功</returns>
				ev_bool fromXml(EarthView::World::Core::CXmlElement& xmlElement);

				/// <summary>
				/// 根据高程返回距离比例
				/// </summary>
				/// <param name="altitude">高程</param>
				/// <returns>距离比例</returns>
				ev_real32 locate(ev_real32 altitude)const;
				/// <summary>
				/// 绘制成图片
				/// </summary>
				/// <param name="imageType">图片类型</param>
				/// <returns>图片流</returns>
				EarthView::World::Core::MemoryDataStreamPtr render(const EVString& imageType)const;
				/// <summary>
				/// 绘制成栅格图片
				/// </summary>
				/// <param name="imageType">图片类型</param>
				/// <param name="width">图片宽度</param>
				/// <param name="height">图片高度</param>
				/// <returns>图片流</returns>
				static EarthView::World::Core::MemoryDataStreamPtr drawGrid(const EVString& imageType,ev_uint32 width,ev_uint32 height);

				/// <summary>
				/// 重写==操作符
				/// </summary>
				/// <param name="rhs">纯色地形信息</param>
				/// <returns></returns>
				ev_bool operator==(const EarthView::World::Spatial3D::CTerrainColorInfo& rhs);
				/// <summary>
				/// 重写！=操作符
				/// </summary>
				/// <param name="rhs">纯色地形信息</param>
				/// <returns></returns>
				ev_bool operator!=(const EarthView::World::Spatial3D::CTerrainColorInfo& rhs);
				
			protected:
				typedef list<EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit> TerrainUnits;
				TerrainUnits mUnits;

				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit mMin;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit mMax;

			};
		}
	}
}

#endif
