#ifndef _GEOGRID_H_
#define _GEOGRID_H_

#include "globecontrol/evglobecontrol_config.h"
#include "graphic/texturetextstyle.h"
#include "graphic/manualobject.h"
#include "graphic/colourvalue.h"
#include "spatial3dengine/globecamera.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class CTextureMovableText;
			class CTextureTextStyle;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
            namespace Controls
            {
                class CGlobeControl;
            }
        }
    }
}



namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
            struct SphericalBoundingBox
            {
                ev_real64 North;
                ev_real64 South;
                ev_real64 West;
                ev_real64 East;
            };

			class CCameraListenerInternal;

            class EV_GLOBECONTROL_DLL CGlobeGrid : public EarthView::World::Graphic::CManualObject
            {
			protected:
				friend class CCameraListenerInternal;
            public:
                CGlobeGrid(const EVString& name,EarthView::World::Spatial3D::Controls::CGlobeControl* control);
                virtual ~CGlobeGrid();
                
            ev_private:
                CGlobeGrid(EarthView::World::Core::CNameValuePairList* pList);

            public:

                EVString getMovableType() const;    

                virtual void clear();

                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);

				void show(EarthView::World::Graphic::CCamera *cam,ev_bool visible);

				void setTextStyle(const EarthView::World::Graphic::CTextureTextStyle& genericStyle,const EarthView::World::Graphic::CTextureTextStyle& tropicStyle);
				void setSheetTextStyle(const EarthView::World::Graphic::CTextureTextStyle& sheetStyle);
				void getSheetTextStyle(_out EarthView::World::Graphic::CTextureTextStyle& sheetStyle);
				void getTextStyle(EarthView::World::Graphic::CTextureTextStyle& genericStyle,EarthView::World::Graphic::CTextureTextStyle& tropicStyle);

				void setGridColor(const EarthView::World::Graphic::CColourValue& genericColor,const EarthView::World::Graphic::CColourValue& tropicColor);
				void getGridColor(EarthView::World::Graphic::CColourValue& genericColor,EarthView::World::Graphic::CColourValue& tropicColor);

				void refresh();
				void setSheetStringVisible(ev_bool visible);
				ev_bool getSheetStringVisible();
            protected:
				void refreshByCamera(EarthView::World::Graphic::CCamera *cam);
                void rebuildGridBuffer(EarthView::World::Graphic::CCamera* cam);
                void rebuildGridStrings(EarthView::World::Graphic::CCamera* cam);

                void initial();
                
            private:
                void computeInterval();
                static ev_real64 computeGridValue(ev_real64 interval);
                static void computeViewRange(ev_real64 lat, ev_real64 lon, SphericalBoundingBox& boundingBox);
                static ev_real64 doubleRemain(ev_real64 orig,ev_real64 devide);

                void rebuildTropiclineBuffer(EarthView::World::Graphic::CCamera* cam, ev_real64 latitude, const EVString& label, ev_int32& index,ev_real64 alt);
                void rebuildTropicLineBufferes(EarthView::World::Graphic::CCamera* cam,ev_int32& lastindex,ev_real64 alt);

                void rebuildTropicLineString(EarthView::World::Graphic::CCamera* cam,ev_real64 latitude, const EVString& label,ev_real64 alt);
                void rebuildTropicLineStrings(EarthView::World::Graphic::CCamera* cam,ev_real64 alt);

                static EVString toStringDms(ev_real64 degree);
                
                static EVString toStringDmsLon(ev_real64 degree)
                {
                    if (degree >= 0)
                        return toStringDms(degree) + "E";
                    else
                        return toStringDms(degree) + "W";
                }

                static EVString toStringDmsLat(ev_real64 degree)
                {
                    if (degree >= 0)
                        return toStringDms(degree) + "N";
                    else
                        return toStringDms(degree) + "S";
                }

				static ev_void copyTextStyle(EarthView::World::Graphic::CTextureTextStyle& destStyle,const EarthView::World::Graphic::CTextureTextStyle& sourStyle);
                ev_real64 getHeightAt(EarthView::World::Graphic::CCamera* cam,ev_real64 lat,ev_real64 lon);

				ev_void processLabel(EarthView::World::Graphic::CCamera* cam,const EVString& text,const EarthView::World::Spatial::Math::CVector3& pos,EarthView::World::Graphic::CTextureTextStyle* style);
				
            protected:
                SphericalBoundingBox m_visibleViewRange;
                ev_real64 m_latInterval;
                ev_real64 m_lonInterval;             
                bool m_containsPI;
				ev_uint32 m_currentIndex;

                EarthView::World::Spatial3D::Controls::CGlobeControl* mParentControl;                

                ev_real64 mHeading;
                ev_real64 mTilt;

                EVString mMaterialName;  

				CCameraListenerInternal* mCameraListener;
				ev_bool mbShowSheetString;

			protected:
				struct TextUnit
				{					
					EarthView::World::Graphic::CTextureMovableText* Movable;
					ev_bool Visible;
					Real VisibleDistance;
					EVString Text;

					ev_bool NeedRecover;

					TextUnit()
					{
						Movable = NULL;
						Visible = true;
						VisibleDistance = 0.0;

						NeedRecover = false;
					}					

					ev_bool operator<(const TextUnit& rhs)
					{
						return VisibleDistance < rhs.VisibleDistance;
					}
					
				};

				typedef map<EVString,TextUnit> TextUnits;
				TextUnits mLabels;

				EarthView::World::Graphic::CTextureTextStyle* mLongLatTextStyle;
				EarthView::World::Graphic::CTextureTextStyle* mTropicTextStyle;
				EarthView::World::Graphic::CTextureTextStyle* mSheetTextStyle;
				EarthView::World::Graphic::CColourValue mGenericLineColor;
				EarthView::World::Graphic::CColourValue mTropicLineColor;

				ev_void layoutLabels(EarthView::World::Graphic::CCamera* cam,const TextUnits& tus);
            };

        }
    }
}

#endif