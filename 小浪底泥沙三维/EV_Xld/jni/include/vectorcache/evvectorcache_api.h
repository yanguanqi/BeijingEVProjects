#ifndef EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_EVVECTORCACHE_API_H
#define EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_EVVECTORCACHE_API_H

#ifdef EV_VECTORCACHE_EXPORTS
	#define EVVECTORCACHE_API EV_DLL_EXPORT
#else
	#define EVVECTORCACHE_API EV_DLL_IMPORT
#endif

#include "core/core_api.h"

#define Math_PI 3.141592653589793f
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorCache
			{
				/// <summary>
				/// 切割模板
				/// </summary>
				enum EVVectorCacheTemplateMode
				{
					/// <summary>
					/// WGS84
					/// </summary>
					VectorCacheTemplateMode_WGS84		=	1,
					/// <summary>
					/// 墨卡托
					/// </summary>
					VectorCacheTemplateMode_Mercator	=	2,
				};
				/// <summary>
				/// 缓存数据几何类型
				/// </summary>
				enum EVVectorCacheGeometryType
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheGeometryType_Unknown		= 0,
					/// <summary>
					/// 点
					/// </summary>
					VectorCacheGeometryType_Point		=21,
					/// <summary>
					/// 线
					/// </summary>
					VectorCacheGeometryType_Polyline	=22,
					/// <summary>
					/// 面
					/// </summary>
					VectorCacheGeometryType_Polygon		=23
				};
				/// <summary>
				/// 缓存处理阶段
				/// </summary>
				enum EVVectorCacheProcess
				{
					/// <summary>
					/// 准备
					/// </summary>
					VectorCacheProcess_Process_Ready	=	0,
					/// <summary>
					/// 切割
					/// </summary>
					VectorCacheProcess_Process_Clip		=	1,
					/// <summary>
					/// 创建
					/// </summary>
					VectorCacheProcess_Process_Create	=	2,
					/// <summary>
					/// 准备创建，防止获取已处理信息发生错误
					/// </summary>
					VectorCacheProcess_Process_PreCreate	=	3,
					/// <summary>
					/// 处理完成
					/// </summary>
					VectorCacheProcess_Process_AllDone	=	100,
				};
				/// <summary>
				/// 操作类型
				/// </summary>
				enum EVVectorCachePauseType
				{
					/// <summary>
					/// 未操作
					/// </summary>
					VectorCachePauseType_UnDone		=	0,
					/// <summary>
					/// 停止
					/// </summary>
					VectorCachePauseType_Stop		=	1,
					/// <summary>
					/// 继续
					/// </summary>
					VectorCachePauseType_Restart	=	2
				};
				/// <summary>
				/// 缓存数据格式
				/// </summary>
				enum EVVectorCacheDataFormat
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheDataFormat_Unknown				=	0,
					//VectorCacheDataFormat_FILE_COMPRESSED_7Z	=	60,
					//VectorCacheDataFormat_FILE_UNCOMPRESSED		=	61,
					
					/// <summary>
					/// 存储于sqlite数据库
					/// </summary>
					VectorCacheDataFormat_SQLITE3_UNCOMPRESSED	=	151,
					/// <summary>
					/// 数据流7z压缩存储于sqlite数据库
					/// </summary>
					VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z	=	152
				};
				/////////////////////////属性字段类型
				/// <summary>
				/// 生成缓存时支持导入的字段类型
				/// </summary>
				enum EVVectorCacheFieldType
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheFieldType_Unknown	=	0,
					/// <summary>
					/// 整型
					/// </summary>
					VectorCacheFieldType_Int32		=	1,
					/// <summary>
					/// 长整形
					/// </summary>
					VectorCacheFieldType_Long		=	2,
					/// <summary>
					/// 双精度浮点型
					/// </summary>
					VectorCacheFieldType_Real64		=	11,
					/// <summary>
					/// 字符串
					/// </summary>
					VectorCacheFieldType_String		=	12,
					/// <summary>
					/// 布尔型
					/// </summary>
					VectorCacheFieldType_Bool		=	21,
					/// <summary>
					/// 二进制
					/// </summary>
					VectorCacheFieldType_Binary		=	22
				};

				/// <summary>
				/// 操作结果
				/// </summary>
				enum EVVectorCacheProcessResult
				{
					/// <summary>
					/// 正确
					/// </summary>
					VectorCacheProcessResult_Ok								=	0,
					/// <summary>
					/// 模板错误
					/// </summary>
					VectorCacheProcessResult_Error_Template					=	1,
					/// <summary>
					/// 临时文件不存在
					/// </summary>
					VectorCacheProcessResult_Error_TempFileNotExists		=	2,
					/// <summary>
					/// 临时文件已经存在
					/// </summary>
					VectorCacheProcessResult_Error_TempFileAlreadyExists	=   3,
					/// <summary>
					/// 存在相同文件夹名称
					/// </summary>
					VectorCacheProcessResult_Error_ResultFolderExists		=   4,
					/// <summary>
					/// 文件已经存在
					/// </summary>
					VectorCacheProcessResult_Error_FileAlreadyExists       =   5,
					/// <summary>
					/// 缓存格式错误
					/// </summary>
					VectorCacheProcessResult_Error_CacheFormat             =   7,
					/// <summary>
					/// 最小数据级别错误
					/// </summary>
					VectorCacheProcessResult_Error_MinRange                =   8,
					/// <summary>
					/// 最大数据级别错误
					/// </summary>
					VectorCacheProcessResult_Error_MaxRange                =   9,
					/// <summary>
					/// 范围发生变化
					/// </summary>
					VectorCacheProcessResult_Error_RangeChange             =   10,
					/// <summary>
					/// 未设置文件名称
					/// </summary>
					VectorCacheProcessResult_Error_NoFileName				=	13,
					/// <summary>
					/// 路径不可用
					/// </summary>
					VectorCacheProcessResult_Error_SavePathInvalid			=	14,
					/// <summary>
					/// 数据集名称错误
					/// </summary>
					VectorCacheProcessResult_Error_TableNameError          =   15,
					/// <summary>
					/// 未设置保存路径
					/// </summary>
					VectorCacheProcessResult_Error_NoSavedPath             =   16,
					/// <summary>
					/// 数据时间错误
					/// </summary>
					VectorCacheProcessResult_Error_DataTime                =   17, 
					/// <summary>
					/// 操作监听类总数错误
					/// </summary>
					VectorCacheProcessResult_Error_NoTotalNum             =   18,
					/// <summary>
					/// 缓存范围错误
					/// </summary>
					VectorCacheProcessResult_Error_CacheRect               =   19,
					/// <summary>
					/// 缓存模板不支持
					/// </summary>
					VectorCacheProcessResult_Error_TemplateTypeNotSupport  = -1,
					/// <summary>
					/// 切割级别错误
					/// </summary>
					VectorCacheProcessResult_Error_ClipLevel               =  21,
					/// <summary>
					/// 瓦片分割数数错误
					/// </summary>
					VectorCacheProcessResult_Error_SubTileNum              =  23,
					/// <summary>
					/// 单位错误
					/// </summary>
					VectorCacheProcessResult_Error_UnitType                = 24,
					/// <summary>
					/// 初级跨度错误
					/// </summary>
					VectorCacheProcessResult_Error_FirstTileSpace          =  25,
					/// <summary>
					/// 瓦片起始位置错误
					/// </summary>
					VectorCacheProcessResult_Error_OrientPosition          =  26,
					/// <summary>
					/// 分块信息错误
					/// </summary>
					VectorCacheProcessResult_Error_DevisionInfo            =  27,
					/// <summary>
					/// 文件夹名过长
					/// </summary>
					VectorCacheProcessResult_Error_FolderNameTooLong		= 28,
					/// <summary>
					/// 不支持当前几何类型
					/// </summary>
					VectorCacheProcessResult_Error_GeometryNotSupport		=	30,
					/// <summary>
					/// 超出范围
					/// </summary>
					VectorCacheProcessResult_Error_OutOfCacheRect			=	31,
					/// <summary>
					/// 切割错误
					/// </summary>
					VectorCacheProcessResult_Error_ClipError				=	32,
					/// <summary>
					/// 7z压缩错误
					/// </summary>
					VectorCacheProcessResult_Error_7zCompress				=	40,
					/// <summary>
					/// 生成配置文件错误
					/// </summary>
					VectorCacheProcessResult_Error_WriteETM					=	49,
					/// <summary>
					/// 存在同名配置文件
					/// </summary>
					VectorCacheProcessResult_Error_ETMExists				=	50,
					/// <summary>
					/// 未设置缓存信息对象
					/// </summary>
					VectorCacheProcessResult_Error_ProcessInfoNotGiven		=	51,
					/// <summary>
					/// 生成数据集名称错误
					/// </summary>
					VectorCacheProcessResult_Error_DatabaseName				=	52,
					/// <summary>
					/// 属性级别错误
					/// </summary>
					VectorCacheProcessResult_Error_AttributeLevel			=	53,
					/// <summary>
					/// 基本参数缺失
					/// </summary>
					VectorCacheProcessResult_Error_BasicParamAbsent			=	54,
					/// <summary>
					/// 无数据无法生成缓存
					/// </summary>
					VectorCacheProcessResult_Error_NoDataToMakeCache		=	55,
					/// <summary>
					/// 缓存信息对象错误
					/// </summary>
					VectorCacheProcessResult_Error_ProcessInfo				=	60,
					/// <summary>
					/// 坐标系统不支持
					/// </summary>
					VectorCacheProcessResult_Error_CoordinateSystemNotSupport	=	61,
					/// <summary>
					/// 坐标超限
					/// </summary>
					VectorCacheProcessResult_Error_CoordinateExtension		=	62,
					/// <summary>
					/// 程序停止
					/// </summary>
					VectorCacheProcessResult_Stop							=	70
				};
				/// <summary>
				/// 缓存瓦片起点位置
				/// </summary>
				enum EVVectorCacheOrientPosition
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheOrientPosition_Unknown		=	0,
					/// <summary>
					/// 左上角
					/// </summary>
					VectorCacheOrientPosition_Left_Up		=	1,
					/// <summary>
					/// 左下角
					/// </summary>
					VectorCacheOrientPosition_Left_Bottom	=	2,
					/// <summary>
					/// 右上角
					/// </summary>
					VectorCacheOrientPosition_Right_Up		=	3,
					/// <summary>
					/// 右下角
					/// </summary>
					VectorCacheOrientPosition_Right_Bottom	=	4,
					/// <summary>
					/// 中间
					/// </summary>
					VectorCacheOrientPosition_Center		=	5
				};
				/// <summary>
				/// 缓存制作所用真实世界距离单位
				/// </summary>
				enum EVVectorCacheUnitType
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheUnitType_Unknown	=	0,
					/// <summary>
					/// 经纬度
					/// </summary>
					VectorCacheUnitType_Degree	=	1,
					/// <summary>
					/// 弧度
					/// </summary>
					VectorCacheUnitType_Radian	=	2
				};
 
				/// <summary>
				/// 地理范围
				/// </summary>
				struct GeoRect
				{
					/// <summary>
					/// x最小值
					/// </summary>
					ev_real64 xMin;
					/// <summary>
					/// y最小值
					/// </summary>
					ev_real64 yMin;
					/// <summary>
					/// x最大值
					/// </summary>
					ev_real64 xMax;
					/// <summary>
					/// y最大值
					/// </summary>
					ev_real64 yMax;
				};
			}
		}
	}
}
#endif
