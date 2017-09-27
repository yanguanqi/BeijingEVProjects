#ifndef EARTHVIEW_WORLD_SPATIAL_CWMTSSERVERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWMTSSERVERINFO_H
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
            /// OGC 瓦片层数据类
            /// </summary>
			class CTileMatrix;

			/// <summary>
            /// OGC 瓦片数据集类
            /// </summary>
			class CTileMatrixSet;

			/// <summary>
            /// OGC WMTS元数据类
            /// </summary>
			class CWMTSLayerInfo;

			/// <summary>
            /// OGC WMTS其他维度描述信息类
            /// </summary>
			class COGCWMTSDimensionInfo;
			
			/// <summary>
            /// OGC 资源地址描述类
            /// </summary>
			class COGCResourceURL;

			/// <summary>
            /// OGC 渲染风格描述类
            /// </summary>
			class COGCWebServiceStyle;

			/// <summary>
            /// OGC 服务数据范围描述类
            /// </summary>
			class COGCWebServiceBoundingBox;

			/// <summary>
            /// 编码格式转换类
            /// </summary>
			class CStringFormatConvertor;

			/// <summary>
            /// OGC WMTS 专题类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMTSTheme
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///标识
				EVString mstrIdentifier;
				///标题列表
				vector<EVString> mlistTitle;
				///关键词列表
				vector<EVString> mlistKeyword;
				///描述列表
				vector<EVString> mlistAbstract;
				///子描述列表
				vector<EarthView::World::Spatial::COGCWMTSTheme*> mlistTheme;
				///所含图层名称列表
				vector<EVString> mlistLayerName;

				friend class CWMTSServerInfo;
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMTSTheme();

				/// <summary>
                /// 获取标识
                /// </summary>
                /// <returns>标识</returns>
				const EVString& getIdentifier() const;

				/// <summary>
                /// 获取标题数目
                /// </summary>
                /// <returns>标题数目</returns>
				ev_uint32 getTitleCount() const;

				/// <summary>
                /// 获取指定标题
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定标题</returns>
				const EVString getTitle(_in ev_uint32 index) const;

				/// <summary>
                /// 获取关键词数目
                /// </summary>
                /// <returns>关键词数目</returns>
				ev_uint32 getKeywordCount() const;

				/// <summary>
                /// 获取指定关键词
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定关键词</returns>
				const EVString getKeyword(_in ev_uint32 index) const;

				/// <summary>
                /// 获取描述数目
                /// </summary>
                /// <returns>描述数目</returns>
				ev_uint32 getAbstractCount() const;

				/// <summary>
                /// 获取指定描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>描述</returns>
				const EVString getAbstract(_in ev_uint32 index) const;

				/// <summary>
                /// 获取子Theme数目
                /// </summary>
                /// <returns>子Theme数目</returns>
				ev_uint32 getSubThemeCount() const;

				/// <summary>
                /// 获取指定子Theme引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定子Theme引用</returns>
				const EarthView::World::Spatial::COGCWMTSTheme* getSubThemeRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取所含图层数目
                /// </summary>
                /// <returns>所含图层数目</returns>
				ev_uint32 getRefLayerCount() const;

				/// <summary>
                /// 获取指定所含图层名
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层名</returns>
				const EVString getRefLayerName(_in ev_uint32 index) const;

				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMTSTheme* clone();
			protected:
				COGCWMTSTheme();
				void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				COGCWMTSTheme(_in EarthView::World::Core::CNameValuePairList* pList);
				friend class CWMTSServerInfo;
			};

			/// <summary>
            /// OGC WMTS专题集合类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMTSThemes
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				vector<EarthView::World::Spatial::COGCWMTSTheme*> mlistTheme;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMTSThemes();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMTSThemes();
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMTSThemes* clone();
				/// <summary>
                /// 获取指定索引的专题信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>克隆结果对象指针</returns>
				const EarthView::World::Spatial::COGCWMTSTheme* getThemeRef(_in ev_uint32 index)const;
				/// <summary>
                /// 获取专题个数
                /// </summary>
                /// <returns>专题个数</returns>
				ev_uint32 getThemeCount();
			ev_private:
				COGCWMTSThemes(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
            /// OGC WMTS服务信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSServerInfo:
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
				virtual ~CWMTSServerInfo();

				/// <summary>
                /// 获取更新序列标识
                /// </summary>
                /// <returns>更新序列标识</returns>
				const EVString& getUpdateSequence() const;

				/// <summary>
                /// 获取Theme数目
                /// </summary>
                /// <returns>Theme数目</returns>
				ev_uint32 getThemeCount() const;

				/// <summary>
                /// 获取指定Theme引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定Theme引用</returns>
				EarthView::World::Spatial::COGCWMTSTheme* getThemeRef(_in const ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层信息引用</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定图层信息
                /// </summary>
				/// <param name="layername">图层名称</param>
                /// <returns>指定图层信息引用</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef(_in const EVString& layername) const;
			
				
			protected:
				///从xml解析服务描述
				static CWMTSServerInfo* fromXML(_in const ev_char* xml);
				///构造函数
				CWMTSServerInfo();
				CWMTSServerInfo(_in const CWMTSServerInfo& info);

				CTileMatrixSet* getMatrixSetRef(const EVString& matrixSet);
				/////////////////////////////////////////////////////////////////////
				/*						以下为解析xml各要素							*/
				/////////////////////////////////////////////////////////////////////
				ev_void parseServiceIdentification(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseServiceProvider(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseOperationsMetadata(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseContents(_in EarthView::World::Core::CXmlElement* pElem);
				EarthView::World::Spatial::Geometry::CEnvelope* parseWGS84Bounding(_in EarthView::World::Core::CXmlElement* pElem);
				COGCWebServiceBoundingBox* parseBoundingBox(_in EarthView::World::Core::CXmlElement* pElem);
				EarthView::World::Spatial::CWMTSLayerInfo* parseLayer(_in EarthView::World::Core::CXmlElement* pElem);
				CTileMatrixSet* parseTileMatrixSet(_in EarthView::World::Core::CXmlElement* pElem);
				CTileMatrix* parseTileMatrix(_in EarthView::World::Core::CXmlElement* pElem);
				ev_void parseTileMatrixSetLink(_in EarthView::World::Core::CXmlElement* pElem,_inout EarthView::World::Spatial::CWMTSLayerInfo* layerInfo);
				COGCResourceURL* parseResourceURL(_in EarthView::World::Core::CXmlElement* pElem);
				COGCWMTSDimensionInfo* parseDimension(_in EarthView::World::Core::CXmlElement* pElem);
				EarthView::World::Spatial::COGCWMTSTheme* parseTheme(_in EarthView::World::Core::CXmlElement* pElem);
				COGCWebServiceStyle* parseStyle(_in EarthView::World::Core::CXmlElement *pElem);
				//////////////////////////////////////////////////////////////////////
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			protected:
				///Theme列表
				vector<EarthView::World::Spatial::COGCWMTSTheme*> mlistTheme;
				///MatrixSet列表
				vector<CTileMatrixSet*> mlistMatrixSet;
				///更新序列标识
				EVString mstrUpdateSequence;

			ev_private:
				CWMTSServerInfo(_in EarthView::World::Core::CNameValuePairList* pList);

				friend class CDataSourceServerFactory;
				friend class COGCWMTSDataSourceServerFactory;
				friend class CWMTSServer;
				friend class CEVSpatialServer;
				friend class CWMTSLayerInfo;
			};
		}
	}
}
#endif


