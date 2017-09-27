#ifndef EARTHVIEW_WORLD_SPATIAL_CWFSLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_CWFSLAYER_H
#include "spatialserverclient/weblayer.h"
#include "spatialserverclient/webdataset.h"
#include "spatialserverclient/wfslayerinfo.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ifeatureclass.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 服务类
            /// </summary>
			class CWFSServer;

			/// <summary>
            /// OGC WMS 服务信息类
            /// </summary>
			class CWFSServerInfo;
			/// <summary>
            /// OGC WMS 数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWFSDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:		
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWFSDataset();

				/// <summary>
				/// 获取数据包围盒信息
				/// </summary>
				/// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelopeRef() const;

				/// <summary>
                /// 获取图层信息
                /// </summary>
                /// <returns>图层信息</returns>
				const EarthView::World::Spatial::CWFSLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务信息</returns>
				const EarthView::World::Spatial::CWFSServerInfo* getServerInfoRef() const;
				/// <summary>
                /// 设置时间信息
                /// </summary>
				/// <param name="datatime">时间信息</param>
                /// <returns></returns>
				ev_void setTime(_in const EVString& datatime);

				/// <summary>
                /// 获取时间信息
                /// </summary>
                /// <returns>时间信息</returns>
				const EVString& getTime() const;

				/// <summary>
                /// 获取图片格式数目
                /// </summary>
                /// <returns>图片格式数目</returns>
				ev_uint32 getFormatCount() const;

				/// <summary>
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图片格式</returns>
				const EVString getFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取要素格式数目
                /// </summary>
                /// <returns>要素格式数目</returns>
				ev_uint32 getInfoFormatCount() const;
				/// <summary>
				/// 获取要素几何体类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回要素几何体类型</returns>
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType();
				/// <summary>
                /// 获取指定要素格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素格式</returns>
				const EVString getInfoFormat(_in ev_uint32 index) const;
				/// <summary>
				/// 获取返回的异常消息格式数目
				/// </summary>
				/// <returns></returns>
				ev_uint32 getExceptionFormat() const;
				/// <summary>
				/// 获取数据集的空间坐标系参考对象
				/// </summary>
				/// <returns>空间坐标参考系对象，内部引用，无需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef();
				/// <summary>
				/// 获取指定索引的异常格式
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定异常格式</returns>
				const EVString getExceptionFormat(_in ev_uint32 index)const;
				/// <summary>
				/// 获取要素
				/// </summary>
				/// <param name="srs">坐标系</param>
				/// <param name="filter">查询器</param>
				/// <param name="maprect">查询范围，可为空</param>
				/// <returns>操作结果迭代器</returns>
				_extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator*  getFeature( _in const EVString& version, _in const EVString& srs,_in const EVString& filter,
					_in	const EarthView::World::Spatial::Geometry::IEnvelope* maprect);
				/// <summary>
				/// 获取要素数据集的字段集合
				/// </summary>
				/// <returns>字段集合对象，内部引用，无需释放</returns>
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() ;
			protected:
				///构造函数
				CWFSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				ev_void iniAttribuets();
ev_private:
				CWFSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				///对应的图层信息
				EarthView::World::Spatial::CWFSLayerInfo* mpWFSLayerInfo;
				///时间信息
				EVString mstrTime;
				///每次最多返回的要素数目
				ev_uint32 mnFeatureCountLimit;
				///fileds
				EarthView::World::Spatial::GeoDataset::IFields* mpFields;
				EVString msShapeField;
				EarthView::World::Spatial::Geometry::EVWKBGeometryType mnWKBType;
				ev_bool mbIsIntial;
				mutable EarthView::World::Spatial::Geometry::ISpatialReference* mpSrs;
				mutable EarthView::World::Spatial::Geometry::IEnvelope * mpEnvelope;

				friend class CWFSServer;
				friend class CWFSFeatureIterator;
				friend class CWFSFeature;
			};
			
			class EV_SPATIALSERVERCLIENT_DLL CWFSFeatureIterator : public EarthView::World::Spatial::GeoDataset::IFeatureIterator
			{
				friend class CWFSDataset;
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				virtual ~CWFSFeatureIterator();
			public:
				/// <summary>
				/// 获取下一条记录
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回要素</returns>
				virtual EarthView::World::Spatial::GeoDataset::IFeature* next();
ev_private:
				CWFSFeatureIterator(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				CWFSFeatureIterator(CWFSDataset* fc,EarthView::World::Core::CXmlFile* ref_pXML);
			private:
				CWFSFeatureIterator(CWFSFeatureIterator & iterator){};
		//		ev_vector<EarthView::World::Spatial::GeoDataset::IFeature*>mListFeatures;
				EarthView::World::Core::CXmlFile* m_pXML;
				void * mpEVgsWFSFeatureParse;
				EarthView::World::Spatial::CWFSDataset			*m_pFC;
				EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
				friend class CWFSDataset;
			};
			class EV_SPATIALSERVERCLIENT_DLL CWFSFeature : public EarthView::World::Spatial::GeoDataset::IFeature
			{
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				~CWFSFeature();
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
				/// 设置要素的几何体对象，内部拷贝该几何体
				/// </summary>
				/// <param name="geom">几何体对象</param>
				/// <returns></returns>
				virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
				/// <summary>
				/// 设置指定索引的字段值
				/// </summary>
				/// <param name="value">字段值</param>
				/// <param name="index">指定索引</param>
				/// <returns></returns>
				virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
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
				/// 克隆要素
				/// </summary>
				/// <returns>返回克隆的要素，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature * clone() const;
ev_private:
				CWFSFeature(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				CWFSFeature(CWFSDataset *pFC);
			protected:
				const EarthView::World::Spatial::Geometry::IGeometry		*m_pGeometry;
				const EarthView::World::Spatial::GeoDataset::IFields*		m_pFieldSet;
				/* 字段值映射 */
				ev_vector<EarthView::World::Core::CVariant> m_pValueVector;
				EarthView::World::Spatial::CWFSDataset*	m_pSrcDataset;

				friend class CWFSFeatureIterator;
			};
		}
	}
}
#endif



