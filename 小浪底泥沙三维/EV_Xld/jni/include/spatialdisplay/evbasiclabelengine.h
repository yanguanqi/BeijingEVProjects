#ifndef EARTHVIEW_SPATIAL_DISPLAY_EVBASICLABELENGINE_H
#define EARTHVIEW_SPATIAL_DISPLAY_EVBASICLABELENGINE_H
#include "spatialinterface/ilabelengine.h"
#include "spatialobject/geometry/polygon.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				
				class CEVBasicLabelEngine :public ILabelEngine
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CEVBasicLabelEngine();
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CEVBasicLabelEngine(ISpatialDisplay* parentDisplay);
				public:
					ev_bool addFeature(ev_int32 classID,
						ILabelProperty * labelProperty,
						const EarthView::World::Spatial::Geometry::IGeometry *geo,
						EVString &label,
						ev_int32 featureID,
						const EarthView::World::Spatial::Display::ISymbol* featureSymbol);
		
					EarthView::World::Spatial::Display::CLabelElements* getLabelElements();
	
					ev_void initialize(const EarthView::World::Spatial::Display::ISpatialDisplay * display,const EarthView::World::Spatial::Geometry::IEnvelope * extent);
					

					ev_void releaseResources();
					
					const EVString getEngineName();
					/// <summary>
					/// 添加障碍区域
					/// </summary>
					virtual ev_void addBarriers(const EarthView::World::Spatial::Geometry::IGeometry *geo);
					virtual ev_bool checkUsed( double dx, double dy, double dfHori, double dfVert);
					virtual ev_void setUsed( double dx, double dy, double dfHori, double dfVert);
				private:
					ev_void checkAndInitialized();
					class CEVBasicLabelEnginePrivate;
					CEVBasicLabelEnginePrivate* mpPrivate;
					
				};			
			}
		}
	}
}
#endif


