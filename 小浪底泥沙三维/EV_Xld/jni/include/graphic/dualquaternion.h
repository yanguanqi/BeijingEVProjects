#ifndef __DualQuaternion_H__
#define __DualQuaternion_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include <mathengine/ev_math.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** Implementation of a dual quaternion, i.e. a rotation around an axis and a translation.
                This implementation may note be appropriate as a general implementation, but is intended for use with
                dual quaternion skinning.
            ****/
            class EV_GRAPHIC_DLL CDualQuaternion : public EarthView::World::Core::CBaseObject
            {
            public:
                //// Default constructor, initializes to identity rotation (aka 0?, and zero translation (0,0,0)
                inline CDualQuaternion ()
                    : w(1), x(0), y(0), z(0), dw(1), dx(0), dy(0), dz(0)
                {
                }

                //// Construct from an explicit list of values
                inline CDualQuaternion (Real fW, Real fX, Real fY, Real fZ,
                                        Real fdW, Real fdX, Real fdY, Real fdZ)
                    : w(fW), x(fX), y(fY), z(fZ), dw(fdW), dx(fdX), dy(fdY), dz(fdZ)
                {
                }

                //// Construct a dual quaternion from a transformation matrix
                inline CDualQuaternion(const EarthView::World::Spatial::Math::CMatrix4 &rot)
                {
                    this->fromTransformationMatrix(rot);
                }

                //// Construct a dual quaternion from a unit quaternion and a translation vector
                inline CDualQuaternion(const EarthView::World::Spatial::Math::CQuaternion &q, const EarthView::World::Spatial::Math::CVector3 &trans)
                {
                    this->fromRotationTranslation(q, trans);
                }

                //// Construct a dual quaternion from 8 manual w/x/y/z/dw/dx/dy/dz values
                inline CDualQuaternion(Real *valptr)
                {
                    memcpy(&w, valptr, sizeof(Real) * 8);
                }                
                //// Array accessor operator
                inline Real operator [] ( const ev_size_t i ) const
                {
                    assert( i < 8 );
                    return *(&w + i);
                }
                //// Array accessor operator
                inline Real &operator [] ( const ev_size_t i )
                {
                    assert( i < 8 );
                    return *(&w + i);
                }

                inline EarthView::World::Graphic::CDualQuaternion &operator= (const EarthView::World::Graphic::CDualQuaternion &rkQ)
                {
                    w = rkQ.w;
                    x = rkQ.x;
                    y = rkQ.y;
                    z = rkQ.z;
                    dw = rkQ.dw;
                    dx = rkQ.dx;
                    dy = rkQ.dy;
                    dz = rkQ.dz;

                    return *this;
                }
                inline ev_bool operator== (const EarthView::World::Graphic::CDualQuaternion &rhs) const
                {
                    return (rhs.w == w) && (rhs.x == x) && (rhs.y == y) && (rhs.z == z) &&
                           (rhs.dw == dw) && (rhs.dx == dx) && (rhs.dy == dy) && (rhs.dz == dz);
                }
                inline ev_bool operator!= (const EarthView::World::Graphic::CDualQuaternion &rhs) const
                {
                    return !operator==(rhs);
                }
                //// Pointer accessor for direct copying
                inline Real *ptr()
                {
                    return &w;
                }
                //// Pointer accessor for direct copying
                inline const Real *ptr() const
                {
                    return &w;
                }

                //// Exchange the contents of this dual quaternion with another.
                inline void swap(EarthView::World::Graphic::CDualQuaternion &other)
                {
                    std::swap(w, other.w);
                    std::swap(x, other.x);
                    std::swap(y, other.y);
                    std::swap(z, other.z);
                    std::swap(dw, other.dw);
                    std::swap(dx, other.dx);
                    std::swap(dy, other.dy);
                    std::swap(dz, other.dz);
                }

                //// Check whether this dual quaternion contains valid values
                inline ev_bool isNaN() const
                {
                    return EarthView::World::Spatial::Math::CMath::isNaN(w) || EarthView::World::Spatial::Math::CMath::isNaN(x) || EarthView::World::Spatial::Math::CMath::isNaN(y) || EarthView::World::Spatial::Math::CMath::isNaN(z) ||
                           EarthView::World::Spatial::Math::CMath::isNaN(dw) || EarthView::World::Spatial::Math::CMath::isNaN(dx) || EarthView::World::Spatial::Math::CMath::isNaN(dy) || EarthView::World::Spatial::Math::CMath::isNaN(dz);
                }
                //// Construct a dual quaternion from a rotation described by a EarthView::World::Spatial::Math::CQuaternion and a translation described by a EarthView::World::Spatial::Math::CVector3
                void fromRotationTranslation (const EarthView::World::Spatial::Math::CQuaternion &q, const EarthView::World::Spatial::Math::CVector3 &trans);

                //// Convert a dual quaternion into its two components, a EarthView::World::Spatial::Math::CQuaternion representing the rotation and a EarthView::World::Spatial::Math::CVector3 representing the translation
                void toRotationTranslation (EarthView::World::Spatial::Math::CQuaternion &q, EarthView::World::Spatial::Math::CVector3 &translation) const;
                //// Construct a dual quaternion from a 4x4 transformation matrix
                void fromTransformationMatrix (const EarthView::World::Spatial::Math::CMatrix4 &kTrans);

                //// Convert a dual quaternion to a 4x4 transformation matrix
                void toTransformationMatrix (EarthView::World::Spatial::Math::CMatrix4 &kTrans) const;
                Real w, x, y, z, dw, dx, dy, dz;
                /*****
                Function for writing to a stream. Outputs "CDualQuaternion(w, x, y, z, dw, dx, dy, dz)" with w, x, y, z, dw, dx, dy, dz
                being the member values of the dual quaternion.
                ****/
                inline EV_GRAPHIC_DLL friend std::ostream &operator <<
                ( std::ostream &o, const EarthView::World::Graphic::CDualQuaternion &q )
                {
                    o << "CDualQuaternion(" << q.w << ", " << q.x << ", " << q.y << ", " << q.z << ", " << q.dw << ", " << q.dx << ", " << q.dy << ", " << q.dz << ")";
                    return o;
                }

ev_private:
				inline CDualQuaternion(EarthView::World::Core::CNameValuePairList *pList)
				{
					if(pList)
					{
						if(pList->Count() == 8)
						{
							w = *(Real *)pList->GetAt("fW");
							x = *(Real *)pList->GetAt("fX");
							y = *(Real *)pList->GetAt("fY");
							z = *(Real *)pList->GetAt("fZ");
							dw = *(Real *)pList->GetAt("fdW");
							dx = *(Real *)pList->GetAt("fdX");
							dy = *(Real *)pList->GetAt("fdY");
							dz = *(Real *)pList->GetAt("fdZ");
						}
						else if(pList->Count() == 2)
						{
							EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion *)pList->GetAt("q");
							EarthView::World::Spatial::Math::CVector3 &trans = *(EarthView::World::Spatial::Math::CVector3 *)pList->GetAt("trans");
							this->fromRotationTranslation(q, trans);
						}
						else if(pList->Count() == 1)
						{
							if(pList->Exist("rot"))
							{
								EarthView::World::Spatial::Math::CMatrix4 &rot = *(EarthView::World::Spatial::Math::CMatrix4 *)pList->GetAt("rot");
								this->fromTransformationMatrix(rot);
							}
							else if(pList->Exist("valptr"))
							{
								Real *valptr = (Real *)pList->GetAt("valptr");
								memcpy(&w, valptr, sizeof(Real) * 8);
							}
						}
					}
					else
					{
						w = 1;
						x = 0;
						y = 0;
						z = 0;
						dw = 1;
						dx = 0;
						dy = 0;
						dz = 0;
					}
				}
            };
        }
    }
}

#endif

