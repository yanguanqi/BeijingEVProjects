#ifndef _SPATIAL_MATRIX_H_
#define _SPATIAL_MATRIX_H_

#include "spatialdisplay/spatialrect.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class EV_SPATIALDISPLAY_DLL CSpatialMatrix : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialMatrix();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialMatrix(ev_real64 m11, ev_real64 m12, ev_real64 m21, ev_real64 m22,
						ev_real64 dx, ev_real64 dy);

					/// <summary>
					///构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialMatrix(const CSpatialMatrix &matrix);

					/// <summary>
					///  设置矩阵
					/// </summary>
					/// <param name="m11 ">矩阵1行1列的值</param>
					/// <param name="m12 ">矩阵1行2列的值</param>
					/// <param name="m21 ">矩阵2行1列的值</param>
					/// <param name="m22 ">矩阵2行2列的值</param>
					/// <param name="dx ">矩阵的x坐标值</param>
					/// <param name="dy ">矩阵的y坐标值</param>
					/// <returns> </returns>
					void setMatrix(ev_real64 m11, ev_real64 m12, ev_real64 m21, ev_real64 m22,
						ev_real64 dx, ev_real64 dy);

					/// <summary>
					/// 矩阵1行1列的值
					/// </summary>
					/// <param name=" "></param>
					/// <returns>矩阵1行1列的值 </returns>
					ev_real64 m11() const { return _m11; }

					/// <summary>
					/// 矩阵1行2列的值
					/// </summary>
					/// <param name=" "></param>
					/// <returns>矩阵1行2列的值 </returns>
					ev_real64 m12() const { return _m12; }

					/// <summary>
					/// 矩阵2行1列的值
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 矩阵2行1列的值</returns>
					ev_real64 m21() const { return _m21; }

					/// <summary>
					/// 矩阵2行2列的值
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 矩阵2行2列的值</returns>
					ev_real64 m22() const { return _m22; }

					/// <summary>
					/// 矩阵的x坐标值
					/// </summary>
					/// <param name=" "></param>
					/// <returns>矩阵的x坐标值 </returns>
					ev_real64 dx() const { return _dx; }

					/// <summary>
					/// 矩阵的y坐标值
					/// </summary>
					/// <param name=" "></param>
					/// <returns>矩阵的y坐标值 </returns>
					ev_real64 dy() const { return _dy; }

					/// <summary>
					/// 矩阵转换
					/// </summary>
					/// <param name=" x ">矩阵的x坐标</param>
					/// <param name=" y ">矩阵的y坐标</param>
					/// <param name=" tx ">矩阵转换后的x坐标</param>
					/// <param name=" ty ">矩阵转换后的y坐标</param>
					/// <returns> </returns>
					void transform(ev_real64 x, ev_real64 y, ev_real64 *tx, ev_real64 *ty) const;
					
					/// <summary>
					/// 矩阵转换
					/// </summary>
					/// <param name=" x ">矩阵的x坐标</param>
					/// <param name=" y ">矩阵的y坐标</param>
					/// <param name=" count">要转换矩阵的数目</param>
					/// <returns> </returns>
					void transform( ev_real64* x, ev_real64* y, ev_int32 count ) const;

					/// <summary>
					///  地图上的矩形
					/// </summary>
					/// <param name="rect ">地图上的矩形</param>
					/// <returns> </returns>
					EarthView::World::Spatial::Display::CSpatialRect mapRect(const EarthView::World::Spatial::Display::CSpatialRect &rect) const;

					/// <summary>
					/// 重新设置
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					void reset();

					/// <summary>
					/// 是否标识
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					inline bool isIdentity() const;

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="dx ">转化的x坐标</param>
					/// <param name="dy ">转化的y坐标</param>
					/// <returns> </returns>
					EarthView::World::Spatial::Display::CSpatialMatrix &translate(ev_real64 dx, ev_real64 dy);

					/// <summary>
					/// 比例
					/// </summary>
					/// <param name="sx">x坐标的比例</param>
					/// <param name="sy">y坐标的比例</param>
					/// <returns> </returns>
					EarthView::World::Spatial::Display::CSpatialMatrix &scale(ev_real64 sx, ev_real64 sy);

					/// <summary>
					/// 切断
					/// </summary>
					/// <param name=" sh ">切断的x坐标</param>
					/// <param name=" sv ">切断的y坐标</param>
					/// <returns> </returns>
					EarthView::World::Spatial::Display::CSpatialMatrix &shear(ev_real64 sh, ev_real64 sv);

					/// <summary>
					/// 旋转
					/// </summary>
					/// <param name=" a ">旋转的角度</param>
					/// <returns>旋后的空间矩阵 </returns>
					EarthView::World::Spatial::Display::CSpatialMatrix &rotate(ev_real64 a);

					/// <summary>
					/// 旋转位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" a ">旋转点的X坐标</param>
					/// <param name=" a ">旋转点的Y坐标</param>
					/// <returns>旋后的空间矩阵 </returns>
					EarthView::World::Spatial::Display::CSpatialMatrix &rotateAt(ev_real64 angle, ev_real64 x, ev_real64 y );

					/// <summary>
					/// 是否可以反转
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 可以反转返回true,不能反转返回false</returns>
					bool isInvertible() const { return !FuzzyIsNull(float(_m11*_m22 - _m12*_m21)); }

					/// <summary>
					/// 行列式
					/// </summary>
					/// <param name=" "></param>
					/// <returns>行列式计算的值 </returns>
					ev_real64 determinant() const { return _m11*_m22 - _m12*_m21; }

					/// <summary>
					/// 分离
					/// </summary>
					/// <param name=" "></param>
					/// <returns>分离后的值 </returns>
					ev_real64 det() const { return _m11*_m22 - _m12*_m21; }

					/// <summary>
					/// 反转
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 反转后的矩阵</returns>
					EarthView::World::Spatial::Display::CSpatialMatrix inverted() const;

					bool operator==(const EarthView::World::Spatial::Display::CSpatialMatrix &o) const;
					bool operator!=(const EarthView::World::Spatial::Display::CSpatialMatrix &o) const;

					EarthView::World::Spatial::Display::CSpatialMatrix &operator*=(const EarthView::World::Spatial::Display::CSpatialMatrix &o);
					EarthView::World::Spatial::Display::CSpatialMatrix operator*(const EarthView::World::Spatial::Display::CSpatialMatrix &o) const;

					EarthView::World::Spatial::Display::CSpatialMatrix &operator=(const EarthView::World::Spatial::Display::CSpatialMatrix &o);

				private:
					inline CSpatialMatrix(bool)
						: _m11(1.)
						, _m12(0.)
						, _m21(0.)
						, _m22(1.)
						, _dx(0.)
						, _dy(0.) {}
					inline CSpatialMatrix(ev_real64 am11, ev_real64 am12, ev_real64 am21, ev_real64 am22, ev_real64 adx, ev_real64 ady, bool)
						: _m11(am11)
						, _m12(am12)
						, _m21(am21)
						, _m22(am22)
						, _dx(adx)
						, _dy(ady) {}
					ev_real64 _m11, _m12;
					ev_real64 _m21, _m22;
					ev_real64 _dx, _dy;
				};

				inline bool CSpatialMatrix::isIdentity() const
				{
					return FuzzyIsNull(float(_m11 - 1)) && FuzzyIsNull(float(_m22 - 1)) && FuzzyIsNull(float(_m12))
						&& FuzzyIsNull(float(_m21)) && FuzzyIsNull(float(_dx)) && FuzzyIsNull(float(_dy));
				}

				inline bool FuzzyCompare(const EarthView::World::Spatial::Display::CSpatialMatrix& m1, const EarthView::World::Spatial::Display::CSpatialMatrix& m2)
				{
					return FuzzyCompare(m1.m11(), m2.m11())
						&& FuzzyCompare(m1.m12(), m2.m12())
						&& FuzzyCompare(m1.m21(), m2.m21())
						&& FuzzyCompare(m1.m22(), m2.m22())
						&& FuzzyCompare(m1.dx(), m2.dx())
						&& FuzzyCompare(m1.dy(), m2.dy());
				}
			}
		}
	}
}
#endif

