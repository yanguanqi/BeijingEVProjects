#ifndef EARTHVIEW_WORLD_ANNOTATIONBUILDER_COFING_H
#define EARTHVIEW_WORLD_ANNOTATIONBUILDER_COFING_H
#include "annotation/config.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/ifeature.h"
#include "spatialdisplay/spatialdisplay.h"
#include "annotation/annotationoperator.h"
#include "databaseutility/sqldatabase.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_ANNOTATION_EXPORTS CAnnotationBuilder
					: public EarthView::World::Core::CAllocatedObject
				{
					struct LabelInfo 
					{
						ev_bool state;
						EarthView::World::Spatial::Geometry::IGeometry * g;
						EarthView::World::Spatial::Display::ISymbol * symbol;
						ev_int32 featureID;
						EVString textString;
					};
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CAnnotationBuilder();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CAnnotationBuilder(EarthView::World::Spatial::Atlas::IMap *ref_map ,
						EarthView::World::Spatial::Atlas::IVectorLayer * ref_dataLayer,
						EarthView::World::Spatial::Display::ISpatialDisplay *ref_spatialDisplay,
						const EarthView::World::Spatial::Geometry::IEnvelope *extent,
						EarthView::World::Core::Database::CSqlDatabase	db);

					ev_bool build();
					/// <summary>
					/// 设置注记数据集名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					ev_void setName(const EVString &name);
					/// <summary>
					/// 设置是否通过选择集生成注记
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					ev_void setCreateAnnotationWithSelection(const ev_bool&b);
					/// <summary>
					/// 设置需要生成注记的要素的过滤条件
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					ev_void setWhereClause(const EVString &whereClause);
					/// <summary>
					/// 设置注记数据集比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					ev_void setScale(const ev_real64 &scale);
					/// <summary>
					/// 设置是否追加到已有数据集
					/// </summary>
					/// <param name="b">true表示追加</param>
					/// <returns></returns>
					ev_void setAppend(ev_bool b);
					/// <summary>
					/// 如果正在导出注记，停止操作
					/// </summary>
					/// <param name="b">true表示追加</param>
					/// <returns></returns>
					ev_void setTerminated();
				private:
					ev_bool createAnnoFeatureClass();
					ev_void insertALabel(const EarthView::World::Spatial::Display::CLabelElement * element);
					ev_void initialMapEnvironment(/*EarthView::World::Spatial::Geometry::IEnvelope * extent, ev_bool label = true, ev_bool annoLayer = true*/);
					ev_void initialAnnoLayerEnvironment(EarthView::World::Spatial::Atlas::ILayer * layer/*, EarthView::World::Spatial::Geometry::IEnvelope * extent*/);
					ev_void initialLayerLabelEnvironment(EarthView::World::Spatial::Atlas::ILayer * layer);
				ev_private:
					CAnnotationBuilder(EarthView::World::Core::CNameValuePairList* pList);
				private:
					EarthView::World::Spatial::Atlas::IVectorLayer * mpLayer;
					EarthView::World::Spatial::Atlas::IMap *mpMap;
					EarthView::World::Spatial::Display::ISpatialDisplay *mpDisplay;
					EarthView::World::Spatial::Display::ILabelProperty *mpLabelProperty;
					EarthView::World::Spatial::Display::ISymbol *mpSymbol;
					EarthView::World::Spatial::Geometry::IEnvelope *mpExtent;
					EVString mDatasetName;
					EVString mWherecLause;
					ev_real64 mScale;
					ev_real64 mRatio;
					ev_bool mbCreateWithSelection;
					ev_bool mbAppend;
					ev_bool mbIsSampleSrs;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationOperator * mpOperator;
					EarthView::World::Core::Database::CSqlDatabase		m_ddb;

					ev_bool mbIsProcessing;
					ev_bool mbCancel;
				};
			}
		}
	}
}

#endif 