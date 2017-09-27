#ifndef EARTHVIEW_SPATIAL_DISPLAY_EVBASICLABELENGINE_H
#define EARTHVIEW_SPATIAL_DISPLAY_EVBASICLABELENGINE_H
#include "spatialinterface/ilabelengine.h"
#include "spatialobject/geometry/polygon.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				struct tagPoint
				{
					double x;
					double y;
				};
				struct tagGridMarker
				{
					double dfPoint;
					int nRow;
					int nCol;
				};
				struct blockRangle
				{
					int minVal;
					int maxVal;
					int iD;
				};
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
					CEVBasicLabelEngine();
				public:
					
					ev_void addFeature(ev_int32 classID,
						ILabelProperty * labelProperty,
						const EarthView::World::Spatial::Geometry::IGeometry *geo,
						EVString &label,
						ev_int32 featureID);
		
					/// <summary>
					/// 添加要素(分数注记)
					/// </summary>
					virtual ev_void addFeature(ev_int32 classID,
						ILabelProperty * labelProperty,
						const EarthView::World::Spatial::Geometry::IGeometry *geo,
						EVString &label_numerator,
						EVString &label_denominator,
						ev_int32 featureID);

					EarthView::World::Spatial::Display::CLabelElements* getLabelElements();
	
					ev_void initialize(const EarthView::World::Spatial::Display::ISpatialDisplay * display,const EarthView::World::Spatial::Geometry::IEnvelope * extent);
					/// <summary>
					/// 是否初始化
					/// </summary>
					virtual ev_bool isInitialized();

					ev_void releaseResources();
					
					const EVString getEngineName();
					/// <summary>
					/// 添加障碍区域
					/// </summary>
					virtual ev_void addBarriers(const EarthView::World::Spatial::Geometry::IGeometry *geo);
				private:
					ev_void makeLabelOfMarker( _in const EarthView::World::Spatial::Geometry::IGeometry* geometry );
					ev_void makeLabelOfLine( _in const EarthView::World::Spatial::Geometry::IGeometry* geometry );
					ev_void makeLabelOfFill( const EarthView::World::Spatial::Geometry::IGeometry *geometry ,ev_bool isFraction = false);
					ev_void makeRingLabel( _in const EarthView::World::Spatial::Geometry::IEnvelope* devEnve,
						_in const EarthView::World::Spatial::Geometry::CPolygon* ply, _in ev_uint32 index );
					ev_void makeRingLabel_fraction( _in const EarthView::World::Spatial::Geometry::IEnvelope* devEnve,
						_in const EarthView::World::Spatial::Geometry::CPolygon* ply, _in ev_uint32 index );
					ev_real64 getPointV2( ev_int32 row, ev_int32 col, ev_bool **ppGrid, ev_int32 rowCount, ev_int32 colCount );
					ev_bool isPointInPolygon( ev_real64 x, ev_real64 y, vector<tagPoint*> *vPoly );
					ev_void simplifyPolygon( const EarthView::World::Spatial::Geometry::CCurveRing *pRing,
						ev_real64 dfValve, vector<tagPoint*> &vRing );
					ev_void clearObject( vector<tagPoint*> *pObj );
					ev_void destoryObject( vector<tagPoint*> *pObj );
					ev_bool checkUsed( tagPoint *pnt, double gap );
					ev_bool checkUsed( double dx, double dy, double dfHori, double dfVert );
					ev_void setUsed( tagPoint *pnt, double gap );
					ev_void setUsed( double dx, double dy, double dfHori, double dfVert );

					ev_void makeLabelOfMarker_fraction( _in const EarthView::World::Spatial::Geometry::IGeometry* geometry );
					ev_void makeLabelOfLine_fraction( _in const EarthView::World::Spatial::Geometry::IGeometry* geometry );
				private:
					EarthView::World::Spatial::Display::CLabelElements * m_labelElements;
					EarthView::World::Spatial::Display::ISpatialDisplay * m_display;
					EarthView::World::Spatial::Geometry::IEnvelope * m_Extent;
					bool **m_ppPixelGrid;
					int m_nWidth;
					int m_nHeight;

					vector<blockRangle*> *m_pxRange;
					vector<blockRangle*> *m_pyRange;
					vector<vector<tagPoint*>*> *m_pBarriersGeometry;
					vector<EarthView::World::Spatial::Geometry::IEnvelope *> *m_pBarriersGeometryEnvelope;
					
					int m_Index ;
					double m_nWidthFullExtent;
					double m_nHeightFullExtent;
					double m_xOff;
					double m_yOff;

					//marker label
					ev_real64 mdMarkerSize;
					bool m_bIsFullExtent;

					ev_int32 m_temp_classID;
					ev_int32 m_temp_featureID;
					ILabelProperty * m_temp_labelProperty;
					EarthView::World::Core::ev_wstring m_temp_label;
					EarthView::World::Core::ev_wstring m_temp_label_numerator;
					double m_temp_dfSize;
					int m_temp_dfSizeD2, m_temp_dfSizeM2;
					EarthView::World::Spatial::Display::ISymbol * m_temp_symbol;
					


				};			
			}
		}
	}
}
#endif


