#ifndef EARTHVIEW_WORLD_CARTO_TRACKINGLAYERAGENT_H
#define EARTHVIEW_WORLD_CARTO_TRACKINGLAYERAGENT_H
#include "spatialinterface/ispatialdisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
class CTrackingLayerAgent
{
protected:
	CTrackingLayerAgent(){};
public:
	virtual ev_void onDraw(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay) = 0;
	virtual ev_void unBind() = 0;
	virtual ~CTrackingLayerAgent(){};
};
			}}}}
#endif