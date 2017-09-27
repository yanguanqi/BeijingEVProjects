#ifndef __AxisAlignedBox_H_
#define __AxisAlignedBox_H_
#pragma once
#include "vector3.h"
#include "matrix4.h"
#include "mathengine_config.h"
#include "core/datastream.h"

#if EV_PLATFORM == EV_PLATFORM_ANDROID
#	ifdef PI
#	undef PI
#	endif

#	ifdef max
#	undef max
#	endif

#	ifdef min
#	undef min
#	endif
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				/// <summary>
				/// 平行轴边框盒类
				/// 定义了平行轴边框盒操作
				/// </summary>
				class EV_MATHENGINE_DLL CAxisAlignedBox: public EarthView::World::Core::CBaseObject
				{
				public:
					enum Extent
					{
						EXTENT_NULL,
						EXTENT_FINITE,
						EXTENT_INFINITE
					};
				protected:
					EarthView::World::Spatial::Math::CVector3 mMinimum;
					EarthView::World::Spatial::Math::CVector3 mMaximum;
					EarthView::World::Spatial::Math::CAxisAlignedBox::Extent mExtent;					
				public:
					   /*
					   1------2
					  /|     /|
					 / |    / |
					5------4  |
					|  0---|--3
					| /    | /
					|/     |/
					6------7
					*/
					enum CornerEnum
					{
						FAR_LEFT_BOTTOM = 0,
						FAR_LEFT_TOP = 1,
						FAR_RIGHT_TOP = 2,
						FAR_RIGHT_BOTTOM = 3,
						NEAR_RIGHT_BOTTOM = 7,
						NEAR_LEFT_BOTTOM = 6,
						NEAR_LEFT_TOP = 5,
						NEAR_RIGHT_TOP = 4
					};
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline CAxisAlignedBox() : mMinimum(CVector3::ZERO), mMaximum(CVector3::UNIT_SCALE)
					{						
						/// Default to a null box
						setMinimum( -0.5, -0.5, -0.5 );
						setMaximum( 0.5, 0.5, 0.5 );
						mExtent = EXTENT_NULL;
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="e">边框空间范围类型</param>
					/// <returns></returns>
					inline CAxisAlignedBox(_in EarthView::World::Spatial::Math::CAxisAlignedBox::Extent e) : mMinimum(CVector3::ZERO), mMaximum(CVector3::UNIT_SCALE)
					{						
						setMinimum( -0.5, -0.5, -0.5 );
						setMaximum( 0.5, 0.5, 0.5 );
						mExtent = e;
					}
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="rkBox">平行轴边框盒对象</param>
					/// <returns></returns>
					inline CAxisAlignedBox( _in const CAxisAlignedBox &rkBox) : mMinimum(CVector3::ZERO), mMaximum(CVector3::UNIT_SCALE)
					{						
						if (rkBox.isNull())
							setNull();
						else if (rkBox.isInfinite())
							setInfinite();
						else
							setExtents( rkBox.mMinimum, rkBox.mMaximum );
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="min">平行轴边框盒最小角坐标</param>
					/// <param name="max">平行轴边框盒最大角坐标</param>
					/// <returns></returns>
					inline CAxisAlignedBox( _in const EarthView::World::Spatial::Math::CVector3 &min, _in const EarthView::World::Spatial::Math::CVector3 &max ) : mMinimum(EarthView::World::Spatial::Math::CVector3::ZERO), mMaximum(EarthView::World::Spatial::Math::CVector3::UNIT_SCALE)
					{						
						setExtents( min, max );
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="mx">平行轴边框盒最小角坐标x</param>
					/// <param name="my">平行轴边框盒最小角坐标y</param>
					/// <param name="mz">平行轴边框盒最小角坐标z</param>
					/// <param name="Mx">平行轴边框盒最大角坐标x</param>
					/// <param name="My">平行轴边框盒最大角坐标y</param>
					/// <param name="Mz">平行轴边框盒最大角坐标z</param>
					/// <returns></returns>
					inline CAxisAlignedBox(
						_in Real mx, _in Real my, _in Real mz,
						_in Real Mx, _in Real My, _in Real Mz ) : mMinimum(CVector3::ZERO), mMaximum(CVector3::UNIT_SCALE)
					{						
						setExtents( mx, my, mz, Mx, My, Mz );
					}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAxisAlignedBox(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="rhs">源边框盒对象</param>
					/// <returns>赋值结果</returns>
					EarthView::World::Spatial::Math::CAxisAlignedBox &operator=( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs)
					{
						/// Specifically override to avoid copying mpCorners
						if (rhs.isNull())
							setNull();
						else if (rhs.isInfinite())
							setInfinite();
						else
							setExtents(rhs.mMinimum, rhs.mMaximum);
						return *this;
					}
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CAxisAlignedBox();

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
					/// 获得边框盒最小角坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小角坐标</returns>
					inline const EarthView::World::Spatial::Math::CVector3 &getMinimum() const
					{
						return mMinimum;
					}
					/// <summary>
					/// 获得边框盒最小角坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小角坐标</returns>
					inline EarthView::World::Spatial::Math::CVector3 &getMinimum()
					{
						return mMinimum;
					}
					/// <summary>
					/// 获得边框盒最大角坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大角坐标</returns>
					inline const EarthView::World::Spatial::Math::CVector3 &getMaximum() const
					{
						return mMaximum;
					}
					/// <summary>
					/// 获得边框盒最大角坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大角坐标</returns>
					inline EarthView::World::Spatial::Math::CVector3 &getMaximum()
					{
						return mMaximum;
					}
					/// <summary>
					/// 设置边框盒最小角坐标
					/// </summary>
					/// <param name="vec">三维坐标</param>
					/// <returns></returns>
					inline void setMinimum( _in const EarthView::World::Spatial::Math::CVector3 &vec )
					{
						mExtent = EXTENT_FINITE;
						mMinimum = vec;
					}
					/// <summary>
					/// 设置边框盒最小角坐标
					/// </summary>
					/// <param name="x">三维坐标x</param>
					/// <param name="y">三维坐标y</param>
					/// <param name="z">三维坐标z</param>
					/// <returns></returns>
					inline void setMinimum( _in Real x, _in Real y, _in Real z )
					{
						mExtent = EXTENT_FINITE;
						mMinimum.x = x;
						mMinimum.y = y;
						mMinimum.z = z;
					}
					/// <summary>
					/// 设置边框盒最小角坐标x
					/// </summary>
					/// <param name="x">三维坐标x</param>
					/// <returns></returns>
					inline void setMinimumX(_in Real x)
					{
						mMinimum.x = x;
					}
					/// <summary>
					/// 设置边框盒最小角坐标y
					/// </summary>
					/// <param name="y">三维坐标y</param>
					/// <returns></returns>
					inline void setMinimumY(_in Real y)
					{
						mMinimum.y = y;
					}
					/// <summary>
					/// 设置边框盒最小角坐标
					/// </summary>
					/// <param name="z">三维坐标z</param>
					/// <returns></returns>
					inline void setMinimumZ(_in Real z)
					{
						mMinimum.z = z;
					}
					/// <summary>
					/// 设置边框盒最大角坐标
					/// </summary>
					/// <param name="vec">三维坐标</param>
					/// <returns></returns>
					inline void setMaximum( _in const EarthView::World::Spatial::Math::CVector3 &vec )
					{
						mExtent = EXTENT_FINITE;
						mMaximum = vec;
					}
					/// <summary>
					/// 设置边框盒最大角坐标
					/// </summary>
					/// <param name="x">三维坐标x</param>
					/// <param name="y">三维坐标y</param>
					/// <param name="z">三维坐标z</param>
					/// <returns></returns>
					inline void setMaximum( _in Real x, _in Real y, _in Real z )
					{
						mExtent = EXTENT_FINITE;
						mMaximum.x = x;
						mMaximum.y = y;
						mMaximum.z = z;
					}
					/// <summary>
					/// 设置边框盒最大角坐标
					/// </summary>
					/// <param name="x">三维坐标x</param>
					/// <returns></returns>
					inline void setMaximumX( _in Real x )
					{
						mMaximum.x = x;
					}
					/// <summary>
					/// 设置边框盒最大角坐标
					/// </summary>
					/// <param name="y">三维坐标y</param>
					/// <returns></returns>
					inline void setMaximumY( _in Real y )
					{
						mMaximum.y = y;
					}
					/// <summary>
					/// 设置边框盒最大角坐标
					/// </summary>
					/// <param name="z">三维坐标z</param>
					/// <returns></returns>
					inline void setMaximumZ( _in Real z )
					{
						mMaximum.z = z;
					}
					/// <summary>
					/// 设置边框盒空间范围
					/// </summary>
					/// <param name="min">最小角三维坐标</param>
					/// <param name="max">最大角三维坐标y</param>
					/// <returns></returns>
					inline void setExtents( _in const EarthView::World::Spatial::Math::CVector3 &min, _in const EarthView::World::Spatial::Math::CVector3 &max )
					{
						/*EV_ASSERT( (min.x <= max.x && min.y <= max.y && min.z <= max.z) &&
							"The minimum corner of the box must be less than or equal to maximum corner" );*/
						if(min.x <= max.x && min.y <= max.y && min.z <= max.z)
						{
							mExtent = EXTENT_FINITE;
							mMinimum = min;
							mMaximum = max;							
						}
						else
						{
							mExtent = EXTENT_NULL;
						    
						}

					}
					/// <summary>
					/// 设置边框盒空间范围
					/// </summary>
					/// <param name="mx">平行轴边框盒最小角坐标x</param>
					/// <param name="my">平行轴边框盒最小角坐标y</param>
					/// <param name="mz">平行轴边框盒最小角坐标z</param>
					/// <param name="Mx">平行轴边框盒最大角坐标x</param>
					/// <param name="My">平行轴边框盒最大角坐标y</param>
					/// <param name="Mz">平行轴边框盒最大角坐标z</param>
					/// <returns></returns>
					inline void setExtents(
						_in Real mx, _in Real my, _in Real mz,
						_in Real Mx, _in Real My, _in Real Mz )
					{
						/*EV_ASSERT( (mx <= Mx && my <= My && mz <= Mz) &&
							"The minimum corner of the box must be less than or equal to maximum corner" );*/
						if(mx <= Mx && my <= My && mz <= Mz)
						{
							mExtent = EXTENT_FINITE;
							mMinimum.x = mx;
							mMinimum.y = my;
							mMinimum.z = mz;
							mMaximum.x = Mx;
							mMaximum.y = My;
							mMaximum.z = Mz;

						}
						else
						{
							mExtent = EXTENT_NULL;
							

						}

					}

					/// <summary>
					/// 获得边框盒所有角坐标
					///      1------2
					///     /|     /|
					///    / |    / |
					///    5-----4  |
					///    | 0---|--3
					///    | /   | /
					///    |/    |/
					///    6-----7
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框盒所有角坐标指针</returns>
					inline void getAllCorners(_out EarthView::World::Spatial::Math::CVector3 *pCorner[8]) const
					{
						EV_ASSERT( (mExtent == EXTENT_FINITE) && "Can't get corners of a null or infinite AAB" );	

						pCorner[0]->x = mMinimum.x;
						pCorner[0]->y = mMinimum.y;
						pCorner[0]->z = mMinimum.z;
						pCorner[1]->x = mMinimum.x;
						pCorner[1]->y = mMaximum.y;
						pCorner[1]->z = mMinimum.z;
						pCorner[2]->x = mMaximum.x;
						pCorner[2]->y = mMaximum.y;
						pCorner[2]->z = mMinimum.z;
						pCorner[3]->x = mMaximum.x;
						pCorner[3]->y = mMinimum.y;
						pCorner[3]->z = mMinimum.z;

						pCorner[4]->x = mMaximum.x;
						pCorner[4]->y = mMaximum.y;
						pCorner[4]->z = mMaximum.z;
						pCorner[5]->x = mMinimum.x;
						pCorner[5]->y = mMaximum.y;
						pCorner[5]->z = mMaximum.z;
						pCorner[6]->x = mMinimum.x;
						pCorner[6]->y = mMinimum.y;
						pCorner[6]->z = mMaximum.z;
						pCorner[7]->x = mMaximum.x;
						pCorner[7]->y = mMinimum.y;
						pCorner[7]->z = mMaximum.z;
					}
					
					/// <summary>
					/// 获得边框盒某个角坐标
					/// </summary>
					/// <param name="cornerToGet">边框盒角枚举</param>
					/// <returns>边框盒角坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getCorner(_in EarthView::World::Spatial::Math::CAxisAlignedBox::CornerEnum cornerToGet) const
					{
						switch(cornerToGet)
						{
						case FAR_LEFT_BOTTOM:
							return mMinimum;
						case FAR_LEFT_TOP:
							return CVector3(mMinimum.x, mMaximum.y, mMinimum.z);
						case FAR_RIGHT_TOP:
							return CVector3(mMaximum.x, mMaximum.y, mMinimum.z);
						case FAR_RIGHT_BOTTOM:
							return CVector3(mMaximum.x, mMinimum.y, mMinimum.z);
						case NEAR_RIGHT_BOTTOM:
							return CVector3(mMaximum.x, mMinimum.y, mMaximum.z);
						case NEAR_LEFT_BOTTOM:
							return CVector3(mMinimum.x, mMinimum.y, mMaximum.z);
						case NEAR_LEFT_TOP:
							return CVector3(mMinimum.x, mMaximum.y, mMaximum.z);
						case NEAR_RIGHT_TOP:
							return mMaximum;
						default:
							return CVector3();
						}
					}
					/// <summary>
					///重载输出流操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="aab">边框盒对象</param>
					/// <returns>输出流对象</returns>
					EV_MATHENGINE_DLL friend std::ostream &operator<<( _out std::ostream &o, _in const EarthView::World::Spatial::Math::CAxisAlignedBox aab )
					{
						switch (aab.mExtent)
						{
						case EXTENT_NULL:
							o << "CAxisAlignedBox(null)";
							return o;
						case EXTENT_FINITE:
							o << "CAxisAlignedBox(min=" << aab.mMinimum << ", max=" << aab.mMaximum << ")";
							return o;
						case EXTENT_INFINITE:
							o << "CAxisAlignedBox(infinite)";
							return o;
						default: 			/// shut up compiler
							EV_ASSERT( false && "Never reached" );
							return o;
						}
					}
					/// <summary>
					///融合边框盒
					/// </summary>
					/// <param name="rhs">边框盒对象</param>
					/// <returns></returns>
					void merge( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs )
					{
						/// Do nothing if rhs null, or this is infinite
						if ((rhs.mExtent == EXTENT_NULL) || (mExtent == EXTENT_INFINITE))
						{
							return;
						}
						/// Otherwise if rhs is infinite, make this infinite, too
						else if (rhs.mExtent == EXTENT_INFINITE)
						{
							mExtent = EXTENT_INFINITE;
						}
						/// Otherwise if current null, just take rhs
						else if (mExtent == EXTENT_NULL)
						{
							setExtents(rhs.mMinimum, rhs.mMaximum);
						}
						/// Otherwise merge
						else
						{
							EarthView::World::Spatial::Math::CVector3 min = mMinimum;
							EarthView::World::Spatial::Math::CVector3 max = mMaximum;
							max.makeCeil(rhs.mMaximum);
							min.makeFloor(rhs.mMinimum);
							setExtents(min, max);
						}
					}
					/// <summary>
					///扩展边框盒，包含某个点在内
					/// </summary>
					/// <param name="point">三维点坐标</param>
					/// <returns></returns>
					inline void merge( _in const EarthView::World::Spatial::Math::CVector3 &point )
					{
						switch (mExtent)
						{
						case EXTENT_NULL: 			/// if null, use this point
							setExtents(point, point);
							return;
						case EXTENT_FINITE:
							mMaximum.makeCeil(point);
							mMinimum.makeFloor(point);
							return;
						case EXTENT_INFINITE: 			/// if infinite, makes no difference
							return;
						}
						EV_ASSERT( false && "Never reached" );
					}
					/// <summary>
					///变换边框盒
					/// </summary>
					/// <param name="matrix">变换矩阵</param>
					/// <returns></returns>
					inline void transform( _in const EarthView::World::Spatial::Math::CMatrix4 &matrix )
					{
						/// Do nothing if current null or infinite
						if( mExtent != EXTENT_FINITE )
							return;
						EarthView::World::Spatial::Math::CVector3 oldMin, oldMax, currentCorner;
						/// Getting the old values so that we can use the existing merge method.
						oldMin = mMinimum;
						oldMax = mMaximum;
						/// reset
						setNull();
						/// We sequentially compute the corners in the following order :
						/// 0, 6, 5, 1, 2, 4 ,7 , 3
						/// This sequence allows us to only change one member at a time to get at all corners.
						/// For each one, we transform it using the matrix
						/// Which gives the resulting point and merge the resulting point.
						/// First corner
						/// min min min
						currentCorner = oldMin;
						merge( matrix * currentCorner );
						/// min,min,max
						currentCorner.z = oldMax.z;
						merge( matrix * currentCorner );
						/// min max max
						currentCorner.y = oldMax.y;
						merge( matrix * currentCorner );
						/// min max min
						currentCorner.z = oldMin.z;
						merge( matrix * currentCorner );
						/// max max min
						currentCorner.x = oldMax.x;
						merge( matrix * currentCorner );
						/// max max max
						currentCorner.z = oldMax.z;
						merge( matrix * currentCorner );
						/// max min max
						currentCorner.y = oldMin.y;
						merge( matrix * currentCorner );
						/// max min min
						currentCorner.z = oldMin.z;
						merge( matrix * currentCorner );
					}
					/// <summary>
					///边框盒相似矩阵变换
					/// </summary>
					/// <param name="m">相似矩阵</param>
					/// <returns></returns>
					void transformAffine( _in const EarthView::World::Spatial::Math::CMatrix4 &m)
					{
						EV_ASSERT(m.isAffine());
						/// Do nothing if current null or infinite
						if ( mExtent != EXTENT_FINITE )
							return;
						EarthView::World::Spatial::Math::CVector3 centre = getCenter();
						EarthView::World::Spatial::Math::CVector3 halfSize = getHalfSize();
						EarthView::World::Spatial::Math::CVector3 newCentre = m.transformAffine(centre);
						EarthView::World::Spatial::Math::CVector3 newHalfSize(
							CMath::Abs(m[0][0]) * halfSize.x + CMath::Abs(m[0][1]) * halfSize.y + CMath::Abs(m[0][2]) * halfSize.z,
							CMath::Abs(m[1][0]) * halfSize.x + CMath::Abs(m[1][1]) * halfSize.y + CMath::Abs(m[1][2]) * halfSize.z,
							CMath::Abs(m[2][0]) * halfSize.x + CMath::Abs(m[2][1]) * halfSize.y + CMath::Abs(m[2][2]) * halfSize.z);
						setExtents(newCentre - newHalfSize, newCentre + newHalfSize);
					}
					/// <summary>
					///设置边框盒空间范围为0
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline void setNull()
					{
						mExtent = EXTENT_NULL;
					}
					/// <summary>
					///判断边框盒空间范围是否为0
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					inline ev_bool isNull() const
					{
						return (mExtent == EXTENT_NULL);
					}
					/// <summary>
					///判断边框盒是否为有限空间范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					ev_bool isFinite() const
					{
						return (mExtent == EXTENT_FINITE);
					}
					/// <summary>
					///设置边框盒为无限空间范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline void setInfinite()
					{
						mExtent = EXTENT_INFINITE;
					}
					/// <summary>
					///判断边框盒是否为无限空间范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					ev_bool isInfinite() const
					{
						return (mExtent == EXTENT_INFINITE);
					}
					/// <summary>
					///判断边框盒是否与另一边框盒相交
					/// </summary>
					/// <param name="b2">另一边框盒</param>
					/// <returns>相交返回true，否则false</returns>
					inline ev_bool intersects( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &b2) const
					{
						/// Early-fail for nulls
						if (this->isNull() || b2.isNull())
							return false;
						/// Early-success for infinites
						if (this->isInfinite() || b2.isInfinite())
							return true;
						/// Use up to 6 separating planes
						if (mMaximum.x < b2.mMinimum.x)
							return false;
						if (mMaximum.y < b2.mMinimum.y)
							return false;
						if (mMaximum.z < b2.mMinimum.z)
							return false;
						if (mMinimum.x > b2.mMaximum.x)
							return false;
						if (mMinimum.y > b2.mMaximum.y)
							return false;
						if (mMinimum.z > b2.mMaximum.z)
							return false;
						/// otherwise, must be intersecting
						return true;
					}
					/// <summary>
					///计算边框盒是否与另一边框盒相交的空间范围
					/// </summary>
					/// <param name="b2">另一边框盒</param>
					/// <returns>相交重合的空间边框盒</returns>
					inline EarthView::World::Spatial::Math::CAxisAlignedBox intersection( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &b2) const
					{
						if (this->isNull() || b2.isNull())
						{
							return CAxisAlignedBox();
						}
						else if (this->isInfinite())
						{
							return b2;
						}
						else if (b2.isInfinite())
						{
							return *this;
						}
						EarthView::World::Spatial::Math::CVector3 intMin = mMinimum;
						EarthView::World::Spatial::Math::CVector3 intMax = mMaximum;
						intMin.makeCeil(b2.getMinimum());
						intMax.makeFloor(b2.getMaximum());
						/// Check intersection isn't null
						if (intMin.x < intMax.x &&
							intMin.y < intMax.y &&
							intMin.z < intMax.z)
						{
							return CAxisAlignedBox(intMin, intMax);
						}
						return CAxisAlignedBox();
					}
					/// <summary>
					///计算边框盒体积
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框盒体积</returns>
					Real volume() const
					{
						switch (mExtent)
						{
						case EXTENT_NULL:
							return 0.0f;
						case EXTENT_FINITE:
							{
								EarthView::World::Spatial::Math::CVector3 diff = mMaximum - mMinimum;
								return diff.x * diff.y * diff.z;
							}
						case EXTENT_INFINITE:
							return CMath::POS_INFINITY;
						default: 			/// shut up compiler
							EV_ASSERT( false && "Never reached" );
							return 0.0f;
						}
					}
					/// <summary>
					///缩放边框盒
					/// </summary>
					/// <param name="s">缩放向量</param>
					/// <returns></returns>
					inline void scale( _in const EarthView::World::Spatial::Math::CVector3 &s)
					{
						/// Do nothing if current null or infinite
						if (mExtent != EXTENT_FINITE)
							return;
						/// NB assumes centered on origin
						EarthView::World::Spatial::Math::CVector3 min = mMinimum * s;
						EarthView::World::Spatial::Math::CVector3 max = mMaximum * s;
						setExtents(min, max);
					}
					/// <summary>
					///判断边框盒是否与球体相交
					/// </summary>
					/// <param name="s">球体对象</param>
					/// <returns>相交返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CSphere &s) const
					{
						return CMath::intersects(s, *this);
					}
					/// <summary>
					///判断边框盒是否与平面相交
					/// </summary>
					/// <param name="p">平面对象</param>
					/// <returns>相交返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CPlane &p) const
					{
						return CMath::intersects(p, *this);
					}
					/// <summary>
					///判断边框盒是否包含三维点坐标
					/// </summary>
					/// <param name="v">空间点坐标</param>
					/// <returns>包含返回true，否则false</returns>
					ev_bool intersects( _in const EarthView::World::Spatial::Math::CVector3 &v) const
					{
						switch (mExtent)
						{
						case EXTENT_NULL:
							return false;
						case EXTENT_FINITE:
							return(v.x >= mMinimum.x  &&  v.x <= mMaximum.x  &&
								v.y >= mMinimum.y  &&  v.y <= mMaximum.y  &&
								v.z >= mMinimum.z  &&  v.z <= mMaximum.z);
						case EXTENT_INFINITE:
							return true;
						default: 			/// shut up compiler
							EV_ASSERT( false && "Never reached" );
							return false;
						}
					}
					/// <summary>
					///返回边框盒中心坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框盒中心坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getCenter() const
					{
						EV_ASSERT( (mExtent == EXTENT_FINITE) && "Can't get center of a null or infinite AAB" );
						return CVector3(
							(mMaximum.x + mMinimum.x) * 0.5f,
							(mMaximum.y + mMinimum.y) * 0.5f,
							(mMaximum.z + mMinimum.z) * 0.5f);
					}
					/// <summary>
					///返回边框盒大小(对角线向量)
					/// </summary>
					/// <param name=""></param>
					/// <returns>边框盒大小</returns>
					EarthView::World::Spatial::Math::CVector3 getSize() const
					{
						switch (mExtent)
						{
						case EXTENT_NULL:
							return CVector3::ZERO;
						case EXTENT_FINITE:
							return mMaximum - mMinimum;
						case EXTENT_INFINITE:
							return CVector3(
								CMath::POS_INFINITY,
								CMath::POS_INFINITY,
								CMath::POS_INFINITY);
						default: 			/// shut up compiler
							EV_ASSERT( false && "Never reached" );
							return CVector3::ZERO;
						}
					}
					/// <summary>
					///返回半边框盒大小(对角线向量)
					/// </summary>
					/// <param name=""></param>
					/// <returns>半边框盒大小</returns>
					EarthView::World::Spatial::Math::CVector3 getHalfSize() const
					{
						switch (mExtent)
						{
						case EXTENT_NULL:
							return CVector3::ZERO;
						case EXTENT_FINITE:
							return (mMaximum - mMinimum) * 0.5;
						case EXTENT_INFINITE:
							return CVector3(
								CMath::POS_INFINITY,
								CMath::POS_INFINITY,
								CMath::POS_INFINITY);
						default: 			/// shut up compiler
							EV_ASSERT( false && "Never reached" );
							return CVector3::ZERO;
						}
					}
					/// <summary>
					///判断边框盒是否包含三维点坐标
					/// </summary>
					/// <param name="v">空间点坐标</param>
					/// <returns>包含返回true，否则false</returns>
					ev_bool contains( _in const EarthView::World::Spatial::Math::CVector3 &v) const
					{
						if (isNull())
							return false;
						if (isInfinite())
							return true;
						return mMinimum.x <= v.x && v.x <= mMaximum.x &&
							mMinimum.y <= v.y && v.y <= mMaximum.y &&
							mMinimum.z <= v.z && v.z <= mMaximum.z;
					}
					/// <summary>
					/// 返回点到包围盒的最短距离
					/// </summary>
					/// <param name="v">空间点坐标</param>
					/// <returns>距离</returns>
					Real distance(const EarthView::World::Spatial::Math::CVector3 &v) const
					{
						if (this->contains(v))
							return 0;
						else
						{
							Real maxDist = std::numeric_limits<Real>::min();
							if (v.x < mMinimum.x)
								maxDist = std::max(maxDist, mMinimum.x - v.x);
							if (v.y < mMinimum.y)
								maxDist = std::max(maxDist, mMinimum.y - v.y);
							if (v.z < mMinimum.z)
								maxDist = std::max(maxDist, mMinimum.z - v.z);
							if (v.x > mMaximum.x)
								maxDist = std::max(maxDist, v.x - mMaximum.x);
							if (v.y > mMaximum.y)
								maxDist = std::max(maxDist, v.y - mMaximum.y);
							if (v.z > mMaximum.z)
								maxDist = std::max(maxDist, v.z - mMaximum.z);
							return maxDist;
						}
					}
					/// <summary>
					/// 返回点到包围盒的最短距离
					/// </summary>
					/// <param name="v">空间点坐标</param>
					/// <returns>距离</returns>
					Real distance2(const EarthView::World::Spatial::Math::CVector3 &v) const;					
					/// <summary>
					///判断边框盒是否包含另一边框盒
					/// </summary>
					/// <param name="other">其它边框盒对象</param>
					/// <returns>包含返回true，否则false</returns>
					ev_bool contains( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &other) const
					{
						if (other.isNull() || this->isInfinite())
							return true;
						if (this->isNull() || other.isInfinite())
							return false;
						return this->mMinimum.x <= other.mMinimum.x &&
							this->mMinimum.y <= other.mMinimum.y &&
							this->mMinimum.z <= other.mMinimum.z &&
							other.mMaximum.x <= this->mMaximum.x &&
							other.mMaximum.y <= this->mMaximum.y &&
							other.mMaximum.z <= this->mMaximum.z;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rhs">边框盒对象</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator== ( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs) const
					{
						if (this->mExtent != rhs.mExtent)
							return false;
						if (!this->isFinite())
							return true;
						return this->mMinimum == rhs.mMinimum &&
							this->mMaximum == rhs.mMaximum;
					}
					/// <summary>
					/// 重载"!="操作符
					/// </summary>
					/// <param name="rhs">边框盒对象</param>
					/// <returns>非相等返回true，否则false</returns>
					ev_bool operator!= ( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs) const
					{
						return !(*this == rhs);
					}
					/// special values
					static const EarthView::World::Spatial::Math::CAxisAlignedBox BOX_NULL;
					static const EarthView::World::Spatial::Math::CAxisAlignedBox BOX_INFINITE;

				};
			}
		}
	}
}


#endif

