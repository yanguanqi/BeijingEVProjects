#ifndef EARTHVIEW_WORLD_SPATIAL_CWFSSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_CWFSSERVER_H
#include "spatialserverclient/ogcspatialserver.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/wfsdataset.h"
#include "spatialobject/geometry/envelope.h"
#include "core/stringinterface.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 服务信息类
            /// </summary>
			class CWFSServerInfo;

			/// <summary>
            /// OGC WMS 数据集元数据类
            /// </summary>
			class CWFSLayerInfo;
			class EV_SPATIALSERVERCLIENT_DLL CWFSLayerRequestParam : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CWFSLayerRequestParam();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWFSLayerRequestParam();
				/// <summary>
				/// 获请求最大要素条数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回最大要素条数</returns>
				ev_int32 getMaxFeatures() const;
				/// <summary>
				/// 设置请求最大要素条数,-1表示客户端不限制
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setMaxFeatures(ev_int32 maxFeatures);
				/// <summary>
				/// 获取请求版本号1.0.0，1.1.1
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回请求版本号</returns>
				EVString getRequestVersion() const;
				/// <summary>
				/// 设置请求版本号1.0.0，1.1.1
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setRequestVersion(EVString version);
				/// <summary>
				/// 获取请求过滤条件
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回请求过滤条件</returns>
				EVString getRequestFilter() const;
				/// <summary>
				/// 设置是否使用范围查询
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setUsingRect(ev_bool b);
				/// <summary>
				/// 是否使用范围查询
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回是否使用范围查询</returns>
				ev_bool getUsingRect() const;
				/// <summary>
				/// 获取请求范围
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回是否请求范围</returns>
				EarthView::World::Spatial::Geometry::IEnvelope* getRequestRect();
				/// <summary>
				/// 设置请求过滤条件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setRequestFilter(EVString filter);
				/// <summary>
				/// 获得属性字符界面类的指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回内部类的指针</returns>
				EarthView::World::Core::CStringInterface *getStringInterfacePtr();
				/// <summary>
				/// 判断参数是否相同
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isEqual(CWFSLayerRequestParam * other);
				/// <summary>
				/// 从xml中恢复图层的配置
				/// </summary>
				/// <param name="element">xml要素</param>
				/// <returns></returns>
				ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
				/// <summary>
				/// 把图层的信息导出到xml中
				/// </summary>
				/// <param name=""></param>
				/// <returns>xml要素</returns>
				EarthView::World::Core::CXmlElement toXmlElement() const;

				CWFSLayerRequestParam& operator=(const CWFSLayerRequestParam& other);

				CWFSLayerRequestParam(const CWFSLayerRequestParam& obj);
ev_private:
				CWFSLayerRequestParam(EarthView::World::Core::CNameValuePairList* pList);
			protected:
				ev_int32 mdMaxFeatures;
				EVString mstrVersion;
				EVString mstrFilter;
				ev_bool  mbUsingRect;
				EarthView::World::Spatial::Geometry::CEnvelope mRequestRect;
				//属性面板
				EarthView::World::Core::CStringInterface* m_pStringInterface;

				class  CCmdWFSVersion: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSMaxFeatures: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSFilter: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSUsingRect: public EarthView::World::Core::CParamCommand
				{
				public:	
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSTop: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSBottom: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSLeft: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				class  CCmdWFSRight: public EarthView::World::Core::CParamCommand
				{
				public:						
					EVString doGet(const ev_void *target) const;						
					ev_void doSet( _out ev_void *target, const EVString &val);
				};
				static CCmdWFSVersion msCmdWFSVersion;
				static CCmdWFSMaxFeatures msCmdWFSMaxFeatures;
				static CCmdWFSFilter msCmdWFSFilter;
				static CCmdWFSUsingRect msCmdWFSUsingRect;
				static CCmdWFSTop msCmdWFSTop;
				static CCmdWFSBottom msCmdWFSBottom;
				static CCmdWFSLeft msCmdWFSLeft;
				static CCmdWFSRight msCmdWFSRight;
			};
			/// <summary>
            /// OGC WMS 服务类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWFSServer
				:public EarthView::World::Spatial::COGCSpatialServer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWFSServer();

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务器信息对象指针</returns>
				const EarthView::World::Spatial::CWFSServerInfo* getServerInfo() const; 

				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <returns>数据源KeyValue参数</returns>
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <returns>数据元信息集合对象指针，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(const EVString &name);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆对象指针</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;

				
				/// <summary>
                /// 打开指定图层
                /// </summary>
				/// <param name="name">图层名</param>
                /// <returns>所打开图层指针</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name);

				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
				/// <summary>
                /// 获取子图层数目
                /// </summary>
                /// <returns>图层数目</returns>
				ev_uint32 getLayerCount() const;

				//获取指定图层信息(只能获取到map一级)，layer一层用LayerInfo嵌套调用

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层信息</returns>
				const EarthView::World::Spatial::CWFSLayerInfo* getLayerInfo(_in ev_uint32 index) const;
				/// <summary>
				/// 生成当前数据源xml描述
				/// </summary>
				/// <returns>xml</returns>
				virtual EVString toXML() const;
				/// <summary>
				/// 获取指定图层请求参数
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定图层请求参数</returns>
				CWFSLayerRequestParam* getLayerRequestParam(_in ev_uint32 index);
				/// <summary>
				/// 获取指定图层请求参数
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定图层请求参数</returns>
				CWFSLayerRequestParam* getLayerRequestParam(_in EVString name);
			protected:
				///构造函数
				CWFSServer();
				ev_void iniLayerRequestParam(EarthView::World::Core::CXmlElement * element);

				friend class CDataSourceServerFactory;
				friend class COGCWFSDataSourceServerFactory;
			ev_private:
				CWFSServer(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
				EarthView::World::Core::ev_hashmap<EVString,CWFSLayerRequestParam> m_LayerRequestParam;
			};
		}
	}
}
#endif


