#ifndef EARTHVIEW_WORLD_ANNOFEATURECLASS_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATURECLASS_COFING_H
#include "annotation/config.h"
#include "annotation/annotationoperator.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/ifeatureiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class CAnnotationOperator;
				class CAnnoFeatureClassEditor;
				class CAnnoIterator;
				class EV_ANNOTATION_EXPORTS CAnnoFeatureClass
					: public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
					friend class CAnnoDataSource;
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CAnnoFeatureClass();
				public:
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集版本号</returns>
					virtual ev_uint64 getDataVersion() const;
					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集描述</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 获取数据集更新时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集更新时间</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// 判断是否包含子数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool hasSubDataset() const;
					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isBeginEditingOperation();
					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name=""></param>
					/// <returns>开启编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool beginEditingOperation();
					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>结束编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);


				public:
					/// <summary>
					/// 获取要素集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType	getFeatureClassType() const 
					{return  EarthView::World::Spatial::GeoDataset::FCT_ANNOTATION;}
					
					/// <summary>
					/// 获取要素集字段信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集字段信息</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields*		getFieldsRef() const;
					/// <summary>
					/// 获取要素集字段数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集字段数量</returns>
					virtual ev_uint32			getFieldCount() const;
					/// <summary>
					/// 通过索引获取字段
					/// </summary>
					/// <param name="index">索引处</param>
					/// <returns>返回索引处要素集字段</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// 通过名称查找字段
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>返回字段索引</returns>
					virtual ev_int32			findField(const EVString& fieldName) const;
					/// <summary>
					/// 获取记录要素集几何体信息的字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集几何体信息字段</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getGeometryField() const;
					/// <summary>
					/// 获取记录要素集ID信息的字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集ID信息字段</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField*		getIDField() const;
					
					/// <summary>
					/// 获取要素集最小外接矩形
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集最小外接矩形</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope*			getEnvelopeRef() const;
					/// <summary>
					/// 获取要素集空间参考信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素集空间参考信息</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
					/// <summary>
					/// 通过ID号获取要素
					/// </summary>
					/// <param name="id">ID号</param>
					/// <returns>返回要素</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature*	getFeature(ev_uint32 id);
					/// <summary>
					/// 通过过滤添加获取要素数量
					/// </summary>
					/// <param name="filter">过滤器</param>
					/// <returns>返回要素数量</returns>
					virtual ev_uint32	getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 在内存中创建要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回创建的要素</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature*	createFeatureBuffer();
					/// <summary>
					/// 插入要素
					/// </summary>
					/// <param name="feature">要素</param>
					/// <returns>若成功返回true；否则返回false</returns>
					virtual ev_bool		insert(EarthView::World::Spatial::GeoDataset::IFeature* feature);
					/// <summary>
					/// 插入内存缓冲区要素
					/// </summary>
					/// <param name="buffer">要素</param>
					/// <returns>返回结果代码</returns>
					virtual ev_uint32	insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
	
					/// <summary>
					/// 更新要素
					/// </summary>
					/// <param name="buffer">要素</param>
					/// <returns>若成功返回true；否则返回false</returns>
					virtual ev_bool		update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					/// <summary>
					///通过ID删除要素
					/// </summary>
					/// <param name="id">ID号</param>
					/// <returns>若成功返回true；否则返回false</returns>
					virtual ev_bool		deleteFeature(ev_uint32 id);
					/// <summary>
					///查询
					/// </summary>
					/// <param name="filter">过滤器</param>
					/// <returns>返回迭代器</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator*	query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					///通过迭代器查询下一条要素
					/// </summary>
					/// <param name="iterator">迭代器</param>
					/// <returns>返回要素</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeature*					nextFeature(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					/// <summary>
					///通过过滤器选择
					/// </summary>
					/// <param name="filter">过滤器</param>
					/// <returns>返回选择集</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection*	select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					///停止指定迭代器的查询
					/// </summary>
					/// <param name="iterator">迭代器</param>
					/// <returns></returns>
					virtual ev_void				endQuery(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					/// <summary>
					/// 创建一个数据表的代理对象。
					/// </summary>
					/// <returns>返回数据表</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
					/// <summary>
					///删除指定索引处的字段
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>若成功返回true；否则返回false</returns>
					virtual ev_bool deleteField(ev_uint32 index);
					/// <summary>
					///从流获取要素集信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>若成功返回true；否则返回false</returns>
					ev_bool fromBinary(EarthView::World::Core::CDataStream &stream);
					virtual EarthView::World::Spatial::Geometry::EVGeometryType		getGeometryType() const;
					ev_real64 getScale();
				ev_private:
					CAnnoFeatureClass(EarthView::World::Core::CNameValuePairList *pList);
					virtual ev_uint32   insertFeatureBuffers(ev_vector<const EarthView::World::Spatial::GeoDataset::IFeature*> buffers);
				ev_private:
				//protected:
					//CVectorFeatureClass();
					CAnnoFeatureClass(CAnnotationOperator* opr);

				private:
					
					
					virtual EarthView::World::Spatial::GeoDataset::IFeature*	getFeature2(ev_uint32 id);
					virtual ev_uint32	insertFeatureBuffer2(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					virtual ev_bool		update2(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					virtual ev_bool		deleteFeature2(ev_uint32 id);
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator*	query2(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					EarthView::World::Spatial::GeoDataset::IFeature*					nextFeature2(const EarthView::World::Spatial2D::GeoDataset::CAnnoIterator *iterator);
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection*	select2(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					ev_void fieldInitialization();
				private:
					/* 数据集名字 */
					EVString						m_Name;
					/* 别名，一般不用 */
					EVString						m_AliasName;
					/* 数据集类型 */
					EarthView::World::Spatial::GeoDataset::EVDatasetType				m_nType;
					/* 描述信息 */
					EVString						m_Description;
					/* 数据集的空间坐标系 */
					EarthView::World::Spatial::Geometry::ISpatialReference*			m_pSpatialReference;
					/* 数据集的范围 */
					EarthView::World::Spatial::Geometry::IEnvelope*					m_pDatasetExtent;
					/* 几何体字段名称 */
					EVString						m_ShapeFieldName;
					/* 几何类型 */
					EarthView::World::Spatial::Geometry::EVGeometryType				m_nGeometryType;
					///* 字段 */
					EarthView::World::Spatial::GeoDataset::IFields*					m_pFieldSet;
					
					ev_bool						m_IsEditing;
					ev_bool						m_IsEditingOperation;
					ev_bool						m_bUndo;

					ev_uint32					m_maxID;
					//
					CAnnotationOperator* m_impl;
					CAnnoFeatureClassEditor	*m_pEditor;

					EVString                 mSourceName;
					EVString                 mSourceField;
					ev_real64                mScale;
				};
			}
		}
	}
}

#endif 