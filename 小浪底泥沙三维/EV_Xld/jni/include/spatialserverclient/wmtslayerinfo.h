#ifndef EARTHVIEW_WORLD_SPATIAL_CWMTSLAYERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWMTSLAYERINFO_H
#include "spatialserverclient/serverlayerinfo.h"
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
			class CTileMatrixSet;

			/// <summary>
            /// OGC 瓦片层级描述信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCTileMatrixLimits
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///标识，与某一TileMatrix相同
				EVString strIdentifier;
				///最小行
				ev_uint32 nMinTileRow;
				///最大行
				ev_uint32 nMaxTileRow;
				///最小列
				ev_uint32 nMinTileCol;
				///最大列
				ev_uint32 nMaxTileCol;
			public:
				/// <summary>
                /// 设置唯一标识
                /// </summary>
				/// <param name="value">唯一标识</param>
                /// <returns></returns>
				ev_void setIdentifier(_in const EVString& value);
				/// <summary>
                /// 获取唯一标识
                /// </summary>
                /// <returns></returns>
				const EVString& getIdentifier()const;
				/// <summary>
                /// 设置最小行号
                /// </summary>
				/// <param name="value">最小行号</param>
                /// <returns></returns>
				ev_void setMinTileRow(_in ev_uint32 value);
				/// <summary>
                /// 获取最小行号
                /// </summary>
                /// <returns>最小行号</returns>
				ev_uint32 getMinTileRow();
				/// <summary>
                /// 设置最大行号
                /// </summary>
				/// <param name="value">最大行号</param>
                /// <returns></returns>
				ev_void setMaxTileRow(_in ev_uint32 value);
				/// <summary>
                /// 获取最大行号
                /// </summary>
                /// <returns>最大行号</returns>
				ev_uint32 getMaxTileRow();
				/// <summary>
                /// 设置最小列号
                /// </summary>
				/// <param name="value">最小列号</param>
                /// <returns></returns>
				ev_void setMinTileCol(_in ev_uint32 value);
				/// <summary>
                /// 获取最小列号
                /// </summary>
                /// <returns>最小列号</returns>
				ev_uint32 getMinTileCol();
				/// <summary>
                /// 设置最大列号
                /// </summary>
				/// <param name="value">最大列号</param>
                /// <returns></returns>
				ev_void setMaxTileCol(_in ev_uint32 value);
				/// <summary>
                /// 获取最大列号
                /// </summary>
                /// <returns>最大列号</returns>
				ev_uint32 getMaxTileCol();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCTileMatrixLimits();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCTileMatrixLimits();
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCTileMatrixLimits* clone();
			ev_private:
				COGCTileMatrixLimits(_in EarthView::World::Core::CNameValuePairList* pList);	
				friend class CWMTSServerInfo;
				friend class CWMTSLayerInfo;
				friend class COGCTileMatrixSetLimits;
			};

			/// <summary>
            /// OGC WMTS数据集描述信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCTileMatrixSetLink
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				vector<EarthView::World::Spatial::COGCTileMatrixLimits*> mlistTileMatrixLimits;
				EVString mstrTileMatrixSet;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCTileMatrixSetLink();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCTileMatrixSetLink();
				/// <summary>
                /// 获取数据集合的名称
                /// </summary>
                /// <returns>集合名称</returns>
				const EVString& getTileMatrixSet()const;
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCTileMatrixSetLink* clone();
				/// <summary>
                /// 获取数据范围描述数
                /// </summary>
                /// <returns>数据范围描述数目</returns>
				ev_uint32 getTileMatrixLimitsCount() const;

				/// <summary>
                /// 获取制定索引的数据范围引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定数据范围引用</returns>
				const EarthView::World::Spatial::COGCTileMatrixLimits* getTileMatrixLimitsRef(_in ev_uint32 index) const;
			ev_private:
				COGCTileMatrixSetLink(_in EarthView::World::Core::CNameValuePairList* pList);	
				friend class CWMTSServerInfo;	
				friend class CWMTSLayerInfo;
			};

			/// <summary>
            /// OGC 资源地址描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCResourceURL
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///格式
				EVString strFormat;
				///类型
				EVString strResourceType;
				///模板
				EVString strTemplate;
			public:
				/// <summary>
                /// 设置格式
                /// </summary>
				/// <param name="value">格式</param>
                /// <returns></returns>
				ev_void setFormat(_in const EVString& value);
				
				/// <summary>
                /// 获取格式
                /// </summary>
                /// <returns>格式</returns>
				const EVString& getFormat() const;
				
				/// <summary>
                /// 设置资源类型
                /// </summary>
				/// <param name="value">资源类型</param>
                /// <returns></returns>
				ev_void setResourceType(_in const EVString& value);
				
				/// <summary>
                /// 获取资源类型
                /// </summary>
                /// <returns>资源类型</returns>
				const EVString& getResourceType() const;
				
				/// <summary>
                /// 设置模板
                /// </summary>
				/// <param name="value">模板描述</param>
                /// <returns></returns>
				ev_void setTemplate(_in const EVString& value);
				
				/// <summary>
                /// 获取模板描述
                /// </summary>
                /// <returns>模板描述</returns>
				const EVString& getTemplate() const;
				
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCResourceURL* clone();

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCResourceURL();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCResourceURL();
			ev_private:
				COGCResourceURL(_in EarthView::World::Core::CNameValuePairList* pList);
				friend class CWMTSServerInfo;
				friend class CWMTSLayerInfo;
			};

			/// <summary>
            /// OGC wmts的其他维度信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMTSDimensionInfo
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///名称
				EVString strName;
				//Units of measure of dimensional axis
				EVString strUOM;
				///单位符号
				EVString strUnitSymbol;
				//标题列表
				vector<EVString> listTitle;
				///描述列表
				vector<EVString> listAbstract;
				///关键词列表
				vector<EVString> listKeyword;
				////是WebServiceExtent的内容，由于其与Dimension一一对，因而合为一个
				///
				EVString strDefault;
				///
				vector<EVString> listValue;
				///
				ev_bool* pCurrent;

				friend class CWMTSServerInfo;
				friend class CWMTSLayerInfo;
			public:
				/// <summary>
                /// 获取名称
                /// </summary>
                /// <returns>名称</returns>
				const EVString& getName() const;
				
				/// <summary>
                /// 获取测量单位
                /// </summary>
                /// <returns>测量单位</returns>
				const EVString& getUOM() const;
				
				/// <summary>
                /// 获取符号
                /// </summary>
                /// <returns>符号描述</returns>
				const EVString& getUnitSymbol() const;
				
				/// <summary>
                /// 获取默认值
                /// </summary>
				/// <param name="value"></param>
                /// <returns></returns>
				const EVString& getDefault() const;
				
				/// <summary>
                /// 是否当前值
                /// </summary>
                /// <returns>NULL表示无此值，否则按所指值</returns>
				const ev_bool* isCurrent() const;
				
				/// <summary>
                /// 获取指定索引标题
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定标题</returns>
				const EVString getTitle(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取标题数目
                /// </summary>
                /// <returns>标题数</returns>
				ev_uint32 getTitleCount() const;

				/// <summary>
                /// 获取指定索引的摘要
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定摘要</returns>
				const EVString getAbstract(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取摘要数目
                /// </summary>
				/// <param name="value"></param>
                /// <returns>摘要数目</returns>
				ev_uint32 getAbstractCount() const;

				/// <summary>
                /// 获取指定索引的关键词
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定关键词</returns>
				const EVString getKeyword(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取关键词个数
                /// </summary>
				/// <param name="value"></param>
                /// <returns></returns>
				ev_uint32 getKeywordCount() const;

				/// <summary>
                /// 获取指定索引的值
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定值</returns>
				const EVString getValue(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取值的个数
                /// </summary>
				/// <param name="value"></param>
                /// <returns></returns>
				ev_uint32 getValueCount() const;

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMTSDimensionInfo();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMTSDimensionInfo();
	
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMTSDimensionInfo* clone();
			ev_private:
				COGCWMTSDimensionInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
            /// OGC WMTS 服务信息类
            /// </summary>
			class CWMTSServerInfo;

			/// <summary>
            /// OGC WMTS 数据集元数据类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSLayerInfo
				:public EarthView::World::Spatial::CServerLayerInfo
			{
			public:
				
				/*--------------------------继承自IDataMetaInfo---------------------*/
				/// <summary>
                /// 获取范围
                /// </summary>
                /// <returns>经纬度范围(wgs84或相似坐标系)</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

				/// <summary>
                /// 参考坐标系
                /// </summary>
                /// <returns>NULL（所支持的坐标系不定）</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/*-------------------------------自有-------------------------------*/
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMTSLayerInfo();
				
				/// <summary>
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图片格式</returns>
				const EVString getDataFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图片数目
                /// </summary>
                /// <returns>图片数目</returns>
				ev_uint32 getDataFormatCount() const;

				/// <summary>
                /// 获取指定要素格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素格式</returns>
				const EVString getInfoFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取要素格式数目
                /// </summary>
                /// <returns>要素格式数目</returns>
				ev_uint32 getInfoFormatCount() const;

				/// <summary>
                /// 获取指定元数据名称
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定元数据名称</returns>
				const EVString getMetaData(_in ev_uint32 index)const;

				/// <summary>
                /// 获取元数据数目
                /// </summary>
                /// <returns>元数据数目</returns>
				ev_uint32 getMetaDataCount() const;

				/// <summary>
                /// 获取指定资源地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定资源地址</returns>
				const EarthView::World::Spatial::COGCResourceURL* getResourceURL(_in ev_uint32 index)const;

				/// <summary>
                /// 获取资源地址数目
                /// </summary>
                /// <returns>资源地址数目</returns>
				ev_uint32 getResourceURLCount() const;

				/// <summary>
                /// 获取指定其他维度信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定其他维度信息</returns>
				const EarthView::World::Spatial::COGCWMTSDimensionInfo* getDimensionInfo(_in ev_uint32 index)const;

				/// <summary>
                /// 获取其他获取维度信息数目
                /// </summary>
                /// <returns>其他获取维度信息数目</returns>
				ev_uint32 getDimensionInfo() const;

				/// <summary>
                /// 获取该图层TileMatrixSet数目
                /// </summary>
                /// <returns>该图层TileMatrixSet数目</returns>
				ev_uint32 getTileMatrixSetLinkCount() const;

				/// <summary>
                /// 获取指定CTileMatrixSetLink
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定CTileMatrixSetLink</returns>
				const EarthView::World::Spatial::COGCTileMatrixSetLink* getTileMatrixSetLinkRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定CTileMatrixSetLink
                /// </summary>
				/// <param name="tilematrixset">tilematrixset名称</param>
                /// <returns>指定CTileMatrixSetLink</returns>
				const EarthView::World::Spatial::COGCTileMatrixSetLink* getTileMatrixSetLinkRef(_in const EVString& tilematrixset) const;

				/// <summary>
                /// 获取指定EarthView::World::Spatial::CTileMatrixSet
                /// </summary>
				/// <param name="tilematrixset">tilematrixset名称</param>
                /// <returns>指定EarthView::World::Spatial::CTileMatrixSet</returns>
				const EarthView::World::Spatial::CTileMatrixSet* getTileMatrixSetRef(_in const EVString& tilematrixset) const;

				///// <summary>
				///// 获取84坐标下数据范围
			    ///// </summary>
				///// <returns>数据范围</returns>
				//const EarthView::World::Spatial::Geometry::IEnvelope* getWGS84Envelope() const;

				///for EVWebService only
				///获取开始级别
				///ev_int32 getStartLevel() const;
				///获取结束级别
			///	ev_int32 getEndLevel() const;
				///ev_void getOriginPoint(_out ev_real64& x, _out ev_real64& y);
			protected:
				///构造函数
				CWMTSLayerInfo();
				///拷贝构造函数
				CWMTSLayerInfo(_in CWMTSLayerInfo& wmtsLayerInfo);
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CWMTSLayerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				///相关服务信息指针
				CWMTSServerInfo* mpParentServer;
				///记录瓦片信息引用
				vector<EarthView::World::Spatial::COGCTileMatrixSetLink*> mlistMatrixSetLink;
				/*///图层范围,到上一层
				EarthView::World::Spatial::Geometry::IEnvelope* mpBoundingBox;*/

				///for EVWebService only，未实现
				ev_int32 mnStartLevel;
				ev_int32 mnEndLevel;
				ev_real64 mdfOriginPointX;
				ev_real64 mdfOriginPointY;

				///元数据名称列表
				vector<EVString> mlistMetaData;
				///图片格式的名称
				vector<EVString> mlistDataFormat;////tile
				///要素格式名称
				vector<EVString> mlistInfoFormat;////featureInfo

				///其他维度信息列表
				vector<EarthView::World::Spatial::COGCWMTSDimensionInfo*> mlistDimensionInfo;
				///资源列表
				vector<EarthView::World::Spatial::COGCResourceURL*> mlistResourceURL;
				friend class CWMTSServerInfo;
				friend class CWMTSServer;
			};
		}
	}
}
#endif


