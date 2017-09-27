#ifndef __Matrix3_H__
#define __Matrix3_H__
#pragma once
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
				/// 三维矩阵类,
				/// 定义了三维矩阵操作函数
				/// </summary>
				class EV_MATHENGINE_DLL CMatrix3: public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					inline CMatrix3 ()
					{
						*this = CMatrix3::IDENTITY;
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="arr[3][3]">数组</param>
					/// <returns></returns>
					inline explicit CMatrix3 (_in const Real **arr)
					{
						memcpy(m, arr, 9 * sizeof(Real));
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rkMatrix">类对象</param>
					/// <returns></returns>
					inline CMatrix3 (_in const CMatrix3 &rkMatrix)
					{
						memcpy(m, rkMatrix.m, 9 * sizeof(Real));
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="fEntry00">数组元素</param>
					/// <param name="fEntry01">数组元素</param>
					/// <param name="fEntry02">数组元素</param>
					/// <param name="fEntry10">数组元素</param>
					/// <param name="fEntry11">数组元素</param>
					/// <param name="fEntry12">数组元素</param>
					/// <param name="fEntry20">数组元素</param>
					/// <param name="fEntry21">数组元素</param>
					/// <param name="fEntry22">数组元素</param>
					/// <returns></returns>
					CMatrix3 (_in Real fEntry00, _in Real fEntry01, _in Real fEntry02,
						_in Real fEntry10, _in Real fEntry11, _in Real fEntry12,
						_in Real  fEntry20, _in Real fEntry21, _in Real fEntry22)
					{
						m[0][0] = fEntry00;
						m[0][1] = fEntry01;
						m[0][2] = fEntry02;
						m[1][0] = fEntry10;
						m[1][1] = fEntry11;
						m[1][2] = fEntry12;
						m[2][0] = fEntry20;
						m[2][1] = fEntry21;
						m[2][2] = fEntry22;
					}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMatrix3(_in EarthView::World::Core::CNameValuePairList *pList);

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
					inline void swap(_inout CMatrix3 &other)
					{
						std::swap(m[0][0], other.m[0][0]);
						std::swap(m[0][1], other.m[0][1]);
						std::swap(m[0][2], other.m[0][2]);
						std::swap(m[1][0], other.m[1][0]);
						std::swap(m[1][1], other.m[1][1]);
						std::swap(m[1][2], other.m[1][2]);
						std::swap(m[2][0], other.m[2][0]);
						std::swap(m[2][1], other.m[2][1]);
						std::swap(m[2][2], other.m[2][2]);
					}
					/// <summary>
					/// 重载操作下标符[]
					/// </summary>
					/// <param name="iRow">矩阵行数大小</param>
					/// <returns>浮点型指针</returns>
					inline Real *operator[] (_in ev_size_t iRow) const
					{
						return (Real *)m[iRow];
					}
					/*inline operator Real* ()
					{
					return (Real*)m[0];
					}*/
					/// <summary>
					///获得某列元素值
					/// </summary>
					/// <param name="iCol">列标号</param>
					/// <returns>一列元素的vector集合</returns>
					EarthView::World::Spatial::Math::CVector3 GetColumn (_in ev_size_t iCol) const;
					/// <summary>
					///设置某列元素值
					/// </summary>
					/// <param name="iCol">列标号</param>
					/// <param name="vec">vector元素集合</param>
					/// <returns></returns>
					void SetColumn(_in ev_size_t iCol, _in const EarthView::World::Spatial::Math::CVector3 &vec);
					/// <summary>
					///从坐标轴向量建立矩阵
					/// </summary>
					/// <param name="xAxis">x轴</param>
					/// <param name="yAxis">y轴</param>
					/// <param name="zAxis">z轴</param>
					/// <returns></returns>
					void FromAxes(_in const EarthView::World::Spatial::Math::CVector3 &xAxis, _in const EarthView::World::Spatial::Math::CVector3 &yAxis, _in const EarthView::World::Spatial::Math::CVector3 &zAxis);
					/// <summary>
					///矩阵赋值
					/// </summary>
					/// <param name="rkMatrix">源矩阵</param>
					/// <returns>赋值矩阵</returns>
					inline CMatrix3 &operator= (_in const CMatrix3 &rkMatrix)
					{
						memcpy(m, rkMatrix.m, 9 * sizeof(Real));
						return *this;
					}
					/// <summary>
					///判断矩阵相等
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>相等返回true，否则false</returns>
					ev_bool operator== (_in const CMatrix3 &rkMatrix) const;
					/// <summary>
					///判断矩阵不相等
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>不相等返回true，否则false</returns>
					inline ev_bool operator!= (_in const CMatrix3 &rkMatrix) const
					{
						return !operator==(rkMatrix);
					}
					/// <summary>
					///矩阵加操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相加结果</returns>
					CMatrix3 operator+ (_in const CMatrix3 &rkMatrix) const;
					/// <summary>
					///矩阵减操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相减结果</returns>
					CMatrix3 operator- (_in const CMatrix3 &rkMatrix) const;
					/// <summary>
					///矩阵乘操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相乘结果</returns>
					CMatrix3 operator* (_in const CMatrix3 &rkMatrix) const;
					/// <summary>
					///矩阵符号取反
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵符号取反结果</returns>
					CMatrix3 operator- () const;
					/// <summary>
					///矩阵与3x1向量相乘
					/// </summary>
					/// <param name="rkVector">3x1向量</param>
					/// <returns>相乘后3x1向量结果</returns>
					EarthView::World::Spatial::Math::CVector3 operator* (_in const EarthView::World::Spatial::Math::CVector3 &rkVector) const;
					/// <summary>
					///1x3向量与矩阵相乘
					/// </summary>
					/// <param name="rkVector">1x3向量</param>
					/// <param name="rkMatrix">3x3矩阵</param>
					/// <returns>相乘后1x3向量结果</returns>
					EV_MATHENGINE_DLL friend EarthView::World::Spatial::Math::CVector3 operator* (_in const EarthView::World::Spatial::Math::CVector3 &rkVector,
						_in const CMatrix3 &rkMatrix);
					/// <summary>
					///矩阵缩放
					/// </summary>
					/// <param name="fScalar">缩放系数</param>
					/// <returns>缩放后矩阵结果</returns>
					CMatrix3 operator* (_in Real fScalar) const;
					/// <summary>
					///矩阵缩放
					/// </summary>
					/// <param name="fScalar">缩放系数</param>
					/// <param name="rkMatrix">3x3矩阵</param>
					/// <returns>缩放后矩阵结果</returns>
					EV_MATHENGINE_DLL friend CMatrix3 operator* (_in Real fScalar, _in const CMatrix3 &rkMatrix);
					/// <summary>
					///矩阵转置
					/// </summary>
					/// <param name=""></param>
					/// <returns>转置后矩阵结果</returns>
					CMatrix3 Transpose () const;
					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="rkInverse">求逆后矩阵结果</param>
					/// <param name="fTolerance">精确度</param>
					/// <returns>成功返回true，否则false</returns>
					ev_bool Inverse (_out CMatrix3 &rkInverse, _in Real fTolerance) const;
					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="rkInverse">求逆后矩阵结果</param>
					/// <returns>成功返回true，否则false</returns>
					ev_bool Inverse (_out CMatrix3 &rkInverse) const;
					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="fTolerance">精确度</param>
					/// <returns>求逆后矩阵结果</returns>
					CMatrix3 Inverse (_in Real fTolerance) const;
					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>求逆后矩阵结果</returns>
					CMatrix3 Inverse () const;
					/// <summary>
					///矩阵行列式化(求模)
					/// </summary>
					/// <param name=""></param>
					/// <returns>模结果</returns>
					Real Determinant () const;
					/// <summary>
					///矩阵奇异值分解
					/// </summary>
					/// <param name="rkL">左奇异矩阵</param>
					/// <param name="rkS">中奇异矩阵</param>
					/// <param name="rkR">右奇异矩阵</param>
					/// <returns></returns>
					void SingularValueDecomposition (_out CMatrix3 &rkL, _out EarthView::World::Spatial::Math::CVector3 &rkS,
						_out CMatrix3 &rkR) const;
					/// <summary>
					///矩阵奇异值合并
					/// </summary>
					/// <param name="rkL">左奇异矩阵</param>
					/// <param name="rkS">中奇异矩阵</param>
					/// <param name="rkR">右奇异矩阵</param>
					/// <returns></returns>
					void SingularValueComposition (_in const CMatrix3 &rkL,
						_in const EarthView::World::Spatial::Math::CVector3 &rkS, _in const CMatrix3 &rkR);
					/// <summary>
					///矩阵正交化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void Orthonormalize ();
					/// <summary>
					///矩阵分解出正交矩阵、对角线矩阵和上三角矩阵
					/// </summary>
					/// <param name="rkQ">正交矩阵</param>
					/// <param name="rkD">对角线矩阵</param>
					/// <param name="rkU">上三角矩阵</param>
					/// <returns></returns>
					void QDUDecomposition (_out CMatrix3 &rkQ, _out EarthView::World::Spatial::Math::CVector3 &rkD,
						_out EarthView::World::Spatial::Math::CVector3 &rkU) const;
					/// <summary>
					///矩阵求模
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					Real SpectralNorm () const;
					/// <summary>
					///正交矩阵计算出轴向量和弧度角
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="rfAngle">轴角</param>
					/// <returns></returns>
					void ToAngleAxis (_out EarthView::World::Spatial::Math::CVector3 &rkAxis, _out EarthView::World::Spatial::Math::CRadian &rfAngle) const;
					/// <summary>
					///正交矩阵计算出轴向量和角度
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="rfAngle">轴角</param>
					/// <returns></returns>
					inline void ToAngleAxis (EarthView::World::Spatial::Math::CVector3 &rkAxis, EarthView::World::Spatial::Math::CDegree &rfAngle) const
					{
						EarthView::World::Spatial::Math::CRadian r;
						ToAngleAxis ( rkAxis, r );
						rfAngle = r;
					}
					/// <summary>
					///由轴向量和角度转化为矩阵
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="fRadians">轴角</param>
					/// <returns></returns>
					void FromAngleAxis (_in const EarthView::World::Spatial::Math::CVector3 &rkAxis, _in const EarthView::World::Spatial::Math::CRadian &fRadians);
					/// <summary>
					///正交化矩阵转换成为XYZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesXYZ (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///正交化矩阵转换成为XYZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesXZY (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out  EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///正交化矩阵转换成为YXZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesYXZ (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///正交化矩阵转换成为YZX旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesYZX (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///正交化矩阵转换成为ZXY旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesZXY (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///正交化矩阵转换成为ZYX旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					ev_bool ToEulerAnglesZYX (_out EarthView::World::Spatial::Math::CRadian &rfYAngle, _out EarthView::World::Spatial::Math::CRadian &rfPAngle,
						_out EarthView::World::Spatial::Math::CRadian &rfRAngle) const;
					/// <summary>
					///XYZ旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesXYZ (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///XZY旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesXZY (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///YXZ旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesYXZ (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///YZX旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesYZX (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///ZXY旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesZXY (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///ZYX旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					void FromEulerAnglesZYX (_in const EarthView::World::Spatial::Math::CRadian &fYAngle, _in const EarthView::World::Spatial::Math::CRadian &fPAngle, _in const EarthView::World::Spatial::Math::CRadian &fRAngle);
					/// <summary>
					///求矩阵特征值
					/// </summary>
					/// <param name="afEigenvalue[3]">特征值</param>
					/// <param name="akEigenvector">特征向量</param>
					/// <returns></returns>
					void EigenSolveSymmetric (_out Real afEigenvalue[3],
						_out EarthView::World::Spatial::Math::CVector3 *akEigenvector[3]) const;
					/// <summary>
					///张量乘积
					/// </summary>
					/// <param name="rkU">U向量</param>
					/// <param name="rkV">V向量</param>
					/// <returns></returns>
					static void TensorProduct (_in const EarthView::World::Spatial::Math::CVector3 &rkU, _in const EarthView::World::Spatial::Math::CVector3 &rkV,
						_out CMatrix3 &rkProduct);
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
					///重载<<操作符
					/// </summary>
					/// <param name="o">输出流对象</param>
					/// <param name="mat">输出矩阵</param>
					/// <returns>输出流对象</returns>
					inline EV_MATHENGINE_DLL friend std::ostream &operator <<
						( _out std::ostream &o, _in const CMatrix3 &mat )
					{
						o << "CMatrix3(" << mat[0][0] << ", " << mat[0][1] << ", " << mat[0][2] << ", "
							<< mat[1][0] << ", " << mat[1][1] << ", " << mat[1][2] << ", "
							<< mat[2][0] << ", " << mat[2][1] << ", " << mat[2][2] << ")";
						return o;
					}
					static const Real EPSILON;
					static const CMatrix3 ZERO;
					static const CMatrix3 IDENTITY;
				protected:
					/// <summary>
					///正交矩阵转换成三角行列式，计算正交矩阵的主对角线和次对角线元素
					/// </summary>
					/// <param name="afDiag[3]">主对角线</param>
					/// <param name="afSubDiag[3]">次对角线</param>
					/// <returns></returns>
					void Tridiagonal (_out Real afDiag[3], _out Real afSubDiag[3]);
					/// <summary>
					///矩阵转换成三角化行列式
					/// </summary>
					/// <param name="afDiag[3]">主对角线</param>
					/// <param name="afSubDiag[3]">次对角线</param>
					/// <returns></returns>
					ev_bool QLAlgorithm (_out Real afDiag[3], _out Real afSubDiag[3]);
					/// support for singular value decomposition
					static const Real msSvdEpsilon;
					static const unsigned int msSvdMaxIterations;
					/// <summary>
					///矩阵对角线化
					/// </summary>
					/// <param name="kA">待变换矩阵</param>
					/// <param name=" kL">左奇异矩阵</param>
					/// <param name=" kR">次对角线</param>
					/// <returns></returns>
					static void Bidiagonalize (_in CMatrix3 &kA, _out CMatrix3 &kL,
						_out CMatrix3 &kR);
					/// <summary>
					///矩阵对角线化
					/// </summary>
					/// <param name="kA">待变换矩阵</param>
					/// <param name=" kL">左奇异矩阵</param>
					/// <param name=" kR">次对角线</param>
					/// <returns></returns>
					static void GolubKahanStep (_out CMatrix3 &kA, _out CMatrix3 &kL,
						_out CMatrix3 &kR);
					/// support for spectral norm
					/// <summary>
					///
					/// </summary>
					/// <param name="afCoeff[3]"></param>
					/// <returns> </returns>
					static Real MaxCubicRoot (_in Real afCoeff[3]);
					Real m[3][3];
					/// for faster access
					friend class CMatrix4;
				};
			}
		}    
	}
}

#endif

