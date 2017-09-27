#ifndef __Vector4_H__
#define __Vector4_H__
#include "vector3.h"
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

				/// <summary>
				/// 四维向量类
				/// 定义了四维向量操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CVector4: public EarthView::World::Core::CBaseObject
				{
				public:
					Real x, y, z, w;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVector4(_in EarthView::World::Core::CNameValuePairList *pList);
					/// <summary>
					/// 从四维坐标构造四维向量
					/// </summary>
					/// <param name="afCoordinate[4]">四维坐标</param>
					/// <returns></returns>
					inline explicit CVector4( _in const Real afCoordinate[4] )
						: x( afCoordinate[0] ),
						y( afCoordinate[1] ),
						z( afCoordinate[2] ),
						w( afCoordinate[3] )
					{
					}
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline CVector4()
					{
						x = y = z = w = 0.0f;
					}
					/// <summary>
					/// 从四个实数构造四维向量
					/// </summary>
					/// <param name="fX">x</param>
					/// <param name="fY">y</param>
					/// <returns></returns>
					inline CVector4( _in const Real fX, _in const Real fY, _in const Real fZ, _in const Real fW )
						: x( fX ), y( fY ), z( fZ ), w( fW)
					{
					}

					/// <summary>
					/// 从三 维坐标构造四维向量
					/// </summary>
					/// <param name="afCoordinate[4]">四维坐标</param>
					/// <returns></returns>
					inline explicit CVector4( _in const ev_int32 aiCoordinate[4] )
					{
						x = (Real)aiCoordinate[0];
						y = (Real)aiCoordinate[1];
						z = (Real)aiCoordinate[2];
						w = (Real)aiCoordinate[3];
					}
					/// <summary>
					/// 从指针构造四维向量
					/// </summary>
					/// <param name="afCoordinate[2]">四维坐标</param>
					/// <returns></returns>
					inline explicit CVector4( _in Real *const r )
						: x( r[0] ), y( r[1] ), z( r[2] ), w( r[3] )
					{
					}
					/// <summary>
					/// 从一个实数构造四维向量
					/// </summary>
					/// <param name="scaler">缩放系数</param>
					/// <returns></returns>
					inline explicit CVector4( _in const Real scaler )
						: x( scaler )
						, y( scaler )
						, z( scaler )
						, w( scaler )
					{
					}
					/// <summary>
					/// 从四维向量构造四维向量
					/// </summary>
					/// <param name="scaler">缩放系数</param>
					/// <returns></returns>
					inline explicit CVector4( _in const EarthView::World::Spatial::Math::CVector3 &rhs)
						: x(rhs.x), y(rhs.y), z(rhs.z), w(1.0f)
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
					/// 与其它四维向量交换数据
					/// </summary>
					/// <param name="other">其它四维向量</param>
					/// <returns></returns>
					inline void swap(EarthView::World::Spatial::Math::CVector4 &other)
					{
						std::swap(x, other.x);
						std::swap(y, other.y);
						std::swap(z, other.z);
						std::swap(w, other.w);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>向量元素</returns>
					inline Real operator [] ( _in const ev_size_t i ) const
					{
						EV_ASSERT( i < 4 );
						return *(&x + i);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>向量元素</returns>
					inline Real &operator [] ( _in const ev_size_t i )
					{
						EV_ASSERT( i < 4 );
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
					/// <param name="rkVector">源四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator = ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						x = rkVector.x;
						y = rkVector.y;
						z = rkVector.z;
						w = rkVector.w;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符，从实数赋值
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator = ( _in const Real fScalar)
					{
						x = fScalar;
						y = fScalar;
						z = fScalar;
						w = fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator == ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector ) const
					{
						/*return ( x == rkVector.x &&
							y == rkVector.y &&
							z == rkVector.z &&
							w == rkVector.w );*/
						return (fuzzyCompare(x,rkVector.x) && fuzzyCompare(y,rkVector.y) && fuzzyCompare(z,rkVector.z) && fuzzyCompare(w,rkVector.w));

					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>非相等返回true，否则false</returns>
					inline ev_bool operator != ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector ) const
					{
						/*return ( x != rkVector.x ||
							y != rkVector.y ||
							z != rkVector.z ||
							w != rkVector.w );*/

						return  ( (!fuzzyCompare(x,rkVector.x)) || (!fuzzyCompare(y,rkVector.y)) || (!fuzzyCompare(z,rkVector.z)) || (!fuzzyCompare(w,rkVector.w)) ) ;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rhs">三 维向量</param>
					/// <returns>相等返回true，否则false</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator = ( _in const EarthView::World::Spatial::Math::CVector3 &rhs)
					{
						x = rhs.x;
						y = rhs.y;
						z = rhs.z;
						w = 1.0f;
						return *this;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator + ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector ) const
					{
						return CVector4(
							x + rkVector.x,
							y + rkVector.y,
							z + rkVector.z,
							w + rkVector.w);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator - ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector ) const
					{
						return CVector4(
							x - rkVector.x,
							y - rkVector.y,
							z - rkVector.z,
							w - rkVector.w);
					}
					/// <summary>
					/// 重载"*"操作符，与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator * ( _in const Real fScalar ) const
					{
						return CVector4(
							x * fScalar,
							y * fScalar,
							z * fScalar,
							w * fScalar);
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="rhs">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator * ( _in const EarthView::World::Spatial::Math::CVector4 &rhs) const
					{
						return CVector4(
							rhs.x * x,
							rhs.y * y,
							rhs.z * z,
							rhs.w * w);
					}
					/// <summary>
					/// 重载"/"操作符，与实数相除
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator / ( _in const Real fScalar ) const
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						return CVector4(
							x * fInv,
							y * fInv,
							z * fInv,
							w * fInv);
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="rhs">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator / ( _in const EarthView::World::Spatial::Math::CVector4 &rhs) const
					{
						return CVector4(
							x / rhs.x,
							y / rhs.y,
							z / rhs.z,
							w / rhs.w);
					}
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name="">四维向量</param>
					/// <returns>结果向量</returns>
					inline const EarthView::World::Spatial::Math::CVector4 &operator + () const
					{
						return *this;
					}
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name="">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator - () const
					{
						return CVector4(-x, -y, -z, -w);
					}
					/// <summary>
					/// 重载"*"操作符，向量与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector4 operator * ( _in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						return CVector4(
							fScalar * rkVector.x,
							fScalar * rkVector.y,
							fScalar * rkVector.z,
							fScalar * rkVector.w);
					}
					/// <summary>
					/// 重载"/"操作符，实数除以四维向量
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector4 operator / ( _in const Real fScalar, _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						return CVector4(
							fScalar / rkVector.x,
							fScalar / rkVector.y,
							fScalar / rkVector.z,
							fScalar / rkVector.w);
					}
					/// <summary>
					/// 重载"+"操作符，实数与四维向量相加
					/// </summary>
					/// <param name="lhs">左四维向量</param>
					/// <param name="rhs">右实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator + ( _in const Real rhs) const
					{
						return CVector4(
							x + rhs,
							y + rhs,
							z + rhs,
							w + rhs);
					}
					/// <summary>
					/// 重载"+"操作符，实数与四维向量相加
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右四维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector4 operator + ( _in const Real lhs, _in const EarthView::World::Spatial::Math::CVector4 &rhs)
					{
						return CVector4(
							lhs + rhs.x,
							lhs + rhs.y,
							lhs + rhs.z,
							lhs + rhs.w);
					}
					/// <summary>
					/// 重载"-"操作符，四维向量减实数
					/// </summary>
					/// <param name="lhs">左四维向量</param>
					/// <param name="rhs">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator - ( _in Real rhs) const
					{
						return CVector4(
							x - rhs,
							y - rhs,
							z - rhs,
							w - rhs);
					}
					/// <summary>
					/// 重载"-"操作符，实数减四维向量
					/// </summary>
					/// <param name="lhs">实数</param>
					/// <param name="rhs">右四维向量</param>
					/// <returns>结果向量</returns>
					inline friend EarthView::World::Spatial::Math::CVector4 operator - ( _in const Real lhs, _in const EarthView::World::Spatial::Math::CVector4 &rhs)
					{
						return CVector4(
							lhs - rhs.x,
							lhs - rhs.y,
							lhs - rhs.z,
							lhs - rhs.w);
					}
					/// <summary>
					/// 重载"+="操作符，
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator += ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						x += rkVector.x;
						y += rkVector.y;
						z += rkVector.z;
						w += rkVector.w;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator -= ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						x -= rkVector.x;
						y -= rkVector.y;
						z -= rkVector.z;
						w -= rkVector.w;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator *= ( _in const Real fScalar )
					{
						x *= fScalar;
						y *= fScalar;
						z *= fScalar;
						w *= fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator += ( _in const Real fScalar )
					{
						x += fScalar;
						y += fScalar;
						z += fScalar;
						w += fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator -= ( _in const Real fScalar )
					{
						x -= fScalar;
						y -= fScalar;
						z -= fScalar;
						w -= fScalar;
						return *this;
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator *= ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						x *= rkVector.x;
						y *= rkVector.y;
						z *= rkVector.z;
						w *= rkVector.w;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符，与实数
					/// </summary>
					/// <param name="fScaler">实数</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator /= ( _in const Real fScalar )
					{
						EV_ASSERT( fScalar != 0.0 );
						Real fInv = 1.0f / fScalar;
						x *= fInv;
						y *= fInv;
						z *= fInv;
						w *= fInv;
						return *this;
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="rkVector">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 &operator /= ( _in const EarthView::World::Spatial::Math::CVector4 &rkVector )
					{
						x /= rkVector.x;
						y /= rkVector.y;
						z /= rkVector.z;
						w /= rkVector.w;
						return *this;
					}
					/// <summary>
					/// 向量点乘
					/// </summary>
					/// <param name="vec">其它四维向量</param>
					/// <returns>结果</returns>
					inline Real dotProduct( _in const EarthView::World::Spatial::Math::CVector4 &vec) const
					{
						return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
					}
					/// <summary>
					/// 判断向量元素值是否非数值
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素存在非数值返回true，否则false</returns>
					inline ev_bool isNaN() const
					{
						return CMath::isNaN(x) || CMath::isNaN(y) || CMath::isNaN(z) || CMath::isNaN(w);
					}
					/// <summary>
					///重载输出流操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="v">四维向量对象</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const EarthView::World::Spatial::Math::CVector4 &v )
					{
						o << "CVector4(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
						return o;
					}
					/// special
					static const EarthView::World::Spatial::Math::CVector4 ZERO;
				};
				/// <summary>
				/// 四维向量容器类
				/// 原为vector<EarthView::World::Spatial::Math::CVector4>
				/// </summary>
				class EV_MATHENGINE_DLL Vector4List : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Math::CVector4> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
					iterator insert(iterator pos, EarthView::World::Spatial::Math::CVector4 const &t)
					{
						return mList.insert(pos, t);
					}
				private:
					InternalList mList;
ev_private:
					Vector4List(EarthView::World::Core::CNameValuePairList *pList) {}
				public:
					Vector4List() {}
					void push_back(EarthView::World::Spatial::Math::CVector4 const &t)
					{
						mList.push_back(t);
					}
					void pop_back()
					{
						mList.pop_back();
					}

					EarthView::World::Spatial::Math::CVector4 &front()
					{
						return mList.front();
					}
					EarthView::World::Spatial::Math::CVector4 &back()
					{
						return mList.back();
					}
					void insert(ev_uint32 pos, EarthView::World::Spatial::Math::CVector4 const &t)
					{
						mList.insert(begin() + pos, t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = mList.begin();
						it = it + pos;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}
					EarthView::World::Spatial::Math::CVector4 &operator[](ev_size_t n)
					{
						reference t = mList[n];
						return t;
					}
					EarthView::World::Spatial::Math::CVector4 const &operator[](ev_size_t n) const
					{
						const_reference t =  mList[n];
						return t;
					}
					EarthView::World::Spatial::Math::CVector4 &at(ev_size_t n)
					{
						reference t = mList[n];
						return t;
					}
					EarthView::World::Spatial::Math::CVector4 const &at(ev_size_t n) const
					{
						const_reference t =  mList[n];
						return t;
					}
					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void reserve(ev_size_t count)
					{
						mList.reserve(count);
					}
					void clear()
					{
						mList.clear();
					}
				};
			}
		}    
	}
}

#endif

