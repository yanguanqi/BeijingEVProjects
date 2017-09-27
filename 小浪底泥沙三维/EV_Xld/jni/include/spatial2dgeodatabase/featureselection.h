#ifndef _CFEATURE_SELECTION_H_H_
#define _CFEATURE_SELECTION_H_H_
#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/ifeatureselection.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"



namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{
class CFeatureSelectionPrivate;
/// <summary>
/// 要素选择器，用于存放数据集中被选中的要素ID。
/// </summary>
class EV_2DGEODATABSE_DLL CFeatureSelection : public EarthView::World::Spatial::GeoDataset::IFeatureSelection
{
public:		
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="fc">要素集</param>
	/// <param name="flag">标记</param>
	/// <returns></returns>
	CFeatureSelection(EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass *ref_fc,ev_int32 flag);
	friend class CVectorFeatureClass;
	/// <summary>
	/// 默认析构函数
	/// </summary>
	virtual ~CFeatureSelection();
public:
	/// <summary>
	/// 获取要素数目
	/// </summary>
	/// <returns>要素数目</returns>
	virtual ev_uint32 getCount() const;
	/// <summary>
	/// 获取要素ID
	/// </summary>
	/// <param name="index">指定索引</param>
	/// <returns>要素ID</returns>
	virtual ev_uint32 getID(ev_uint32 index) const;
	/// <summary>
	/// 获取所有ID
	/// </summary>
	/// <param name="ids">输出，ID数组</param>
	/// <returns>要素ID个数</returns>
	virtual ev_uint32 getIDs(ev_uint32 * ids) const;
	/// <summary>
	/// 判断指定ID是否存在
	/// </summary>
	/// <param name="id">指定ID</param>
	/// <returns>存在，返回索引，不存在，返回-1</returns>
	virtual ev_int32 findID(ev_uint32 id) const;
	/// <summary>
	/// 在选择器中，再查询指定条件要素
	/// </summary>
	/// <param name="filter">指定条件</param>
	/// <returns>要素结果迭代器</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
	/// <summary>
	/// 在选择器中，再选择指定条件要素
	/// </summary>
	/// <param name="filter">指定条件</param>
	/// <returns>要素选择器</returns>
	virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
	/// <summary>
	/// 添加指定ID
	/// </summary>
	/// <param name="id">指定ID</param>
	/// <returns>true，成功；false，失败</returns>
	virtual ev_bool addID(ev_uint32 id);
	/// <summary>
	/// 添加ID数组
	/// </summary>
	/// <param name="id">ID数组</param>
	/// <param name="size">ID数组大小</param>
	/// <returns>添加个数</returns>
	virtual ev_uint32 addIDs(ev_uint32 * id,ev_uint32 size);
	/// <summary>
	/// 移除指定索引出的指定个数的ID
	/// </summary>
	/// <param name="index">指定索引</param>
	/// <param name="size">指定大小</param>
	/// <returns>成功移除数目</returns>
	virtual ev_uint32 remove(ev_uint32 index,ev_uint32 size);
	/// <summary>
	/// 移除所有的ID
	/// </summary>
	/// <returns>要素选择器</returns>
	virtual ev_uint32 clear();
	/// <summary>
	/// 取两个选择器的交集ID
	/// </summary>
	/// <param name="set">指定选择器</param>
	/// <returns></returns>
	virtual ev_void intersect(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
	/// <summary>
	/// 取两个选择器的不同ID
	/// </summary>
	/// <param name="set">指定选择器</param>
	/// <returns></returns>
	virtual ev_void difference(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
	/// <summary>
	/// 追加指定选择器ID
	/// </summary>
	/// <param name="set">指定选择器</param>
	/// <returns></returns>
	virtual ev_void append(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
	/// <summary>
	///通过迭代器查询下一条要素
	/// </summary>
	/// <param name="iterator">迭代器</param>
	/// <returns>返回要素</returns>
	_extfree EarthView::World::Spatial::GeoDataset::IFeature*	nextFeature(const EarthView::World::Spatial2D::GeoDataset::CFeatureIterator *iterator);
	/// <summary>
	///停止指定迭代器的查询
	/// </summary>
	/// <param name="iterator">迭代器</param>
	/// <returns></returns>
	virtual ev_void	endQuery(const EarthView::World::Spatial2D::GeoDataset::CFeatureIterator *iterator);
ev_private:
	CFeatureSelection(EarthView::World::Core::CNameValuePairList *pList);
protected:
	CFeatureSelection(EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass *fc);
	EVString getRestrictionString() const;
private:
	CFeatureSelection(CFeatureSelection & obj);
	ev_void fromStream(EarthView::World::Core::CDataStream &stream);
private:
	mutable ev_vector<ev_uint32> m_ids;
	mutable EarthView::World::Core::CReadWriteLock mLock;
	EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass *m_pFC;
	CFeatureSelectionPrivate* mPraviteData;
};



}}}} //End of namespaces

#endif  //_CFEATURE_SELECTION_H_H_
