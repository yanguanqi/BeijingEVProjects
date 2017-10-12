/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

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
				public enum EVVECTORCACHETEMPLATEMODE
				{
								VectorCacheTemplateMode_WGS84 = 1,
								VectorCacheTemplateMode_Mercator = 2
				
				}

				/// <summary>
				/// 缓存数据几何类型
				/// </summary>
				public enum EVVECTORCACHEGEOMETRYTYPE
				{
								VectorCacheGeometryType_Unknown = 0,
								VectorCacheGeometryType_Point = 21,
								VectorCacheGeometryType_Polyline = 22,
								VectorCacheGeometryType_Polygon = 23
				
				}

				/// <summary>
				/// 缓存处理阶段
				/// </summary>
				public enum EVVECTORCACHEPROCESS
				{
								VectorCacheProcess_Process_Ready = 0,
								VectorCacheProcess_Process_Clip = 1,
								VectorCacheProcess_Process_Create = 2,
								VectorCacheProcess_Process_PreCreate = 3,
								VectorCacheProcess_Process_AllDone = 100
				
				}

				/// <summary>
				/// 操作类型
				/// </summary>
				public enum EVVECTORCACHEPAUSETYPE
				{
								VectorCachePauseType_UnDone = 0,
								VectorCachePauseType_Stop = 1,
								VectorCachePauseType_Restart = 2
				
				}

				/// <summary>
				/// 缓存数据格式
				/// </summary>
				public enum EVVECTORCACHEDATAFORMAT
				{
								VectorCacheDataFormat_Unknown = 0,
								VectorCacheDataFormat_SQLITE3_UNCOMPRESSED = 151,
								VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z = 152
				
				}

				/////////////////////////属性字段类型
				/// <summary>
				/// 生成缓存时支持导入的字段类型
				/// </summary>
				public enum EVVECTORCACHEFIELDTYPE
				{
								VectorCacheFieldType_Unknown = 0,
								VectorCacheFieldType_Int32 = 1,
								VectorCacheFieldType_Long = 2,
								VectorCacheFieldType_Real64 = 11,
								VectorCacheFieldType_String = 12,
								VectorCacheFieldType_Bool = 21,
								VectorCacheFieldType_Binary = 22
				
				}

				/// <summary>
				/// 操作结果
				/// </summary>
				public enum EVVECTORCACHEPROCESSRESULT
				{
								VectorCacheProcessResult_Ok = 0,
								VectorCacheProcessResult_Error_Template = 1,
								VectorCacheProcessResult_Error_TempFileNotExists = 2,
								VectorCacheProcessResult_Error_TempFileAlreadyExists = 3,
								VectorCacheProcessResult_Error_ResultFolderExists = 4,
								VectorCacheProcessResult_Error_FileAlreadyExists = 5,
								VectorCacheProcessResult_Error_CacheFormat = 7,
								VectorCacheProcessResult_Error_MinRange = 8,
								VectorCacheProcessResult_Error_MaxRange = 9,
								VectorCacheProcessResult_Error_RangeChange = 10,
								VectorCacheProcessResult_Error_NoFileName = 13,
								VectorCacheProcessResult_Error_SavePathInvalid = 14,
								VectorCacheProcessResult_Error_TableNameError = 15,
								VectorCacheProcessResult_Error_NoSavedPath = 16,
								VectorCacheProcessResult_Error_DataTime = 17,
								VectorCacheProcessResult_Error_NoTotalNum = 18,
								VectorCacheProcessResult_Error_CacheRect = 19,
								VectorCacheProcessResult_Error_TemplateTypeNotSupport = 1,
								VectorCacheProcessResult_Error_ClipLevel = 21,
								VectorCacheProcessResult_Error_SubTileNum = 23,
								VectorCacheProcessResult_Error_UnitType = 24,
								VectorCacheProcessResult_Error_FirstTileSpace = 25,
								VectorCacheProcessResult_Error_OrientPosition = 26,
								VectorCacheProcessResult_Error_DevisionInfo = 27,
								VectorCacheProcessResult_Error_FolderNameTooLong = 28,
								VectorCacheProcessResult_Error_GeometryNotSupport = 30,
								VectorCacheProcessResult_Error_OutOfCacheRect = 31,
								VectorCacheProcessResult_Error_ClipError = 32,
								VectorCacheProcessResult_Error_7zCompress = 40,
								VectorCacheProcessResult_Error_WriteETM = 49,
								VectorCacheProcessResult_Error_ETMExists = 50,
								VectorCacheProcessResult_Error_ProcessInfoNotGiven = 51,
								VectorCacheProcessResult_Error_DatabaseName = 52,
								VectorCacheProcessResult_Error_AttributeLevel = 53,
								VectorCacheProcessResult_Error_BasicParamAbsent = 54,
								VectorCacheProcessResult_Error_NoDataToMakeCache = 55,
								VectorCacheProcessResult_Error_ProcessInfo = 60,
								VectorCacheProcessResult_Error_CoordinateSystemNotSupport = 61,
								VectorCacheProcessResult_Error_CoordinateExtension = 62,
								VectorCacheProcessResult_Stop = 70
				
				}

				/// <summary>
				/// 缓存瓦片起点位置
				/// </summary>
				public enum EVVECTORCACHEORIENTPOSITION
				{
								VectorCacheOrientPosition_Unknown = 0,
								VectorCacheOrientPosition_Left_Up = 1,
								VectorCacheOrientPosition_Left_Bottom = 2,
								VectorCacheOrientPosition_Right_Up = 3,
								VectorCacheOrientPosition_Right_Bottom = 4,
								VectorCacheOrientPosition_Center = 5
				
				}

				/// <summary>
				/// 缓存制作所用真实世界距离单位
				/// </summary>
				public enum EVVECTORCACHEUNITTYPE
				{
								VectorCacheUnitType_Unknown = 0,
								VectorCacheUnitType_Degree = 1,
								VectorCacheUnitType_Radian = 2
				
				}

				/// <summary>
				/// 地理范围
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct GEORECT
				{
					public double xMin;
					public double yMin;
					public double xMax;
					public double yMax;
				}

			}
		}
	}
}
