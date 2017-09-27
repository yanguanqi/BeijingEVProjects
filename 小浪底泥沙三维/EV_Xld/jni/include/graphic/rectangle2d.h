#ifndef _Rectangle2D_H__
#define _Rectangle2D_H__
#include "graphic/graphic_config.h"
#include "simplerenderable.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** Allows the rendering of a simple 2D rectangle
            This class renders a simple 2D rectangle; this rectangle has no depth and
            therefore is best used with specific render queue and depth settings,
            like RENDER_QUEUE_BACKGROUND and 'depth_write off' for backdrops, and
            RENDER_QUEUE_OVERLAY and 'depth_check off' for fullscreen quads.
            ****/
            class EV_GRAPHIC_DLL CRectangle2D : public EarthView::World::Graphic::CSimpleRenderable
            {
            public:
                /***** Override this method to prevent parent transforms (rotation,translation,scale)
                ****/
                void getWorldTransforms(  EarthView::World::Spatial::Math::CMatrix4 *xform ) const;

                ///zxt updatefor v1.8
                void _initRectangle2D(bool includeTextureCoords, EarthView::World::Graphic::CHardwareBuffer::Usage vBufUsage);
            ev_private:
                CRectangle2D(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CRectangle2D();
                CRectangle2D(_in ev_bool includeTextureCoordinates);
                CRectangle2D(_in ev_bool includeTextureCoordinates, _in EarthView::World::Graphic::CHardwareBuffer::Usage vBufUsage);
                ////zxt updatefor v1.8
                CRectangle2D(const EVString &name);
                CRectangle2D(const EVString &name, bool includeTextureCoordinates);
                CRectangle2D(const EVString &name, bool includeTextureCoordinates, EarthView::World::Graphic::CHardwareBuffer::Usage vBufUsage);
                ~CRectangle2D();
                /***** Sets the corners of the rectangle, in relative coordinates.
                @param
                left Left position in screen relative coordinates, -1 = left edge, 1.0 = right edge
                @param top Top position in screen relative coordinates, 1 = top edge, -1 = bottom edge
                @param right Right position in screen relative coordinates
                @param bottom Bottom position in screen relative coordinates
                @param updateAABB Tells if you want to recalculate the AABB according to
                the new corners. If false, the axis aligned bounding box will remain identical.
                ****/
                void setCorners(_in Real left, _in Real top,  _in Real right, _in Real bottom, _in ev_bool updateAABB);
                void setCorners(_in Real left, _in Real top,  _in Real right, _in Real bottom);
                /***** Sets the normals of the rectangle
                ****/
                void setNormals(_in const EarthView::World::Spatial::Math::CVector3 &topLeft, _in const EarthView::World::Spatial::Math::CVector3 &bottomLeft, _in const EarthView::World::Spatial::Math::CVector3 &topRight, _in const EarthView::World::Spatial::Math::CVector3 &bottomRight);

                ////zxt updatefor v1.8

                /***** Sets the UVs of the rectangle
                @remarks
                Doesn't do anything if the rectangle wasn't built with texture coordinates
                ****/
                void setUVs( const EarthView::World::Spatial::Math::CVector2 &topLeft, const EarthView::World::Spatial::Math::CVector2 &bottomLeft, const EarthView::World::Spatial::Math::CVector2 &topRight, const EarthView::World::Spatial::Math::CVector2 &bottomRight);
                void setDefaultUVs();
                Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                Real getBoundingRadius() const;
            };

        }
    }
}

#endif


