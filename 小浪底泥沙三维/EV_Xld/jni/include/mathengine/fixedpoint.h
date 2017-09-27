#ifndef FIXEDPOINT_H_
#define FIXEDPOINT_H_
#pragma once
#include <core/memoryallocatedobject.h>
#include "mathengine_config.h"

// using namespace EarthView::World::Core;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				/// <summary>
				/// 定点数类
				/// 将浮点型数据转换成定点数进行运算
				/// </summary>
				class EV_MATHENGINE_DLL CFixedPoint : public EarthView::World::Core::CBaseObject
				{
				private:
					static const ev_int32 iMove = 16;
					/// <summary>
					/// 构造函数(私有，内部使用)
					/// </summary>
					/// <param name="val">整数值</param>
					/// <returns></returns>
					inline CFixedPoint ( _in const ev_int64 val)
					{
						m_intPart = val;
					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFixedPoint();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CFixedPoint();
					ev_int64 m_intPart;			///定点数整数部分
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="fval">单精度浮点数据</param>
					/// <returns></returns>
					CFixedPoint ( _in const ev_real32 fval);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="dval">双精度浮点数据</param>
					/// <returns></returns>
					CFixedPoint ( _in const ev_real64 dval);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ival">int整型数据</param>
					/// <returns></returns>
					CFixedPoint ( _in const ev_int32 ival);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFixedPoint(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns></returns>
					inline CFixedPoint ( _in const CFixedPoint &val): m_intPart(val.m_intPart) {}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator= ( _in const ev_real32 val)
					{
						m_intPart = (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator= ( _in const ev_real64 val)
					{
						m_intPart = (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="val">int整形数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator= ( _in const ev_int32 val)
					{
						m_intPart = (ev_int64)val << iMove;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator= ( _in const CFixedPoint &val)
					{
						m_intPart = val.m_intPart;
						return *this;
					}
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>相反符号定点型数据</returns>
					inline CFixedPoint &operator- ()
					{
						m_intPart = -m_intPart;
						return *this;
					}
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator+ ()
					{
						m_intPart = +m_intPart;
						return *this;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator+ ( _in const CFixedPoint val)
					{
						return CFixedPoint(m_intPart + val.m_intPart);
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator+ ( _in const ev_real32 val)
					{
						return CFixedPoint(m_intPart + (ev_int64)(val * (1 << iMove)));
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator+ ( _in const ev_real64 val)
					{
						return CFixedPoint(m_intPart + (ev_int64)(val * (1 << iMove)));
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator+ ( _in const ev_int32 val)
					{
						return CFixedPoint(m_intPart + (((ev_int64)(val)) << iMove));
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator- ( _in const CFixedPoint val)
					{
						return CFixedPoint(m_intPart - val.m_intPart);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator- ( _in const ev_real32 val)
					{
						return CFixedPoint(m_intPart - (ev_int64)(val * (1 << iMove)));
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator- ( _in const ev_real64 val)
					{
						return CFixedPoint(m_intPart - (ev_int64)(val * (1 << iMove)));
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator- ( _in const ev_int32 val)
					{
						return CFixedPoint(m_intPart - (((ev_int64)(val)) << iMove));
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator* ( _in const CFixedPoint val)
					{
						return CFixedPoint(m_intPart * val.m_intPart >> iMove);
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator* ( _in const ev_real32 val)
					{
						return CFixedPoint((ev_int64)(m_intPart * val));
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator* ( _in const ev_real64 val)
					{
						return CFixedPoint((ev_int64)(m_intPart * val));
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator* ( _in const ev_int32 val)
					{
						return CFixedPoint((ev_int64)(m_intPart * val));
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator/ ( _in const CFixedPoint val)
					{
						return CFixedPoint((ev_int64)((m_intPart << iMove) / val.m_intPart));
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator/ ( _in const ev_real32 val)
					{
						return CFixedPoint((ev_int64)(m_intPart / val));
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator/ ( _in const ev_real64 val)
					{
						return CFixedPoint((ev_int64)(m_intPart / val));
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator/ ( _in const ev_int32 val)
					{
						return CFixedPoint((ev_int64)(m_intPart / val));
					}
					/// <summary>
					/// 转换成为单精度数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>单精度数据数据</returns>
					inline operator ev_real32() const
					{
						return ev_real32(ev_real64(m_intPart) / (1 << iMove));
					}
					/// <summary>
					/// 转换成为双精度数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>双精度数据数据</returns>
					inline operator ev_real64() const
					{
						return ev_real64(m_intPart) / (1 << iMove);
					}
					/// <summary>
					/// 转换成为int32整型数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>int32整型数据</returns>
					inline operator ev_int32() const
					{
						return (ev_int32)(m_intPart >> iMove);
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator+=( _in const ev_real32 val)
					{
						m_intPart = m_intPart + (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator+=( _in const ev_real64 val)
					{
						m_intPart += (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="val">int32整数</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator+=( _in const ev_int32 val)
					{
						m_intPart += ((ev_int64)(val) * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator+=( _in const CFixedPoint &val)
					{
						m_intPart += val.m_intPart;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator-=( _in const ev_real32 val)
					{
						m_intPart -= (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator-=( _in const ev_real64 val)
					{
						m_intPart -= (ev_int64)(val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator-=( _in const ev_int32 val)
					{
						m_intPart -= (val * (1 << iMove));
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator-=( _in const CFixedPoint &val)
					{
						m_intPart -= val.m_intPart;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator*=( _in const ev_real32 val)
					{
						m_intPart = (ev_int64)(m_intPart * val);
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator*=( _in const ev_real64 val)
					{
						m_intPart = (ev_int64)(m_intPart * val);
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator*=( _in const ev_int32 val)
					{
						m_intPart = m_intPart * val;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator*=( _in const CFixedPoint &val)
					{
						m_intPart = (m_intPart * val.m_intPart >> iMove);
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator/=( _in const ev_real32 val)
					{
						m_intPart = (ev_int64)(m_intPart / val);
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator/=( _in const ev_real64 val)
					{
						m_intPart = (ev_int64)(m_intPart / val);
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator/=( _in const ev_int32 val)
					{
						m_intPart = (ev_int64)(ev_real64(m_intPart) / val);
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator/=( _in const CFixedPoint &val)
					{
						m_intPart = (ev_int64)(((m_intPart << iMove) / val.m_intPart));
						return *this;
					}
					/// <summary>
					/// 重载左自增操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator ++()
					{
						m_intPart = m_intPart + (1 << 16);    ///前缀
						return *this;
					}
					/// <summary>
					/// 重载左自减操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint &operator --()
					{
						m_intPart = m_intPart - (1 << 16);
						return *this;
					}
					/// <summary>
					/// 重载右自增操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator ++( _in ev_int32)
					{
						CFixedPoint ret(*this);    ///后缀
						++*this;
						return ret;
					}
					/// <summary>
					/// 重载右自减操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>定点型数据</returns>
					inline CFixedPoint operator --( _in ev_int32)
					{
						CFixedPoint ret(*this);
						--*this;
						return ret;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator ==( _in ev_real32 val) const
					{
						return m_intPart == (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator ==( _in ev_real64 val) const
					{
						return m_intPart == (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator ==( _in ev_int32 val) const
					{
						return m_intPart == val * (1 << iMove);
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator ==( _in const CFixedPoint &val) const
					{
						return m_intPart == val.m_intPart;
					}
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>不相等返回true，否则false</returns>
					inline ev_bool operator !=( _in ev_real32 val) const
					{
						return m_intPart != (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>不相等返回true，否则false</returns>
					inline ev_bool operator !=( _in ev_real64 val) const
					{
						return m_intPart != (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>不相等返回true，否则false</returns>
					inline ev_bool operator !=( _in ev_int32 val) const
					{
						return m_intPart != ((ev_int64)(val) << iMove);
					}
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>不相等返回true，否则false</returns>
					inline ev_bool operator !=( _in const CFixedPoint &val) const
					{
						return m_intPart != val.m_intPart;
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>大于返回true，否则false</returns>
					inline ev_bool operator >( _in ev_real32 val) const
					{
						return m_intPart > (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>大于返回true，否则false</returns>
					inline ev_bool operator >( _in ev_real64 val) const
					{
						return m_intPart > (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>大于返回true，否则false</returns>
					inline ev_bool operator >( _in ev_int32 val) const
					{
						return m_intPart > ((ev_int64)(val) << iMove);
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>大于返回true，否则false</returns>
					inline ev_bool operator >( _in const CFixedPoint &val) const
					{
						return m_intPart > val.m_intPart;
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>小于返回true，否则false</returns>
					inline ev_bool operator <( _in ev_real32 val) const
					{
						return m_intPart < (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>小于返回true，否则false</returns>
					inline ev_bool operator <( _in ev_real64 val) const
					{
						return m_intPart <= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="val">int32整型数据</param>
					/// <returns>小于返回true，否则false</returns>
					inline ev_bool operator <( _in ev_int32 val) const
					{
						return m_intPart <= ((ev_int64)val << iMove);
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>小于返回true，否则false</returns>
					inline ev_bool operator <( _in const CFixedPoint &val) const
					{
						return m_intPart < val.m_intPart;
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>大于相等返回true，否则false</returns>
					inline ev_bool operator >=( _in ev_real32 val) const
					{
						return m_intPart >= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>大于相等返回true，否则false</returns>
					inline ev_bool operator >=( _in ev_real64 val) const
					{
						return m_intPart >= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="val">int32数据</param>
					/// <returns>大于相等返回true，否则false</returns>
					inline ev_bool operator >=( _in ev_int32 val) const
					{
						return m_intPart >= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>大于相等返回true，否则false</returns>
					inline ev_bool operator >=( _in const CFixedPoint &val) const
					{
						return m_intPart >= val.m_intPart;
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="val">单精度浮点数据</param>
					/// <returns>小于相等返回true，否则false</returns>
					inline ev_bool operator <=( _in ev_real32 val) const
					{
						return m_intPart <= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="val">双精度浮点数据</param>
					/// <returns>小于相等返回true，否则false</returns>
					inline ev_bool operator <=( _in ev_real64 val) const
					{
						return m_intPart <= (ev_int64)(val * (1 << iMove));
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="val">int32数据</param>
					/// <returns>小于相等返回true，否则false</returns>
					inline ev_bool operator <=( _in ev_int32 val) const
					{
						return m_intPart <= ((ev_int64)(val) << iMove);
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="val">定点型数据</param>
					/// <returns>小于相等返回true，否则false</returns>
					inline ev_bool operator <=( _in const CFixedPoint &val) const
					{
						return m_intPart <= val.m_intPart;
					}
				};
				///#if EV_USE_FIXED_POINT
				///	typedef EarthView::World::Graphic::CFixedPoint Real;
				///#else
				///#pragma warning(disable:4305)
				///#endif
			}
		}    
		
	}
}

#endif

