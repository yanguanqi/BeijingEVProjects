#ifndef EARTHVIEW_WORLD_SPATIAL_CWMSLAYERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWMSLAYERINFO_H
#include "spatialserverclient/serverlayerinfo.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{

			/// <summary>
            /// OGC WMS 比例限制描述类
            /// </summary>
			struct OGCWMSScaleHint
			{
			public:
				/// <summary>
                /// 最大比例尺
                /// </summary>
				ev_real64 dfMax;
				/// <summary>
                /// 最小比例尺
                /// </summary>
				ev_real64 dfMin;
			};

			/// <summary>
            /// OGC WMS权威的资源地址描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMSAuthorityURL
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///名称
				EVString strAuthorityName;
				///资源
				EVString strHref;
				///ID值
				EVString strIdValue;
			public:
				/// <summary>
                /// 获取标识
                /// </summary>
                /// <returns>标识</returns>
				const EVString& getAuthorityName() const;

				/// <summary>
                /// 获取资源地址
                /// </summary>
                /// <returns>资源地址</returns>
				const EVString& getHref()const;

				/// <summary>
                /// 获取ID值
                /// </summary>
                /// <returns>ID值</returns>
				const EVString& getIDValue()const;

				/// <summary>
				/// 设置ID值
				/// </summary>
				/// <param name="value">id</param>
				/// <returns></returns>
				ev_void setIDValue(_in const EVString& value);

				/// <summary>
				/// 设置标识
				/// </summary>
				/// <param name="value">标识</param>
				/// <returns></returns>
				ev_void setAuthorityName(_in const EVString& value);

				/// <summary>
				/// 设置资源地址
				/// </summary>
				/// <param name="value">资源地址</param>
				/// <returns></returns>
				ev_void setHref(_in const EVString& value);

				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>新建对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMSAuthorityURL* clone();

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMSAuthorityURL();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMSAuthorityURL();
			ev_private:
				COGCWMSAuthorityURL(_in EarthView::World::Core::CNameValuePairList* pList);

				friend class CWMSLayerInfo;
				friend class CWMSServerInfo;
			};

			/// <summary>
            /// OGC WMS 资源描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMSAttribution
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///标题
				EVString strTitle;
				///网络资源
				EVString strOnlineHref;
				///
				ev_uint32 nLogoWidth;
				///
				ev_uint32 nLogoHeight;
				///
				EVString strLogoFormat;
				///
				EVString strLogoHref;
			public:
				/// <summary>
				/// 获取标题
				/// </summary>
				/// <returns>标题</returns>
				const EVString& getTitle() const;
				
				/// <summary>
				/// 设置标题
				/// </summary>
				/// <param name="value">标题</param>
				/// <returns></returns>
				ev_void setTitle(_in const EVString& value);

				/// <summary>
				/// 获取网络地址
				/// </summary>
				/// <returns>网址</returns>
				const EVString& getOnlineHref() const;
				
				/// <summary>
				/// 设置网络地址
				/// </summary>
				/// <param name="value">网址</param>
				/// <returns></returns>
				ev_void setOnlineHref(_in const EVString& value);
				
				/// <summary>
				/// 获取标识的宽度
				/// </summary>
				/// <returns>宽度</returns>
				ev_uint32 getLogoWidth();
				
				/// <summary>
				/// 设置标识宽度
				/// </summary>
				/// <param name="value">宽读</param>
				/// <returns></returns>
				ev_void setLogoWidth(_in ev_uint32 value);
				
				/// <summary>
				/// 获取标识高度
				/// </summary>
				/// <param name="value">高度</param>
				/// <returns></returns>
				ev_uint32 getLogoHeight();
				
				/// <summary>
				/// 设置标识高度
				/// </summary>
				/// <param name="value">高度</param>
				/// <returns></returns>
				ev_void setLogoHeight(_in ev_uint32 value);
				
				/// <summary>
				/// 获取标识的格式
				/// </summary>
				/// <returns>标识格式</returns>
				const EVString& getLogoFormat() const;
				
				/// <summary>
				/// 获取标识的格式
				/// </summary>
				/// <param name="value">标识格式</param>
				/// <returns></returns>
				ev_void setLogoFormat(_in const EVString& value);
				
				/// <summary>
				/// 获取标识的资源地址
				/// </summary>
				/// <returns>资源地址</returns>
				const EVString& getLogoHref() const;
				
				/// <summary>
				/// 设置标识的资源地址
				/// </summary>
				/// <param name="value">资源地址</param>
				/// <returns></returns>
				ev_void setLogoHref(_in const EVString& value);
				
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMSAttribution* clone();
				
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				COGCWMSAttribution();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~COGCWMSAttribution();
			ev_private:
				COGCWMSAttribution(_in EarthView::World::Core::CNameValuePairList* pList);

				friend class CWMSLayerInfo;
				friend class CWMSServerInfo;
			};
			
			/// <summary>
            /// OGC WMS 其他维度信息类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMSDimensionInfo
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				///名称
				EVString strName;
				////UCUM单位Unified Code for Units of Measure
				EVString strUnits;
				///
				EVString strUnitSymbol;
				////是WebServiceExtent的内容，由于其与Dimension一一对，因而合为一个
				///默认值
				EVString strDefaultValue;
				///
				EVString strMultipleValue;
				///
				EVString strNearestValue;
				///
				EVString strCurrentValue;
			public:
				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				const EVString& getName() const;
				
				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="value">名称</param>
				/// <returns></returns>
				ev_void setName(_in const EVString& value);
				
				/// <summary>
				/// 获取单位描述
				/// </summary>
				/// <returns>单位描述</returns>
				const EVString& getUnits() const;
				
				/// <summary>
				/// 设置单位
				/// </summary>
				/// <param name="value">单位名称</param>
				/// <returns></returns>
				ev_void setUnits(_in const EVString& value);
				
				/// <summary>
				/// 获取符号描述
				/// </summary>
				/// <returns>符号描述</returns>
				const EVString& getUnitSymbol() const;
				
				/// <summary>
				/// 设置符号描述
				/// </summary>
				/// <param name="value">符号描述</param>
				/// <returns></returns>
				ev_void setUnitSymbol(_in const EVString& value);
				
				/// <summary>
				/// 获取默认值
				/// </summary>
				/// <param name="value"></param>
				/// <returns>默认值</returns>
				const EVString& getDefaultValue() const;
				
				/// <summary>
				/// 设置默认值
				/// </summary>
				/// <param name="value">默认值</param>
				/// <returns></returns>
				ev_void setDefaultValue(_in const EVString& value);
				
				/// <summary>
				/// 获取倍数
				/// </summary>
				/// <returns>倍数</returns>
				const EVString& getMultipleValue() const;
				
				/// <summary>
				/// 设置倍数
				/// </summary>
				/// <param name="value">倍数</param>
				/// <returns></returns>
				ev_void setMultipleValue(_in const EVString& value);
				
				/// <summary>
				/// 获取最临近值
				/// </summary>
				/// <returns>最近值</returns>
				const EVString& getNearestValue() const;
				
				/// <summary>
				/// 设置最邻近值
				/// </summary>
				/// <param name="value">最近值</param>
				/// <returns></returns>
				ev_void setNearestValue(_in const EVString& value);
				
				/// <summary>
				/// 获取当前值
				/// </summary>
				/// <param name="value"></param>
				/// <returns>当前值</returns>
				const EVString& getCurrentValue() const;
				
				/// <summary>
				/// 设置当前值
				/// </summary>
				/// <param name="value">当前值</param>
				/// <returns></returns>
				ev_void setCurrentValue(_in const EVString& value);
				
				/// <summary>
                /// 复制
                /// </summary>
                /// <returns>新建对象指针</returns>
				_extfree EarthView::World::Spatial::COGCWMSDimensionInfo* clone();
				
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				COGCWMSDimensionInfo();
				
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~COGCWMSDimensionInfo();
			ev_private:
				COGCWMSDimensionInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			
				friend class CWMSLayerInfo;
				friend class CWMSServerInfo;
			};


			/// <summary>
            /// OGC WMS 数据集元数据类
			///注意：IDataMetaInfo获取的DataMetaInfo可能为目录层或数据层;				
			///		通过isCategoryLayer()函数判断该对象是否目录层，目录层对象的		
			///		getName()返回的值为空，不能被openDataset()打开,即返回NULL;			
			///		目录图层应包含数据层，数据层可打开为数据集。						
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSLayerInfo
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
                /// 获取指定投影名称
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定投影名称</returns>
				virtual const EVString getSRS(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图层支持投影数目
                /// </summary>
                /// <returns>投影数目</returns>
				virtual ev_uint32 getSRSCount() const;

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
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>图片格式</returns>
				const EVString getDataFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取图片格式数目
                /// </summary>
                /// <returns>图片格式数目</returns>
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
                /// 获取含有子图层数目
                /// </summary>
                /// <returns>子图层数目</returns>
				ev_uint32 getLayerCount() const;

				/// <summary>
                /// 获取指定子图层信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定子图层信息</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取指定子图层信息
                /// </summary>
				/// <param name="layername">子图层名称</param>
                /// <returns>指定子图层信息</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfoRef(_in const EVString layername) const;
				

				/// <summary>
                /// 获取元数据地址数目
                /// </summary>
                /// <returns>元数据地址数目</returns>
				ev_uint32 getMetaDataURLCount();

				/// <summary>
                /// 获取指定元数据地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定元数据地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getMetaDataURL(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取要素列表地址数目
                /// </summary>
                /// <returns>要素列表地址数目</returns>
				ev_uint32 getFeatureListURLCount();

				/// <summary>
                /// 获取指定要素列表地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素列表地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getFeatureListURL(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取指定地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定地址</returns>
				const EarthView::World::Spatial::COGCWMSAuthorityURL* getAuthorityURL(_in ev_uint32 index) const;

				/// <summary>
                /// 获取地址数目
                /// </summary>
                /// <returns>地址数目</returns>
				ev_uint32 getAuthorityCount();
				
				/// <summary>
                /// 获取指定维度信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定维度信息</returns>
				const EarthView::World::Spatial::COGCWMSDimensionInfo* getDimensionInfoRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取维度信息数目
                /// </summary>
                /// <returns>维度信息数目</returns>
				ev_uint32 getDimensionCount() const;

				/// <summary>
                /// 获取84坐标系的数据范围
                /// </summary>
                /// <returns>维度信息数目</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getLatLongBoundingBoxRef() const;
				
				/// <summary>
                /// 获取数据地址
                /// </summary>
                /// <returns>数据地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getDataURLRef() const;

				/// <summary>
                /// 获取比例尺限制
                /// </summary>
                /// <returns>比例尺限制</returns>
				const EarthView::World::Spatial::OGCWMSScaleHint* getWMSScaleHintRef() const;

				/// <summary>
                /// 获取属性
                /// </summary>
                /// <returns>属性</returns>
				const EarthView::World::Spatial::COGCWMSAttribution* getAttributionRef() const;
				
				/// <summary>
                /// 获取父图层信息
                /// </summary>
                /// <returns>父图层信息</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getParentLayerInfoRef() const;

				/// <summary>
                /// 获取是否可查询
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_bool* isQueryable() const;

				/// <summary>
                /// 获取所分级别
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_uint32* getCascaded() const;
				
				/// <summary>
                /// 是否不透明
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_bool* isOpaque() const;
				
				/// <summary>
                /// 是否不含子数据集
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_bool* isNoSubsets() const;
				
				/// <summary>
                /// 获取固定宽度
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_uint32* getFixedWidth() const;
				
				/// <summary>
                /// 获取固定高度
                /// </summary>
                /// <returns>NULL表示无此值，否则取值</returns>
				const ev_uint32* getFixedHeight() const;
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMSLayerInfo();

				/// <summary>
                ///是否是目录图层，目录图层没有name，不可被openDataset()打开，可通过其获取子LayerInfo;数据图层也可含有子数据图层
                /// </summary>
                /// <returns>true表示是目录层</returns>
				ev_bool isCategoryLayer()const;
			protected:
				///默认构造函数
				CWMSLayerInfo();
				///拷贝构造函数
				CWMSLayerInfo(_in const CWMSLayerInfo& wmslayerinfo);

				ev_bool getSRS(ev_uint32& index,EVString& srs);
				ev_bool getStyleDetailsRef(_in ev_uint32& index,EarthView::World::Spatial::COGCWebServiceStyle** style);
				ev_bool getDimensionInfoRef(_in ev_uint32& index,EarthView::World::Spatial::COGCWMSDimensionInfo** dimension);
				ev_bool getAuthorityURL(_in ev_uint32& index,EarthView::World::Spatial::COGCWMSAuthorityURL** info);
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CWMSLayerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				ev_bool mbIsCategoryLayer;
				/////////?????改成ServerInfo的引用？
				///图片格式列表引用
				vector<EVString>* mpListDataFormatRef;
				///要素格式列表引用
				vector<EVString>* mpListInfoFormatRef;

				///父结点指针
				EarthView::World::Spatial::CWMSLayerInfo* mpParent;

				///////图层的属性,可有可无
				///图层是否可查询
				ev_bool* mpQueryable;
				///
				ev_uint32* mpCascaded;
				///
				ev_bool* mpOpaque;
				///
				ev_bool* mpNoSubsets;
				///
				ev_uint32* mpFixedWidth;
				///
				ev_uint32* mpFixedHeight;

				///子图层数目
				ev_uint32 mnLayerCount;
				///子图层描述列表
				vector<EarthView::World::Spatial::CServerLayerInfo*> mlistLayerInfo;///允许嵌套		
				
				///支持的坐标系，在WMTS中每个图层只有一个
				vector<EVString> mlistSRS;		///坐标系

				///比例描述
				EarthView::World::Spatial::OGCWMSScaleHint* mpWMSScaleHint;

				///属性描述
				EarthView::World::Spatial::COGCWMSAttribution* mpAttribution;

				///其他维度信息
				vector<EarthView::World::Spatial::COGCWMSDimensionInfo*> mlistDimension;

				//////////map server
				EarthView::World::Spatial::COGCMetaDataURLInfo* mpDataURL;
				vector<EarthView::World::Spatial::COGCMetaDataURLInfo*> mlistMetaDataURL;
				vector<EarthView::World::Spatial::COGCMetaDataURLInfo*> mlistFeatureListURL;
				vector<EarthView::World::Spatial::COGCWMSAuthorityURL*> mlistAuthorityURL;
				
				friend class CWMSServerInfo;
				friend class CWMSServer;
			};
		}
	}
}
#endif


