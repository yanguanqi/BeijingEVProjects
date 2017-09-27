#ifndef __Vector2_H__
#define __Vector2_H__
#include "fixedpoint.h"
#include "ev_math.h"
#include "mathengine_config.h"
#include "core/datastream.h"
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
				/// 二维向量类
				/// 定义了二维向量操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CVector2: public EarthView::World::Core::CBaseObject
				{
				public:
					Real x, y;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVector2(_in EarthView::World::Core::CNameValuePairList *pList);
					/// <summary>
					/// 从二维坐标构造二维向量
					/// </summary>
					/// <param name="afCoordinate[2]">二维坐标</param>
					/// <returns></returns>
					inline explicit CVector2( _in const Real afCoordinate[2] )
						: x( afCoordinate[0] ),
						y( afCoordinate[1] )
					{
					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline CVector2()
					{

						x = y = 0.0f;
					}
					/// <summary>
					/// 从两个实数构造二维向量
					/// </summary>
					/// <param name="fX">x</param>
					/// <param name="fY">y</param>
					/// <returns></returns>
					inline CVector2(_in const Real fX, _in const Real fY )
						: x( fX ), y( fY )
					{
					}
					/// <summary>
					/// 从一个实数构造二维向量
					/// </summary>
					/// <param name="scaler">缩放系数</param>
					/// <returns></returns>
					inline explicit CVector2( _in const Real scaler )
						: x( scaler), y( scaler )
					{
					}

					/// <summary>
					/// 从二维坐标构造二维向量
					/// </summary>
					/// <param name="afCoordinate[2]">二维坐标</param>
					/// <returns></returns>
					inline explicit CVector2( _in const ev_int32 aiCoordinate[2] )
					{
						x = (Real)aiCoordinate[0];
						y = (Real)aiCoordinate[1];
					}
					/// <summary>
					/// 从指针构造二维向量
					/// </summary>
					/// <param name="afCoordinate[2]">二维坐标</param>
					/// <returns></returns>
					inline explicit CVector2( _in Real *const r )
						: x( r[0] ), y( r[1] )
					{
					}

					/// <summary>
					/// 序列化到数据流
					/// </summary>
					/// <param name="dataStream">数据流</param>
					/// <returns>序列化到流的字节数</returns>
					ev_int32 toDataStream(EarthView::World::Core::CDataStream& dataStream);

					/// <summary>
					/// 从数据流反序列化
					/// </summary>
					/// <param name="dataStream">数据流</param>
					/// <returns>反序列化的字节数</returns>
					ev_int32 fromDataStream(EarthView::World::Core::CDataStream& dataStream);

					/// <summary>
					/// 与其它二维向量交换数据
					/// </summary>
					/// <param name="other">其它二维向量</param>
					/// <returns></returns>
					inline void swap(_inout EarthView::World::Spatial::Math::CVector2 &other)
					{
						std::swap(x, other.x);
						std::swap(y, other.y);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>二维向量元素</returns>
					inline Real operator [] ( _in const ev_size_t i ) const
					{
						EV_ASSERT( i < 2 );
						return *(&x + i);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>二维向量元素</returns>
					inline Real &operator [] ( _in const ev_size_t i )
					{
						EV_ASSERT( i < 2 );
						return *(&x + i);
					}
					/// <summary>
					/// 指针复制
					/// </summary>
					/// <param name=""></param>
					/// <returns>向量地址</returns>
					inline Real *ptr()
					{
						return &x;
					}
					/// <summary>
					/// 指针复制
					/// </summary>
					/// <param name=""></param>
					/// <returns>向量地址</returns>
					inline const Real *ptr() const
					{
						return &x;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="rkVector">源二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator = ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						x = rkVector.x;
						y = rkVector.y;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符，从实数赋值
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator = ( _in const Real fScalar)
					{
						x = fScalar;
						y = fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator == ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector ) const
					{
						return ( x == rkVector.x && y == rkVector.y );
					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>非相等返回true，否则false</returns>
					inline ev_bool operator != ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector ) const
					{
						return ( x != rkVector.x || y != rkVector.y  );
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator + ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector ) const
					{
						return CVector2(
							x + rkVector.x,
							y + rkVector.y);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator - ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector ) const
					{
						return CVector2(
							x - rkVector.x,
							y - rkVector.y);
					}
					/// <summary>
					/// 重载"*"操作符，与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator * ( _in const Real fScalar ) const
					{
						return CVector2(
							x * fScalar,
							y * fScalar);
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="rhs">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator * ( _in const EarthView::World::Spatial::Math::CVector2 &rhs) const
					{
						return CVector2(
							x * rhs.x,
							y * rhs.y);
					}
					/// <summary>
					/// 重载"/"操作符，与实数相除
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator / ( _in const Real fScalar ) const
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						return CVector2(
							x * fInv,
							y * fInv);
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="rhs">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator / ( _in const EarthView::World::Spatial::Math::CVector2 &rhs) const
					{
						return CVector2(
							x / rhs.x,
							y / rhs.y);
					}
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name="">二维向量</param>
					/// <returns>结果向量</returns>
					inline const EarthView::World::Spatial::Math::CVector2 &operator + () const
					{
						return *this;
					}
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name="">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator - () const
					{
						return CVector2(-x, -y);
					}
					/// <summary>
					/// 重载"*"操作符，二维向量与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector2 operator * ( _in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						return CVector2(
							fScalar * rkVector.x,
							fScalar * rkVector.y);
					}
					/// <summary>
					/// 重载"/"操作符，实数除以二维向量
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector2 operator / ( _in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						return CVector2(
							fScalar / rkVector.x,
							fScalar / rkVector.y);
					}
					/// <summary>
					/// 重载"+"操作符，二维向量相加
					/// </summary>
					/// <param name="lhs">左二维向量</param>
					/// <param name="rhs">右二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator + ( _in const Real rhs) const
					{
						return CVector2(
							x + rhs,
							y + rhs);
					}
					/// <summary>
					/// 重载"+"操作符，实数与二维向量相加
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右二维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector2 operator + (_in const Real lhs, _in const EarthView::World::Spatial::Math::CVector2 &rhs)
					{
						return CVector2(
							lhs + rhs.x,
							lhs + rhs.y);
					}
					/// <summary>
					/// 重载"-"操作符，二维向量减实数
					/// </summary>
					/// <param name="lhs">左二维向量</param>
					/// <param name="rhs">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 operator - (_in const Real rhs) const
					{
						return CVector2(
							x - rhs,
							y - rhs);
					}
					/// <summary>
					/// 重载"-"操作符，实数减二维向量
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右二维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector2 operator - (_in const Real lhs, _in const EarthView::World::Spatial::Math::CVector2 &rhs)
					{
						return CVector2(
							lhs - rhs.x,
							lhs - rhs.y);
					}
					/// <summary>
					/// 重载"+="操作符，
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator += ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						x += rkVector.x;
						y += rkVector.y;
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator += ( _in const Real fScaler )
					{
						x += fScaler;
						y += fScaler;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator -= ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						x -= rkVector.x;
						y -= rkVector.y;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator -= ( _in const Real fScaler )
					{
						x -= fScaler;
						y -= fScaler;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator *= ( _in const Real fScalar )
					{
						x *= fScalar;
						y *= fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator *= ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						x *= rkVector.x;
						y *= rkVector.y;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator /= ( _in const Real fScalar )
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						x *= fInv;
						y *= fInv;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="rkVector">二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 &operator /= ( _in const EarthView::World::Spatial::Math::CVector2 &rkVector )
					{
						x /= rkVector.x;
						y /= rkVector.y;
						return *this;
					}
					/// <summary>
					/// 求向量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real length () const
					{
						return CMath::Sqrt( x * x + y * y );
					}
					/// <summary>
					/// 求向量大小的平方
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real squaredLength () const
					{
						return x * x + y * y;
					}
					/// <summary>
					/// 求向量间距
					/// </summary>
					/// <param name="rhs">其它二维向量</param>
					/// <returns>结果</returns>
					inline Real distance(_in const EarthView::World::Spatial::Math::CVector2 &rhs) const
					{
						return (*this - rhs).length();
					}
					/// <summary>
					/// 求向量间距的平方
					/// </summary>
					/// <param name="rhs">其它二维向量</param>
					/// <returns>结果</returns>
					inline Real squaredDistance(_in const EarthView::World::Spatial::Math::CVector2 &rhs) const
					{
						return (*this - rhs).squaredLength();
					}
					/// <summary>
					/// 向量点乘
					/// </summary>
					/// <param name="vec">其它二维向量</param>
					/// <returns>结果</returns>
					inline Real dotProduct(_in const EarthView::World::Spatial::Math::CVector2 &vec) const
					{
						return x * vec.x + y * vec.y;
					}
					/// <summary>
					/// 向量求模
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real normalise()
					{
						Real fLength = CMath::Sqrt( x * x + y * y);
						/// Will also work for zero-sized vectors, but will change nothing
						if ( fLength > Real(0.0f) )
						{
							Real fInvLength = 1.0f / fLength;
							x *= fInvLength;
							y *= fInvLength;
						}
						return fLength;
					}
					/// <summary>
					/// 求两向量中点
					/// </summary>
					/// <param name="vec">其它二维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 midPoint( _in const EarthView::World::Spatial::Math::CVector2 &vec ) const
					{
						return CVector2(
							( x + vec.x ) * 0.5f,
							( y + vec.y ) * 0.5f );
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="rhs">其它二维向量</param>
					/// <returns>向量每个元素小于其它向量元素则为true，否则false</returns>
					inline ev_bool operator < ( _in const EarthView::World::Spatial::Math::CVector2 &rhs ) const
					{
						if( x < rhs.x && y < rhs.y )
							return true;
						return false;
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="rhs">其它二维向量</param>
					/// <returns>向量每个元素大于其它向量元素则为true，否则false</returns>
					inline ev_bool operator > ( _in const EarthView::World::Spatial::Math::CVector2 &rhs ) const
					{
						if( x > rhs.x && y > rhs.y )
							return true;
						return false;
					}
					/// <summary>
					/// 于其它向量各分量的小值组合成新的向量
					/// </summary>
					/// <param name="cmp">其它二维向量</param>
					/// <returns></returns>
					inline void makeFloor( _in const EarthView::World::Spatial::Math::CVector2 &cmp )
					{
						if( cmp.x < x ) x = cmp.x;
						if( cmp.y < y ) y = cmp.y;
					}
					/// <summary>
					/// 于其它向量各分量的大值组合成新的向量
					/// </summary>
					/// <param name="cmp">其它二维向量</param>
					/// <returns></returns>
					inline void makeCeil( _in const EarthView::World::Spatial::Math::CVector2 &cmp )
					{
						if( cmp.x > x ) x = cmp.x;
						if( cmp.y > y ) y = cmp.y;
					}
					/// <summary>
					/// 返回向量的垂直向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回垂直向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 perpendicular() const
					{
						return EarthView::World::Spatial::Math::CVector2 (-y, x);
					}
					/// <summary>
					/// 向量叉乘
					/// </summary>
					/// <param name="rkVector">其它二维向量</param>
					/// <returns>叉乘结果</returns>
					inline Real crossProduct( _in const EarthView::World::Spatial::Math::CVector2 &rkVector ) const
					{
						return x * rkVector.y - y * rkVector.x;
					}
					/// <summary>
					/// 偏离原向量一定角度的随机向量
					/// </summary>
					/// <param name="angle">角度</param>
					/// <returns>偏离的向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 randomDeviant(_in Real angle) const
					{
						angle *=  CMath::UnitRandom() * CMath::TWO_PI;
						Real cosa = cos(angle);
						Real sina = sin(angle);
						return  CVector2(cosa * x - sina * y,
							sina * x + cosa * y);
					}
					/// <summary>
					/// 判断向量是否为零向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					inline ev_bool isZeroLength() const
					{
						Real sqlen = (x * x) + (y * y);
						return (sqlen < (1e-06 * 1e-06));
					}
					/// <summary>
					/// 返回标准化向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回标准化向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 normalisedCopy() const
					{
						EarthView::World::Spatial::Math::CVector2 ret = *this;
						ret.normalise();
						return ret;
					}
					/// <summary>
					/// 根据平面的法线向量，计算反射向量
					/// </summary>
					/// <param name="normal">平面的法线向量</param>
					/// <returns>反射向量</returns>
					inline EarthView::World::Spatial::Math::CVector2 reflect(_in const EarthView::World::Spatial::Math::CVector2 &normal) const
					{
						return CVector2( *this - ( 2 * this->dotProduct(normal) * normal ) );
					}
					/// <summary>
					/// 判断向量元素值是否非数值
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素存在非数值返回true，否则false</returns>
					inline ev_bool isNaN() const
					{
						return CMath::isNaN(x) || CMath::isNaN(y);
					}
					/*
					[7/3/2012 WangJian]
					add for 1.8
					*/
					/**	 Gets the angle between 2 vectors.
					@remarks
					Vectors do not have to be unit-length but must represent directions.
					*/
					inline EarthView::World::Spatial::Math::CRadian angleBetween(const EarthView::World::Spatial::Math::CVector2 &other) const
					{
						Real lenProduct = length() * other.length();
						/// Divide by zero check
						if(lenProduct < 1e-6f)
							lenProduct = 1e-6f;

						Real f = dotProduct(other) / lenProduct;

						f = CMath::Clamp(f, (Real) - 1.0, (Real)1.0);
						return CMath::ACos(f);
					}
					/**	 Gets the oriented angle between 2 vectors.
					@remarks
					Vectors do not have to be unit-length but must represent directions.
					The angle is comprised between 0 and 2 PI.
					*/
					inline EarthView::World::Spatial::Math::CRadian angleTo(const EarthView::World::Spatial::Math::CVector2 &other) const
					{
						EarthView::World::Spatial::Math::CRadian angle = angleBetween(other);

						if (crossProduct(other) < 0)
							angle = (EarthView::World::Spatial::Math::CRadian)CMath::TWO_PI - angle;

						return angle;
					}
					/// special points
					static const EarthView::World::Spatial::Math::CVector2 ZERO;
					static const EarthView::World::Spatial::Math::CVector2 UNIT_X;
					static const EarthView::World::Spatial::Math::CVector2 UNIT_Y;
					static const EarthView::World::Spatial::Math::CVector2 NEGATIVE_UNIT_X;
					static const EarthView::World::Spatial::Math::CVector2 NEGATIVE_UNIT_Y;
					static const EarthView::World::Spatial::Math::CVector2 UNIT_SCALE;
					/// <summary>
					///重载输出流操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="v">二维向量对象</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const EarthView::World::Spatial::Math::CVector2 &v )
					{
						o << "CVector2(" << v.x << ", " << v.y <<  ")";
						return o;
					}
				};
			}
		}    
	}
}

#endif

