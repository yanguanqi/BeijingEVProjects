#ifndef _COLOURVALUE_H__
#define _COLOURVALUE_H__
#pragma once
#include <ostream>
#include "core/global.h"
#include <mathengine/ev_math.h>
#include "graphic_config.h"
//#include "gdip.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CFixedPoint;
			}
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            typedef ev_uint32 RGBA;
            typedef ev_uint32 ARGB;
            typedef ev_uint32 ABGR;
            typedef ev_uint32 BGRA;
            /// <summary>
            /// 描绘颜色的类
            /// 通过设置四个参数的值来呈现不同的颜色
            /// </summary>
            class EV_GRAPHIC_DLL CColourValue : public EarthView::World::Core::CBaseObject
            {
            public:
                static const EarthView::World::Graphic::CColourValue ZERO;
                static const EarthView::World::Graphic::CColourValue Black;
                static const EarthView::World::Graphic::CColourValue White;
                static const EarthView::World::Graphic::CColourValue Red;
                static const EarthView::World::Graphic::CColourValue Green;
                static const EarthView::World::Graphic::CColourValue Blue;

                static const EarthView::World::Graphic::CColourValue Selection;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CColourValue();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CColourValue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="red">红色的值</param>
                /// <returns></returns>
                CColourValue(_in ev_real32 red );
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="red">红色的值</param>
                /// <param name="green">绿色的值</param>
                /// <returns></returns>
                CColourValue(_in ev_real32 red , _in ev_real32 green);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="red">红色的值</param>
                /// <param name="green">绿色的值</param>
                /// <param name="blue">蓝色的值</param>
                /// <returns></returns>
                CColourValue(_in ev_real32 red , _in ev_real32 green, _in ev_real32 blue);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="red">红色的值</param>
                /// <param name="green">绿色的值</param>
                /// <param name="blue">蓝色的值</param>
                /// <param name="blue">alpha的值</param>
                /// <returns></returns>
                CColourValue(_in ev_real32 red , _in ev_real32 green, _in ev_real32 blue, _in ev_real32 alpha);
                /// <summary>
                /// 等号"=="重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>相等返回true，否则false</returns>
                ev_bool operator==(_in const EarthView::World::Graphic::CColourValue &rhs) const;
                /// <summary>
                /// 不等号"!="重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>不相等返回true，否则false</returns>
                ev_bool operator!=(_in const EarthView::World::Graphic::CColourValue &rhs) const;
                ev_real32 r, g, b, a;
                /// <summary>
                /// 当作为RGBA时重新得到颜色
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回RGBA颜色值</returns>
                RGBA getAsRGBA() const;
                /// <summary>
                /// 当作为ARGB时重新得到颜色
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回ARGB颜色值</returns>
                ARGB getAsARGB() const;
                /// <summary>
                /// 当作为BGRA时重新得到颜色
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回BGRA颜色值</returns>
                BGRA getAsBGRA() const;
                /// <summary>
                /// 当作为ABGR时重新得到颜色
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>返回ABGR颜色值</returns>
                ABGR getAsABGR() const;
                /** Sets colour as RGBA.
                */
                /// <summary>
                /// 当作为RGBA时设置颜色
                /// </summary>
                /// <param name="val">RGBA的const变量</param>
                /// <returns></returns>
                void setAsRGBA(_in const RGBA val);
                /// <summary>
                /// 当作为ARGB时设置颜色
                /// </summary>
                /// <param name="val">ARGB的const变量</param>
                /// <returns></returns>
                void setAsARGB(_in const ARGB val);
                /// <summary>
                /// 当作为BGRA时设置颜色
                /// </summary>
                /// <param name="val">BGRA的const变量</param>
                /// <returns></returns>
                void setAsBGRA(_in const BGRA val);
                /// <summary>
                /// 当作为ABGR时设置颜色
                /// </summary>
                /// <param name="val">ABGR的const变量</param>
                /// <returns></returns>
                void setAsABGR(_in const ABGR val);
                /// <summary>
                /// 使颜色的值处于[0,1]范围内，即颜色值得归一化处理
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void saturate();
                /// <summary>
                /// 将归一化处理的值赋给原来的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回归一化处理后的值</returns>
                EarthView::World::Graphic::CColourValue saturateCopy() const;
                /// <summary>
                /// 重载数组访问器,即为数组"[]"下标符号的重载
                /// </summary>
                /// <param name="i">数组下标</param>
                /// <returns>返回成员变量r的地址移动i位后地址里的值</returns>
                inline ev_real32 operator [] (_in const ev_size_t i ) const
                {
                    EV_ASSERT( i < 4 );
                    return *(&r + i);
                }
                /// <summary>
                /// 重载数组访问器,即为数组"[]"下标符号的重载
                /// </summary>
                /// <param name="i">数组下标</param>
                /// <returns>返回成员变量r的地址移动i位后地址里的值</returns>
                inline ev_real32 &operator [] (_in const ev_size_t i )
                {
                    EV_ASSERT( i < 4 );
                    return *(&r + i);
                }
                /// <summary>
                /// 指针访问器重载，用于直接拷贝
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回成员变量r的地址</returns>
                inline ev_real32 *ptr()
                {
                    return &r;
                }
                /// <summary>
                /// 指针访问器重载，用于直接拷贝
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回成员变量r的地址</returns>
                inline const ev_real32 *ptr() const
                {
                    return &r;
                }
                /// <summary>
                /// 算术运算符"+"重载
                /// </summary>
                /// <param name="rkVector">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回相加之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator+ (_in const EarthView::World::Graphic::CColourValue& rkVector ) const
                {
                    EarthView::World::Graphic::CColourValue kSum;
                    kSum.r = r + rkVector.r;
                    kSum.g = g + rkVector.g;
                    kSum.b = b + rkVector.b;
                    kSum.a = a + rkVector.a;
                    return kSum;
                }
                /// <summary>
                /// 算术运算符"-"重载
                /// </summary>
                /// <param name="rkVector">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回相减之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator- (_in const EarthView::World::Graphic::CColourValue& rkVector ) const
                {
                    EarthView::World::Graphic::CColourValue kDiff;
                    kDiff.r = r - rkVector.r;
                    kDiff.g = g - rkVector.g;
                    kDiff.b = b - rkVector.b;
                    kDiff.a = a - rkVector.a;
                    return kDiff;
                }
                /// <summary>
                /// 算术运算符"*"重载
                /// </summary>
                /// <param name="fScalar">浮点型的变量</param>
                /// <returns>返回fScalar与成员变量相乘之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator* (_in const ev_real32 fScalar ) const
                {
                    EarthView::World::Graphic::CColourValue kProd;
                    kProd.r = fScalar * r;
                    kProd.g = fScalar * g;
                    kProd.b = fScalar * b;
                    kProd.a = fScalar * a;
                    return kProd;
                }
                /// <summary>
                /// 算术运算符"*"重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回成员变量相乘之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator* (_in const EarthView::World::Graphic::CColourValue& rhs) const
                {
                    EarthView::World::Graphic::CColourValue kProd;
                    kProd.r = rhs.r * r;
                    kProd.g = rhs.g * g;
                    kProd.b = rhs.b * b;
                    kProd.a = rhs.a * a;
                    return kProd;
                }
                /// <summary>
                /// 算术运算符"/"重载
                /// </summary>
                /// <param name="rhs">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回成员变量相除之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator/ (_in const EarthView::World::Graphic::CColourValue& rhs) const
                {
                    EarthView::World::Graphic::CColourValue kProd;
                    kProd.r = r / rhs.r;
                    kProd.g = g / rhs.g;
                    kProd.b = b / rhs.b;
                    kProd.a = a / rhs.a;
                    return kProd;
                }
                /// <summary>
                /// 算术运算符"*"重载
                /// </summary>
                /// <param name="fScalar">浮点型的变量</param>
                /// <returns>返回成员变量与fScalar相除之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline EarthView::World::Graphic::CColourValue operator/ (_in const ev_real32 fScalar ) const
                {
                    EV_ASSERT( fScalar != 0.0 );
                    EarthView::World::Graphic::CColourValue kDiv;
                    ev_real32 fInv = 1.0f / fScalar;
                    kDiv.r = r * fInv;
                    kDiv.g = g * fInv;
                    kDiv.b = b * fInv;
                    kDiv.a = a * fInv;
                    return kDiv;
                }
                /// <summary>
                /// 算术运算符"*"重载
                /// </summary>
                /// <param name="fScalar">浮点型的变量</param>
                /// <param name="rkVector">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回rkVector成员变量与fScalar相乘之后的EarthView::World::Graphic::CColourValue类的对象</returns>
                inline friend EarthView::World::Graphic::CColourValue operator* (_in const ev_real32 fScalar, _in const EarthView::World::Graphic::CColourValue& rkVector )
                {
                    EarthView::World::Graphic::CColourValue kProd;
                    kProd.r = fScalar * rkVector.r;
                    kProd.g = fScalar * rkVector.g;
                    kProd.b = fScalar * rkVector.b;
                    kProd.a = fScalar * rkVector.a;
                    return kProd;
                }
                /// <summary>
                /// 算术运算符"+="重载
                /// </summary>
                /// <param name="rkVector">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回成员变量相加之后的值</returns>
                inline EarthView::World::Graphic::CColourValue& operator+= (_in const EarthView::World::Graphic::CColourValue& rkVector )
                {
                    r += rkVector.r;
                    g += rkVector.g;
                    b += rkVector.b;
                    a += rkVector.a;
                    return *this;
                }
                /// <summary>
                /// 算术运算符"-="重载
                /// </summary>
                /// <param name="rkVector">EarthView::World::Graphic::CColourValue类的引用</param>
                /// <returns>返回成员变量相减之后的值</returns>
                inline EarthView::World::Graphic::CColourValue& operator-= (_in const EarthView::World::Graphic::CColourValue& rkVector )
                {
                    r -= rkVector.r;
                    g -= rkVector.g;
                    b -= rkVector.b;
                    a -= rkVector.a;
                    return *this;
                }
                /// <summary>
                /// 算术运算符"*="重载
                /// </summary>
                /// <param name="fScalar">浮点型变量</param>
                /// <returns>返回fScalar与成员变量相乘之后的值</returns>
                inline EarthView::World::Graphic::CColourValue& operator*= (_in const ev_real32 fScalar )
                {
                    r *= fScalar;
                    g *= fScalar;
                    b *= fScalar;
                    a *= fScalar;
                    return *this;
                }
                /// <summary>
                /// 算术运算符"/="重载
                /// </summary>
                /// <param name="fScalar">浮点型变量</param>
                /// <returns>返回fScalar与成员变量相除之后的值</returns>
                inline EarthView::World::Graphic::CColourValue& operator/= (_in const ev_real32 fScalar )
                {
                    EV_ASSERT( fScalar != 0.0 );
                    ev_real32 fInv = 1.0f / fScalar;
                    r *= fInv;
                    g *= fInv;
                    b *= fInv;
                    a *= fInv;
                    return *this;
                }
                /// <summary>
                /// 从色调、饱和度、亮度方面来设置颜色值
                /// </summary>
                /// <param name="hue">色调变量</param>
                /// <param name="saturation">饱和度变量</param>
                /// <param name="brightness">亮度变量</param>
                /// <returns></returns>
                void setHSB(_inout Real hue, _inout Real saturation, _inout Real brightness);
                /// <summary>
                /// 将当前的颜色值转换成HSB值
                /// </summary>
                /// <param name="hue">指向色调变量的指针</param>
                /// <param name="saturation">指向饱和度变量的指针</param>
                /// <param name="brightness">指向亮度变量的指针</param>
                /// <returns></returns>
                void getHSB( Real *hue, Real *saturation, Real *brightness) const;
                /// <summary>
                /// 输出流"<<"符号的重载
                /// </summary>
                /// <param name="o">标准库输出流的引用</param>
                /// <param name="c">EarthView::World::Graphic::CColourValue的引用</param>
                /// <returns>返回输出EarthView::World::Graphic::CColourValue类的数据成员</returns>
                inline EV_GRAPHIC_DLL friend std::ostream& operator<<(_inout std::ostream& o, _in const EarthView::World::Graphic::CColourValue& c )
                {
                    o << "CColourValue(" << c.r << ", " << c.g << ", " << c.b << ", " << c.a << ")";
                    return o;
                }
            };
        }
    }
}

#endif

