#ifndef EARTHVIEW_WORLD_CHART_EXPORTS_H
#define EARTHVIEW_WORLD_CHART_EXPORTS_H

/////#include "core/core_api.h"

#ifdef EV_CHART_EXPORTS
#define EVCHART_DLL	EV_DLL_EXPORT
#else
#define EVCHART_DLL EV_DLL_IMPORT
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				/// <summary>
				/// 投影方法
				/// </summary>
				enum EVChartProjectionDef
				{
					/// <summary>
					/// Albert equal area
					/// </summary>
					CPD_ALA	=	1,		
					/// <summary>
					/// Azimuthal equal area
					/// </summary>
					CPD_AZA	=	2,		
					/// <summary>
					/// Azimuthal equal distance
					/// </summary>
					CPD_AZD =	3,		
					/// <summary>
					/// Gnonomic
					/// </summary>
					CPD_GNO =	4,		
					/// <summary>
					/// Hotine oblique Mercator(rectified skew orthomorphic)
					/// </summary>
					CPD_HOM	=	5,		
					/// <summary>
					/// Lambert conformal conic	
					/// </summary>
					CPD_LCC =	6,	
					/// <summary>
					/// Lambert equal area
					/// </summary>
					CPD_LEA	=	7,		
					/// <summary>
					/// Mercator
					/// </summary>
					CPD_MER	=	8,		
					/// <summary>
					/// Oblique Mercator
					/// </summary>
					CPD_OME	=	9,		
					/// <summary>
					/// Orthographic
					/// </summary>
					CPD_ORT	=	10,		
					/// <summary>
					/// Polar stereo graphic
					/// </summary>
					CPD_PST =	11,		
					/// <summary>
					/// Polyconic
					/// </summary>
					CPD_POL	=	12,		
					/// <summary>
					/// Transverse Mercator
					/// </summary>
					CPD_TME	=	13,	
					/// <summary>
					/// Oblique stereographic
					/// </summary>
					CPD_OST	=	14 	
				};
				/// <summary>
				/// 海图几何对象类型
				/// </summary>
				enum EVChartGeomType
				{
					/// <summary>
					/// 未知
					/// </summary>
					CGT_Chart_Unknown = 0,
					/// <summary>
					/// 点
					/// </summary>
					CGT_Chart_Point = 1,
					/// <summary>
					/// 线
					/// </summary>
					CGT_Chart_Line = 2,
					/// <summary>
					/// 面
					/// </summary>
					CGT_Chart_Area = 3,
					/// <summary>
					/// 集合
					/// </summary>
					CGT_Chart_Collection = 255
				};
				/// <summary>
				/// 海图000文件中几何对象类型
				/// </summary>
				enum EVChartPrimitive
				{
					/// <summary>
					/// 未知
					/// </summary>
					CP_UNKNOWN	= 0,
					/// <summary>
					/// 点
					/// </summary>
					CP_Point	= 1,
					/// <summary>
					/// 线
					/// </summary>
					CP_Line		= 2,
					/// <summary>
					/// 面
					/// </summary>
					CP_Area		= 3,
					/// <summary>
					/// 集合
					/// </summary>
					CP_Collection	= 255
				};
				/// <summary>
				/// 海图000文件中属性类型
				/// </summary>
				enum EVChartAttributeType
				{
					/// <summary>
					/// 未知
					/// </summary>
					CAT_UNKNOWN = 0,
					/// <summary>
					/// Enumerated枚举
					/// </summary>
					CAT_E	=	1,
					/// <summary>
					/// List of enumerated values枚举列表
					/// </summary>
					CAT_L	=	2,
					/// <summary>
					/// Float浮点型
					/// </summary>
					CAT_F	=	3,
					/// <summary>
					/// Integer整型
					/// </summary>
					CAT_I	=	4,
					/// <summary>
					/// Code string in ASCII characters ASCII
					/// </summary>
					CAT_A	=	5,	
					/// <summary>
					/// Free text format文本
					/// </summary>
					CAT_S	=	6	
				};
				/// <summary>
				/// 海图000文件中数据类型
				/// </summary>
				enum EVChartDataType
				{
					/// <summary>
					/// 未知
					/// </summary>
					CFT_UNKNOWN	= 0,
					/// <summary>
					/// Meta object元数据对象
					/// </summary>
					CFT_M	=	1,
					/// <summary>
					/// Cartographic object制图对象
					/// </summary>
					CFT_CA	=	2,
					/// <summary>
					/// Geo object地理对象
					/// </summary>
					CFT_G	=	3,
					/// <summary>
					/// Collection object集合对象
					/// </summary>
					CFT_C	=	4,
					/// <summary>
					/// Feature attribute要素属性
					/// </summary>
					CFT_F	=	5,
					/// <summary>
					/// Feature national attribute要素母语注记属性
					/// </summary>
					CFT_N	=	6,
					/// <summary>
					/// Spatial attribute空间属性
					/// </summary>
					CFT_S	=	7
				};
				/// <summary>
				/// 数据操作类的类型
				/// </summary>
				enum EVChartOperatorType
				{
					/// <summary>
					/// 未知
					/// </summary>
					COT_Unknown	= 0,
					/// <summary>
					/// 操作000文件
					/// </summary>
					COT_File000	= 1
				};
			}
		}
	}
}
#endif
