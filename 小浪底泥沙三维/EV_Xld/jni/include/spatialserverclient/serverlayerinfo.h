#ifndef EARTHVIEW_WORLD_SPATIAL_CSERVERLAYERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CSERVERLAYERINFO_H
#include "spatialinterface/ienvelope.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/spatialserverclientenums.h"
#include "spatialinterface/idatametainfo.h"

// using namespace EarthView::World::Spatial::Geometry;
// using namespace EarthView::World::Spatial;
// using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// OGC 数据源描述信息类
			///适用于metaDataUrl\dataUrl\FeatureListUrl,后两者不含strType变量
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCMetaDataURLInfo
				:public EarthView::World::Core::CAllocatedObject
			{
				ev_private:
					COGCMetaDataURLInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
			public:
				/// <summary>
				///	类型
				/// </summary>
				EVString strType;
				/// <summary>
				///	格式
				/// </summary>
				EVString strFormat;
				/// <summary>
				///	资源地址
				/// </summary>
				EVString strHref;

				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCMetaDataURLInfo* clone()
				{
					EarthView::World::Spatial::COGCMetaDataURLInfo* pUrl = EV_NEW EarthView::World::Spatial::COGCMetaDataURLInfo;
					pUrl->strType = strType;
					pUrl->strFormat = strFormat;
					pUrl->strHref = strHref;
					return pUrl;
				}
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCMetaDataURLInfo(){}
			};

			
			//struct EV_SPATIALSERVERCLIENT_DLL WebServiceExtent////
			//{
			//	EVString strName;
			//	EVString strDefaultValue;
			//	EVString strMultipleValue;
			//	EVString strNearestValue;
			//	EVString strCurrentValue;
			//};

			/// <summary>
            /// OGC 数据集数据范围描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWebServiceBoundingBox
				:public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				COGCWebServiceBoundingBox(_in EarthView::World::Core::CNameValuePairList* pList);	
			private:
				/// <summary>
				///	投影方式
				/// </summary>
				EVString strName;
				/// <summary>
				///	x方向精度
				/// </summary>
				ev_real64 dfResx;
				/// <summary>
				///	y方向精度
				/// </summary>
				ev_real64 dfResy;
				/// <summary>
				///	范围
				/// </summary>
				EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope;

				friend class CWMSServerInfo;
				friend class CWMTSServerInfo;
				friend class CServerLayerInfo;
			public:

				/// <summary>
                /// 获取投影名称
                /// </summary>
                /// <returns>投影名称</returns>
				const EVString& getSRSName() const
				{
					return strName;
				}

				/// <summary>
                /// 获取x方向精度
                /// </summary>
                /// <returns>x方向精度</returns>
				ev_real64 getResX() const
				{
					return dfResx;
				}

				/// <summary>
                /// 获取y方向精度
                /// </summary>
                /// <returns>y方向精度</returns>
				ev_real64 getResY() const
				{
					return dfResy;
				}

				/// <summary>
                /// 获取数据范围
                /// </summary>
                /// <returns>数据范围</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getBoundingBox() const
				{
					return pEnvelope;
				}


				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWebServiceBoundingBox()
				{
					pEnvelope = NULL;
					dfResx = 0.0;
					dfResy = 0.0;
				}

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns>指定关键词</returns>
				~COGCWebServiceBoundingBox()
				{
					EV_DELETE pEnvelope;
				}

				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWebServiceBoundingBox* clone()
				{
					EarthView::World::Spatial::COGCWebServiceBoundingBox* pBox = EV_NEW EarthView::World::Spatial::COGCWebServiceBoundingBox;
					pBox->strName = strName;
					if(pEnvelope)
						pBox->pEnvelope = pEnvelope->clone();
					pBox->dfResx = dfResx;
					pBox->dfResy = dfResy;
					return pBox;
				}
			};

			/// <summary>
            /// OGC 图例信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWebServiceLegendURL
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				///	名称
				/// </summary>
				EVString strFormat;
				/// <summary>
				///	资源
				/// </summary>
				EVString strHref;
				//////////////////////////////////////////////////////////////
				/*						指针可能为空							*/
				//////////////////////////////////////////////////////////////
				/// <summary>
				///	最小比例尺分母
				/// </summary>
				ev_real64* pdfMinScaleDenominator;
				/// <summary>
				///	最大比例尺分母
				/// </summary>
				ev_real64* pdfMaxScaleDenominator;
				/// <summary>
				///	图片宽
				/// </summary>
				ev_uint32* pnWidth;
				/// <summary>
				///	图片高
				/// </summary>
				ev_uint32* pnHeight;
				friend class WebServiceStyle;
			public:

				/// <summary>
                /// 获取最小比例尺分母
                /// </summary>
                /// <returns>最小比例尺分母</returns>
				const ev_real64* getMinScaleDenominator()const
				{
					return pdfMinScaleDenominator;
				}

				/// <summary>
                /// 获取最大比例尺分母
                /// </summary>
                /// <returns>最大比例尺分母</returns>
				const ev_real64* getMaxScaleDenominator()const
				{
					return pdfMaxScaleDenominator;
				}

				/// <summary>
                /// 获取图片宽
                /// </summary>
                /// <returns>图片宽</returns>
				const ev_uint32* getWidth() const
				{
					return pnWidth;
				}

				/// <summary>
                /// 获取图片高
                /// </summary>
                /// <returns>图片高</returns>
				const ev_uint32* getHeight()const
				{
					return pnHeight;
				}

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWebServiceLegendURL()
				{
					pdfMinScaleDenominator = NULL;
					pdfMaxScaleDenominator = NULL;
					pnWidth = NULL;
					pnHeight = NULL;
				}

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWebServiceLegendURL()
				{
					if(pdfMinScaleDenominator)
						delete pdfMinScaleDenominator;
					if(pdfMaxScaleDenominator)
						delete pdfMaxScaleDenominator;
					if(pnWidth)
						delete pnWidth;
					if(pnHeight)
						delete pnHeight;
				}

				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>结果对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWebServiceLegendURL* clone()
				{
					EarthView::World::Spatial::COGCWebServiceLegendURL* pUrl = EV_NEW EarthView::World::Spatial::COGCWebServiceLegendURL;
					pUrl->strFormat = strFormat;
					pUrl->strHref = strHref;
					if(pdfMinScaleDenominator)
						pUrl->pdfMinScaleDenominator = new ev_real64(*pdfMinScaleDenominator);
					if(pdfMaxScaleDenominator)
						pUrl->pdfMaxScaleDenominator = new ev_real64(*pdfMaxScaleDenominator);
					if(pnWidth)
						pUrl->pnWidth = new ev_uint32(*pnWidth);
					if(pnHeight)
						pUrl->pnHeight = new ev_uint32(*pnHeight);
					return pUrl;
				}
				ev_private:
					COGCWebServiceLegendURL(_in EarthView::World::Core::CNameValuePairList* pList);	
			};

			/// <summary>
            /// OGC 地图渲染风格描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWebServiceStyle
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				////风格标识
				EVString strIdentifier;
				///风格标题列表
				vector<EVString> listTitle;
				///风格描述列表
				vector<EVString> listAbstract;
				///风格关键字列表
				vector<EVString> listKeyword;
				///风格图例列表
				vector<EarthView::World::Spatial::COGCWebServiceLegendURL*> listLegendURL;
				///风格页地址
				vector<EarthView::World::Spatial::COGCMetaDataURLInfo*> listStyleSheetURL;
				///是否默认
				ev_bool* pIsDefault;

				friend class CWMTSServerInfo;
				friend class CWMSServerInfo;
				friend class CServerLayerInfo;
			public:

				/// <summary>
                /// 获取风格标题数目
                /// </summary>
                /// <returns>风格标题数目</returns>
				ev_uint32 getTitleCount() const;

				/// <summary>
                /// 获取风格关键词数目
                /// </summary>
                /// <returns>风格关键词数目</returns>
				ev_uint32 getKeywordCount() const;

				/// <summary>
                /// 获取风格描述数目
                /// </summary>
                /// <returns>风格描述数目</returns>
				ev_uint32 getAbstractCount() const;

				/// <summary>
                /// 获取风格图例数目
                /// </summary>
                /// <returns>风格图例数目</returns>
				ev_uint32 getLegendURLCount() const;

				/// <summary>
                /// 获取风格页数目
                /// </summary>
                /// <returns>风格页数目</returns>
				ev_uint32 getStyleSheetURL() const;

				/// <summary>
                /// 获取风格标识
                /// </summary>
                /// <returns>风格标识</returns>
				const EVString& getIdentifier() const;

				/// <summary>
                /// 检测该风格是否默认
                /// </summary>
                /// <returns>该风格是否默认</returns>
				const ev_bool* isDefault() const;

				/// <summary>
                /// 获取指定的风格标题
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的风格标题</returns>
				const EVString getTitle(_in const ev_uint32 index) const;

				/// <summary>
                /// 获取指定的风格描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的风格描述</returns>
				const EVString getAbstract(_in const ev_uint32 index) const;

				/// <summary>
                /// 获取指定的描述关键词
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的描述关键词</returns>
				const EVString getKeyword(_in const ev_uint32 index) const;

				/// <summary>
                /// 获取指定的风格图例引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的风格图例引用</returns>
				const EarthView::World::Spatial::COGCWebServiceLegendURL* getLegendURLRef(_in const ev_uint32 index) const;

				/// <summary>
                /// 获取指定风格页引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>获取指定风格页引用</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getStyleSheetURLRef(_in const ev_uint32 index) const;

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWebServiceStyle();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWebServiceStyle();

				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>新对象的指针</returns>
				_extfree EarthView::World::Spatial::COGCWebServiceStyle* clone();
			ev_private:
				COGCWebServiceStyle(_in EarthView::World::Core::CNameValuePairList* pList);	
			};

			/// <summary>
			/// 字符编码转换工具类
			/// </summary>
			class CStringFormatConvertor;
			
			/// <summary>
            /// 空间数据元数据信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CServerLayerInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				///继承EarthView::World::Spatial::GeoDataset::IDataMetaInfo
				virtual EVString getName() const;//返回值同getLayerName
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>获取数据集类型</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				/*--------------以下为自有函数-------------*/
				/// <summary>
                /// 获取图层信息类型
                /// </summary>
                /// <returns>图层信息类型</returns>
				EarthView::World::Spatial::EVServerLayerInfoType getType() const;

				/// <summary>
                /// 获取图层名称
                /// </summary>
                /// <returns>图层名称</returns>
				const EVString& getLayerName() const;

				/// <summary>
                /// 获取指定图层标题
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层标题</returns>
				const EVString getLayerTitle(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图层标题数目
                /// </summary>
                /// <returns>标题数目</returns>
				ev_uint32 getLayerTitleCount() const;

				/// <summary>
                /// 获取图层描述数目
                /// </summary>
                /// <returns>图层描述数目</returns>
				ev_uint32 getLayerAbstractCount() const;

				/// <summary>
                /// 获取指定图层描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层描述</returns>
				const EVString getLayerAbstract(_in ev_uint32 index) const;///获取服务器图层描述
				
				/// <summary>
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图片格式</returns>
				virtual const EVString getDataFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图片格式数目
                /// </summary>
                /// <returns>图片格式数目</returns>
				virtual ev_uint32 getDataFormatCount() const;

				/// <summary>
                /// 获取指定要素格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素格式</returns>
				virtual const EVString getInfoFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取要素格式数目
                /// </summary>
                /// <returns>要素格式数目</returns>
				virtual ev_uint32 getInfoFormatCount() const;

				/// <summary>
                /// 获取指定图层描述关键字
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图层描述关键字</returns>
				const EVString getKeywords(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图层描述关键字数目
                /// </summary>
                /// <returns>图层描述关键字数目</returns>
				ev_uint32 getKeywordsCount() const;


				/// <summary>
                /// 获取其他数据范围描述数目
                /// </summary>
                /// <returns>其他数据范围描述数目</returns>
				virtual ev_uint32 getBoundingBoxCount() const;

				/// <summary>
                /// 获取指定其他投影数据范围描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定其他投影数据范围描述</returns>
				virtual const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef(_in ev_uint32 index)const;


				/// <summary>
                /// 获取风格数目
                /// </summary>
                /// <returns>风格数目</returns>
				virtual ev_uint32 getStyleCount() const;

				/// <summary>
                /// 获取指定风格名称
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定风格名称</returns>
				virtual const EVString getStyle(_in ev_uint32 index)const;

				/// <summary>
                /// 获取指定风格详细描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定风格详细描述</returns>
				virtual const EarthView::World::Spatial::COGCWebServiceStyle* getStyleDetailsRef(_in ev_uint32 index) const;


				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CServerLayerInfo();


			protected:
				///构造函数
				CServerLayerInfo();
				///拷贝构造函书
				CServerLayerInfo(_in const CServerLayerInfo& serverlayerinfo);
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CServerLayerInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
			protected:
				EarthView::World::Spatial::GeoDataset::EVDatasetType mnDatasetType;
				///图层信息类型
				EarthView::World::Spatial::EVServerLayerInfoType mnLayerInfoType;
				///图层名称：在wms中对应Name，在wmts中对应identifier
				EVString mstrLayerName;
				///图层标题
				vector<EVString> mlistLayerTitle;
				///图层描述
				vector<EVString> mlistLayerAbstract;
				///关键字
				vector<EVString> mlistKeywords;
				///风格
				vector<EarthView::World::Spatial::COGCWebServiceStyle*> mlistStyle;
				///wgs84下的经纬度范围(或相似坐标系)
				EarthView::World::Spatial::Geometry::IEnvelope* mpLatLongBoundingBox;
				///其他投影下的经纬度范围
				vector<EarthView::World::Spatial::COGCWebServiceBoundingBox*> mlistBoundingBox;

				friend class CServerInfo;
			};
		}
	}
}
#endif


