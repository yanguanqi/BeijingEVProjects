#ifndef __Quaternion_H__
#define __Quaternion_H__
#pragma once
#include "ev_math.h"
#include "vector3.h"
#include "mathengine_config.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{

				class CMatrix3;
				/// <summary>
				/// 四元数类,
				/// 定义了四元数操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CQuaternion: public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 从四个实数构造函数
					/// </summary>
					/// <param name="fW">w</param>
					/// <param name="fX">x</param>
					/// <param name="fY">y</param>
					/// <param name="fZ">z</param>
					/// <returns></returns>
					inline CQuaternion (
						_in Real fW
						, _in Real fX
						, _in  Real fY
						, _in  Real fZ
						)
					{
						w = fW;
						x = fX;
						y = fY;
						z = fZ;
					}
					inline CQuaternion (
						_in Real fW
						, _in Real fX
						, _in  Real fY
						)
					{
						w = fW;
						x = fX;
						y = fY;
						z = 0.0f;
					}
					inline CQuaternion (
						_in Real fW
						, _in Real fX
						)
					{
						w = fW;
						x = fX;
						y = 0.0f;
						z = 0.0f;
					}
					inline CQuaternion (
						_in Real fW
						)
					{
						w = fW;
						x = 0.0f;
						y = 0.0f;
						z = 0.0f;
					}
					inline CQuaternion ()
					{
						w = 1.0f;
						x = 0.0f;
						y = 0.0f;
						z = 0.0f;
					}
					/// <summary>
					/// 从旋转矩阵构造函数
					/// </summary>
					/// <param name="rot">旋转矩阵</param>
					/// <returns></returns>
					inline CQuaternion(_in const EarthView::World::Spatial::Math::CMatrix3 &rot)
					{
						this->FromRotationMatrix(rot);
					}
					/// <summary>
					/// 从弧度角和轴向量构造函数
					/// </summary>
					/// <param name="rfAngle">弧度角</param>
					/// <param name="rkAxis">轴向量</param>
					/// <returns></returns>
					inline CQuaternion(_in const EarthView::World::Spatial::Math::CRadian &rfAngle, _in const EarthView::World::Spatial::Math::CVector3 &rkAxis)
					{
						this->FromAngleAxis(rfAngle, rkAxis);
					}
					/// <summary>
					/// 由3个向量表达的旋转矩阵生成四元数构造函数
					/// </summary>
					/// <param name="xaxis">x轴向量</param>
					/// <param name="yaxis">y轴向量</param>
					/// <param name="zaxis">z轴向量</param>
					/// <returns></returns>
					inline CQuaternion(_in const EarthView::World::Spatial::Math::CVector3 &xaxis, _in const EarthView::World::Spatial::Math::CVector3 &yaxis, _in const EarthView::World::Spatial::Math::CVector3 &zaxis)
					{
						this->FromAxes(xaxis, yaxis, zaxis);
					}

					/// <summary>
					/// 从实数数组构造函数
					/// </summary>
					/// <param name="valptr">实数数组</param>
					/// <returns></returns>
					inline CQuaternion(_in Real *valptr)
					{
						memcpy(&w, valptr, sizeof(Real) * 4);
					}
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CQuaternion(_in EarthView::World::Core::CNameValuePairList *pList);
					/// <summary>
					/// 由3个向量表达的旋转矩阵生成四元数构造函数
					/// </summary>
					/// <param name="akAxis">向量表达的旋转矩阵</param>
					/// <returns></returns>
					inline CQuaternion(_in const EarthView::World::Spatial::Math::CVector3 *akAxis)
					{
						this->FromAxes(akAxis);
					}
				public:
					/// <summary>
					/// 与其它四元数交换数据
					/// </summary>
					/// <param name="other">其它四元数</param>
					/// <returns></returns>
					inline void swap(_inout CQuaternion &other)
					{
						std::swap(w, other.w);
						std::swap(x, other.x);
						std::swap(y, other.y);
						std::swap(z, other.z);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>四元数元素</returns>
					inline Real operator [] ( _in const ev_size_t i ) const
					{
						EV_ASSERT( i < 4 );
						return *(&w + i);
					}
					/// <summary>
					/// 重载[]下标操作符
					/// </summary>
					/// <param name="i">下标</param>
					/// <returns>四元数元素</returns>
					inline Real &operator [] ( _in const ev_size_t i )
					{
						EV_ASSERT( i < 4 );
						return *(&w + i);
					}
					/// <summary>
					/// 取得四元数首地址
					/// </summary>
					/// <param name=""></param>
					/// <returns>四元数地址</returns>
					inline Real *ptr()
					{
						return &w;
					}
					/// <summary>
					/// 取得四元数首地址
					/// </summary>
					/// <param name=""></param>
					/// <returns>四元数地址</returns>
					inline const Real *ptr() const
					{
						return &w;
					}
					/// <summary>
					/// 从旋转矩阵构造四元数
					/// </summary>
					/// <param name="rot">旋转矩阵</param>
					/// <returns></returns>
					void FromRotationMatrix (_in const EarthView::World::Spatial::Math::CMatrix3 &kRot);
					/// <summary>
					/// 将四元数转换成旋转矩阵
					/// </summary>
					/// <param name="rot">旋转矩阵</param>
					/// <returns></returns>
					void ToRotationMatrix (_out EarthView::World::Spatial::Math::CMatrix3 &kRot) const;
					/// <summary>
					/// 从弧度角和轴向量构造四元数
					/// </summary>
					/// <param name="rfAngle">弧度角</param>
					/// <param name="rkAxis">轴向量</param>
					/// <returns></returns>
					void FromAngleAxis (_in const EarthView::World::Spatial::Math::CRadian &rfAngle, _in const EarthView::World::Spatial::Math::CVector3 &rkAxis);
					/// <summary>
					/// 将四元数转换成弧度角和轴向量
					/// </summary>
					/// <param name="rfAngle">弧度角</param>
					/// <param name="rkAxis">轴向量</param>
					/// <returns></returns>
					void ToAngleAxis (_out EarthView::World::Spatial::Math::CRadian &rfAngle, _out EarthView::World::Spatial::Math::CVector3 &rkAxis) const;
					/// <summary>
					/// 将四元数转换成弧度角和轴向量
					/// </summary>
					/// <param name="rfAngle">弧度角</param>
					/// <param name="rkAxis">轴向量</param>
					/// <returns></returns>
					void ToAngleAxis (_out EarthView::World::Spatial::Math::CDegree &dAngle, _out EarthView::World::Spatial::Math::CVector3 &rkAxis) const;

				ev_private:
					/// <summary>
					/// 由3个向量表达的旋转矩阵生成四元数
					/// </summary>
					/// <param name="akAxis">向量表达的旋转矩阵</param>
					/// <returns></returns>
					void FromAxes (_in const EarthView::World::Spatial::Math::CVector3 *akAxis);
					/// <summary>
					/// 将四元数转换成3个向量表达的旋转矩阵
					/// </summary>
					/// <param name="akAxis">向量表达的旋转矩阵</param>
					/// <returns></returns>
					void ToAxes (_out EarthView::World::Spatial::Math::CVector3 *akAxis) const;
				public:
					/// <summary>
					/// 由3个向量表达的旋转矩阵生成四元数
					/// </summary>
					/// <param name="xaxis">x轴向量</param>
					/// <param name="yaxis">y轴向量</param>
					/// <param name="zaxis">z轴向量</param>
					/// <returns></returns>
					void FromAxes (_in const EarthView::World::Spatial::Math::CVector3 &xAxis, _in const EarthView::World::Spatial::Math::CVector3 &yAxis, _in const EarthView::World::Spatial::Math::CVector3 &zAxis);
					
				public:
					/// <summary>
					/// 将四元数转换成3个向量表达的旋转矩阵
					/// </summary>
					/// <param name="xaxis">x轴向量</param>
					/// <param name="yaxis">y轴向量</param>
					/// <param name="zaxis">z轴向量</param>
					/// <returns></returns>
					void ToAxes (_out EarthView::World::Spatial::Math::CVector3 &xAxis, _out EarthView::World::Spatial::Math::CVector3 &yAxis, _out EarthView::World::Spatial::Math::CVector3 &zAxis) const;
					/// <summary>
					/// 输出x轴向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>x轴向量</returns>
					EarthView::World::Spatial::Math::CVector3 xAxis() const;
					/// <summary>
					/// 输出y轴向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>y轴向量</returns>
					EarthView::World::Spatial::Math::CVector3 yAxis() const;
					/// <summary>
					/// 输出z轴向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>z轴向量</returns>
					EarthView::World::Spatial::Math::CVector3 zAxis() const;
					/// <summary>
					/// 重载"="操作符
					/// </summary>
					/// <param name="rkQ">源四元数</param>
					/// <returns>赋值四元数</returns>
					inline CQuaternion &operator= (_in const CQuaternion &rkQ)
					{
						w = rkQ.w;
						x = rkQ.x;
						y = rkQ.y;
						z = rkQ.z;
						return *this;
					}
					/// <summary>
					/// 重载"+"操作符
					/// </summary>
					/// <param name="rkQ">四元数</param>
					/// <returns>结果四元数</returns>
					CQuaternion operator+ (_in const CQuaternion &rkQ) const;
					/// <summary>
					/// 重载"-"操作符
					/// </summary>
					/// <param name="rkQ">四元数</param>
					/// <returns>结果四元数</returns>
					CQuaternion operator- (_in const CQuaternion &rkQ) const;
					/// <summary>
					/// 重载"*"操作符
					/// </summary>
					/// <param name="rkQ">四元数</param>
					/// <returns>结果四元数</returns>
					CQuaternion operator* (_in const CQuaternion &rkQ) const;
					/// <summary>
					/// 重载"*"操作符，四元数与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <returns>结果四元数</returns>
					CQuaternion operator* (_in Real fScalar) const;
					/// <summary>
					/// 重载"*"操作符，四元数与实数相乘
					/// </summary>
					/// <param name="fScalar">实数</param>
					/// <param name="rkQ">四元数</param>
					/// <returns>结果四元数</returns>
					EV_MATHENGINE_DLL friend CQuaternion operator* (_in Real fScalar,
						_in const CQuaternion &rkQ);
					/// <summary>
					/// 重载负号操作符
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果四元数</returns>
					CQuaternion operator - () const;
					/// <summary>
					/// 重载"=="操作符
					/// </summary>
					/// <param name="rhs">四元数</param>
					/// <returns>结果相等返回true，否则false</returns>
					inline ev_bool operator== (_in const CQuaternion &rhs) const
					{
						return fuzzyCompare(rhs.x, x) && fuzzyCompare(rhs.y, y) &&
							fuzzyCompare(rhs.z,z) && fuzzyCompare(rhs.w, w);
					}
					/// <summary>
					/// 重载"！="操作符
					/// </summary>
					/// <param name="rhs">四元数</param>
					/// <returns>结果非相等返回true，否则false</returns>
					inline ev_bool operator!= (_in const CQuaternion &rhs) const
					{
						return !operator==(rhs);
					}
					/// <summary>
					/// 点乘
					/// </summary>
					/// <param name="rkQ">四元数</param>
					/// <returns>结果</returns>
					Real Dot (_in const CQuaternion &rkQ) const;  			/// dot product
					/// <summary>
					/// 求模
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果</returns>
					Real Norm () const;  			/// squared-length
					/// <summary>
					/// 单位化
					/// </summary>
					/// <param name=""></param>
					/// <returns>标准化前四元数大小</returns>
					Real normalise();
					/// <summary>
					/// 求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果四元数</returns>
					CQuaternion Inverse () const;
					/// <summary>
					/// 单位四元数求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果四元数</returns>
					CQuaternion UnitInverse () const;
					/// <summary>
					/// 求四元数的指数，即e的四元数次方
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果四元数</returns>
					CQuaternion Exp () const;
					/// <summary>
					/// 求以e为底求四元数的对数
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果四元数</returns>
					CQuaternion Log () const;
					/// <summary>
					/// 用四元数旋转向量
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果向量</returns>
					EarthView::World::Spatial::Math::CVector3 operator* (_in const EarthView::World::Spatial::Math::CVector3 &rkVector) const;
					/// <summary>
					/// 获得绕Z轴的旋转角度
					/// </summary>
					/// <param name="reprojectAxis">是否将Y分量投影到XOY平面</param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getRoll(_in ev_bool reprojectAxis) const;
					/// <summary>
					/// 获得绕Z轴的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getRoll() const;
					/// <summary>
					/// 获得绕X轴的旋转角度
					/// </summary>
					/// <param name="reprojectAxis">是否将Z分量投影到XOY平面</param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getPitch(_in ev_bool reprojectAxis) const;
					/// <summary>
					/// 获得绕X轴的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getPitch() const;
					/// <summary>
					/// 获得绕Y轴的旋转角度
					/// </summary>
					/// <param name="reprojectAxis">是否将Y分量投影到XOZ平面</param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getYaw(_in ev_bool reprojectAxis) const;
					/// <summary>
					/// 获得绕Y轴的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>弧度角</returns>
					EarthView::World::Spatial::Math::CRadian getYaw() const;
					/// <summary>
					/// 在一定角度容差范围内判断两个四元数是否相等
					/// </summary>
					/// <param name="rhs">四元数</param>
					/// <param name="tolerance">弧度角</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool equals(_in const CQuaternion &rhs, _in const EarthView::World::Spatial::Math::CRadian &tolerance) const;
					/// <summary>
					/// 球面线性插值
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">四元数</param>
					/// <param name="rkQ">四元数</param>
					/// <param name="shortestPath">标识是否最短路径</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion Slerp (_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkQ, _in ev_bool shortestPath);
					/// <summary>
					/// 球面线性插值
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">四元数</param>
					/// <param name="rkQ">四元数</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion Slerp (_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkQ);
					/// <summary>
					/// 带干扰因子的球面线性插值
					/// </summary>
					/// <param name="fT">0-1的时间因子</param>
					/// <param name="rkP">四元数</param>
					/// <param name="rkQ">四元数</param>
					/// <param name="iExtraSpins">干扰因子</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion SlerpExtraSpins (_in Real fT,
						_in const CQuaternion &rkP, _in const CQuaternion &rkQ,
						_in ev_int32 iExtraSpins);
					/// <summary>
					/// 配置球面二次内插
					/// </summary>
					/// <param name="rkQ0">四元数0</param>
					/// <param name="rkQ1">四元数1</param>
					/// <param name="rkQ2">四元数2</param>
					/// <param name="rka">中间起点</param>
					/// <param name="rkB">中间终点</param>
					/// <returns></returns>
					static void Intermediate (_in const CQuaternion &rkQ0,
						_in const CQuaternion &rkQ1, _in const CQuaternion &rkQ2,
						_out CQuaternion &rka, _out CQuaternion &rkB);
					/// <summary>
					/// 样条插值（二次插值）
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">样条起点</param>
					/// <param name="rkA">中间起点</param>
					/// <param name="rkB">中间终点</param>
					/// <param name="rkQ">样条终点</param>
					/// <param name="shortestPath">标识是否最短路径</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion Squad (_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkA, _in const CQuaternion &rkB,
						_in const CQuaternion &rkQ, _in ev_bool shortestPath);
					/// <summary>
					/// 样条插值（二次插值）
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">样条起点</param>
					/// <param name="rkA">中间起点</param>
					/// <param name="rkB">中间终点</param>
					/// <param name="rkQ">样条终点</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion Squad (_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkA, _in const CQuaternion &rkB,
						_in const CQuaternion &rkQ);
					/// <summary>
					/// 标准化线性插值
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">样条起点</param>
					/// <param name="rkQ">样条终点</param>
					/// <param name="shortestPath">标识是否最短路径</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion nlerp(_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkQ, _in ev_bool shortestPath );
					/// <summary>
					/// 标准化线性插值
					/// </summary>
					/// <param name="fT">0-1的插值因子</param>
					/// <param name="rkP">样条起点</param>
					/// <param name="rkQ">样条终点</param>
					/// <returns>返回结果四元数</returns>
					static CQuaternion nlerp(_in Real fT, _in const CQuaternion &rkP,
						_in const CQuaternion &rkQ);
					/// cutoff for sine near zero
					static const Real ms_fEpsilon;
					/// special values
					static const CQuaternion ZERO;
					static const CQuaternion IDENTITY;
					Real w, x, y, z;

					/// <summary>
					/// 判断元素值是否非数值
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
					/// <param name="q">四元数对象</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const CQuaternion &q )
					{
						o << "CQuaternion(" << q.w << ", " << q.x << ", " << q.y << ", " << q.z << ")";
						return o;
					}
				};
			}
		}    
	}
}



#endif

