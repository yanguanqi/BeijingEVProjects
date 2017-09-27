#ifndef EARTHVIEW_WORLD_DISPLAY_PAGERECT_H
#define EARTHVIEW_WORLD_DISPLAY_PAGERECT_H
#include "display/display_config.h"
#include "display/pagesize.h"
namespace EarthView{namespace World{namespace Display{
class EV_DISPLAY_DLL CPageRect : public EarthView::World::Core::CAllocatedObject
{
public:
    CPageRect() { x1 = y1 = 0; x2 = y2 = -1; }
    CPageRect(ev_real64 top, ev_real64 left, const CPageSize &page_size);
    CPageRect(ev_real64 left, ev_real64 top, ev_real64 width, ev_real64 height);
ev_private:
	CPageRect( EarthView::World::Core::CNameValuePairList* pList );
public:
    bool isValid() const;

    ev_real64 left() const;
    ev_real64 top() const;
    ev_real64 right() const;
    ev_real64 bottom() const;

    void setLeft(ev_real64 pos);
    void setTop(ev_real64 pos);
    void setRight(ev_real64 pos);
    void setBottom(ev_real64 pos);

 //   ev_void center(ev_real64 & x, ev_real64 & y) const;

    void moveCenter(ev_real64 x, ev_real64 y);

    inline void translate(ev_real64 dx, ev_real64 dy);
 //   inline CPageRect translated(ev_real64 dx, ev_real64 dy) const;

    void setRect(ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h);
    inline void getRect(ev_real64 *x, ev_real64 *y, ev_real64 *w, ev_real64 *h) const;

    inline void getCoords(ev_real64 *x1, ev_real64 *y1, ev_real64 *x2, ev_real64 *y2) const;

    ev_real64 width() const;
    ev_real64 height() const;

    CPageRect operator|(const CPageRect &r) const;
    CPageRect operator&(const CPageRect &r) const;
    CPageRect& operator|=(const CPageRect &r);
    CPageRect& operator&=(const CPageRect &r);

    bool contains(ev_real64 x, ev_real64 y) const; // inline methods, _don't_ merge these
    bool contains(ev_real64 x, ev_real64 y, bool proper) const;
 //   bool contains(const CPageRect &r, bool proper = false) const;
    CPageRect unite(const CPageRect &r) const;  // ### Qt 5: make QT4_SUPPORT
    CPageRect united(const CPageRect &other) const;
    CPageRect intersect(const CPageRect &r) const;  // ### Qt 5: make QT4_SUPPORT
    CPageRect intersected(const CPageRect &other) const;
    bool intersects(const CPageRect &r) const;

private:
	ev_real64 x1;
	ev_real64 y1;
	ev_real64 x2;
	ev_real64 y2;

	friend inline bool operator==(const CPageRect &, const CPageRect &);
	friend inline bool operator!=(const CPageRect &, const CPageRect &);
};
inline bool operator==(const CPageRect &, const CPageRect &);
inline bool operator!=(const CPageRect &, const CPageRect &);

/*****************************************************************************
  CPageRect inline member functions
 *****************************************************************************/

inline CPageRect::CPageRect(ev_real64 aleft, ev_real64 atop, ev_real64 awidth, ev_real64 aheight)
{
    x1 = aleft;
    y1 = atop;
    x2 = (aleft + awidth/* - 1*/);
    y2 = (atop + aheight/* - 1*/);
}

inline CPageRect::CPageRect(ev_real64 x, ev_real64 y, const CPageSize &abottomRight)
{
    x1 = x;
    y1 = y;
    x2 = abottomRight.width() + x;
    y2 = abottomRight.height() + y;
}

inline ev_real64 CPageRect::width() const
{
	ev_real64 width = x2 - x1; 
	if(width < 0)
		width = 0;
	return width;
}

inline ev_real64 CPageRect::height() const
{
	ev_real64 height = y2 - y1; 
	if(height < 0)
		height = 0;
	return height;
}

inline bool CPageRect::isValid() const
{ return x1 <= x2 && y1 <= y2; }

inline ev_real64 CPageRect::left() const
{ return x1; }

inline ev_real64 CPageRect::top() const
{ return y1; }

inline ev_real64 CPageRect::right() const
{ return x2; }

inline ev_real64 CPageRect::bottom() const
{ return y2; }

inline void CPageRect::setLeft(ev_real64 pos)
{ x1 = pos; }

inline void CPageRect::setTop(ev_real64 pos)
{ y1 = pos; }

inline void CPageRect::setRight(ev_real64 pos)
{ x2 = pos; }

inline void CPageRect::setBottom(ev_real64 pos)
{ y2 = pos; }

inline void CPageRect::translate(ev_real64 dx, ev_real64 dy)
{
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
}

inline void CPageRect::getRect(ev_real64 *ax, ev_real64 *ay, ev_real64 *aw, ev_real64 *ah) const
{
    *ax = x1;
    *ay = y1;
    *aw = x2 - x1 /*+ 1*/;
    *ah = y2 - y1 /*+ 1*/;
}

inline void CPageRect::setRect(ev_real64 ax, ev_real64 ay, ev_real64 aw, ev_real64 ah)
{
    x1 = ax;
    y1 = ay;
    x2 = (ax + aw /*- 1*/);
    y2 = (ay + ah /*- 1*/);
}

inline void CPageRect::getCoords(ev_real64 *xp1, ev_real64 *yp1, ev_real64 *xp2, ev_real64 *yp2) const
{
    *xp1 = x1;
    *yp1 = y1;
    *xp2 = x2;
    *yp2 = y2;
}


inline bool CPageRect::contains(ev_real64 ax, ev_real64 ay) const
{
    return contains(ax,ay, false);
}

inline CPageRect& CPageRect::operator|=(const CPageRect &r)
{
    *this = *this | r;
    return *this;
}

inline CPageRect& CPageRect::operator&=(const CPageRect &r)
{
    *this = *this & r;
    return *this;
}

inline CPageRect CPageRect::intersect(const CPageRect &r) const
{
    return *this & r;
}

inline CPageRect CPageRect::intersected(const CPageRect &other) const
{
    return intersect(other);
}

inline CPageRect CPageRect::unite(const CPageRect &r) const
{
    return *this | r;
}

inline CPageRect CPageRect::united(const CPageRect &r) const
{
     return unite(r);
}

inline bool operator==(const CPageRect &r1, const CPageRect &r2)
{
    return r1.x1==r2.x1 && r1.x2==r2.x2 && r1.y1==r2.y1 && r1.y2==r2.y2;
}

inline bool operator!=(const CPageRect &r1, const CPageRect &r2)
{
    return r1.x1!=r2.x1 || r1.x2!=r2.x2 || r1.y1!=r2.y1 || r1.y2!=r2.y2;
}
}}}
#endif // QRECT_H
