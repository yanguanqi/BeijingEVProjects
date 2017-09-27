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
		namespace Core
		{
			namespace Database
			{
				public enum EVLOCATIONTYPE
				{
								LT_BeforeFirstRow = 1,
								LT_AfterLastRow = 2
				
				}

				///// <summary>
				///// 数据类型枚举
				///// </summary>
				//enum CVariant::EVDataType
				//{
				//	CVariant::DT_Unknown				= 0,
				//	CVariant::DT_Bool					= 1,
				//	CVariant::DT_UInt32				= 2,
				//	CVariant::DT_Int32				= 3,
				//	CVariant::DT_UInt64				= 4,
				//	CVariant::DT_Int64				= 5,
				//	CVariant::DT_Real32				= 6,
				//	CVariant::DT_Real64				= 7,
				//	CVariant::DT_String				= 8,
				//	CVariant::DT_WString				= 9,
				//	CVariant::DT_Time					= 10,
				//	CVariant::DT_MemoryDataStream		= 11
				//};
				/// <summary>
				/// 数据库表的类型枚举
				/// </summary>
				public enum EVTABLETYPE
				{
								TT_Tables = 0x01,
								TT_SystemTables = 0x02,
								TT_Views = 0x04,
								TT_AllTables = 0xff
				
				}

				/// <summary>
				/// 参数传输类型枚举
				/// </summary>
				public enum EVPARAMTYPE
				{
								PT_In,
								PT_Out,
								PT_InOut,
								PT_Binary
				
				}

				/// <summary>
				/// 数值精度策略枚举
				/// </summary>
				public enum EVNUMERICALPRECISIONPOLICY
				{
								NP_LowPrecisionInt32 = 0x01,
								NP_LowPrecisionInt64 = 0x02,
								NP_LowPrecisionDouble = 0x04,
								NP_HighPrecision = 0
				
				}

			}
		}
	}
}
