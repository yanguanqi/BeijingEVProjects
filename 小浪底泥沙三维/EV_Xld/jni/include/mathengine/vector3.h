#pragma once
#ifndef __Vector3_H__
#define __Vector3_H__
#include "fixedpoint.h"
#include "quaternion.h"
#include "ev_math.h"
#include "mathengine_config.h"
#include "core/datastream.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CQuaternion;
				/// <summary>
				/// 三维向量类
				/// 定义了三维向量操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CVector3: public EarthView::World::Core::CBaseObject
				{
				public:
					Real x, y, z;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVector3(_in EarthView::World::Core::CNameValuePairList *pList);

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
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline CVector3()
					{
						x = y = z = 0.0;
					}
					/// <summary>
					/// 从三个实数构造三维向量
					/// </summary>
					/// <param name="fX">x</param>
					/// <param name="fY">y</param>
					/// <returns></returns>
					inline CVector3(_in const Real fX, _in const Real fY, _in const Real fZ )
						: x( fX ), y( fY ), z( fZ )
					{
					}

					/// <summary>
					/// 从三维坐标构造三维向量
					/// </summary>
					/// <param name="afCoordinate[3]">三维坐标</param>
					/// <returns></returns>
					inline explicit CVector3(_in const ev_int32 aiCoordinate[3] )
					{
						x = (Real)aiCoordinate[0];
						y = (Real)aiCoordinate[1];
						z = (Real)aiCoordinate[2];
					}
ev_private:

					/// <summary>
					/// 从三维坐标构造三维向量
					/// </summary>
					/// <param name="afCoordinate[3]">三维坐标</param>
					/// <returns></returns>
					inline explicit CVector3(_in const Real afCoordinate[3] )
						: x( afCoordinate[0] ),
						y( afCoordinate[1] ),
						z( afCoordinate[2] )
					{
					}
				public:
					/// <summary>
					/// 从指针构造三维向量
					/// </summary>
					/// <param name="afCoordinate[2]">三维坐标</param>
					/// <returns></returns>
					inline explicit CVector3( _in Real *const r )
						: x( r[0] ), y( r[1] ), z( r[2] )
					{
					}
					/// <summary>
					/// 从一个实数构造三维向量
					/// </summary>
					/// <param name="scaler">缩放系数</param>
					/// <returns></returns>
					inline explicit CVector3(_in const Real scaler )
						: x( scaler )
						, y( scaler )
						, z( scaler )
					{
					}
					/// <summary>
					/// 与其它三维向量交换数据
					/// </summary>
					/// <param name="other">其它三维向量</param>
					/// <returns></returns>
					inline void swap(_inout EarthView::World::Spatial::Math::CVector3 &other)
					{
						std::swap(x, other.x);
						std::swap(y, other.y);
						std::swap(z, other.z);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>向量元素</returns>
					inline Real operator [] (_in const ev_size_t i ) const
					{
						EV_ASSERT( i < 3 );
						return *(&x + i);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>向量元素</returns>
					inline Real &operator [] (_in const ev_size_t i )
					{
						EV_ASSERT( i < 3 );
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
					/// <param name="rkVector">源三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator = (_in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						x = rkVector.x;
						y = rkVector.y;
						z = rkVector.z;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符，从实数赋值
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator = (_in const Real fScaler )
					{
						x = fScaler;
						y = fScaler;
						z = fScaler;
						return *this;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator == (_in const EarthView::World::Spatial::Math::CVector3 &rkVector ) const
					{
						//return ( x == rkVector.x && y == rkVector.y && z == rkVector.z );
						return (fuzzyCompare(x,rkVector.x) && fuzzyCompare(y,rkVector.y) && fuzzyCompare(z,rkVector.z));
					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>非相等返回true，否则false</returns>
					inline ev_bool operator != (_in const EarthView::World::Spatial::Math::CVector3 &rkVector ) const
					{
						//return ( x != rkVector.x || y != rkVector.y || z != rkVector.z );
						return  ( (!fuzzyCompare(x,rkVector.x)) || (!fuzzyCompare(y,rkVector.y)) || (!fuzzyCompare(z,rkVector.z)) ) ;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator + (_in const EarthView::World::Spatial::Math::CVector3 &rkVector ) const
					{
						return CVector3(
							x + rkVector.x,
							y + rkVector.y,
							z + rkVector.z);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator - (_in const EarthView::World::Spatial::Math::CVector3 &rkVector ) const
					{
						return CVector3(
							x - rkVector.x,
							y - rkVector.y,
							z - rkVector.z);
					}
					/// <summary>
					/// 重载"*"操作符，与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator * (_in const Real fScalar ) const
					{
						return CVector3(
							x * fScalar,
							y * fScalar,
							z * fScalar);
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="rhs">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator * (_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return CVector3(
							x * rhs.x,
							y * rhs.y,
							z * rhs.z);
					}
					/// <summary>
					/// 重载"/"操作符，与实数相除
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator / (_in const Real fScalar ) const
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						return CVector3(
							x * fInv,
							y * fInv,
							z * fInv);
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="rhs">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator / (_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return CVector3(
							x / rhs.x,
							y / rhs.y,
							z / rhs.z);
					}
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name="">三维向量</param>
					/// <returns>结果向量</returns>
					inline const EarthView::World::Spatial::Math::CVector3 &operator + () const
					{
						return *this;
					}
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name="">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator - () const
					{
						return CVector3(-x, -y, -z);
					}
					/// <summary>
					/// 重载"*"操作符，向量与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector3 operator * (_in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						return CVector3(
							fScalar * rkVector.x,
							fScalar * rkVector.y,
							fScalar * rkVector.z);
					}
					/// <summary>
					/// 重载"/"操作符，实数除以三维向量
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector3 operator / (_in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						return CVector3(
							fScalar / rkVector.x,
							fScalar / rkVector.y,
							fScalar / rkVector.z);
					}
					/// <summary>
					/// 重载"+"操作符，实数与三维向量相加
					/// </summary>
					/// <param name="lhs">左三维向量</param>
					/// <param name="rhs">右实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator + (_in const Real rhs) const
					{
						return CVector3(
							x + rhs,
							y + rhs,
							z + rhs);
					}
					/// <summary>
					/// 重载"+"操作符，实数与三维向量相加
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右三维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector3 operator + (_in const Real lhs, _in const EarthView::World::Spatial::Math::CVector3 &rhs)
					{
						return CVector3(
							lhs + rhs.x,
							lhs + rhs.y,
							lhs + rhs.z);
					}
					/// <summary>
					/// 重载"-"操作符，三维向量减实数
					/// </summary>
					/// <param name="lhs">左三维向量</param>
					/// <param name="rhs">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator - (_in const Real rhs) const
					{
						return CVector3(
							x - rhs,
							y - rhs,
							z - rhs);
					}
					/// <summary>
					/// 重载"-"操作符，实数减三维向量
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右三维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector3 operator - (_in const Real lhs, _in const EarthView::World::Spatial::Math::CVector3 &rhs)
					{
						return CVector3(
							lhs - rhs.x,
							lhs - rhs.y,
							lhs - rhs.z);
					}
					/// <summary>
					/// 重载"+="操作符，
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator += (_in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						x += rkVector.x;
						y += rkVector.y;
						z += rkVector.z;
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator += (_in const Real fScalar )
					{
						x += fScalar;
						y += fScalar;
						z += fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator -= (_in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						x -= rkVector.x;
						y -= rkVector.y;
						z -= rkVector.z;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator -= (_in const Real fScalar )
					{
						x -= fScalar;
						y -= fScalar;
						z -= fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator *= (_in const Real fScalar )
					{
						x *= fScalar;
						y *= fScalar;
						z *= fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator *= (_in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						x *= rkVector.x;
						y *= rkVector.y;
						z *= rkVector.z;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator /= (_in const Real fScalar )
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						x *= fInv;
						y *= fInv;
						z *= fInv;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="rkVector">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 &operator /= (_in const EarthView::World::Spatial::Math::CVector3 &rkVector )
					{
						x /= rkVector.x;
						y /= rkVector.y;
						z /= rkVector.z;
						return *this;
					}
					/// <summary>
					/// 求向量长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real length () const
					{
						return CMath::Sqrt( x * x + y * y + z * z );
					}
					/// <summary>
					/// 求向量长度的平方
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real squaredLength () const
					{
						return x * x + y * y + z * z;
					}
					/// <summary>
					/// 求向量间距
					/// </summary>
					/// <param name="rhs">其它三维向量</param>
					/// <returns>结果</returns>
					inline Real distance(_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return (*this - rhs).length();
					}
					/// <summary>
					/// 求向量间距的平方
					/// </summary>
					/// <param name="rhs">其它三维向量</param>
					/// <returns>结果</returns>
					inline Real squaredDistance(_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return (*this - rhs).squaredLength();
					}
					/// <summary>
					/// 向量点乘
					/// </summary>
					/// <param name="vec">其它三维向量</param>
					/// <returns>结果</returns>
					inline Real dotProduct(_in const EarthView::World::Spatial::Math::CVector3 &vec) const
					{
						return x * vec.x + y * vec.y + z * vec.z;
					}
					/// <summary>
					/// 向量绝对值点乘
					/// </summary>
					/// <param name="vec">其它三维向量</param>
					/// <returns>结果</returns>
					inline Real absDotProduct(_in const EarthView::World::Spatial::Math::CVector3 &vec) const
					{
						return CMath::Abs(x * vec.x) + CMath::Abs(y * vec.y) + CMath::Abs(z * vec.z);
					}
					/// <summary>
					/// 向量求模
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					inline Real normalise()
					{
						Real fLength = CMath::Sqrt( x * x + y * y + z * z );
						/// Will also work for zero-sized vectors, but will change nothing
						if ( fLength > Real(0.0f) )
						{
							Real fInvLength = 1.0f / fLength;
							x *= fInvLength;
							y *= fInvLength;
							z *= fInvLength;
						}
						return fLength;
					}
					/// <summary>
					/// 向量叉乘
					/// </summary>
					/// <param name="rkVector">其它三维向量</param>
					/// <returns>叉乘结果</returns>
					inline EarthView::World::Spatial::Math::CVector3 crossProduct(_in const EarthView::World::Spatial::Math::CVector3 &rkVector ) const
					{
						return CVector3(
							y * rkVector.z - z * rkVector.y,
							z * rkVector.x - x * rkVector.z,
							x * rkVector.y - y * rkVector.x);
					}

					/// <summary>
					/// 求两向量中点
					/// </summary>
					/// <param name="vec">其它三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 midPoint(_in const EarthView::World::Spatial::Math::CVector3 &vec ) const
					{
						return CVector3(
							( x + vec.x ) * 0.5f,
							( y + vec.y ) * 0.5f,
							( z + vec.z ) * 0.5f );
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="rhs">其它三维向量</param>
					/// <returns>向量每个元素小于其它向量元素则为true，否则false</returns>
					inline ev_bool operator < (_in const EarthView::World::Spatial::Math::CVector3 &rhs ) const
					{
						if( x < rhs.x && y < rhs.y && z < rhs.z )
							return true;
						return false;
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="rhs">其它三维向量</param>
					/// <returns>向量每个元素大于其它向量元素则为true，否则false</returns>
					inline ev_bool operator > (_in const EarthView::World::Spatial::Math::CVector3 &rhs ) const
					{
						if( x > rhs.x && y > rhs.y && z > rhs.z )
							return true;
						return false;
					}
					/// <summary>
					/// 于其它向量各分量的小值组合成新的向量
					/// </summary>
					/// <param name="cmp">其它三维向量</param>
					/// <returns></returns>
					inline void makeFloor(_in const EarthView::World::Spatial::Math::CVector3 &cmp )
					{
						if( cmp.x < x ) x = cmp.x;
						if( cmp.y < y ) y = cmp.y;
						if( cmp.z < z ) z = cmp.z;
					}
					/// <summary>
					/// 于其它向量各分量的大值组合成新的向量
					/// </summary>
					/// <param name="cmp">其它三维向量</param>
					/// <returns></returns>
					inline void makeCeil(_in const EarthView::World::Spatial::Math::CVector3 &cmp )
					{
						if( cmp.x > x ) x = cmp.x;
						if( cmp.y > y ) y = cmp.y;
						if( cmp.z > z ) z = cmp.z;
					}
					/// <summary>
					/// 返回向量的垂直向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回垂直向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 perpendicular() const
					{
						static const Real fSquareZero = (Real)(1e-06 * 1e-06);
						EarthView::World::Spatial::Math::CVector3 perp = this->crossProduct( EarthView::World::Spatial::Math::CVector3::UNIT_X );
						/// Check length
						if( perp.squaredLength() < fSquareZero )
						{
							/* This vector is the Y axis multiplied by a scalar, so we have
							to use another axis.
							*/
							perp = this->crossProduct( CVector3::UNIT_Y );
						}
						perp.normalise();
						return perp;
					}
					/// <summary>
					/// 偏离原向量一定角度的随机向量
					/// </summary>
					/// <param name="angle">角度</param>
					/// <returns>偏离的向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 randomDeviant(_in const EarthView::World::Spatial::Math::CRadian &angle) const
					{
						return randomDeviant(angle, CVector3::ZERO);
					}
					/// <summary>
					/// 偏离原向量一定角度的随机向量
					/// </summary>
					/// <param name="angle">角度</param>
					/// <param name="up">向量的垂直向量</param>
					/// <returns>偏离的向量</returns>
					EarthView::World::Spatial::Math::CVector3 randomDeviant(
						const EarthView::World::Spatial::Math::CRadian &angle,
						const EarthView::World::Spatial::Math::CVector3 &up) const;
					/// <summary>
					/// 求向量夹角
					/// </summary>
					/// <param name="dest">另一向量</param>
					/// <returns>向量夹角</returns>
					inline EarthView::World::Spatial::Math::CRadian angleBetween(_in const EarthView::World::Spatial::Math::CVector3 &dest) const
					{
						Real lenProduct = length() * dest.length();
						/// Divide by zero check
						if(lenProduct < 1e-6f)
							lenProduct = 1e-6f;
						Real f = dotProduct(dest) / lenProduct;
						f = CMath::Clamp(f, (Real) - 1.0, (Real)1.0);
						return CMath::ACos(f);
					}
					/// <summary>
					/// 求旋转到另一向量的旋转四元数
					/// </summary>
					/// <param name="dest">另一向量</param>
					/// <param name="fallbackAxis">依靠向量轴</param>
					/// <returns>向量夹角</returns>
					EarthView::World::Spatial::Math::CQuaternion getRotationTo(_in const EarthView::World::Spatial::Math::CVector3 &dest,
						const EarthView::World::Spatial::Math::CVector3 &fallbackAxis) const;
					/// <summary>
					/// 求旋转到另一向量的旋转四元数
					/// </summary>
					/// <param name="dest">另一向量</param>
					/// <returns>向量夹角</returns>
					inline EarthView::World::Spatial::Math::CQuaternion getRotationTo(_in const EarthView::World::Spatial::Math::CVector3 &dest) const
					{
						return getRotationTo(dest, CVector3::ZERO);
					}
					/// <summary>
					/// 判断向量是否为零向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					inline ev_bool isZeroLength() const
					{
						Real sqlen = (x * x) + (y * y) + (z * z);
						return (sqlen < (1e-06 * 1e-06));
					}
					/// <summary>
					/// 返回标准化向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回标准化向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 normalisedCopy() const
					{
						EarthView::World::Spatial::Math::CVector3 ret = *this;
						ret.normalise();
						return ret;
					}
					/// <summary>
					/// 根据平面的法线向量，计算反射向量
					/// </summary>
					/// <param name="normal">平面的法线向量</param>
					/// <returns>反射向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 reflect(_in const EarthView::World::Spatial::Math::CVector3 &normal) const
					{
						return CVector3( *this - ( 2 * this->dotProduct(normal) * normal ) );
					}
					/// <summary>
					/// 在一定公差内判断两三维点是否相等
					/// </summary>
					/// <param name="rhs">另一三维点</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool positionEquals(_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return positionEquals(rhs, 1e-03);
					}
					/// <summary>
					/// 在一定公差内判断两三维点是否相等
					/// </summary>
					/// <param name="rhs">另一三维点</param>
					/// <param name="tolerance">公差</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool positionEquals(_in const EarthView::World::Spatial::Math::CVector3 &rhs, _in Real tolerance) const
					{
						return CMath::RealEqual(x, rhs.x, tolerance) &&
							CMath::RealEqual(y, rhs.y, tolerance) &&
							CMath::RealEqual(z, rhs.z, tolerance);
					}
					/// <summary>
					/// 在一定公差内判断两三维点是否相近
					/// </summary>
					/// <param name="rhs">另一三维点</param>
					/// <param name="tolerance">公差</param>
					/// <returns>相近返回true，否则false</returns>
					inline ev_bool positionCloses(_in const EarthView::World::Spatial::Math::CVector3 &rhs) const
					{
						return positionCloses(rhs, 1e-03);
					}
					/// <summary>
					/// 在一定公差内判断两三维点是否相近
					/// </summary>
					/// <param name="rhs">另一三维点</param>
					/// <param name="tolerance">公差</param>
					/// <returns>相近返回true，否则false</returns>
					inline ev_bool positionCloses(_in const EarthView::World::Spatial::Math::CVector3 &rhs, _in Real tolerance) const
					{
						return squaredDistance(rhs) <=
							(squaredLength() + rhs.squaredLength()) * tolerance;
					}
					/// <summary>
					/// 在一定夹角范围内判断两三维向量是否方向一致
					/// </summary>
					/// <param name="rhs">另一三维点</param>
					/// <param name="tolerance">夹角公差</param>
					/// <returns>方向一致返回true，否则false</returns>
					inline ev_bool directionEquals(_in const EarthView::World::Spatial::Math::CVector3 &rhs,
						_in const EarthView::World::Spatial::Math::CRadian &tolerance) const
					{
						Real dot = dotProduct(rhs);
						EarthView::World::Spatial::Math::CRadian angle = CMath::ACos(dot);
						return false;			///CMath::Abs(angle.valueRadians()) <= tolerance.valueRadians();
					}
					/// <summary>
					/// 判断向量元素值是否非数值
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素存在非数值返回true，否则false</returns>
					inline ev_bool isNaN() const
					{
						return CMath::isNaN(x) || CMath::isNaN(y) || CMath::isNaN(z);
					}
					/*
					[7/3/2012 WangJian]
					add for 1.8
					*/
					//// Extract the primary (dominant) axis from this direction vector
					inline EarthView::World::Spatial::Math::CVector3 primaryAxis() const
					{
						Real absx = CMath::Abs(x);
						Real absy = CMath::Abs(y);
						Real absz = CMath::Abs(z);
						if (absx > absy)
							if (absx > absz)
								return x > 0 ? CVector3::UNIT_X : CVector3::NEGATIVE_UNIT_X;
							else
								return z > 0 ? CVector3::UNIT_Z : CVector3::NEGATIVE_UNIT_Z;
						else 			/// absx <= absy
							if (absy > absz)
								return y > 0 ? CVector3::UNIT_Y : CVector3::NEGATIVE_UNIT_Y;
							else
								return z > 0 ? CVector3::UNIT_Z : CVector3::NEGATIVE_UNIT_Z;
					}
					/// special points
					static const EarthView::World::Spatial::Math::CVector3 ZERO;
					static const EarthView::World::Spatial::Math::CVector3 UNIT_X;
					static const EarthView::World::Spatial::Math::CVector3 UNIT_Y;
					static const EarthView::World::Spatial::Math::CVector3 UNIT_Z;
					static const EarthView::World::Spatial::Math::CVector3 NEGATIVE_UNIT_X;
					static const EarthView::World::Spatial::Math::CVector3 NEGATIVE_UNIT_Y;
					static const EarthView::World::Spatial::Math::CVector3 NEGATIVE_UNIT_Z;
					static const EarthView::World::Spatial::Math::CVector3 UNIT_SCALE;
					/// <summary>
					///重载输出流操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="v">三维向量对象</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						o << "CVector3(" << v.x << ", " << v.y << ", " << v.z << ")";
						return o;
					}
				};
				/// <summary>
				/// 顶点集合类
				/// </summary>
				class EV_MATHENGINE_DLL VertexList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Math::CVector3> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList);
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Math::CVector3 const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					VertexList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					VertexList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Math::CVector3  const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial::Math::CVector3 &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Math::CVector3 &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Math::CVector3 const &t);
					/// <summary>
					/// 容器中间位置插入列表
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="other">列表</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Math::VertexList other);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Math::CVector3 &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial::Math::CVector3 const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Math::CVector3 &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial::Math::CVector3 const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// 交换vector
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void swap(_in VertexList& rhs);
				};

				/// <summary>
				/// 顶点集合类
				/// </summary>
				class EV_MATHENGINE_DLL Vector3List : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef list<EarthView::World::Spatial::Math::CVector3> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList);
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Math::CVector3 const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					Vector3List(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					Vector3List();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Math::CVector3  const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial::Math::CVector3 &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial::Math::CVector3 &back();
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};
			}
		}    
	}
}

#endif

