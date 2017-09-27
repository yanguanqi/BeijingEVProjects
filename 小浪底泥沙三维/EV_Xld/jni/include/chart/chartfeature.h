#ifndef EARTHVIEW_WORLD_CHART_CCHARTFEATURE_H
#define EARTHVIEW_WORLD_CHART_CCHARTFEATURE_H
#include "chartexports.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/idataset.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class CChartRender;
				class CChartSelectionRender;
				class CChartVectorRender;
				class CChartLabelRender;
				class CChartSymbolFactory;
			}
		}
	
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				/// <summary>
				/// 海图渲染坐标信息类
				/// </summary>
				class CChartCoordinatesInfo;

				/// <summary>
				/// 海图空间属性数据类
				/// </summary>
				class CSpatialValue;

				/// <summary>
				/// 海图数据集类
				/// </summary>
				class CChartDataset;
				
				/// <summary>
				/// 海图要素类
				/// </summary>
				class EVCHART_DLL CChartFeature
					:public EarthView::World::Spatial::GeoDataset::IFeature
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
					~CChartFeature();
					/// <summary>
					/// 获取要素ID
					/// </summary>
					/// <returns>ID号，一般情况下，大于0</returns>
					virtual ev_uint32 getID() const;
					/// <summary>
					/// 获取要素的几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 获取要素字段集合
					/// </summary>
					/// <returns>字段集合，内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
					/// <summary>
					/// 获取要素字段数目
					/// </summary>
					/// <returns>字段数目</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					/// 获取指定索引的要素字段
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>字段对象，内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const;
					/// <summary>
					/// 找到指定字段名称的字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>如果找到，返回该索引，如果没有找到，返回-1</returns>
					virtual ev_int32 findField(_in const EVString& fieldName) const;
					/// <summary>
					/// 获取指定索引的字段值
					/// </summary>
					/// <param name="value">输出，字段值</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,_in ev_uint32 index) const;
					/// <summary>
					/// 获取指定字段的字段值
					/// </summary>
					/// <param name="value">输出，字段值</param>
					/// <param name="name">字段名</param>
					/// <returns></returns>
					ev_void getValue(_out EarthView::World::Core::CVariant& value,_in const EVString& name) const;
					/// <summary>
					/// 获取要素的几何体对象
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
					/// <summary>
					/// 获取要素的外包围盒
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				   

					/// <summary>
				    /// 获取要素所属物标类名称
				    /// </summary>
				    /// <returns>所属物标类名称</returns>
					const EVString getClassName()const;

					/// <summary>
				    /// 获取某字段字符串型属性值
				    /// </summary>
				    /// <param name="name">字段名</param>
				    /// <returns>属性值</returns>
					const char* getStringValue(_in const EVString& name);
					/// <summary>
					/// 获取海图要素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>海图要素类型</returns>
					EarthView::World::Spatial::GeoDataset::EVChartGeomType getChartType();
					/// <summary>
					/// 获取最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					ev_uint32 getMinScale();
					/// <summary>
					/// 获取最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺</returns>
					ev_uint32 getMaxScale();
				protected:
					 /// <summary>
				    /// 获取所属数据集
				    /// </summary>
				    /// <param name=""></param>
				    /// <returns>源数据集</returns>
					const EarthView::World::Spatial::GeoDataset::IDataset* getSrcDatasetRef() const;

					CChartCoordinatesInfo* getDrawCoordinates();
					ev_bool getValue() const	;////从数据源获取
					//ev_int32 getSpatialComponentNum();///需要实现 -1为unknown
					///int,double,string,date
					/* s57数据中是否定义了该字段， */
					ev_bool isFieldDefined(_in const EVString& fieldName);
					/* 该字段值是否为空 */
					ev_bool isValueGiven(_in const EVString& fieldName);

					ev_int32 getIntValue(_in const EVString& name) const;

					ev_real64 getDoubleValue(_in const EVString& name) const;

					ev_void getValue(_out EarthView::World::Core::CVariant & value,_in const IField* field,_in const EVString& fieldName) const;

					const char* getStringValue(_in const EVString& name) const;

					const char*  getDateValue(_in const EVString& fieldName);

					bool getSpatialValue(_in const ev_char* fieldName,_out CSpatialValue& spatialValue);

					ev_uint32 getSpatialComponentNum();

					bool getStartAndEndPoint(_in ev_real64& x1,_in ev_real64& y1,_in ev_real64& x2,_in ev_real64& y2);


				protected:
					CChartFeature();
				ev_private:
					CChartFeature(EarthView::World::Core::CNameValuePairList *pList);

					ev_int32 mnOID;

					EVString mstrClassName;
					/* Geometry */
					mutable EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
					
					///第一次调用时会动态生成全部的值
					mutable ev_map<EVString,ev_char*>* mpListValues;
					/* 所包含的字段,为引用 */
					mutable EarthView::World::Spatial::GeoDataset::IFields* mpFieldSet;
					
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnv;

					EarthView::World::Spatial::GeoDataset::EVChartGeomType mnChartType;///1 point,2 line,3 area,255 collection,

					ev_uint32 mnMinScale;
					ev_uint32 mnMaxScale;
					/* 所属FeatureClass */
					CChartDataset* mpDataset;
					ev_int32 mnRefCount;
					mutable EarthView::World::Core::CReadWriteLock mLock;
					friend class CChartDataset;
					friend class CChartFeatureCreator;
					friend class EarthView::World::Spatial::Display::CChartRender;
					friend class EarthView::World::Spatial::Display::CChartSelectionRender;
					friend class EarthView::World::Spatial::Display::CChartVectorRender;
					friend class EarthView::World::Spatial::Display::CChartLabelRender;
					friend class EarthView::World::Spatial::Display::CChartSymbolFactory;

				};
				
			}
		}
	}
}
#endif


