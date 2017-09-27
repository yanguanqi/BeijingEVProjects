#ifndef _SPATIAL_RECT_H_
#define _SPATIAL_RECT_H_

#include "spatialdisplay/spatialdisplayconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				template <typename T>
				inline T Abs(const T &t) { return t >= 0 ? t : -t; }

				inline int Round(ev_real64 d)
				{ return d >= ev_real64(0.0) ? int(d + ev_real64(0.5)) : int(d - int(d-1) + ev_real64(0.5)) + int(d-1); }

				template <typename T>
				inline const T &Min(const T &a, const T &b) { return (a < b) ? a : b; }
				template <typename T>
				inline const T &Max(const T &a, const T &b) { return (a < b) ? b : a; }
				template <typename T>
				inline const T &Bound(const T &min, const T &val, const T &max)
				{ return Max(min, Min(max, val)); }
				static inline bool FuzzyCompare(double p1, double p2)
				{
					return (Abs(p1 - p2) <= 0.000000000001 * Min(Abs(p1), Abs(p2)));
				}
				static inline bool FuzzyIsNull(float f)
				{
					return Abs(f) <= 0.00001f;
				}

				class EV_SPATIALDISPLAY_DLL CSpatialRect : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					~CSpatialRect();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					CSpatialRect() { xp = yp = 0.; w = h = 0.; }
					CSpatialRect(ev_real64 left, ev_real64 top, ev_real64 width, ev_real64 height);

					/// <summary>
					/// 判断是否为空
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果为空，返回true,如果不为空，返回false </returns>
					bool isNull() const;

					/// <summary>
					/// 判断是否为空
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果为空，返回true,如果不为空，返回false </returns>
					bool isEmpty() const;

					/// <summary>
					/// 判断是否有效
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 如果有效，返回true,如果无效，返回false</returns>
					bool isValid() const;

					/// <summary>
					///	恢复状态
					/// </summary>
					/// <param name=" "></param>
					/// <returns>之前的矩形状态 </returns>
					EarthView::World::Spatial::Display::CSpatialRect normalized() const{return EarthView::World::Spatial::Display::CSpatialRect();}

					/// <summary>
					/// 矩形左边x坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>左边x坐标 </returns>
					inline ev_real64 left() const { return xp; }

					/// <summary>
					/// 矩形顶部y坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>顶部y坐标 </returns>
					inline ev_real64 top() const { return yp; }

					/// <summary>
					/// 矩形右边x坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>右边x坐标 </returns>
					inline ev_real64 right() const { return xp + w; }

					/// <summary>
					/// 矩形底部y坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>底部y坐标 </returns>
					inline ev_real64 bottom() const { return yp + h; }

					/// <summary>
					/// x坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>x坐标 </returns>
					inline ev_real64 x() const;

					/// <summary>
					/// y坐标
					/// </summary>
					/// <param name=" "></param>
					/// <returns>y坐标 </returns>
					inline ev_real64 y() const;

					/// <summary>
					/// 设置矩形左边x坐标
					/// </summary>
					/// <param name="pos">右边x坐标 </param>
					/// <returns></returns>
					inline void setLeft(ev_real64 pos);

					/// <summary>
					/// 设置矩形顶部y坐标
					/// </summary>
					/// <param name="pos">顶部y坐标</param>
					/// <returns> </returns>
					inline void setTop(ev_real64 pos);

					/// <summary>
					/// 设置矩形右边x坐标
					/// </summary>
					/// <param name="pos">右边x坐标 </param>
					/// <returns></returns>
					inline void setRight(ev_real64 pos);

					/// <summary>
					/// 设置矩形底部y坐标
					/// </summary>
					/// <param name="pos">底部y坐标</param>
					/// <returns> </returns>
					inline void setBottom(ev_real64 pos);

					/// <summary>
					/// 设置x坐标
					/// </summary>
					/// <param name=" ">x坐标</param>
					/// <returns> </returns>
					inline void setX(ev_real64 pos) { setLeft(pos); }

					/// <summary>
					/// 设置y坐标
					/// </summary>
					/// <param name=" ">y坐标</param>
					/// <returns> </returns>
					inline void setY(ev_real64 pos) { setTop(pos); }

					/// <summary>
					/// 向左边移动
					/// </summary>
					/// <param name="pos">向左边移动到的x坐标值 </param>
					/// <returns></returns>
					void moveLeft(ev_real64 pos);

					/// <summary>
					/// 向顶部移动
					/// </summary>
					/// <param name="pos">向顶部移动到的y坐标值 </param>
					/// <returns></returns>
					void moveTop(ev_real64 pos);

					/// <summary>
					/// 向右边移动
					/// </summary>
					/// <param name="pos">向右边移动到的x坐标值 </param>
					/// <returns></returns>
					void moveRight(ev_real64 pos);

					/// <summary>
					/// 向底部移动
					/// </summary>
					/// <param name="pos">向底部移动到的y坐标值 </param>
					/// <returns></returns>
					void moveBottom(ev_real64 pos);

					/// <summary>
					/// 转换
					/// </summary>
					/// <param name="dx">转换后的x坐标 </param>
					/// <param name="dy">转换后的y坐标 </param>
					/// <returns></returns>
					void translate(ev_real64 dx, ev_real64 dy);

					/// <summary>
					/// 转换
					/// </summary>
					/// <param name="dx">转换后的x坐标 </param>
					/// <param name="dy">转换后的y坐标 </param>
					/// <returns>转换后的矩形</returns>
					EarthView::World::Spatial::Display::CSpatialRect translated(ev_real64 dx, ev_real64 dy) const;


					/// <summary>
					/// 移动
					/// </summary>
					/// <param name="x">移动到的x坐标 </param>
					/// <param name="y">移动到的y坐标 </param>
					/// <returns></returns>
					void moveTo(ev_real64 x, ev_real64 t);

					/// <summary>
					/// 设置矩形
					/// </summary>
					/// <param name="x">设置矩形的x坐标 </param>
					/// <param name="y">设置矩形的y坐标 </param>
					/// <param name="w">设置矩形的宽度 </param>
					/// <param name="h">设置矩形的高度 </param>
					/// <returns></returns>
					void setRect(ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h);
					
					/// <summary>
					/// 获取矩形
					/// </summary>
					/// <param name="x">获取矩形的x坐标 </param>
					/// <param name="y">获取矩形的y坐标 </param>
					/// <param name="w">获取矩形的宽度 </param>
					/// <param name="h">获取矩形的高度 </param>
					/// <returns></returns>
					void getRect(ev_real64 *x, ev_real64 *y, ev_real64 *w, ev_real64 *h) const;

					/// <summary>
					/// 设置矩形坐标
					/// </summary>
					/// <param name="x1">设置矩形起点的坐标x1</param>
					/// <param name="y1">设置矩形起点的坐标y1 </param>
					/// <param name="x2">设置矩形终点的坐标x2 </param>
					/// <param name="y2">设置矩形终点的坐标y2 </param>
					/// <returns></returns>
					void setCoords(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2);

					/// <summary>
					/// 获取矩形坐标
					/// </summary>
					/// <param name="x1">矩形起点的坐标x1</param>
					/// <param name="y1">矩形起点的坐标y1 </param>
					/// <param name="x2">矩形终点的坐标x2 </param>
					/// <param name="y2">矩形终点的坐标y2 </param>
					/// <returns></returns>
					void getCoords(ev_real64 *x1, ev_real64 *y1, ev_real64 *x2, ev_real64 *y2) const;

					/// <summary>
					/// 调整矩形
					/// </summary>
					/// <param name="x1">矩形起点的坐标x1</param>
					/// <param name="y1">矩形起点的坐标y1 </param>
					/// <param name="x2">矩形终点的坐标x2 </param>
					/// <param name="y2">矩形终点的坐标y2 </param>
					/// <returns></returns>
					inline void adjust(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2);

					/// <summary>
					/// 调整矩形
					/// </summary>
					/// <param name="x1">矩形起点的坐标x1</param>
					/// <param name="y1">矩形起点的坐标y1 </param>
					/// <param name="x2">矩形终点的坐标x2 </param>
					/// <param name="y2">矩形终点的坐标y2 </param>
					/// <returns>调整后的空间矩形</returns>
					inline EarthView::World::Spatial::Display::CSpatialRect adjusted(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2) const;

					/// <summary>
					/// 矩形的宽度
					/// </summary>
					/// <param name=""> </param>
					/// <returns>矩形的宽度</returns>
					ev_real64 width() const;

					/// <summary>
					/// 矩形的高度
					/// </summary>
					/// <param name=""> </param>
					/// <returns>矩形的高度</returns>
					ev_real64 height() const;

					/// <summary>
					/// 设置矩形的宽
					/// </summary>
					/// <param name=" h"> 矩形的宽</param>
					/// <returns></returns>
					void setWidth(ev_real64 w);

					/// <summary>
					/// 设置矩形的高
					/// </summary>
					/// <param name=" h"> 矩形的高</param>
					/// <returns></returns>
					void setHeight(ev_real64 h);

					EarthView::World::Spatial::Display::CSpatialRect operator|(const EarthView::World::Spatial::Display::CSpatialRect &r) const;
					EarthView::World::Spatial::Display::CSpatialRect operator&(const EarthView::World::Spatial::Display::CSpatialRect &r) const;
					EarthView::World::Spatial::Display::CSpatialRect& operator|=(const EarthView::World::Spatial::Display::CSpatialRect &r);
					EarthView::World::Spatial::Display::CSpatialRect& operator&=(const EarthView::World::Spatial::Display::CSpatialRect &r);

					bool contains(ev_real64 x, ev_real64 y) const;
					bool contains(const EarthView::World::Spatial::Display::CSpatialRect &r) const{return false;};
					CSpatialRect unite(const CSpatialRect &r) const;  // ### Qt 5: make QT4_SUPPORT
					EarthView::World::Spatial::Display::CSpatialRect united(const EarthView::World::Spatial::Display::CSpatialRect &other) const;
					CSpatialRect intersect(const CSpatialRect &r) const;  // ### Qt 5: make QT4_SUPPORT
					EarthView::World::Spatial::Display::CSpatialRect intersected(const EarthView::World::Spatial::Display::CSpatialRect &other) const;
					bool intersects(const EarthView::World::Spatial::Display::CSpatialRect &r) const{return false;}

					friend EV_SPATIALDISPLAY_DLL inline bool operator==(const EarthView::World::Spatial::Display::CSpatialRect & r1, const EarthView::World::Spatial::Display::CSpatialRect &r2);
					friend EV_SPATIALDISPLAY_DLL inline bool operator!=(const EarthView::World::Spatial::Display::CSpatialRect & r1, const EarthView::World::Spatial::Display::CSpatialRect &r2);
				ev_private:
					CSpatialRect( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_real64 xp;
					ev_real64 yp;
					ev_real64 w;
					ev_real64 h;
				};

				EV_SPATIALDISPLAY_DLL inline bool operator==(const EarthView::World::Spatial::Display::CSpatialRect &r1, const EarthView::World::Spatial::Display::CSpatialRect &r2);
				EV_SPATIALDISPLAY_DLL inline bool operator!=(const EarthView::World::Spatial::Display::CSpatialRect &r1, const EarthView::World::Spatial::Display::CSpatialRect &r2);

				/*****************************************************************************
				  EarthView::World::Spatial::Display::CSpatialRect inline member functions
				 *****************************************************************************/

				inline CSpatialRect::CSpatialRect(ev_real64 aleft, ev_real64 atop, ev_real64 awidth, ev_real64 aheight)
					: xp(aleft), yp(atop), w(awidth), h(aheight)
				{
				}

				inline bool CSpatialRect::isNull() const
				{ return w == 0. && h == 0.; }

				inline bool CSpatialRect::isEmpty() const
				{ return w <= 0. || h <= 0.; }

				inline bool CSpatialRect::isValid() const
				{ return w > 0. && h > 0.; }

				inline ev_real64 CSpatialRect::x() const
				{ return xp; }

				inline ev_real64 CSpatialRect::y() const
				{ return yp; }

				inline void CSpatialRect::setLeft(ev_real64 pos) { ev_real64 diff = pos - xp; xp += diff; w -= diff; }

				inline void CSpatialRect::setRight(ev_real64 pos) { w = pos - xp; }

				inline void CSpatialRect::setTop(ev_real64 pos) { ev_real64 diff = pos - yp; yp += diff; h -= diff; }

				inline void CSpatialRect::setBottom(ev_real64 pos) { h = pos - yp; }

				inline void CSpatialRect::moveLeft(ev_real64 pos) { xp = pos; }

				inline void CSpatialRect::moveTop(ev_real64 pos) { yp = pos; }

				inline void CSpatialRect::moveRight(ev_real64 pos) { xp = pos - w; }

				inline void CSpatialRect::moveBottom(ev_real64 pos) { yp = pos - h; }

				inline ev_real64 CSpatialRect::width() const
				{ return w; }

				inline ev_real64 CSpatialRect::height() const
				{ return h; }

				inline void CSpatialRect::translate(ev_real64 dx, ev_real64 dy)
				{
					xp += dx;
					yp += dy;
				}

				inline void CSpatialRect::moveTo(ev_real64 ax, ev_real64 ay)
				{
					xp = ax;
					yp = ay;
				}

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::translated(ev_real64 dx, ev_real64 dy) const
				{ return CSpatialRect(xp + dx, yp + dy, w, h); }

				inline void CSpatialRect::getRect(ev_real64 *ax, ev_real64 *ay, ev_real64 *aaw, ev_real64 *aah) const
				{
					*ax = this->xp;
					*ay = this->yp;
					*aaw = this->w;
					*aah = this->h;
				}

				inline void CSpatialRect::setRect(ev_real64 ax, ev_real64 ay, ev_real64 aaw, ev_real64 aah)
				{
					this->xp = ax;
					this->yp = ay;
					this->w = aaw;
					this->h = aah;
				}

				inline void CSpatialRect::getCoords(ev_real64 *xp1, ev_real64 *yp1, ev_real64 *xp2, ev_real64 *yp2) const
				{
					*xp1 = xp;
					*yp1 = yp;
					*xp2 = xp + w;
					*yp2 = yp + h;
				}

				inline void CSpatialRect::setCoords(ev_real64 xp1, ev_real64 yp1, ev_real64 xp2, ev_real64 yp2)
				{
					xp = xp1;
					yp = yp1;
					w = xp2 - xp1;
					h = yp2 - yp1;
				}

				inline void CSpatialRect::adjust(ev_real64 xp1, ev_real64 yp1, ev_real64 xp2, ev_real64 yp2)
				{ xp += xp1; yp += yp1; w += xp2 - xp1; h += yp2 - yp1; }

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::adjusted(ev_real64 xp1, ev_real64 yp1, ev_real64 xp2, ev_real64 yp2) const
				{ return CSpatialRect(xp + xp1, yp + yp1, w + xp2 - xp1, h + yp2 - yp1); }

				inline void CSpatialRect::setWidth(ev_real64 aw)
				{ this->w = aw; }

				inline void CSpatialRect::setHeight(ev_real64 ah)
				{ this->h = ah; }

				inline EarthView::World::Spatial::Display::CSpatialRect& EarthView::World::Spatial::Display::CSpatialRect::operator|=(const EarthView::World::Spatial::Display::CSpatialRect &r)
				{
					*this = *this | r;
					return *this;
				}

				inline EarthView::World::Spatial::Display::CSpatialRect& EarthView::World::Spatial::Display::CSpatialRect::operator&=(const EarthView::World::Spatial::Display::CSpatialRect &r)
				{
					*this = *this & r;
					return *this;
				}

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::intersect(const EarthView::World::Spatial::Display::CSpatialRect &r) const
				{
					return *this & r;
				}

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::intersected(const EarthView::World::Spatial::Display::CSpatialRect &r) const
				{
					return intersect(r);
				}

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::unite(const EarthView::World::Spatial::Display::CSpatialRect &r) const
				{
					return *this | r;
				}

				inline EarthView::World::Spatial::Display::CSpatialRect EarthView::World::Spatial::Display::CSpatialRect::united(const EarthView::World::Spatial::Display::CSpatialRect &r) const
				{
					return unite(r);
				}

				inline bool operator==(const EarthView::World::Spatial::Display::CSpatialRect &r1, const EarthView::World::Spatial::Display::CSpatialRect &r2)
				{
					return FuzzyCompare(r1.xp, r2.xp) && FuzzyCompare(r1.yp, r2.yp)
						   && FuzzyCompare(r1.w, r2.w) && FuzzyCompare(r1.h, r2.h);
				}

				inline bool operator!=(const EarthView::World::Spatial::Display::CSpatialRect &r1, const EarthView::World::Spatial::Display::CSpatialRect &r2)
				{
					return !FuzzyCompare(r1.xp, r2.xp) || !FuzzyCompare(r1.yp, r2.yp)
						   || !FuzzyCompare(r1.w, r2.w) || !FuzzyCompare(r1.h, r2.h);
				}
			}
		}
	}
}
#endif

