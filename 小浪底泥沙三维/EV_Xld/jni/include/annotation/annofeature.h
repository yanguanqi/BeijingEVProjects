#ifndef EARTHVIEW_WORLD_ANNOFEATURE_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATURE_COFING_H
#include "annotation/config.h"
#include "annotation/annofeatureclass.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/ilabelengine.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_ANNOTATION_EXPORTS CAnnoFeature
					: public EarthView::World::Spatial::GeoDataset::IFeature
				{
					friend class CAnnoFeatureClass;
					friend class CAnnoIterator;
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~CAnnoFeature();
				public:
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
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// 找到指定字段名称的字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>如果找到，返回该索引，如果没有找到，返回-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// 获取指定索引的字段值
					/// </summary>
					/// <param name="value">输出，字段值</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;
					/// <summary>
					/// 获取要素的外包围盒
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 设置指定索引的字段值
					/// </summary>
					/// <param name="value">字段值</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
					/// <summary>
					/// 在数据集上删除要素
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool deleteFeature();
					/// <summary>
					/// 在数据集上保存要素
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool saveFeature();
					/// <summary>
					/// 获取要素的几何体对象
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
					EarthView::World::Spatial::GeoDataset::IFeature* clone() const;
					// --
					EVString getText();
					const EarthView::World::Spatial::Display::ISymbol *getSymbol();
					ev_bool getState();
					ev_void setSymbol(EarthView::World::Spatial::Display::ISymbol *ref_symbol);
					EarthView::World::Spatial::Display::CLabelElement * getElement();
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					CAnnoFeature(EarthView::World::Core::CNameValuePairList *pList);
					// --
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CAnnoFeature();
					CAnnoFeature(EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass *pFC);
					ev_void toStream(EarthView::World::Core::CDataStream &stream);
					ev_void initial();
					ev_void makeElementFromStream(EarthView::World::Core::CDataStream &stream);
					ev_void solveAttributes();
					/// <summary>
					/// 设置要素的几何体对象，内部拷贝该几何体
					/// </summary>
					/// <param name="geom">几何体对象</param>
					/// <returns></returns>
					virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
					virtual ev_void updateGeometry();
				protected:
					ev_int32			m_pOID;

					const EarthView::World::Spatial::Geometry::IGeometry		*m_pGeometry;
					
					const EarthView::World::Spatial::GeoDataset::IFields*		m_pFieldSet;

					/* 字段值映射 */
					ev_vector<EarthView::World::Core::CVariant> m_pValueVector;
					/* 统计那些字段需要更改 */ 
					ev_vector<ev_bool>	m_pDirtyVector;
					/* 是否破坏原有Geom数据 */
					ev_bool				m_bDirty;
					
					ev_bool					m_isBufferFeature;
					EarthView::World::Core::CBufferDataStream		m_memBuffer;
			//		ev_vector<ev_size_t>	m_indicator;
					ev_bool					m_isAttributesSolved;

					EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass*	m_pSrcDataset;

					EarthView::World::Spatial::Display::ISymbol * mpAnnoSymbol;

					EarthView::World::Spatial::Display::CLabelElement * mpLabelElement;
	
				};
			}
		}
	}
}

#endif 