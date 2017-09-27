#ifndef	EARTHVIEW_WORLD_SPATIAL_CWFSSERVERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWFSSERVERINFO_H
#include "spatialserverclient/serverinfo.h"
#include "core/xml.h"
#include "spatialobject/geometry/envelope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WFS 数据集元数据类
            /// </summary>
			class CWFSLayerInfo;
			/// <summary>
            /// 编码转换工具类
            /// </summary>
			class CStringFormatConvertor;
			class COGCWFSFilter_Capabilities : public EarthView::World::Core::CAllocatedObject
			{
				friend class CWFSServerInfo;
			public:
				COGCWFSFilter_Capabilities(){}
				ev_uint32 getGeometryOperandsCount();
				EVString getGeometryOperand(ev_uint32 index);

				ev_uint32 getSpatialOperatorsCount();
				EVString getSpatialOperator(ev_uint32 index);

				ev_uint32 getLogicalOperatorsCount();
				EVString getLogicalOperator(ev_uint32 index);

				ev_uint32 getComparisonOperatorsCount();
				EVString getComparisonOperator(ev_uint32 index);
ev_private:
				COGCWFSFilter_Capabilities(EarthView::World::Core::CNameValuePairList *pList){}
			protected:
				ev_vector<EVString> mGeometryOperands;
				ev_vector<EVString> mSpatialOperators;
				ev_vector<EVString> mLogicalOperators;
				ev_vector<EVString> mComparisonOperators;
			};
			/// <summary>
            /// OGC WFS 服务信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWFSServerInfo:
				public EarthView::World::Spatial::CServerInfo
			{
			public:
				/*------------------父类接口-----------------------*/
				/// <summary>
                /// 获取制定索引的元数据
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定元数据对象指针，外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(ev_uint32 index) const;
				/// <summary>
                /// 添加元数据
                /// </summary>
				/// <param name="info">元数据信息</param>
                /// <returns>数据集数目</returns>
				virtual ev_uint32 add(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info);

				/*------------------自有函数-----------------------*/
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWFSServerInfo();

				/// <summary>
                /// 获取更新序列标识
                /// </summary>
                /// <returns>更新序列标识</returns>
				const EVString& getUpdateSequence() const;

				/// <summary>
                /// 获取DescribeLayerFormat格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>DescribeLayerFormat格式</returns>
				const EVString getDescribeLayerFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取DescribeLayerFormat格式数目
                /// </summary>
                /// <returns>DescribeLayerFormat数目</returns>
				ev_uint32 getDescribeLayerFormatCount() const;

				/// <summary>
                /// 获取属性数据格式
                /// </summary>
                /// <returns>DescribeLayerFormat</returns>
				const EVString& getCapabilitiesFormat() const;

				/// <summary>
                /// 获取图片格式数目
                /// </summary>
                /// <returns>图片格式数目</returns>
				ev_uint32 getFormatCount() const;

				/// <summary>
                /// 获取要素格式数目
                /// </summary>
                /// <returns>要素格式数目</returns>
				ev_uint32 getInfoFormatCount() const;

				/// <summary>
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图片格式</returns>
				const EVString getFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定要素格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素格式</returns>
				const EVString getInfoFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层信息引用</returns>
				const EarthView::World::Spatial::CWFSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="layername">图层名称</param>
                /// <returns>指定图层信息引用</returns>
				const EarthView::World::Spatial::CWFSLayerInfo* getLayerInfoRef(_in EVString layername) const;
				
				
			protected:
				///解析xml文档
				
				static CWFSServerInfo* fromXML(_in const ev_char* xml);
				///默认构造函数
				CWFSServerInfo();
				CWFSServerInfo(_in const CWFSServerInfo& info);
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/*												以下为解析各要素及属性													*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				ev_void parseServiceIdentification(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseServiceProvider(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseOperationsMetadata(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseFeatureTypeList(_in EarthView::World::Core::CXmlElement* pElem);
				CWFSLayerInfo*  parseFeatureType(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseFilter_Capabilities(_in EarthView::World::Core::CXmlElement* pElem);
				EarthView::World::Spatial::Geometry::IEnvelope* parseWGS84Bounding(_in EarthView::World::Core::CXmlElement* pElem);
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CWFSServerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
					
				////map format
				vector<EVString> mlistDataFormat;
				////featureInfo format
				vector<EVString> mlistInfoFormat;
				///getCapabilities format
				EVString mstrCapabilityFormat;   
				///DescribeLayer format
				vector<EVString> mlistDescribeLayerFormat;
				///更新序列
				EVString mstrUpdateSequence;
				///max feature count
				ev_uint32 mdMaxConstraintCount;
				//Filter_Capabilities
				COGCWFSFilter_Capabilities mFilter_Capabilities;
				friend class CWFSServer;
				friend class CDataSourceServerFactory;
				friend class COGCWFSDataSourceServerFactory;
			};
		}
	}
}
#endif


