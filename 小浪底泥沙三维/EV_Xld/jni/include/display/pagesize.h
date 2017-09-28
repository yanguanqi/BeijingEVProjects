#ifndef EARTHVIEW_WORLD_DISPLAY_PAGESIZE_H
#define EARTHVIEW_WORLD_DISPLAY_PAGESIZE_H

#include "display/display_config.h"
namespace EarthView{namespace World{namespace Display{
class EV_DISPLAY_DLL CPageSize : public EarthView::World::Core::CAllocatedObject
{
public:
    CPageSize();
    CPageSize(const CPageSize &sz);
    CPageSize(ev_real64 w, ev_real64 h);
	CPageSize(ev_real64 w, ev_real64 h, int dmPaperSize);
ev_private:
	CPageSize( EarthView::World::Core::CNameValuePairList* pList );
public:
    ev_bool isEmpty() const;
    ev_bool isValid() const;

    ev_real64 width() const;
    ev_real64 height() const;
    ev_void setWidth(ev_real64 w);
    ev_void setHeight(ev_real64 h);
	int paperSize()const {return dmPaperSize;}
 //   ev_void transpose();

    ev_void scale(ev_real64 w, ev_real64 h/*, Qt::AspectRatioMode mode*/);
 //   ev_void scale(const CPageSize &s, Qt::AspectRatioMode mode);

    CPageSize expandedTo(const CPageSize & other) const;
    CPageSize boundedTo(const CPageSize & other) const;

    CPageSize &operator+=(const CPageSize &);
    CPageSize &operator-=(const CPageSize &);
    CPageSize &operator*=(ev_real64 c);
    CPageSize &operator/=(ev_real64 c);

    friend inline ev_bool operator==(const CPageSize &, const CPageSize &);
    friend inline ev_bool operator!=(const CPageSize &, const CPageSize &);
    friend inline const CPageSize operator+(const CPageSize &, const CPageSize &);
    friend inline const CPageSize operator-(const CPageSize &, const CPageSize &);
    friend inline const CPageSize operator*(const CPageSize &, ev_real64);
    friend inline const CPageSize operator*(ev_real64, const CPageSize &);
    friend inline const CPageSize operator/(const CPageSize &, ev_real64);

private:
    ev_real64 wd;
    ev_real64 ht;
	int dmPaperSize;
};
ev_bool operator==(const CPageSize &s1, const CPageSize &s2)
{ return fuzzyCompare(s1.wd, s2.wd) && fuzzyCompare(s1.ht, s2.ht); }

inline ev_bool operator!=(const CPageSize &s1, const CPageSize &s2)
{ return !fuzzyCompare(s1.wd, s2.wd) || !fuzzyCompare(s1.ht, s2.ht); }

inline const CPageSize operator+(const CPageSize & s1, const CPageSize & s2)
{ return CPageSize(s1.wd+s2.wd, s1.ht+s2.ht); }

inline const CPageSize operator-(const CPageSize &s1, const CPageSize &s2)
{ return CPageSize(s1.wd-s2.wd, s1.ht-s2.ht); }

inline const CPageSize operator*(const CPageSize &s, ev_real64 c)
{ return CPageSize(s.wd*c, s.ht*c); }

inline const CPageSize operator*(ev_real64 c, const CPageSize &s)
{ return CPageSize(s.wd*c, s.ht*c); }
inline const CPageSize operator/(const CPageSize &s, ev_real64 c)
{
	return CPageSize(s.wd/c, s.ht/c);
}
}}}

#endif 
