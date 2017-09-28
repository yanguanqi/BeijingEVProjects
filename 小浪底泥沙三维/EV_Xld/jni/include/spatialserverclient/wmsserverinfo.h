#ifndef	EARTHVIEW_WORLD_SPATIAL_CWMSSERVERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWMSSERVERINFO_H
#include "spatialserverclient/serverinfo.h"
#include "core/xml.h"
#include "spatialobject/geometry/envelope.h"
// using namespace EarthView::World::Spatial::Geometry;
// using namespace EarthView::World::Spatial;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 数据集元数据类
            /// </summary>
			class CWMSLayerInfo;

			/// <summary>
            /// OGC 服务器端渲染风格描述类
            /// </summary>
			class COGCWebServiceStyle;
			
			/// <summary>
            /// OGC 元数据资源地址描述类
            /// </summary>
			class COGCMetaDataURLInfo;

			/// <summary>
            /// OGC WMS 用户自定义符号信息类
            /// </summary>
			struct OGCWMSUserDefinedSymbolization
			{
				/// <summary>
                /// 是否支持SLD
                /// </summary>
				ev_bool bSupportSLD;
				/// <summary>
                /// 是否用户图层
                /// </summary>
				ev_bool bUserLayer;
				/// <summary>
                /// 是否用户风格
                /// </summary>
				ev_bool bUserStyle;
				/// <summary>
                /// 是否远程WFS
                /// </summary>
				ev_bool bRemoteWFS;
			};

			/// <summary>
            /// 编码转换工具类
            /// </summary>
			class CStringFormatConvertor;

			/// <summary>
            /// OGC WMS 服务信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSServerInfo:
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
				virtual ~CWMSServerInfo();

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
                /// 获取用户自定义符号
                /// </summary>
                /// <returns>用户自定义符号</returns>
				const EarthView::World::Spatial::OGCWMSUserDefinedSymbolization* getUserDefinedSymbolizationRef() const;

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
				/// 获取图片的宽的最大值
				/// </summary>
				/// <returns>图片宽的最大值</returns>
				const ev_uint32 getImageMaxWidth() const;

				/// <summary>
				/// 获取图片的高的最大值
				/// </summary>
				/// <returns>图片高的最大值</returns>
				const ev_uint32 getImageMaxHeight() const;

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
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="layername">图层名称</param>
                /// <returns>指定图层信息引用</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfoRef(_in EVString layername) const;
				
				
			protected:
				///解析xml文档
				
				static CWMSServerInfo* fromXML(_in const ev_char* xml);
				///默认构造函数
				CWMSServerInfo();
				CWMSServerInfo(_in const CWMSServerInfo& info);
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/*												以下为解析各要素及属性													*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				ev_void parseCapabilityAttributes(_in EarthView::World::Core::CXmlElement *pRoot);
				ev_void parseServiceElements(_in EarthView::World::Core::CXmlElement *pElem);
				ev_void parseCapabilityElements(_in EarthView::World::Core::CXmlElement *pElem);
				COGCWebServiceStyle* parseStyle(_in EarthView::World::Core::CXmlElement *pElem);
				EarthView::World::Spatial::CWMSLayerInfo* parseLayer(_in EarthView::World::Core::CXmlElement *pElem, _in EarthView::World::Spatial::CWMSLayerInfo* pParentLayerInfo);
				EarthView::World::Spatial::Geometry::IEnvelope* parseLatLongBoundingBox(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* layerInfo,ev_bool isLatLong);
				ev_void parseSRS(_in EarthView::World::Core::CXmlElement *pElem,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo,ev_bool isSRS);
				ev_void parseBoundingBox(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseUserDefinedSymbolization(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseAttribution(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseScaleHint(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseDimension(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseAttributes(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseAuthorityAndIdentifier(_in EarthView::World::Core::CXmlElement *pElem,_in EarthView::World::Spatial::CWMSLayerInfo* parentLayerInfo,_inout EarthView::World::Spatial::CWMSLayerInfo* layerInfo);
				ev_void parseServiceHttpInfo(_in EarthView::World::Core::CXmlElement* pElem);
				COGCMetaDataURLInfo* parseMetaDataURL(_in EarthView::World::Core::CXmlElement* pElem);
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CWMSServerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				//图像的最大宽、高
				ev_uint32 mMaxWidth;
				ev_uint32 mMaxHeight;	
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
				///用户定义符号化参数，只支持SLD
				EarthView::World::Spatial::OGCWMSUserDefinedSymbolization* mpUserDefinedSymbolization;
				friend class CDataSourceServerFactory;
				friend class COGCWMSDataSourceServerFactory;
				friend class CWMSServer;
				friend class CEVSpatialServer;
			};
		}
	}
}
#endif


