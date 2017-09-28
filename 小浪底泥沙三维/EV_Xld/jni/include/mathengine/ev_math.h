#ifndef __Math_H__
#define __Math_H__
#pragma warning (disable:4800)

#include "mathengine_config.h"
#include <core/memoryallocatedobject.h>

// using namespace EarthView::World::Core;

////#define EV_DOUBLE_PRECISION 1

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

#if EV_DOUBLE_PRECISION
typedef ev_real64 Real;
#else
typedef ev_real32 Real;
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				class PlaneList;
				class Planes;
				class CDegree;
				class CVector2;
				class CVector3;
				class CRay;
				class CPlane;
				class CSphere;
				class CAxisAlignedBox;
				class CMatrix4;
				class CVector4;
				class CQuaternion;
				/// <summary>
				/// 弧度类,
				/// 定义了弧度操作
				/// </summary>
				class EV_MATHENGINE_DLL CRadian: public EarthView::World::Core::CBaseObject
				{
					Real mRad;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRadian ( )
					{
						mRad = 0;
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="r">浮点型数据</param>
					/// <returns></returns>
					explicit CRadian ( _in Real r) : mRad(r) {}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="d">度数数据</param>
					/// <returns></returns>
					CRadian ( _in const CDegree &d );
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CRadian(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator = ( _in const Real &f )
					{
						mRad = f;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian &operator = ( _in const CRadian &r )
					{
						mRad = r.mRad;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator = ( _in const CDegree &d );
					/// <summary>
					/// 转换成度数
					/// </summary>
					/// <param name=""></param>
					/// <returns>度数结果</returns>
					Real valueDegrees() const; 			/// see bottom of this file
					/// <summary>
					/// 转换成弧度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度结果</returns>
					Real valueRadians() const
					{
						return mRad;
					}
					/// <summary>
					/// 转换成角度单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>角度单位</returns>
					Real valueAngleUnits() const;
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度结果</returns>
					const CRadian &operator + () const
					{
						return *this;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian operator + ( _in const CRadian &r ) const
					{
						return CRadian ( mRad + r.mRad );
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>弧度结果</returns>
					CRadian operator + ( _in const CDegree &d ) const;
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian &operator += ( _in const CRadian &r )
					{
						mRad += r.mRad;
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator += ( _in const CDegree &d );
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度结果</returns>
					CRadian operator - () const
					{
						return CRadian(-mRad);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian operator - ( _in const CRadian &r ) const
					{
						return CRadian ( mRad - r.mRad );
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>弧度结果</returns>
					CRadian operator - ( _in const CDegree &d ) const;
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian &operator -= ( _in const CRadian &r )
					{
						mRad -= r.mRad;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator -= ( _in const CDegree &d );
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>弧度结果</returns>
					CRadian operator * ( _in Real f ) const
					{
						return CRadian ( mRad * f );
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="f">弧度</param>
					/// <returns>弧度结果</returns>
					CRadian operator * ( _in const CRadian &f ) const
					{
						return CRadian ( mRad * f.mRad );
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator *= ( _in Real f )
					{
						mRad *= f;
						return *this;
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>弧度结果</returns>
					CRadian operator / ( _in Real f ) const
					{
						return CRadian ( mRad / f );
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>弧度结果</returns>
					CRadian &operator /= ( _in Real f )
					{
						mRad /= f;
						return *this;
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>小于返回true，否则false</returns>
					ev_bool operator <  ( _in const CRadian &r ) const
					{
						return mRad <  r.mRad;
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>小于等于返回true，否则false</returns>
					ev_bool operator <= ( _in const CRadian &r ) const
					{
						return mRad <= r.mRad;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator == ( _in const CRadian &r ) const
					{
						return mRad == r.mRad;
					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>非等返回true，否则false</returns>
					ev_bool operator != ( _in const CRadian &r ) const
					{
						return mRad != r.mRad;
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>大于等于返回true，否则false</returns>
					ev_bool operator >= ( _in const CRadian &r ) const
					{
						return mRad >= r.mRad;
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>大于返回true，否则false</returns>
					ev_bool operator >  ( _in const CRadian &r ) const
					{
						return mRad >  r.mRad;
					}
					/// <summary>
					///重载<<操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="v">输出弧度</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const CRadian &v )
					{
						o << "CRadian(" << v.valueRadians() << ")";
						return o;
					}
				};
				/// <summary>
				/// "*°"度类,
				/// 定义了弧度操作
				/// </summary>
				class EV_MATHENGINE_DLL CDegree: public EarthView::World::Core::CBaseObject
				{
					Real mDeg; 			/// if you get an error here - make sure to define/typedef 'Real' first
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDegree ()
					{
						mDeg = 0;
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="d">浮点型数据</param>
					/// <returns></returns>
					explicit CDegree ( _in Real d) : mDeg(d) {}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns></returns>
					CDegree ( _in const CRadian &r ) : mDeg(r.valueDegrees()) {}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDegree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="r">实数</param>
					/// <returns>度数结果</returns>
					CDegree &operator = ( _in const Real &f )
					{
						mDeg = f;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>度数结果</returns>
					CDegree &operator = ( _in const CDegree &d )
					{
						mDeg = d.mDeg;
						return *this;
					}
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>度数结果</returns>
					CDegree &operator = ( _in const CRadian &r )
					{
						mDeg = r.valueDegrees();
						return *this;
					}
					/// <summary>
					/// 转换成度数
					/// </summary>
					/// <param name=""></param>
					/// <returns>度数结果</returns>
					Real valueDegrees() const
					{
						return mDeg;
					}
					/// <summary>
					/// 转换成弧度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度结果</returns>
					Real valueRadians() const;
					/// <summary>
					/// 转换成角度单位
					/// </summary>
					/// <param name=""></param>
					/// <returns>角度单位</returns>
					Real valueAngleUnits() const;
					/// <summary>
					/// 重载正号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>度数结果</returns>
					const CDegree &operator + () const
					{
						return *this;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>度数结果</returns>
					CDegree operator + ( _in const CDegree &d ) const
					{
						return CDegree ( mDeg + d.mDeg );
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>度数结果</returns>
					CDegree operator + ( _in const CRadian &r ) const
					{
						return CDegree ( mDeg + r.valueDegrees() );
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>度数结果</returns>
					CDegree &operator += ( _in const CDegree &d )
					{
						mDeg += d.mDeg;
						return *this;
					}
					/// <summary>
					/// 重载"+="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>度数结果</returns>
					CDegree &operator += ( _in const CRadian &r )
					{
						mDeg += r.valueDegrees();
						return *this;
					}
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>度数结果</returns>
					CDegree operator - () const
					{
						return CDegree(-mDeg);
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>度数结果</returns>
					CDegree operator - ( _in const CDegree &d ) const
					{
						return CDegree ( mDeg - d.mDeg );
					}
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>度数结果</returns>
					CDegree operator - ( _in const CRadian &r ) const
					{
						return CDegree ( mDeg - r.valueDegrees() );
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>度数结果</returns>
					CDegree &operator -= ( _in const CDegree &d )
					{
						mDeg -= d.mDeg;
						return *this;
					}
					/// <summary>
					/// 重载"-="操作符
					/// </summary>
					/// <param name="r">弧度</param>
					/// <returns>度数结果</returns>
					CDegree &operator -= ( _in const CRadian &r )
					{
						mDeg -= r.valueDegrees();
						return *this;
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>度数结果</returns>
					CDegree operator * ( _in Real f ) const
					{
						return CDegree ( mDeg * f );
					}
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="f">度数</param>
					/// <returns>度数结果</returns>
					CDegree operator * ( _in const CDegree &f ) const
					{
						return CDegree ( mDeg * f.mDeg );
					}
					/// <summary>
					/// 重载"*="操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>度数结果</returns>
					CDegree &operator *= ( _in Real f )
					{
						mDeg *= f;
						return *this;
					}
					/// <summary>
					/// 重载"/"操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>度数结果</returns>
					CDegree operator / ( _in Real f ) const
					{
						return CDegree ( mDeg / f );
					}
					/// <summary>
					/// 重载"/="操作符
					/// </summary>
					/// <param name="f">实数</param>
					/// <returns>度数结果</returns>
					CDegree &operator /= ( _in Real f )
					{
						mDeg /= f;
						return *this;
					}
					/// <summary>
					/// 重载"<"操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>小于返回true，否则false</returns>
					ev_bool operator <  ( _in const CDegree &d ) const
					{
						return mDeg <  d.mDeg;
					}
					/// <summary>
					/// 重载"<="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>小于等于返回true，否则false</returns>
					ev_bool operator <= ( _in const CDegree &d ) const
					{
						return mDeg <= d.mDeg;
					}
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator == ( _in const CDegree &d ) const
					{
						return mDeg == d.mDeg;
					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>非等返回true，否则false</returns>
					ev_bool operator != ( _in const CDegree &d ) const
					{
						return mDeg != d.mDeg;
					}
					/// <summary>
					/// 重载">="操作符
					/// </summary>
					/// <param name="d">度数</param>
					/// <returns>大于等于返回true，否则false</returns>
					ev_bool operator >= ( _in const CDegree &d ) const
					{
						return mDeg >= d.mDeg;
					}
					/// <summary>
					/// 重载">"操作符
					/// </summary>
					/// <param name="r">度数</param>
					/// <returns>大于返回true，否则false</returns>
					ev_bool operator >  ( _in const CDegree &d ) const
					{
						return mDeg >  d.mDeg;
					}
					/// <summary>
					///重载<<操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="v">输出度数</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const CDegree &v )
					{
						o << "CDegree(" << v.valueDegrees() << ")";
						return o;
					}

					EVString toStringDms()
					{
						return toStringDms(mDeg);
					}

					EVString toStringDms() const
					{
						return toStringDms(mDeg);
					}

					EVString toStringDmsLat()
					{
						return toStringDmsLat(mDeg);
					}

					EVString toStringDmsLat() const
					{
						return toStringDmsLat(mDeg);
					}

					EVString toStringDmsLon()
					{
						return toStringDmsLon(mDeg);
					}

					EVString toStringDmsLon() const
					{
						return toStringDmsLon(mDeg);
					}

					static EVString toStringDms(_in ev_real64 degree);

					static CDegree fromStringDms(_in const EVString& degreeString);

					static EVString toStringDmsLat(_in ev_real64 degree,_in const EVString& southSuffix, _in const EVString& northSuffix);

					static CDegree fromStringDmsLat(_in const EVString& LatitudeString);

					static EVString toStringDmsLat(_in ev_real64 degree)
					{
						EVString southSuffix("S");
						EVString northSuffix("N");
						return toStringDmsLat(degree, southSuffix, northSuffix);	
					}

					static EVString toStringDmsLon(_in ev_real64 degree,_in const EVString& eastSuffix,_in const EVString& westSuffix);

					static EVString toStringDmsLon(_in ev_real64 degree)
					{
						EVString eastSuffix("E");
						EVString westSuffix("W");
						return toStringDmsLon(degree, eastSuffix, westSuffix);
					}

					static CDegree fromStringDmsLon(_in const EVString& longitudeString);

				};
				/// <summary>
				/// 角度类,
				/// 定义了角度的操作
				/// </summary>
				class EV_MATHENGINE_DLL CAngle: public EarthView::World::Core::CBaseObject
				{
					Real mAngle;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="angle">角度大小</param>
					/// <returns></returns>
					explicit CAngle ( _in Real angle ) : mAngle(angle) {}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAngle(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 角度转换成弧度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度</returns>
					operator CRadian() const;
					/// <summary>
					/// 角度转换成度数
					/// </summary>
					/// <param name=""></param>
					/// <returns>度数</returns>
					operator CDegree() const;
				};
				/// <summary>
				/// 几何体相交结果键值对类
				/// </summary>
				class  EV_MATHENGINE_DLL IntersectResPair : public EarthView::World::Core::CBaseObject
				{
				public:
					ev_bool first;
					Real second;
					IntersectResPair();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="fir">键</param>
					/// <param name="sec">值</param>
					/// <returns></returns>
					IntersectResPair(_in ev_bool fir, _in Real sec);
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="other">其它对象</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::IntersectResPair &operator=(_in const EarthView::World::Spatial::Math::IntersectResPair &other);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IntersectResPair(_in EarthView::World::Core::CNameValuePairList *pList);
				};
				/// <summary>
				/// 数学类,
				/// 定义了基本的数学函数
				/// </summary>
				class EV_MATHENGINE_DLL CMath: public EarthView::World::Core::CBaseObject
				{
				public:
					enum AngleUnit
					{
						AU_DEGREE,
						AU_RADIAN
					};
				protected:
					static EarthView::World::Spatial::Math::CMath::AngleUnit msAngleUnit;
					static ev_int32 mTrigTableSize;
					static Real mTrigTableFactor;
					static Real *mSinTable;
					static Real *mTanTable;
					/// <summary>
					/// 创建三角函数表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void buildTrigTables();
					/// <summary>
					/// 创建Sin三角函数表
					/// </summary>
					/// <param name="fValue">待计算值</param>
					/// <returns>正弦值</returns>
					static Real SinTable (_in Real fValue);
					/// <summary>
					/// 创建Tan三角函数表
					/// </summary>
					/// <param name="fValue">待计算值</param>
					/// <returns>正切值</returns>
					static Real TanTable (_in Real fValue);
				public:
					/// <summary>
					/// CMath构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMath();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="trigTableSize">三角函数表容量</param>
					/// <returns></returns>
					CMath(_in ev_uint32 trigTableSize);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMath(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMath();
					/// <summary>
					/// 求绝对值
					/// </summary>
					/// <param name="iValue">待计算值</param>
					/// <returns>绝对值</returns>
					static inline ev_int32 IAbs (_in ev_int32 iValue)
					{
						return ( iValue >= 0 ? iValue : -iValue );
					}
					/// <summary>
					/// 求不小于浮点数的最小整数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>最小整数值</returns>
					static ev_int32 ICeil (_in ev_real32 fValue);
					/// <summary>
					/// 求不大于浮点数的最小整数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>最大整数值</returns>
					static ev_int32 IFloor (_in ev_real32 fValue);
					/// <summary>
					/// 求数值的符号
					/// </summary>
					/// <param name="iValue">待求符号数值</param>
					/// <returns>返回符号-1为负，0为0，1为正</returns>
					static ev_int32 ISign (_in ev_int32 iValue);
					/// <summary>
					/// 求浮点数绝对值
					/// </summary>
					/// <param name="fValue">待计算值</param>
					/// <returns>绝对值</returns>
					static inline Real Abs (_in Real fValue)
					{
						return Real(fabs(fValue));
					}

					/// <summary>
					/// 求浮点数绝对值
					/// </summary>
					/// <param name="fValue">待计算值</param>
					/// <returns>绝对值</returns>
					/*static inline ev_real64 Abs (_in ev_real64 dValue)
					{
						return abs(dValue);
					}*/

					/// <summary>
					/// 求角度数绝对值
					/// </summary>
					/// <param name="dValue">待求符号数值</param>
					/// <returns>绝对值</returns>
					static inline CDegree Abs (_in const CDegree &dValue)
					{
						return CDegree(fabs(dValue.valueDegrees()));
					}
					/// <summary>
					/// 求弧度数绝对值
					/// </summary>
					/// <param name="rValue">待求符号数值</param>
					/// <returns>绝对值</returns>
					static inline CRadian Abs (_in const CRadian &rValue)
					{
						return CRadian(fabs(rValue.valueRadians()));
					}
					/// <summary>
					/// 求反余弦值
					/// </summary>
					/// <param name="fValue">待计算数值</param>
					/// <returns>反余弦值弧度</returns>
					static CRadian ACos (_in Real fValue);
					static CRadian ACos (_in Real fValue, ev_bool fast);

					/// <summary>
					/// 求反余弦值
					/// </summary>
					/// <param name="dValue">待计算数值</param>
					/// <returns>反余弦值弧度</returns>
					/*static inline ev_real64 ACos (_in ev_real64 dValue)
					{
						if ( -1.0 < dValue )
						{
							if ( dValue < 1.0 )
								return acos(dValue);
							else
								return 0.0;
						}
						else
						{
							return PI;
						}
					}*/

					/// <summary>
					/// 求反正弦值
					/// </summary>
					/// <param name="fValue">待计算数值</param>
					/// <returns>反正弦值弧度</returns>
					static CRadian ASin (_in Real fValue);

					/// <summary>
					/// 求反正弦值
					/// </summary>
					/// <param name="dValue">待计算数值</param>
					/// <returns>反正弦值弧度</returns>
					/*static inline ev_real64 ASin (_in ev_real64 dValue)
					{
					if ( -1.0 < dValue )
					{
					if ( dValue < 1.0 )
					return asin(dValue);
					else
					return HALF_PI;
					}
					else
					{
					return -HALF_PI;
					}
					}*/

					/// <summary>
					/// 求反正切值
					/// </summary>
					/// <param name="fValue">待计算数值</param>
					/// <returns>反正切值弧度</returns>
					static CRadian ATan (_in Real fValue);

					/// <summary>
					/// 求反正切值
					/// </summary>
					/// <param name="dValue">待计算数值</param>
					/// <returns>反正切值弧度</returns>
					/*static inline ev_real64 ATan (_in ev_real64 dValue)
					{
						return atan(dValue);
					}*/

					/// <summary>
					/// 求Y/X反正切值
					/// </summary>
					/// <param name="fY">待计算数值</param>
					/// <param name="fX">待计算数值</param>
					/// <returns>反正切值弧度</returns>
					static CRadian ATan2 (_in Real fY, _in Real fX);

					/*static inline ev_real64 ATan2 (_in ev_real64 dY, _in ev_real64 dX)
					{
						return atan2(dY, dX);
					}*/

					/// <summary>
					/// 求不小于浮点数的最小整数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>浮点型最小整数值</returns>
					static inline Real Ceil (_in Real fValue)
					{
						return Real(ceil(fValue));
					}

					/*static inline ev_real64 Ceil (_in ev_real64 dValue)
					{
						return ceil(dValue);
					}*/

					/// <summary>
					/// 判断是否是非数值型数据
					/// </summary>
					/// <param name="f">浮点数值</param>
					/// <returns>不是返回TURE，是返回False</returns>
					static inline ev_bool isNaN(_in Real f)
					{
						/// std::isnan() is C99, not supported by all compilers
						/// However NaN always fails this next test, no other number does.
						return f != f;
					}

					/*static inline ev_bool isNaN(_in ev_real64 d)
					{
						return _isnan(d);
					}*/

					/// <summary>
					/// 求余弦值
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>余弦值</returns>
					static Real Cos (_in const CRadian &fValue, _in  ev_bool useTables );
					/// <summary>
					/// 求余弦值
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <returns>余弦值</returns>
					static inline Real Cos (_in const CRadian &fValue)
					{
						return Cos(fValue, false);
					}
					/// <summary>
					/// 求余弦值
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>余弦值</returns>
					static Real Cos (_in Real fValue, _in ev_bool useTables );
					/// <summary>
					/// 求余弦值
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <returns>余弦值</returns>
					static inline Real Cos (_in Real fValue)
					{
						return Cos(fValue, false);
					}

					/*static inline ev_real64 Cos (_in ev_real64 dValue)
					{
						return cos(dValue);
					}*/
					/// <summary>
					/// 求e的指数
					/// </summary>
					/// <param name="fValue">幂值</param>
					/// <returns>指数值</returns>
					static Real Exp (_in Real fValue);
					/// <summary>
					/// 求不大于浮点数的最小整数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>浮点型最大整数值</returns>
					static Real Floor (_in Real fValue);

					/*static inline ev_real64 Floor(_in ev_real64 dValue)
					{
						return floor(dValue);
					}*/
					/// <summary>
					/// 求自然对数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>自然对数值</returns>
					static Real Log (_in Real fValue);

					static const Real LOG2;
					/// <summary>
					/// 求以2为底对数
					/// </summary>
					/// <param name="fValue">浮点数值</param>
					/// <returns>对数值</returns>
					static inline Real Log2 (_in Real fValue)
					{
						return Real(Log(fValue) / LOG2);
					}
					/// <summary>
					/// 求以N为底对数
					/// </summary>
					/// <param name="fBase">对数的底</param>
					/// <param name="fValue">浮点数值</param>
					/// <returns>对数值</returns>
					static inline Real LogN (_in Real fBase, Real fValue)
					{
						return Real(Log(fValue) / Log(fBase));
					}
					/// <summary>
					/// 求指数
					/// </summary>
					/// <param name="fBase">对数的底</param>
					/// <param name="fExponent">浮点数值</param>
					/// <returns>指数值</returns>
					static Real Pow (_in Real fBase, Real fExponent);
					/// <summary>
					/// 求浮点数值的符号
					/// </summary>
					/// <param name="fValue">待求符号数值</param>
					/// <returns>返回符号-1.0为负，0.0为0.0，1.0为正</returns>
					static Real Sign (_in Real fValue);

					//static ev_int32 Sign(_in ev_real64 dValue);
					/// <summary>
					/// 求弧度数值的符号
					/// </summary>
					/// <param name="rValue">待求符号数值</param>
					/// <returns>弧度型符号</returns>
					static inline CRadian Sign ( _in const CRadian &rValue )
					{
						return CRadian(Sign(rValue.valueRadians()));
					}
					/// <summary>
					/// 求度数数值的符号
					/// </summary>
					/// <param name="iValue">待求符号数值</param>
					/// <returns>度数型符号</returns>
					static inline CDegree Sign (_in const CDegree &dValue )
					{
						return CDegree(Sign(dValue.valueDegrees()));
					}
					/// <summary>
					/// 求正弦值
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>正弦值</returns>
					static Real Sin (_in const CRadian &fValue, _in ev_bool useTables);

					/// <summary>
					/// 求正弦值
					/// </summary>
					/// <param name="dValue">弧度值</param>
					/// <returns>正弦值</returns>
					static ev_real64 Sin(_in const ev_real64 dValue );

					/// <summary>
					/// 求正弦值
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>正弦值</returns>
					static inline Real Sin (_in const CRadian &fValue)
					{
						return Sin(fValue, false);
					}
					/// <summary>
					/// 求正弦值
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>正弦值</returns>
					static Real Sin (_in Real fValue, _in ev_bool useTables );
					/// <summary>
					/// 求正弦值
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <returns>正弦值</returns>
					/*static inline Real Sin (_in Real fValue )
					{
						return Sin(fValue, false);
					}*/
					/// <summary>
					/// 求平方值
					/// </summary>
					/// <param name="fValue">浮点型值底</param>
					/// <returns>平方值</returns>
					static inline Real Sqr (_in Real fValue)
					{
						return fValue * fValue;
					}

					/// <summary>
					/// 求平方值
					/// </summary>
					/// <param name="fValue">浮点型值底</param>
					/// <returns>平方值</returns>
					/*static inline ev_real64 Sqr (_in ev_real64 dValue)
					{
						return dValue * dValue;
					}*/

					/// <summary>
					/// 求平方根
					/// </summary>
					/// <param name="fValue">浮点型值</param>
					/// <returns>根值</returns>
					static Real Sqrt (_in Real fValue);

					/*static inline ev_real64 Sqrtd (_in ev_real64 dValue)
					{
						return sqrt(dValue);
					}*/
					/// <summary>
					/// 求平方根
					/// </summary>
					/// <param name="fValue">弧度型值</param>
					/// <returns>根值</returns>
					static inline CRadian Sqrt (_in const CRadian &fValue)
					{
						return CRadian(Sqrt(fValue.valueRadians()));
					}
					/// <summary>
					/// 求平方根
					/// </summary>
					/// <param name="fValue">度数型值</param>
					/// <returns>根值</returns>
					static inline CDegree Sqrt (_in const CDegree &fValue)
					{
						return CDegree(Sqrt(fValue.valueDegrees()));
					}
					/// <summary>
					/// 求平方根倒数
					/// </summary>
					/// <param name="fValue">浮点型值</param>
					/// <returns>平方根倒数值</returns>
					static Real InvSqrt(_in Real fValue);
					/// <summary>
					/// 求基本随机数
					/// </summary>
					/// <returns>[0，1]随机数</returns>
					static Real UnitRandom ();  			/// in [0,1]
					/// <summary>
					/// 求随机数
					/// </summary>
					/// <param name="fLow">最小值</param>
					/// <param name="fLow">最大值</param>
					/// <returns> [fLow,fHigh]随机数</returns>
					static Real RangeRandom (_in Real fLow, _in Real fHigh);  			/// in [fLow,fHigh]
					/// <summary>
					/// 求对称随机数
					/// </summary>
					/// <returns>[-1，1]随机数</returns>
					static Real SymmetricRandom ();  			/// in [-1,1]
					/// <summary>
					/// 求正切数
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>正切值</returns>
					static Real Tan (_in const CRadian &fValue, _in ev_bool useTables);
					/// <summary>
					/// 求正切数
					/// </summary>
					/// <param name="fValue">弧度值</param>
					/// <returns>正切值</returns>
					static inline Real Tan (_in const CRadian &fValue)
					{
						return Tan(fValue, false);
					}
					/// <summary>
					/// 求正切数
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <param name="useTables">标志是否使用三角函数表</param>
					/// <returns>正切值</returns>
					static Real Tan (_in Real fValue, _in ev_bool useTables);

					/*static inline ev_real64 Tan (_in ev_real64 dValue)
					{
						return tan(dValue);
					}*/
					/// <summary>
					/// 求正切数
					/// </summary>
					/// <param name="fValue">浮点型数值</param>
					/// <returns>正切值</returns>
					static inline Real Tan (_in Real fValue)
					{
						return Tan(fValue, false);
					}
					/// <summary>
					/// 度数转换为弧度
					/// </summary>
					/// <param name="degrees">度数值</param>
					/// <returns>弧度值</returns>
					static inline Real DegreesToRadians(_in Real degrees)
					{
						return degrees * ((ev_real64)CMath::PI)/((ev_real64)180);
					}

					/*static inline ev_real64 DegreesToRadians(_in ev_real64 degrees)
					{
						return degrees * ((ev_real64)CMath::PI)/((ev_real64)180);
					}*/
					/// <summary>
					/// 弧度值转换为度数值
					/// </summary>
					/// <param name="radians">弧度值</param>
					/// <returns>度数值</returns>
					static inline Real RadiansToDegrees(_in Real radians)
					{
						return radians * ((ev_real64)180)/((ev_real64)CMath::PI);
					}

					/*static inline ev_real64 RadiansToDegrees(_in ev_real64 radians)
					{
						return radians * ((ev_real64)180)/((ev_real64)CMath::PI);
					}*/
					/// <summary>
					/// 设置角度单位
					/// </summary>
					/// <param name="unit">单位枚举</param>
					/// <returns>角度单位</returns>
					static ev_void setAngleUnit(_in AngleUnit unit);
					/// <summary>
					/// 获得角度单位
					/// </summary>
					/// <returns>角度单位</returns>
					static EarthView::World::Spatial::Math::CMath::AngleUnit getAngleUnit();
					/// <summary>
					/// 当前角度单位转换为弧度
					/// </summary>
					/// <param name="unit">角度单位</param>
					/// <returns>弧度值</returns>
					static Real AngleUnitsToRadians(_in Real units);
					/// <summary>
					/// 弧度转换为当前角度单位
					/// </summary>
					/// <param name="unit">角度单位</param>
					/// <returns>弧度值</returns>
					static Real RadiansToAngleUnits(_in Real radians);
					/// <summary>
					/// 当前角度单位转换为度数值
					/// </summary>
					/// <param name="unit">角度单位</param>
					/// <returns>度数值</returns>
					static Real AngleUnitsToDegrees(_in Real units);
					/// <summary>
					/// 度数转换为当前角度单位
					/// </summary>
					/// <param name="unit">角度单位</param>
					/// <returns>度数值</returns>
					static Real DegreesToAngleUnits(_in Real degrees);
					/// <summary>
					/// 在二维空间中判断一个点是否在三角形内
					/// </summary>
					/// <param name=" p">二维点</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <returns>在三角形内返回true，否则返回false</returns>
					static ev_bool pointInTri2D(_in const EarthView::World::Spatial::Math::CVector2 &p, _in const EarthView::World::Spatial::Math::CVector2 &a,
						_in const EarthView::World::Spatial::Math::CVector2 &b, _in const EarthView::World::Spatial::Math::CVector2 &c);
					/// <summary>
					/// 在三维空间中判断一个点是否在三角形内
					/// </summary>
					/// <param name=" p">三维点</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <param name=" normal">三角形法线向量</param>
					/// <returns>在三角形内返回true，否则返回false</returns>
					static ev_bool pointInTri3D(_in const EarthView::World::Spatial::Math::CVector3 &p, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c, _in const EarthView::World::Spatial::Math::CVector3 &normal);
					/// <summary>
					/// 判断射线是否穿过平面
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="plane">平面对象</param>
					/// <returns>返回pair型值</returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CPlane &plane);
					/// <summary>
					/// 判断射线是否穿过球体
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="sphere">球体对象</param>
					/// <param name="discardInside">标志是否在球内发出光线</param>
					/// <returns>返回pair型值</returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CSphere &sphere,
						ev_bool discardInside);
					/// <summary>
					/// 判断射线是否穿过球体
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="sphere">球体对象</param>
					/// <returns>返回pair型值</returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CSphere &sphere);
					/// <summary>
					/// 判断射线是否穿过轴对齐矩形边界框
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="box">轴对齐矩形边界框对象</param>
					/// <returns>返回pair型值</returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
					/// <summary>
					/// 判断射线是否穿过轴对齐矩形边界框
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="box">轴对齐矩形边界框对象</param>
					/// <param name="d1">近交点距离</param>
					/// <param name="d2">远交点距离</param>
					/// <returns>穿过返回true，否则false</returns>
					static ev_bool intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box,
						_out Real *d1, _out Real *d2);
					/// <summary>
					/// 判断射线穿过三角形
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <param name=" normal">三角形法线向量</param>
					/// <param name="positiveSide">标志正面穿过</param>
					/// <param name="negativeSide">标志负面穿过</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c, _in const EarthView::World::Spatial::Math::CVector3 &normal,
						_in ev_bool positiveSide, _in ev_bool negativeSide);
					/// <summary>
					/// 判断射线穿过三角形
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <param name=" normal">三角形法线向量</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c, _in const EarthView::World::Spatial::Math::CVector3 &normal);
					/// <summary>
					/// 判断射线穿过三角形
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <param name="positiveSide">标志正面穿过</param>
					/// <param name="negativeSide">标志负面穿过</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c,
						_in ev_bool positiveSide, _in ev_bool negativeSide);
					/// <summary>
					/// 判断射线穿过三角形
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <param name="positiveSide">标志正面穿过</param>
					/// <param name="negativeSide">标志负面穿过</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c,
						_in ev_bool positiveSide);
					/// <summary>
					/// 判断射线穿过三角形
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name=" a">三角形顶点</param>
					/// <param name=" b">三角形顶点</param>
					/// <param name=" c">三角形顶点</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::CVector3 &a,
						_in const EarthView::World::Spatial::Math::CVector3 &b, _in const EarthView::World::Spatial::Math::CVector3 &c);
					/// <summary>
					/// 判断球体和轴对齐边界框相交情况
					/// </summary>
					/// <param name="sphere">球体对象</param>
					/// <param name="box">轴对齐边界框对象</param>
					/// <returns>相交返回true，否则false</returns>
					static ev_bool intersects(_in const EarthView::World::Spatial::Math::CSphere &sphere, _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
					/// <summary>
					/// 判断平面和轴对齐边界框相交情况
					/// </summary>
					/// <param name="plane">平面对象</param>
					/// <param name="box">轴对齐边界框对象</param>
					/// <returns>相交返回true，否则false</returns>
					static ev_bool intersects(_in const EarthView::World::Spatial::Math::CPlane &plane, _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
					/// <summary>
					/// 判断射线穿过凸多面体
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="planeList">凸多面体vector集合</param>
					/// <param name="normalIsOutside">标志是否法线向外</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(
						_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::PlaneList &planes,
						_in ev_bool normalIsOutside);
					/// <summary>
					/// 判断射线穿过凸多面体
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="planeList">凸多面体List集合</param>
					/// <param name="normalIsOutside">标志是否法线向外</param>
					/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
					static EarthView::World::Spatial::Math::IntersectResPair intersects(
						_in const EarthView::World::Spatial::Math::CRay &ray, _in const EarthView::World::Spatial::Math::Planes &planeList,
						_in ev_bool normalIsOutside);
					/// <summary>
					/// 判断球体和平面相交情况
					/// </summary>
					/// <param name="sphere">球体对象</param>
					/// <param name="plane">平面对象</param>
					/// <returns>相交返回true，否则false</returns>
					static ev_bool intersects(_in const EarthView::World::Spatial::Math::CSphere &sphere, _in const EarthView::World::Spatial::Math::CPlane &plane);
					/// <summary>
					/// 判断浮点型数据在一定误差范围内是否相等
					/// </summary>
					/// <param name="a">浮点数</param>
					/// <param name="b">浮点数</param>
					/// <param name="tolerance">误差</param>
					/// <returns>相等返回true，否则false</returns>
					static ev_bool RealEqual(_in Real a, _in Real b,
						_in Real tolerance);

					/*static ev_bool DoubleEqual(_in ev_real64 a, _in ev_real64 b,
						_in ev_real64 tolerance);*/
					/// <summary>
					/// 判断浮点型数据在一定误差范围内是否相等
					/// </summary>
					/// <param name="a">浮点数</param>
					/// <param name="b">浮点数</param>
					/// <param name="tolerance">误差</param>
					/// <returns>相等返回true，否则false</returns>
					static ev_bool RealEqual(_in Real a, _in Real b);

					//static ev_bool DoubleEqual(_in ev_real64 a, _in ev_real64 b);
					/// <summary>
					/// 根据点和纹理坐标计算切线空间向量
					/// </summary>
					/// <param name="position1">空间点</param>
					/// <param name="position2">空间点</param>
					/// <param name="position3">空间点</param>
					/// <param name="u1">纹理坐标u</param>
					/// <param name="v1">纹理坐标v</param>
					/// <param name="u2">纹理坐标u</param>
					/// <param name="v2">纹理坐标v</param>
					/// <param name="u3">纹理坐标u</param>
					/// <param name="v3">纹理坐标v</param>
					/// <returns>返回切线空间向量</returns>
					static EarthView::World::Spatial::Math::CVector3 calculateTangentSpaceVector(
						_in const EarthView::World::Spatial::Math::CVector3 &position1, _in const EarthView::World::Spatial::Math::CVector3 &position2, _in const EarthView::World::Spatial::Math::CVector3 &position3,
						_in Real u1, _in Real v1, _in Real u2, _in Real v2, _in Real u3, _in Real v3);
					/// <summary>
					/// 建立被穿过平面的反射矩阵
					/// </summary>
					/// <param name="p">平面对象</param>
					/// <returns>返回反射矩阵</returns>
					static EarthView::World::Spatial::Math::CMatrix4 buildReflectionMatrix(_in const EarthView::World::Spatial::Math::CPlane &p);
					/// <summary>
					/// 计算包括w(偏离远点距离)信息的正面向量
					/// </summary>
					/// <param name="v1">空间向量</param>
					/// <param name="v2">空间向量</param>
					/// <param name="v3">空间向量</param>
					/// <returns>返回正面向量</returns>
					static EarthView::World::Spatial::Math::CVector4 calculateFaceNormal(_in const EarthView::World::Spatial::Math::CVector3 &v1, _in const EarthView::World::Spatial::Math::CVector3 &v2, _in const EarthView::World::Spatial::Math::CVector3 &v3);
					/// <summary>
					/// 计算包括无w(偏离远点距离)信息的正面向量
					/// </summary>
					/// <param name="v1">空间向量</param>
					/// <param name="v2">空间向量</param>
					/// <param name="v3">空间向量</param>
					/// <returns>返回正面向量</returns>
					static EarthView::World::Spatial::Math::CVector3 calculateBasicFaceNormal(_in const EarthView::World::Spatial::Math::CVector3 &v1, _in const EarthView::World::Spatial::Math::CVector3 &v2, _in const EarthView::World::Spatial::Math::CVector3 &v3);
					/// <summary>
					/// 计算非规格化带w(偏离远点距离)信息的正面向量
					/// </summary>
					/// <param name="v1">空间向量</param>
					/// <param name="v2">空间向量</param>
					/// <param name="v3">空间向量</param>
					/// <returns>返回正面向量</returns>
					static EarthView::World::Spatial::Math::CVector4 calculateFaceNormalWithoutNormalize(_in const EarthView::World::Spatial::Math::CVector3 &v1, _in const EarthView::World::Spatial::Math::CVector3 &v2, _in const EarthView::World::Spatial::Math::CVector3 &v3);
					/// <summary>
					/// 计算非规格化无w(偏离远点距离)信息的正面向量
					/// </summary>
					/// <param name="v1">空间向量</param>
					/// <param name="v2">空间向量</param>
					/// <param name="v3">空间向量</param>
					/// <returns>返回正面向量</returns>
					static EarthView::World::Spatial::Math::CVector3 calculateBasicFaceNormalWithoutNormalize(_in const EarthView::World::Spatial::Math::CVector3 &v1, _in const EarthView::World::Spatial::Math::CVector3 &v2, _in const EarthView::World::Spatial::Math::CVector3 &v3);
					/// <summary>
					/// 根据偏移和缩放参数，利用数据计算高斯分布的值
					/// </summary>
					/// <param name="x">浮点数据</param>
					/// <param name="offset">偏移量</param>
					/// <param name="scale">缩放系数</param>
					/// <returns>高斯分布值</returns>
					static Real gaussianDistribution(_in Real x, _in Real offset, _in Real scale);
					/// <summary>
					/// 根据偏移和缩放参数，利用数据计算高斯分布的值
					/// </summary>
					/// <param name="x">浮点数据</param>
					/// <param name="offset">偏移量</param>
					/// <returns>高斯分布值</returns>
					static Real gaussianDistribution(_in Real x, _in Real offset);
					/// <summary>
					/// 根据偏移和缩放参数，利用数据计算高斯分布的值
					/// </summary>
					/// <param name="x">浮点数据</param>
					/// <returns>高斯分布值</returns>
					static Real gaussianDistribution(_in Real x);
					/// <summary>
					/// 根据数据和一个范围返回值，若数据超过max，则返回max；若数据在范围内，返回数据值；若数据小于min，则返回min
					/// </summary>
					/// <param name="val">浮点型数据</param>
					/// <param name="minval">范围最小值</param>
					/// <param name="maxval">范围最大值</param>
					/// <returns>若数据超过max，则返回max；若数据在范围内，返回数据值；若数据小于min，则返回min</returns>
					static Real Clamp(_in Real val, _in Real minval, _in Real maxval)
					{
						EV_ASSERT (minval < maxval && "Invalid clamp range");
						return std::max(std::min(val, maxval), minval);
					}
					static ev_int32 Clamp(_in ev_int32 val, _in ev_int32 minval, _in ev_int32 maxval)
					{
						EV_ASSERT (minval < maxval && "Invalid clamp range");
						return std::max(std::min(val, maxval), minval);
					}
					/*static ev_real64 Clamp(_in ev_real64 val, _in ev_real64 minval, _in ev_real64 maxval)
					{
						EV_ASSERT (minval < maxval && "Invalid clamp range");
						return std::max(std::min(val, maxval), minval);
					}*/
					/*static Real Clamp(_in Real val, _in ev_real64 minval, _in ev_real64 maxval)
					{
						EV_ASSERT (minval < maxval && "Invalid clamp range");
						return (Real)std::max(std::min((ev_real64)val, maxval), minval);
					}*/
					/// <summary>
					/// 计算可视矩阵
					/// </summary>
					/// <param name="position">视点坐标</param>
					/// <param name="orientation">方向</param>
					/// <param name="reflectMatrix">反射矩阵</param>
					/// <returns>可视矩阵</returns>
					static EarthView::World::Spatial::Math::CMatrix4 makeViewMatrix(_in const EarthView::World::Spatial::Math::CVector3 &position, _in const EarthView::World::Spatial::Math::CQuaternion &orientation,
						_in const EarthView::World::Spatial::Math::CMatrix4 *reflectMatrix );
					/// <summary>
					/// 计算可视矩阵
					/// </summary>
					/// <param name="position">视点坐标</param>
					/// <param name="orientation">方向</param>
					/// <returns>可视矩阵</returns>
					static EarthView::World::Spatial::Math::CMatrix4 makeViewMatrix(_in const EarthView::World::Spatial::Math::CVector3 &position, _in const EarthView::World::Spatial::Math::CQuaternion &orientation);
					/// <summary>
					/// 根据边界框计算边界半径
					/// </summary>
					/// <param name="aabb">边界框对象</param>
					/// <returns>半径值</returns>
					static Real boundingRadiusFromAABB(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aabb);

					static const Real POS_INFINITY;
					static const Real NEG_INFINITY;
					static const Real PI;
					static const Real TWO_PI;
					static const Real HALF_PI;
					static const Real fDeg2Rad;
					static const Real fRad2Deg;
					static const Real EARTH_RADIUS;
				};
				/// <summary>
				/// 重载"*"操作符
				/// </summary>
				/// <param name="a">实数</param>
				/// <param name="b">弧度</param>
				/// <returns>弧度结果</returns>
				inline CRadian operator * ( _in Real a, _in const CRadian &b )
				{
					return CRadian ( a * b.valueRadians() );
				}
				/// <summary>
				/// 重载"/"操作符
				/// </summary>
				/// <param name="a">实数</param>
				/// <param name="b">弧度</param>
				/// <returns>弧度结果</returns>
				inline CRadian operator / ( _in Real a, _in const CRadian &b )
				{
					return CRadian ( a / b.valueRadians() );
				}
				/// <summary>
				/// 重载"*"操作符
				/// </summary>
				/// <param name="a">实数</param>
				/// <param name="b">度数</param>
				/// <returns>度数结果</returns>
				inline CDegree operator * ( _in Real a, _in const CDegree &b )
				{
					return CDegree ( a * b.valueDegrees() );
				}
				/// <summary>
				/// 重载"/"操作符
				/// </summary>
				/// <param name="a">实数</param>
				/// <param name="b">度数</param>
				/// <returns>度数结果</returns>
				inline CDegree operator / ( _in Real a, _in const CDegree &b )
				{
					return CDegree ( a / b.valueDegrees() );
				}
			}
		}
	}
}

#endif

