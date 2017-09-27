#ifndef _DATASET_ITERATOR_H_H_
#define _DATASET_ITERATOR_H_H_

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialinterface/idatasetiterator.h"
#include "spatialinterface/idatametainfos.h"
#include "spatialinterface/idatasource.h"


namespace EarthView{
    namespace World{
        namespace Spatial{
			namespace GeoDataset{
///<summary>
///数据集迭代器
///</summary>
class EV_SPATIALDATABASE_DLL CDatasetIterator : public EarthView::World::Spatial::GeoDataset::IDatasetIterator
{
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CDatasetIterator();
	/// <summary>
	/// 下一个数据集对象，如果超出范围，这返回NULL
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataset * next();
	/// <summary>
	/// 获取迭代器中数据集的个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集的个数</returns>
	virtual ev_uint32 getSize() const;
	/// <summary>
	/// 获取迭代器中数据集的类型
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
ev_private:
	CDatasetIterator(EarthView::World::Core::CNameValuePairList *pList);
public:
	CDatasetIterator(EarthView::World::Spatial::GeoDataset::IDataSource* ref_ds,EarthView::World::Spatial::GeoDataset::EVDatasetType type);
private:
	EarthView::World::Spatial::GeoDataset::EVDatasetType	m_type;
	IDataMetaInfos	*m_pMetaInfos;
	ev_uint32		m_index;
	EarthView::World::Spatial::GeoDataset::IDataSource		*m_pDataSource;	
};






}}}} // End of Namespace

#endif //_DATASET_ITERATOR_H_H_

