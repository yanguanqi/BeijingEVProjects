#ifndef _VECTOR_FEATURE_H_H_
#define _VECTOR_FEATURE_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/ifeature.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CVectorFeatureClass;
/// <summary>
/// 二维矢量要素类
/// </summary>
class EV_2DGEODATABSE_DLL CVectorFeature : public EarthView::World::Spatial::GeoDataset::IFeature
{
	friend class CVectorFeatureClass;
	friend class CFeatureIterator;
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CVectorFeature();
public:
	/// <summary>
	/// 获取要素ID
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回ID</returns>
	virtual ev_uint32 getID() const;
	/// <summary>
	/// 获取要素几何体类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素几何体类型</returns>
	virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
	/// <summary>
	/// 获取要素字段信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素字段信息</returns>
	virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
	/// <summary>
	/// 获取要素字段数
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素字段数</returns>
	virtual ev_uint32 getFieldCount() const;
	/// <summary>
	/// 通过索引获取字段
	/// </summary>
	/// <param name="index">第index个字段</param>
	/// <returns>返回字段</returns>
	virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
	/// <summary>
	/// 通过名称查找字段
	/// </summary>
	/// <param name="fieldName">字段名</param>
	/// <returns>返回字段索引</returns>
	virtual ev_int32 findField(const EVString& fieldName) const;
	/// <summary>
	/// 通过索引获取字段值
	/// </summary>
	/// <param name="value">输出参数：字段值</param>
	/// <param name="index">索引处</param>
	/// <returns>返回字段值</returns>
	virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;
	/// <summary>
	/// 获取要素几何体
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素几何体</returns>
	virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
	/// <summary>
	/// 获取要素几何体最小外接矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素几何体最小外接矩形</returns>
	virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
	/// <summary>
	/// 设置要素几何体
	/// </summary>
	/// <param name="geom">几何体</param>
	/// <returns></returns>
	virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
	/// <summary>
	/// 设置字段值
	/// </summary>
	/// <param name="value">字段值</param>
	/// <param name="index">索引处</param>
	/// <returns></returns>
	virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
	/// <summary>
	/// 删除要素
	/// </summary>
	/// <returns>若成功返回true；否则返回false</returns>
	virtual ev_bool deleteFeature();
	/// <summary>
	/// 保存要素
	/// </summary>
	/// <returns>若成功返回true；否则返回false</returns>
	virtual ev_bool saveFeature();
	/// <summary>
	/// 克隆要素
	/// </summary>
	/// <returns>返回克隆的要素，外部释放</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature * clone() const;
ev_private:
	CVectorFeature(EarthView::World::Core::CNameValuePairList *pList);
protected:
	CVectorFeature();
	CVectorFeature(CVectorFeatureClass *pFC);

	ev_void toStream(EarthView::World::Core::CDataStream &stream);
	ev_void initial();
	ev_void attach( CVectorFeatureClass *fc, const EarthView::World::Spatial::GeoDataset::IFields *fs );

protected:
	ev_int32			m_pOID;

	EarthView::World::Spatial::Geometry::IGeometry		*m_pGeometry;
	ev_real64			m_dfGeomLength;
	ev_real64			m_dfGeomArea;

	const EarthView::World::Spatial::GeoDataset::IFields*		m_pFieldSet;

	/* 字段值映射 */
	ev_vector<EarthView::World::Core::CVariant> m_pValueVector;
	/* 是否破坏原有Geom数据 */
	ev_bool				m_bDirty;

	ev_bool					m_isBufferFeature;

	ev_vector<ev_bool>	m_indicator;

	EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass*	m_pSrcDataset;

	ev_int32 mnBufferType;   // 0 evbuffer,1wkb
};



} //GeoDataset
} //Spatial
} //World
} //EarthView

#endif //_VECTOR_FEATURE_H_H_

