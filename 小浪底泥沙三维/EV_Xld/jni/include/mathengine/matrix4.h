#ifndef __Matrix4__
#define __Matrix4__
#pragma once
#include "vector4.h"
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

				class CMatrix3;
				class CPlane;
				/// <summary>
				/// 四维矩阵类,
				/// 定义了四维矩阵操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CMatrix4: public EarthView::World::Core::CBaseObject
				{
				protected:
					union
					{
						Real m[4][4];
						Real _m[16];
					};
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMatrix4();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="m00">数组元素</param>
					/// <param name="m01">数组元素</param>
					/// <param name="m02">数组元素</param>
					/// <param name="m03">数组元素</param>
					/// <param name="m10">数组元素</param>
					/// <param name="m11">数组元素</param>
					/// <param name="m12">数组元素</param>
					/// <param name="m13">数组元素</param>
					/// <param name="m20">数组元素</param>
					/// <param name="m21">数组元素</param>
					/// <param name="m22">数组元素</param>
					/// <param name="m23">数组元素</param>
					/// <param name="m30">数组元素</param>
					/// <param name="m31">数组元素</param>
					/// <param name="m32">数组元素</param>
					/// <param name="m33">数组元素</param>
					/// <returns></returns>
					inline CMatrix4(
						_in Real m00, _in Real m01, _in Real m02, _in Real m03,
						_in Real m10, _in Real m11, _in Real m12, _in Real m13,
						_in Real m20, _in Real m21, _in Real m22, _in Real m23,
						_in Real m30, _in Real m31, _in Real m32, _in Real m33 )
					{
						m[0][0] = m00;
						m[0][1] = m01;
						m[0][2] = m02;
						m[0][3] = m03;
						m[1][0] = m10;
						m[1][1] = m11;
						m[1][2] = m12;
						m[1][3] = m13;
						m[2][0] = m20;
						m[2][1] = m21;
						m[2][2] = m22;
						m[2][3] = m23;
						m[3][0] = m30;
						m[3][1] = m31;
						m[3][2] = m32;
						m[3][3] = m33;
					}
					/// <summary>
					/// 从三维矩阵扩展成四维矩阵构造函数
					/// </summary>
					/// <param name="m3x3">三维矩阵</param>
					/// <returns></returns>
					CMatrix4(_in const EarthView::World::Spatial::Math::CMatrix3 &m3x3);
					/// <summary>
					/// 从四元数扩展成四维矩阵构造函数
					/// </summary>
					/// <param name="rot">四元数</param>
					/// <returns></returns>
					CMatrix4(_in const EarthView::World::Spatial::Math::CQuaternion &rot);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMatrix4(_in EarthView::World::Core::CNameValuePairList *pList);

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
					/// 与另一矩阵元素交换
					/// </summary>
					/// <param name="other">其它矩阵</param>
					/// <returns></returns>
					inline void swap(_inout EarthView::World::Spatial::Math::CMatrix4 &other)
					{
						std::swap(m[0][0], other.m[0][0]);
						std::swap(m[0][1], other.m[0][1]);
						std::swap(m[0][2], other.m[0][2]);
						std::swap(m[0][3], other.m[0][3]);
						std::swap(m[1][0], other.m[1][0]);
						std::swap(m[1][1], other.m[1][1]);
						std::swap(m[1][2], other.m[1][2]);
						std::swap(m[1][3], other.m[1][3]);
						std::swap(m[2][0], other.m[2][0]);
						std::swap(m[2][1], other.m[2][1]);
						std::swap(m[2][2], other.m[2][2]);
						std::swap(m[2][3], other.m[2][3]);
						std::swap(m[3][0], other.m[3][0]);
						std::swap(m[3][1], other.m[3][1]);
						std::swap(m[3][2], other.m[3][2]);
						std::swap(m[3][3], other.m[3][3]);
					}
					/// <summary>
					/// 重载操作下标符[]
					/// </summary>
					/// <param name="iRow">矩阵行数大小</param>
					/// <returns>浮点型数组</returns>
					inline Real *operator [] ( _in ev_size_t iRow )
					{
						EV_ASSERT( iRow < 4 );
						return m[iRow];
					}
					/// <summary>
					/// 重载操作下标符[]
					/// </summary>
					/// <param name="iRow">矩阵行数大小</param>
					/// <returns>浮点型数组</returns>
					inline const Real *operator [] ( _in ev_size_t iRow ) const
					{
						EV_ASSERT( iRow < 4 );
						return m[iRow];
					}
					/// <summary>
					/// 与其它矩阵相乘连接
					/// </summary>
					/// <param name="m2">其它矩阵</param>
					/// <returns>连接后结果矩阵</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 concatenate(_in const EarthView::World::Spatial::Math::CMatrix4 &m2) const
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = m[0][0] * m2.m[0][0] + m[0][1] * m2.m[1][0] + m[0][2] * m2.m[2][0] + m[0][3] * m2.m[3][0];
						r.m[0][1] = m[0][0] * m2.m[0][1] + m[0][1] * m2.m[1][1] + m[0][2] * m2.m[2][1] + m[0][3] * m2.m[3][1];
						r.m[0][2] = m[0][0] * m2.m[0][2] + m[0][1] * m2.m[1][2] + m[0][2] * m2.m[2][2] + m[0][3] * m2.m[3][2];
						r.m[0][3] = m[0][0] * m2.m[0][3] + m[0][1] * m2.m[1][3] + m[0][2] * m2.m[2][3] + m[0][3] * m2.m[3][3];
						r.m[1][0] = m[1][0] * m2.m[0][0] + m[1][1] * m2.m[1][0] + m[1][2] * m2.m[2][0] + m[1][3] * m2.m[3][0];
						r.m[1][1] = m[1][0] * m2.m[0][1] + m[1][1] * m2.m[1][1] + m[1][2] * m2.m[2][1] + m[1][3] * m2.m[3][1];
						r.m[1][2] = m[1][0] * m2.m[0][2] + m[1][1] * m2.m[1][2] + m[1][2] * m2.m[2][2] + m[1][3] * m2.m[3][2];
						r.m[1][3] = m[1][0] * m2.m[0][3] + m[1][1] * m2.m[1][3] + m[1][2] * m2.m[2][3] + m[1][3] * m2.m[3][3];
						r.m[2][0] = m[2][0] * m2.m[0][0] + m[2][1] * m2.m[1][0] + m[2][2] * m2.m[2][0] + m[2][3] * m2.m[3][0];
						r.m[2][1] = m[2][0] * m2.m[0][1] + m[2][1] * m2.m[1][1] + m[2][2] * m2.m[2][1] + m[2][3] * m2.m[3][1];
						r.m[2][2] = m[2][0] * m2.m[0][2] + m[2][1] * m2.m[1][2] + m[2][2] * m2.m[2][2] + m[2][3] * m2.m[3][2];
						r.m[2][3] = m[2][0] * m2.m[0][3] + m[2][1] * m2.m[1][3] + m[2][2] * m2.m[2][3] + m[2][3] * m2.m[3][3];
						r.m[3][0] = m[3][0] * m2.m[0][0] + m[3][1] * m2.m[1][0] + m[3][2] * m2.m[2][0] + m[3][3] * m2.m[3][0];
						r.m[3][1] = m[3][0] * m2.m[0][1] + m[3][1] * m2.m[1][1] + m[3][2] * m2.m[2][1] + m[3][3] * m2.m[3][1];
						r.m[3][2] = m[3][0] * m2.m[0][2] + m[3][1] * m2.m[1][2] + m[3][2] * m2.m[2][2] + m[3][3] * m2.m[3][2];
						r.m[3][3] = m[3][0] * m2.m[0][3] + m[3][1] * m2.m[1][3] + m[3][2] * m2.m[2][3] + m[3][3] * m2.m[3][3];
						return r;
					}
					/// <summary>
					/// 矩阵乘法
					/// </summary>
					/// <param name="m2">其它矩阵</param>
					/// <returns>相乘后结果矩阵</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 operator * ( _in const EarthView::World::Spatial::Math::CMatrix4 &m2 ) const
					{
						return concatenate( m2 );
					}
					/// <summary>
					/// 矩阵与三维向量相乘
					/// </summary>
					/// <param name="v">三维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 operator * ( _in const EarthView::World::Spatial::Math::CVector3 &v ) const
					{
						EarthView::World::Spatial::Math::CVector3 r;
						Real fInvW = 1.0f / ( m[3][0] * v.x + m[3][1] * v.y + m[3][2] * v.z + m[3][3] );
						r.x = ( m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] ) * fInvW;
						r.y = ( m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3] ) * fInvW;
						r.z = ( m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3] ) * fInvW;
						return r;
					}
					/// <summary>
					/// 矩阵与四维向量相乘
					/// </summary>
					/// <param name="v">四维向量</param>
					/// <returns>结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 operator * (_in const EarthView::World::Spatial::Math::CVector4 &v) const
					{
						return CVector4(
							m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] * v.w,
							m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3] * v.w,
							m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3] * v.w,
							m[3][0] * v.x + m[3][1] * v.y + m[3][2] * v.z + m[3][3] * v.w
							);
					}
					/// <summary>
					/// 矩阵与平面相乘
					/// </summary>
					/// <param name="p">平面对象</param>
					/// <returns>结果平面</returns>
					EarthView::World::Spatial::Math::CPlane operator * (_in const EarthView::World::Spatial::Math::CPlane &p) const;

					/// <summary>
					/// 矩阵加法
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>结果矩阵</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 operator + ( _in const EarthView::World::Spatial::Math::CMatrix4 &m2 ) const
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = m[0][0] + m2.m[0][0];
						r.m[0][1] = m[0][1] + m2.m[0][1];
						r.m[0][2] = m[0][2] + m2.m[0][2];
						r.m[0][3] = m[0][3] + m2.m[0][3];
						r.m[1][0] = m[1][0] + m2.m[1][0];
						r.m[1][1] = m[1][1] + m2.m[1][1];
						r.m[1][2] = m[1][2] + m2.m[1][2];
						r.m[1][3] = m[1][3] + m2.m[1][3];
						r.m[2][0] = m[2][0] + m2.m[2][0];
						r.m[2][1] = m[2][1] + m2.m[2][1];
						r.m[2][2] = m[2][2] + m2.m[2][2];
						r.m[2][3] = m[2][3] + m2.m[2][3];
						r.m[3][0] = m[3][0] + m2.m[3][0];
						r.m[3][1] = m[3][1] + m2.m[3][1];
						r.m[3][2] = m[3][2] + m2.m[3][2];
						r.m[3][3] = m[3][3] + m2.m[3][3];
						return r;
					}
					/// <summary>
					/// 矩阵减法
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>结果矩阵</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 operator - ( _in const EarthView::World::Spatial::Math::CMatrix4 &m2 ) const
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = m[0][0] - m2.m[0][0];
						r.m[0][1] = m[0][1] - m2.m[0][1];
						r.m[0][2] = m[0][2] - m2.m[0][2];
						r.m[0][3] = m[0][3] - m2.m[0][3];
						r.m[1][0] = m[1][0] - m2.m[1][0];
						r.m[1][1] = m[1][1] - m2.m[1][1];
						r.m[1][2] = m[1][2] - m2.m[1][2];
						r.m[1][3] = m[1][3] - m2.m[1][3];
						r.m[2][0] = m[2][0] - m2.m[2][0];
						r.m[2][1] = m[2][1] - m2.m[2][1];
						r.m[2][2] = m[2][2] - m2.m[2][2];
						r.m[2][3] = m[2][3] - m2.m[2][3];
						r.m[3][0] = m[3][0] - m2.m[3][0];
						r.m[3][1] = m[3][1] - m2.m[3][1];
						r.m[3][2] = m[3][2] - m2.m[3][2];
						r.m[3][3] = m[3][3] - m2.m[3][3];
						return r;
					}
					/// <summary>
					/// 判断矩阵相等
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>相等返回true，否则false</returns>
					inline ev_bool operator == ( _in const EarthView::World::Spatial::Math::CMatrix4 &m2 ) const
					{
// 						if(
// 							m[0][0] != m2.m[0][0] || m[0][1] != m2.m[0][1] || m[0][2] != m2.m[0][2] || m[0][3] != m2.m[0][3] ||
// 							m[1][0] != m2.m[1][0] || m[1][1] != m2.m[1][1] || m[1][2] != m2.m[1][2] || m[1][3] != m2.m[1][3] ||
// 							m[2][0] != m2.m[2][0] || m[2][1] != m2.m[2][1] || m[2][2] != m2.m[2][2] || m[2][3] != m2.m[2][3] ||
// 							m[3][0] != m2.m[3][0] || m[3][1] != m2.m[3][1] || m[3][2] != m2.m[3][2] || m[3][3] != m2.m[3][3] )
// 							return false;
						Real littleLimit=1e-6;
						if(
							CMath::Abs(m[0][0] - m2.m[0][0])>littleLimit || CMath::Abs(m[0][1] - m2.m[0][1])>littleLimit || CMath::Abs(m[0][2] - m2.m[0][2])>littleLimit || CMath::Abs(m[0][3] - m2.m[0][3])>littleLimit ||
							CMath::Abs(m[1][0] - m2.m[1][0])>littleLimit || CMath::Abs(m[1][1] - m2.m[1][1])>littleLimit || CMath::Abs(m[1][2] - m2.m[1][2])>littleLimit || CMath::Abs(m[1][3] - m2.m[1][3])>littleLimit ||
							CMath::Abs(m[2][0] - m2.m[2][0])>littleLimit || CMath::Abs(m[2][1] - m2.m[2][1])>littleLimit || CMath::Abs(m[2][2] - m2.m[2][2])>littleLimit || CMath::Abs(m[2][3] - m2.m[2][3])>littleLimit ||
							CMath::Abs(m[3][0] - m2.m[3][0])>littleLimit || CMath::Abs(m[3][1] - m2.m[3][1])>littleLimit || CMath::Abs(m[3][2] - m2.m[3][2])>littleLimit || CMath::Abs(m[3][3] - m2.m[3][3])>littleLimit )
							return false;
						return true;
					}
					/// <summary>
					/// 判断矩阵非相等
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>非相等返回true，否则false</returns>
					inline ev_bool operator != ( _in const EarthView::World::Spatial::Math::CMatrix4 &m2 ) const
					{
// 						if(
// 							m[0][0] != m2.m[0][0] || m[0][1] != m2.m[0][1] || m[0][2] != m2.m[0][2] || m[0][3] != m2.m[0][3] ||
// 							m[1][0] != m2.m[1][0] || m[1][1] != m2.m[1][1] || m[1][2] != m2.m[1][2] || m[1][3] != m2.m[1][3] ||
// 							m[2][0] != m2.m[2][0] || m[2][1] != m2.m[2][1] || m[2][2] != m2.m[2][2] || m[2][3] != m2.m[2][3] ||
// 							m[3][0] != m2.m[3][0] || m[3][1] != m2.m[3][1] || m[3][2] != m2.m[3][2] || m[3][3] != m2.m[3][3] )
// 							return true;
						Real littleLimit=1e-6;
						if(
							CMath::Abs(m[0][0] - m2.m[0][0])>littleLimit || CMath::Abs(m[0][1] - m2.m[0][1])>littleLimit || CMath::Abs(m[0][2] - m2.m[0][2])>littleLimit || CMath::Abs(m[0][3] - m2.m[0][3])>littleLimit ||
							CMath::Abs(m[1][0] - m2.m[1][0])>littleLimit || CMath::Abs(m[1][1] - m2.m[1][1])>littleLimit || CMath::Abs(m[1][2] - m2.m[1][2])>littleLimit || CMath::Abs(m[1][3] - m2.m[1][3])>littleLimit ||
							CMath::Abs(m[2][0] - m2.m[2][0])>littleLimit || CMath::Abs(m[2][1] - m2.m[2][1])>littleLimit || CMath::Abs(m[2][2] - m2.m[2][2])>littleLimit || CMath::Abs(m[2][3] - m2.m[2][3])>littleLimit ||
							CMath::Abs(m[3][0] - m2.m[3][0])>littleLimit || CMath::Abs(m[3][1] - m2.m[3][1])>littleLimit || CMath::Abs(m[3][2] - m2.m[3][2])>littleLimit || CMath::Abs(m[3][3] - m2.m[3][3])>littleLimit )
							return true;
						return false;
					}
					/// <summary>
					/// 从三维矩阵赋值
					/// </summary>
					/// <param name="mat3">三维矩阵</param>
					/// <returns></returns>
					void operator = ( _in const EarthView::World::Spatial::Math::CMatrix3 &mat3 );
					/// <summary>
					///矩阵转置
					/// </summary>
					/// <param name=""></param>
					/// <returns>转置后矩阵结果</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 transpose() const
					{
						return CMatrix4(m[0][0], m[1][0], m[2][0], m[3][0],
							m[0][1], m[1][1], m[2][1], m[3][1],
							m[0][2], m[1][2], m[2][2], m[3][2],
							m[0][3], m[1][3], m[2][3], m[3][3]);
					}
					/// <summary>
					///设置变换矩阵中平移部分
					/// </summary>
					/// <param name="v">平移的三维向量</param>
					/// <returns></returns>
					inline void setTrans( _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						m[0][3] = v.x;
						m[1][3] = v.y;
						m[2][3] = v.z;
					}
					/// <summary>
					///提取变换矩阵中平移部分
					/// </summary>
					/// <param name=""></param>
					/// <returns>平移向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 getTrans() const
					{
						return CVector3(m[0][3], m[1][3], m[2][3]);
					}
					/// <summary>
					///构建平移变换矩阵
					/// </summary>
					/// <param name="v">平移三维向量</param>
					/// <returns></returns>
					inline void makeTrans( _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						m[0][0] = 1.0;
						m[0][1] = 0.0;
						m[0][2] = 0.0;
						m[0][3] = v.x;
						m[1][0] = 0.0;
						m[1][1] = 1.0;
						m[1][2] = 0.0;
						m[1][3] = v.y;
						m[2][0] = 0.0;
						m[2][1] = 0.0;
						m[2][2] = 1.0;
						m[2][3] = v.z;
						m[3][0] = 0.0;
						m[3][1] = 0.0;
						m[3][2] = 0.0;
						m[3][3] = 1.0;
					}
					/// <summary>
					///构建平移变换矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns></returns>
					inline void makeTrans( _in Real tx, _in Real ty, _in Real tz )
					{
						m[0][0] = 1.0;
						m[0][1] = 0.0;
						m[0][2] = 0.0;
						m[0][3] = tx;
						m[1][0] = 0.0;
						m[1][1] = 1.0;
						m[1][2] = 0.0;
						m[1][3] = ty;
						m[2][0] = 0.0;
						m[2][1] = 0.0;
						m[2][2] = 1.0;
						m[2][3] = tz;
						m[3][0] = 0.0;
						m[3][1] = 0.0;
						m[3][2] = 0.0;
						m[3][3] = 1.0;
					}
					/// <summary>
					///由三维向量获得平移矩阵
					/// </summary>
					/// <param name="v">向量</param>
					/// <returns>平移矩阵</returns>
					inline static EarthView::World::Spatial::Math::CMatrix4 getTrans( _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = 1.0;
						r.m[0][1] = 0.0;
						r.m[0][2] = 0.0;
						r.m[0][3] = v.x;
						r.m[1][0] = 0.0;
						r.m[1][1] = 1.0;
						r.m[1][2] = 0.0;
						r.m[1][3] = v.y;
						r.m[2][0] = 0.0;
						r.m[2][1] = 0.0;
						r.m[2][2] = 1.0;
						r.m[2][3] = v.z;
						r.m[3][0] = 0.0;
						r.m[3][1] = 0.0;
						r.m[3][2] = 0.0;
						r.m[3][3] = 1.0;
						return r;
					}
					/// <summary>
					///由实数获得平移矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns>平移矩阵</returns>
					inline static EarthView::World::Spatial::Math::CMatrix4 getTrans( _in Real t_x, _in Real t_y, _in Real t_z )
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = 1.0;
						r.m[0][1] = 0.0;
						r.m[0][2] = 0.0;
						r.m[0][3] = t_x;
						r.m[1][0] = 0.0;
						r.m[1][1] = 1.0;
						r.m[1][2] = 0.0;
						r.m[1][3] = t_y;
						r.m[2][0] = 0.0;
						r.m[2][1] = 0.0;
						r.m[2][2] = 1.0;
						r.m[2][3] = t_z;
						r.m[3][0] = 0.0;
						r.m[3][1] = 0.0;
						r.m[3][2] = 0.0;
						r.m[3][3] = 1.0;
						return r;
					}
					/// <summary>
					///设置矩阵缩放部分
					/// </summary>
					/// <param name="v"></param>
					/// <returns></returns>
					inline void setScale( _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						m[0][0] = v.x;
						m[1][1] = v.y;
						m[2][2] = v.z;
					}
					/// <summary>
					///由三维向量获得缩放矩阵
					/// </summary>
					/// <param name="v">向量</param>
					/// <returns>缩放矩阵</returns>
					inline static EarthView::World::Spatial::Math::CMatrix4 getScale( _in const EarthView::World::Spatial::Math::CVector3 &v )
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = v.x;
						r.m[0][1] = 0.0;
						r.m[0][2] = 0.0;
						r.m[0][3] = 0.0;
						r.m[1][0] = 0.0;
						r.m[1][1] = v.y;
						r.m[1][2] = 0.0;
						r.m[1][3] = 0.0;
						r.m[2][0] = 0.0;
						r.m[2][1] = 0.0;
						r.m[2][2] = v.z;
						r.m[2][3] = 0.0;
						r.m[3][0] = 0.0;
						r.m[3][1] = 0.0;
						r.m[3][2] = 0.0;
						r.m[3][3] = 1.0;
						return r;
					}
					/// <summary>
					///由实数获得缩放矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns>缩放矩阵</returns>
					inline static EarthView::World::Spatial::Math::CMatrix4 getScale( _in Real s_x, _in Real s_y, _in Real s_z )
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = s_x;
						r.m[0][1] = 0.0;
						r.m[0][2] = 0.0;
						r.m[0][3] = 0.0;
						r.m[1][0] = 0.0;
						r.m[1][1] = s_y;
						r.m[1][2] = 0.0;
						r.m[1][3] = 0.0;
						r.m[2][0] = 0.0;
						r.m[2][1] = 0.0;
						r.m[2][2] = s_z;
						r.m[2][3] = 0.0;
						r.m[3][0] = 0.0;
						r.m[3][1] = 0.0;
						r.m[3][2] = 0.0;
						r.m[3][3] = 1.0;
						return r;
					}
					/// <summary>
					///由矩阵析出旋转和缩放三维矩阵
					/// </summary>
					/// <param name="m3x3">结果三维矩阵</param>
					/// <returns></returns>
					void extract3x3Matrix(_out EarthView::World::Spatial::Math::CMatrix3 &m3x3) const;
					/// <summary>
					///判断矩阵是否可缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>可以缩放返回true，否则false</returns>
					inline ev_bool hasScale() const
					{
						/// check magnitude of column vectors (==local axes)
						Real t = m[0][0] * m[0][0] + m[1][0] * m[1][0] + m[2][0] * m[2][0];
						if (!CMath::RealEqual(t, 1.0, (Real)1e-04))
							return true;
						t = m[0][1] * m[0][1] + m[1][1] * m[1][1] + m[2][1] * m[2][1];
						if (!CMath::RealEqual(t, 1.0, (Real)1e-04))
							return true;
						t = m[0][2] * m[0][2] + m[1][2] * m[1][2] + m[2][2] * m[2][2];
						if (!CMath::RealEqual(t, 1.0, (Real)1e-04))
							return true;
						return false;
					}
					/// <summary>
					///判断矩阵是否可负值缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>可以返回true，否则false</returns>
					inline ev_bool hasNegativeScale() const
					{
						return determinant() < 0;
					}

					void get(
							_out Real& m00, _out Real& m01, _out Real& m02, _out Real& m03,
							_out Real& m10, _out Real& m11, _out Real& m12, _out Real& m13,
							_out Real& m20, _out Real& m21, _out Real& m22, _out Real& m23,
							_out Real& m30, _out Real& m31, _out Real& m32, _out Real& m33)const
					{
						m00 = m[0][0]; m01 = m[0][1]; m02 = m[0][2]; m03 = m[0][3];
						m10 = m[1][0]; m11 = m[1][1]; m12 = m[1][2]; m13 = m[1][3];
						m20 = m[2][0]; m21 = m[2][1]; m22 = m[2][2]; m23 = m[2][3];
						m30 = m[3][0]; m31 = m[3][1]; m32 = m[3][2]; m33 = m[3][3];
					}
					void set(
						_in Real m00, _in Real m01, _in Real m02, _in Real m03,
						_in Real m10, _in Real m11, _in Real m12, _in Real m13,
						_in Real m20, _in Real m21, _in Real m22, _in Real m23,
						_in Real m30, _in Real m31, _in Real m32, _in Real m33)
					{
						m[0][0] = m00; m[0][1] = m01; m[0][2] = m02;  m[0][3] = m03;
						m[1][0] = m10; m[1][1] = m11; m[1][2] = m12;  m[1][3] = m13;
						m[2][0] = m20; m[2][1] = m21; m[2][2] = m22;  m[2][3] = m23;
						m[3][0] = m30; m[3][1] = m31; m[3][2] = m32;  m[3][3] = m33;
					}
					/// <summary>
					///由矩阵析出旋转和缩放四元数
					/// </summary>
					/// <param name=""></param>
					/// <returns>四元数结果</returns>
					EarthView::World::Spatial::Math::CQuaternion extractQuaternion() const;
					static  const  EarthView::World::Spatial::Math::CMatrix4 ZERO;
					static  const  EarthView::World::Spatial::Math::CMatrix4 ZEROAFFINE;
				    static  const  EarthView::World::Spatial::Math::CMatrix4 IDENTITY; 
					static  const  EarthView::World::Spatial::Math::CMatrix4 CLIPSPACE2DTOIMAGESPACE;
					/// <summary>
					///由矩阵与实数相乘，缩放
					/// </summary>
					/// <param name="scalar">实数系数</param>
					/// <returns>结果矩阵</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 operator*(_in Real scalar) const
					{
						return CMatrix4(
							scalar * m[0][0], scalar * m[0][1], scalar * m[0][2], scalar * m[0][3],
							scalar * m[1][0], scalar * m[1][1], scalar * m[1][2], scalar * m[1][3],
							scalar * m[2][0], scalar * m[2][1], scalar * m[2][2], scalar * m[2][3],
							scalar * m[3][0], scalar * m[3][1], scalar * m[3][2], scalar * m[3][3]);
					}
					/// <summary>
					///重载流输出操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="mat">输出矩阵</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const EarthView::World::Spatial::Math::CMatrix4 &mat )
					{
						o << "CMatrix4(";
						for (ev_size_t i = 0; i < 4; ++i)
						{
							o << " row" << (ev_uint32)i << "{";
							for(ev_size_t j = 0; j < 4; ++j)
							{
								o << mat[i][j] << " ";
							}
							o << "}";
						}
						o << ")";
						return o;
					}
					/// <summary>
					///求伴随矩阵
					/// </summary>
					/// <param name="">输出流对象</param>
					/// <returns>伴随矩阵结果</returns>
					EarthView::World::Spatial::Math::CMatrix4 adjoint() const;
					/// <summary>
					///矩阵行列式化(求模)
					/// </summary>
					/// <param name=""></param>
					/// <returns>模结果</returns>
					Real determinant() const;
					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>求逆后矩阵结果</returns>
					EarthView::World::Spatial::Math::CMatrix4 inverse() const;
					/// <summary>
					///构建方向/缩放/位置变换矩阵，变换顺序为缩放、旋转、平移
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					void makeTransform(_in const EarthView::World::Spatial::Math::CVector3 &position, _in const EarthView::World::Spatial::Math::CVector3 &scale, _in const EarthView::World::Spatial::Math::CQuaternion &orientation);
					/// <summary>
					///构建方向/缩放/位置变换逆矩阵，变换顺序为缩放、旋转、平移
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					void makeInverseTransform(_in const EarthView::World::Spatial::Math::CVector3 &position, _in const EarthView::World::Spatial::Math::CVector3 &scale, _in const EarthView::World::Spatial::Math::CQuaternion &orientation);
					/// <summary>
					///分解矩阵为缩放、旋转、平移向量
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					void decomposition(_out EarthView::World::Spatial::Math::CVector3 &position, _out EarthView::World::Spatial::Math::CVector3 &scale, _out EarthView::World::Spatial::Math::CQuaternion &orientation) const;
					/// <summary>
					///判断矩阵是否为相似矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					ev_bool isAffine() const;
					
					/// <summary>
					///求相似矩阵逆矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回相似矩阵逆矩阵结果</returns>
					EarthView::World::Spatial::Math::CMatrix4 inverseAffine() const;
					/// <summary>
					///与相似矩阵相乘连接
					/// </summary>
					/// <param name="m2">其它相似矩阵</param>
					/// <returns>返回连接结果</returns>
					inline EarthView::World::Spatial::Math::CMatrix4 concatenateAffine(_in const EarthView::World::Spatial::Math::CMatrix4 &m2) const
					{
						EV_ASSERT(isAffine() && m2.isAffine());
						return CMatrix4(
							m[0][0] * m2.m[0][0] + m[0][1] * m2.m[1][0] + m[0][2] * m2.m[2][0],
							m[0][0] * m2.m[0][1] + m[0][1] * m2.m[1][1] + m[0][2] * m2.m[2][1],
							m[0][0] * m2.m[0][2] + m[0][1] * m2.m[1][2] + m[0][2] * m2.m[2][2],
							m[0][0] * m2.m[0][3] + m[0][1] * m2.m[1][3] + m[0][2] * m2.m[2][3] + m[0][3],
							m[1][0] * m2.m[0][0] + m[1][1] * m2.m[1][0] + m[1][2] * m2.m[2][0],
							m[1][0] * m2.m[0][1] + m[1][1] * m2.m[1][1] + m[1][2] * m2.m[2][1],
							m[1][0] * m2.m[0][2] + m[1][1] * m2.m[1][2] + m[1][2] * m2.m[2][2],
							m[1][0] * m2.m[0][3] + m[1][1] * m2.m[1][3] + m[1][2] * m2.m[2][3] + m[1][3],
							m[2][0] * m2.m[0][0] + m[2][1] * m2.m[1][0] + m[2][2] * m2.m[2][0],
							m[2][0] * m2.m[0][1] + m[2][1] * m2.m[1][1] + m[2][2] * m2.m[2][1],
							m[2][0] * m2.m[0][2] + m[2][1] * m2.m[1][2] + m[2][2] * m2.m[2][2],
							m[2][0] * m2.m[0][3] + m[2][1] * m2.m[1][3] + m[2][2] * m2.m[2][3] + m[2][3],
							0, 0, 0, 1);
					}
					/// <summary>
					///用相似矩阵变换三维向量
					/// </summary>
					/// <param name="v">三维向量</param>
					/// <returns>返回结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector3 transformAffine(_in const EarthView::World::Spatial::Math::CVector3 &v) const
					{
						EV_ASSERT(isAffine());
						return CVector3(
							m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3],
							m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3],
							m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3]);
					}
					/// <summary>
					///用相似矩阵变换四维向量
					/// </summary>
					/// <param name="v">四维向量</param>
					/// <returns>返回结果向量</returns>
					inline EarthView::World::Spatial::Math::CVector4 transformAffine(_in const EarthView::World::Spatial::Math::CVector4 &v) const
					{
						EV_ASSERT(isAffine());
						return CVector4(
							m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] * v.w,
							m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3] * v.w,
							m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3] * v.w,
							v.w);
					}

#if EV_DOUBLE_PRECISION == 1
					inline EarthView::World::Spatial::Math::CMatrix4 toMatrix4f()
					{
						EarthView::World::Spatial::Math::CMatrix4 r;
						r.m[0][0] = static_cast<float>(this->m[0][0]);
						r.m[0][1] = static_cast<float>(this->m[0][1]);
						r.m[0][2] = static_cast<float>(this->m[0][2]);
						r.m[0][3] = static_cast<float>(this->m[0][3]);
						r.m[1][0] = static_cast<float>(this->m[1][0]);
						r.m[1][1] = static_cast<float>(this->m[1][1]);
						r.m[1][2] = static_cast<float>(this->m[1][2]);
						r.m[1][3] = static_cast<float>(this->m[1][3]);
						r.m[2][0] = static_cast<float>(this->m[2][0]);
						r.m[2][1] = static_cast<float>(this->m[2][1]);
						r.m[2][2] = static_cast<float>(this->m[2][2]);
						r.m[2][3] = static_cast<float>(this->m[2][3]);
						r.m[3][0] = static_cast<float>(this->m[3][0]);
						r.m[3][1] = static_cast<float>(this->m[3][1]);
						r.m[3][2] = static_cast<float>(this->m[3][2]);
						r.m[3][3] = static_cast<float>(this->m[3][3]);
						return r;
					};
#endif
				};
				/* Removed from EarthView::World::Spatial::Math::CVector4 and made a non-member here because otherwise
				matrix4.h and vector4.h have to try to include and inline each
				other, which frankly doesn't work ;)
				*/
				/// <summary>
				///四维向量与四维矩阵相乘
				/// </summary>
				/// <param name="v">四维向量</param>
				/// <param name="mat">四维矩阵</param>
				/// <returns>返回结果向量</returns>
				inline EarthView::World::Spatial::Math::CVector4 operator * (_in const EarthView::World::Spatial::Math::CVector4 &v, _in const EarthView::World::Spatial::Math::CMatrix4 &mat)
				{
					return CVector4(
						v.x * mat[0][0] + v.y * mat[1][0] + v.z * mat[2][0] + v.w * mat[3][0],
						v.x * mat[0][1] + v.y * mat[1][1] + v.z * mat[2][1] + v.w * mat[3][1],
						v.x * mat[0][2] + v.y * mat[1][2] + v.z * mat[2][2] + v.w * mat[3][2],
						v.x * mat[0][3] + v.y * mat[1][3] + v.z * mat[2][3] + v.w * mat[3][3]
					);
				}
			}
		}    
	}
}

#endif

