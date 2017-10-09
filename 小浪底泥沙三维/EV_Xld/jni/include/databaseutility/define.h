#ifndef _DEFINE_H_H_
#define _DEFINE_H_H_


#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"
#include "core/datastream.h"
#include "core/char.h"

#ifdef EV_DatabaseUtility_Export
#	define EV_SQL_DLL EV_DLL_EXPORT
#else
#	define EV_SQL_DLL EV_DLL_IMPORT
#endif


namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {


enum EVLocationType
{
    LT_BeforeFirstRow = -1,
    LT_AfterLastRow = -2
};

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
enum EVTableType
{
    TT_Tables			= 0x01, //所有用户可见表
    TT_SystemTables		= 0x02, //系统表
    TT_Views			= 0x04, //所有用户可见视图
    TT_AllTables		= 0xff  //以上所有表
};

/// <summary>
/// 参数传输类型枚举
/// </summary>
enum EVParamType
{
	PT_In,         //传入参数
	PT_Out,		//传出参数
	PT_InOut,	//传入传出参数
	PT_Binary		//与前面三个参数一起使用，指示参数是二进制数据
};

/// <summary>
/// 数值精度策略枚举
/// </summary>
enum EVNumericalPrecisionPolicy
{
    NP_LowPrecisionInt32    = 0x01,
    NP_LowPrecisionInt64    = 0x02,
    NP_LowPrecisionDouble   = 0x04,
    NP_HighPrecision        = 0
};

} // namespace Database
} // namespace Core
} //namespace World
} // namespace EarthView

#endif //_DEFINE_H_H_
