#ifndef EARTHVIEW_WORLD_SPATIAL_EVMETAOBJECTINFO_H
#define EARTHVIEW_WORLD_SPATIAL_EVMETAOBJECTINFO_H
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialobject/geometry/envelope.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/altitudemode.h"
#include "spatialinterface/ilayer.h"
#include "core/variant.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			//class CEVSpatialServer;
			//class SimpleFillSymbol;
			//class SimpleLineSymbol;
			//class SimpleMarkerSymbol;

			/// <summary>
			/// EarthView服务支持的坐标点串信息类
			/// </summary>	
			class CServerPointList;
			//////////////////////////////////////////////////////
			/*		CClientBaseDefine:公共枚举和结构体定义		*/
			//////////////////////////////////////////////////////

			/// <summary>
			/// EarthView服务支持的影像数据类型枚举
			/// </summary>
			enum EVSSCImageType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_ImageType_Unknown	=	0,
				/// <summary>
				/// JPG格式
				/// </summary>
				SSC_ImageType_Jpg		=	1,
				/// <summary>
				/// PNG格式
				/// </summary>
				SSC_ImageType_Png		=	2
			};
			/// <summary>
			/// EarthView服务支持的专题图类型
			/// </summary>	
			enum EVSSCThemeType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_ThemeType_Unknown	= 0,
				/// <summary>
				/// 单值专题图
				/// </summary>
				SSC_ThemeType_Unique	= 1,
				/// <summary>
				/// 范围专题图
				/// </summary>
				SSC_ThemeType_Range		= 2
			};
			/// <summary>
			/// EarthView服务支持的矢量数据几何类型
			/// </summary>		
			enum EVSSCGeometryType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_GeometryType_Unknown		= 0,
				/// <summary>
				/// 点
				/// </summary>
				SSC_GeometryType_Point			= 1,
				/// <summary>
				/// 线
				/// </summary>
				SSC_GeometryType_Line			= 2,
				/// <summary>
				/// 环
				/// </summary>
				SSC_GeometryType_Ring			= 3,
				/// <summary>
				/// 多点
				/// </summary>
				SSC_GeometryType_MultiPoint		= 11,
				/// <summary>
				/// 多线
				/// </summary>
				SSC_GeometryType_Polyline		= 12,
				/// <summary>
				/// 多面
				/// </summary>
				SSC_GeometryType_Polygon		= 13,
				/// <summary>
				/// 组合
				/// </summary>
				SSC_GeometryType_Collection		= 20
			};
			/// <summary>
			/// EarthView服务支持的图层数据类型
			/// </summary>	
			enum EVSSCLayerDataType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_LayerDataType_Unknown			= 0,
				/// <summary>
				/// 多波段影像
				/// </summary>
				SSC_LayerDataType_Image_Multi		= 1,
				/// <summary>
				/// 单波段影像
				/// </summary>
				SSC_LayerDataType_Image_Single		= 2,
				/// <summary>
				/// 整型DEM
				/// </summary>
				SSC_LayerDataType_DEM_int			= 11,
				/// <summary>
				/// 浮点型DEM
				/// </summary>
				SSC_LayerDataType_DEM_Float			= 12,
				/// <summary>
				/// 整型8位DEM
				/// </summary>
				SSC_LayerDataType_DEM_int8			= 13,
				/// <summary>
				/// 整型16位DEM
				/// </summary>
				SSC_LayerDataType_DEM_int16			= 14,
				/// <summary>
				/// 点型矢量图层
				/// </summary>
				SSC_LayerDataType_Vector_Point		= 21,
				/// <summary>
				/// 线性矢量图层
				/// </summary>
				SSC_LayerDataType_Vector_Polyline	= 22,
				/// <summary>
				/// 面型矢量图层
				/// </summary>
				SSC_LayerDataType_Vector_Polygon	= 23
			};
			/// <summary>
			/// EarthView服务支持的坐标系类型
			/// </summary>	
			enum EVSSCSRS
			{
				/// <summary>
				/// 未知
				/// </summary>
				SSC_SRS_Unknown			= 0,
				/// <summary>
				/// WGS84坐标系
				/// </summary>
				SSC_SRS_WGS_1984		= 4326,
				/// <summary>
				/// 北京54坐标系
				/// </summary>
				SSC_SRS_Beijing_1954	= 4214,
				/// <summary>
				/// 西安80坐标系
				/// </summary>
				SSC_SRS_Xian_1980		= 4610,
				/// <summary>
				/// 中国2000坐标系
				/// </summary>
				SSC_SRS_China_2000		= 4490,
				/// <summary>
				/// Mercator投影
				/// </summary>
				SSC_SRS_Mercator		= 3395,
				/// <summary>
				/// Mercator_Web投影
				/// </summary>
				SSC_SRS_Mercator_Web	= 102113
			};
			/// <summary>
			/// EarthView服务支持的缓存模式
			/// </summary>	
			enum EVSSCCacheMode
			{
				/// <summary>
				/// 未知
				/// </summary>
				SSC_CacheMode_Unknown		= 0,
				/// <summary>
				/// 起点在左上角
				/// </summary>
				SSC_CacheMode_LeftTop		= 1,
				/// <summary>
				/// 起点在左下角
				/// </summary>
				SSC_CacheMode_LeftBottom	= 2,
				/// <summary>
				/// 起点在右上角
				/// </summary>
				SSC_CacheMode_RightTop		= 3,
				/// <summary>
				/// 起点在右下角
				/// </summary>
				SSC_CacheMode_RightBottom	= 4,
				/// <summary>
				/// 起点在中心
				/// </summary>
				SSC_CacheMode_Center		= 5
			};
			/// <summary>
			/// EarthView服务支持的缓存数据类型
			/// </summary>		
			enum EVSSCCacheDataType
			{
				/// <summary>
				/// 影像数据
				/// </summary>
				SSC_CacheDataType_Image = 0,
				/// <summary>
				/// DEM数据
				/// </summary>
				SSC_CacheDataType_DEM = 1,
				/// <summary>
				/// 矢量数据
				/// </summary>
				SSC_CacheDataType_Vector = 2,
				/// <summary>
				/// 海图数据
				/// </summary>
				SSC_CacheDataType_Chart = 4,
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_CacheDataType_Unknown =100
			};
			/// <summary>
			/// EarthView服务支持的文件格式
			/// </summary>	
			enum EVSSCFileFormat
			{
				/// <summary>
				/// 格式未知
				/// </summary>
				SSC_FileFormat_Unknown = 0,
				/// <summary>
				/// JPG格式
				/// </summary>
				SSC_FileFormat_JPG = 1,
				/// <summary>
				/// EVG格式
				/// </summary>
				SSC_FileFormat_EVG = 2,
				/// <summary>
				/// BMP的7z压缩格式
				/// </summary>
				SSC_FileFormat_BMP_7Z = 100,
				/// <summary>
				/// 矢量格式
				/// </summary>
				SSC_FileFormat_EVV = 101,
				/// <summary>
				/// 矢量的7z压缩格式
				/// </summary>
				SSC_FileFormat_EVV_7Z = 102,
				/// <summary>
				/// PNG格式
				/// </summary>
				SSC_FileFormat_PNG = 121,
				/// <summary>
				/// 矢量瓦片格式
				/// </summary>
				SSC_FileFormat_EVP = 151,
				/// <summary>
				/// 矢量瓦片的7z压缩格式
				/// </summary>
				SSC_FileFormat_EVP_7Z = 152,
				/// <summary>
				/// BIL格式
				/// </summary>
				SSC_FileFormat_BIL = 201,
				/// <summary>
				/// BIL的7z压缩格式
				/// </summary>
				SSC_FileFormat_BIL_7Z = 202
			};
			/// <summary>
			/// EarthView服务支持的几何对象格式
			/// </summary>	
			enum EVSSCGeometryFormat
			{
				/// <summary>
				/// WKB格式
				/// </summary>
				SSC_GeometryFomat_WKB = 0,
				/// <summary>
				/// WKT格式
				/// </summary>
				SSC_GeometryFomat_WKT = 1
			};
			/// <summary>
			/// EarthView服务支持的字段类型
			/// </summary>	
			enum EVSSCWebFieldType
			{
				/// <summary>
				/// 类型未知
				/// </summary>
				SSC_WFT_Unknown = 0,
				/// <summary>
				/// 整型
				/// </summary>
				SSC_WFT_Int32	= 1,
				/// <summary>
				/// 长整形
				/// </summary>
				SSC_WFT_Long	= 2,
				/// <summary>
				/// 浮点型
				/// </summary>
				SSC_WFT_Real64	= 11,
				/// <summary>
				/// 字符串型
				/// </summary>
				SSC_WFT_String	= 12
			};


			/// <summary>
			/// EarthView服务支持的三维点坐标信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerPoint3DF:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 坐标x值
				/// </summary>
				ev_real64 x;
				/// <summary>
				/// 坐标y值
				/// </summary>
				ev_real64 y;
				/// <summary>
				/// 坐标z值
				/// </summary>
				ev_real64 z;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CServerPoint3DF();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerPoint3DF();
			ev_private:
				CServerPoint3DF(_in EarthView::World::Core::CNameValuePairList* plist);
			};		

			//class CSLDSymbol
			//{
			//
			//	
			//};
			//class CSLDSimpleFillSymbol
			//{
			//public:
			//	CSLDSimpleFillSymbol* clone()
			//	{
			//		return NULL;
			//	}
			//};
			//class CSLDSimpleMarkerSymbol
			//{
			//public:
			//	CSLDSimpleMarkerSymbol* clone()
			//	{
			//		return NULL;
			//	}
			//};
			//class CSLDSimpleLineSymbol
			//{
			//public:
			//	CSLDSimpleLineSymbol* clone()
			//	{
			//		return NULL;
			//	}
			//};


			/// <summary>
			/// EarthView服务支持的字体风格信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerFont 
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 字体名称
				/// </summary>
				EVString fontFamily;	
				/// <summary>
				/// 字体大小
				/// </summary>
				ev_int32 fontSize;	
				/// <summary>
				/// 字体颜色
				/// </summary>
				EVString fontColor;
				/// <summary>
				/// 背景颜色
				/// </summary>
				EVString backColor;
				/// <summary>
				/// 是否粗体
				/// </summary>
				ev_bool isFontBold;
				/// <summary>
				/// 是否斜体
				/// </summary>
				ev_bool isFontItalic;
				/// <summary>
				/// 是否有下划线
				/// </summary>
				ev_bool isFontUnderlined;
			ev_private:
				CServerFont(_in EarthView::World::Core::CNameValuePairList* plist);	
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CServerFont();
				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="font">拷贝对象1</param>
                /// <returns></returns>
				CServerFont(_in const CServerFont& font);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerFont();
			};

			/// <summary>
			/// EarthView服务支持的注记信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerAnnotation 
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 是否可见
				/// </summary>
				ev_bool isVisible;	
				/// <summary>
				/// 字段名
				/// </summary>
				EVString fieldName;	
				/// <summary>
				/// 是否精灵标注
				/// </summary>
				ev_bool isSprite;	
				/// <summary>
				/// 字体信息
				/// </summary>
				EarthView::World::Spatial::CServerFont font;	
			ev_private:
				CServerAnnotation(_in EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CServerAnnotation();
				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="info">拷贝对象1</param>
                /// <returns></returns>
				CServerAnnotation(_in const CServerAnnotation& info);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerAnnotation();
			};

			/// <summary>
			/// EarthView服务支持的图标信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerIcon 
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 图标标识
				/// </summary>
				EVString iconData;	
				/// <summary>
				/// 图标高
				/// </summary>
				ev_int32 iconHeight;
				/// <summary>
				/// 图标宽
				/// </summary>
				ev_int32 iconWidth;
				/// <summary>
				/// 图标是否可见
				/// </summary>
				ev_bool isIconVisible;
			ev_private:
				CServerIcon(_in EarthView::World::Core::CNameValuePairList* plist);	
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CServerIcon(){}
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerIcon(){}
			};

			/// <summary>
			/// EarthView服务支持的渲染风格信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerStyle
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 风格标识
				/// </summary>
				EVString strStyleName;
				/// <summary>
				/// 字段名
				/// </summary>
				EVString strFieldName;
				/// <summary>
				/// 唯一值
				/// </summary>
				EVString strUniqueValue;
				/// <summary>
				/// 最小值
				/// </summary>
				ev_real64 dfMinValue;
				/// <summary>
				/// 最大值
				/// </summary>
				ev_real64 dfMaxValue;
		/*		CSLDSimpleFillSymbol* pFillSymbol;
				CSLDSimpleLineSymbol* pLineSymbol;
				CSLDSimpleMarkerSymbol* pMarkerSymbol;*/
			public:
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::CServerStyle* clone()
				{
					EarthView::World::Spatial::CServerStyle* pStyle = EV_NEW EarthView::World::Spatial::CServerStyle;
					pStyle->dfMaxValue = dfMaxValue;
					pStyle->dfMinValue = dfMinValue;
					pStyle->strFieldName = strFieldName;
					pStyle->strStyleName = strStyleName;
					pStyle->strUniqueValue = strUniqueValue;
					/*if(pFillSymbol)
						pStyle->pFillSymbol = pFillSymbol->clone();
					if(pLineSymbol)
						pStyle->pLineSymbol = pLineSymbol->clone();
					if(pMarkerSymbol)
						pStyle->pMarkerSymbol = pMarkerSymbol->clone();
						*/
					return pStyle;
				}
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerStyle()
				{
					/*if(pFillSymbol)
						EV_DELETE pFillSymbol;
					if(pLineSymbol)
						EV_DELETE pLin eSymbol;
					if(pMarkerSymbol)
						EV_DELETE pMarkerSymbol;*/
				}
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerStyle()
				{
					/*pFillSymbol = NULL;
					pLineSymbol = NULL;
					pMarkerSymbol = NULL;*/
				}
			ev_private:
				CServerStyle(_in EarthView::World::Core::CNameValuePairList* plist);	
			};

			/// <summary>
			/// EarthView服务支持的专题信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerTheme
				:public EarthView::World::Core::CAllocatedObject
			{
				friend class MetaObjectInfoSerialize;
			private:
				EVString strThemeName;
				EarthView::World::Spatial::EVSSCThemeType nThemeType;
				EVString strFiledName;
				EarthView::World::Spatial::CServerStyle* pDefulatStyle;
				vector<EarthView::World::Spatial::CServerStyle*> listStyle;

				friend class CEVSpatialServer;
			ev_private:
				CServerTheme(_in EarthView::World::Core::CNameValuePairList* plist);	
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerTheme();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerTheme();

				/// <summary>
                /// 获取专题名称
                /// </summary>
                /// <returns>专题名称</returns>
				const EVString& getThemeName() const;

				/// <summary>
                /// 获取专题类型
                /// </summary>
                /// <returns>专题类型</returns>
				EarthView::World::Spatial::EVSSCThemeType getThemeType() const;

				/// <summary>
                /// 获取字段名称
                /// </summary>
                /// <returns>字段名称</returns>
				const EVString& getFieldName()const;

				/// <summary>
                /// 获取风格数目
                /// </summary>
                /// <returns>风格数目</returns>
				ev_uint32 getStyleCount() const;

				/// <summary>
                /// 获取风格信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>风格对象指针</returns>
				const EarthView::World::Spatial::CServerStyle* getStyleRef(ev_uint32 index) const;

				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::CServerTheme* clone();
				friend class CEVMapLayerInfo;
			};

			/// <summary>
			/// EarthView服务支持的缓存数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerCacheLayerInfo
				:public EarthView::World::Core::CAllocatedObject
			{
				friend class MetaObjectInfoSerialize;
			private:
				EVString strLayerName;
				EarthView::World::Spatial::EVSSCSRS nSrs;
				ev_int32 nMinLevel;
				ev_int32 nMaxLevel;
				EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope;
				friend class CEVSpatialServer;
			ev_private:
				CServerCacheLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			public:
				/// <summary>
                /// 获取图层名称
                /// </summary>
                /// <returns>图层名称</returns>
				const EVString& getLayerName() const;
				
				/// <summary>
                /// 获取投影信息
                /// </summary>
                /// <returns>投影类型</returns>
				EarthView::World::Spatial::EVSSCSRS getSRS() const;
				
				/// <summary>
                /// 获取最小级别
                /// </summary>
                /// <returns>最小级别</returns>
				ev_int32 getMinLevel() const;
				
				/// <summary>
                /// 获取最大级别
                /// </summary>
                /// <returns>最大级别</returns>
				ev_int32 getMaxLevel() const;
				
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针，不需释放</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerCacheLayerInfo();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerCacheLayerInfo();
				
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象指针</returns>
				_extfree EarthView::World::Spatial::CServerCacheLayerInfo* clone();
			};

			/// <summary>
			/// EarthView服务支持的查询条件信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerSearchCondition
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				EarthView::World::Spatial::EVSSCGeometryType nType;
				EVString strSQL;
				EVString strSearchFields;///以逗号分割
				CServerPointList* pPointlist;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerSearchCondition();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerSearchCondition();	

				/// <summary>
                /// 获取查询要素所含点数
                /// </summary>
                /// <returns>点数</returns>
				ev_uint32 getPointCount() const;
				
				/// <summary>
                /// 获取指定索引的点坐标
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定点坐标对象指针</returns>
				const EarthView::World::Spatial::CServerPoint3DF* getPointRef(_in ev_uint32 index)const;
				
				/// <summary>
                /// 追加查询要素点
                /// </summary>
				/// <param name="point">点坐标对象</param>
                /// <returns></returns>
				ev_void addPoint(_in const EarthView::World::Spatial::CServerPoint3DF* point);
				
				/// <summary>
                /// 追加查询点串
                /// </summary>
				/// <param name="points">坐标数组</param>
				/// <param name="count">坐标个数</param>
                /// <returns></returns>
				ev_void addPoint(_in const EarthView::World::Spatial::CServerPoint3DF* points,_in ev_uint32 count);
				
				/// <summary>
                /// 插入坐标查询点
                /// </summary>
				/// <param name="point">坐标点</param>
				/// <param name="index">位置</param>
                /// <returns></returns>
				ev_void insertPoint(_in const EarthView::World::Spatial::CServerPoint3DF* point,_in ev_uint32 index);
				
				/// <summary>
                /// 移除查询坐标点
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns></returns>
				ev_void removePoint(_in ev_uint32 index);
				
				/// <summary>
                /// 起初查询坐标
                /// </summary>
                /// <returns></returns>
				ev_void clearPoints();	
				
				/// <summary>
                /// 设置查询点组成要素的几何类型
                /// </summary>
				/// <param name="type">几何类型</param>
                /// <returns></returns>
				ev_void setGeometryType(_in EarthView::World::Spatial::EVSSCGeometryType type);
				
				/// <summary>
                /// 获取查询点组成要素的几何类型
                /// </summary>
                /// <returns></returns>
				EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const;
				
				/// <summary>
                /// 设置查询的sql语句
                /// </summary>
				/// <param name="strSQL">sql语句</param>
                /// <returns></returns>
				ev_void setSQL(_in const EVString& strSQL);
				
				/// <summary>
                /// 获取查询的sql语句
                /// </summary>
                /// <returns>sql语句</returns>
				const EVString& getSQL() const;
				
				/// <summary>
                /// 设置需要查询的字段名
                /// </summary>
				/// <param name="strSearchFields">字段名</param>
                /// <returns></returns>
				ev_void setSearchFields(_in const EVString strSearchFields);
				
				/// <summary>
                /// 获取需要查询的字段名
                /// </summary>
				/// <param name=""></param>
                /// <returns>字段名</returns>
				const EVString getSearchFields() const;
			ev_private:
				CServerSearchCondition(_in EarthView::World::Core::CNameValuePairList* plist);
			};

			/// <summary>
			/// EarthView服务支持的查询记录描述类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerRecord
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				ev_int32 nOID;
				vector<EVString> listFieldValues;
				EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope;
				friend class CEVSpatialServer;

				CServerRecord();
			public:
				
				/// <summary>
                /// 获取记录ID
                /// </summary>
                /// <returns>记录对应的ID</returns>
				ev_int32 getID();
				
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getEnveloprRef() const;
				
				/// <summary>
                /// 获取字段数
                /// </summary>
                /// <returns>字段数</returns>
				ev_uint32 getFieldCount() const;
				
				/// <summary>
                /// 获取指定索引的字段值
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>字段值</returns>
				const EVString& getFieldValue(_in ev_uint32 index);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerRecord();
			ev_private:
				CServerRecord(_in EarthView::World::Core::CNameValuePairList* plist);
			};

			/// <summary>
			/// EarthView服务支持的查询记录集合类
			/// </summary>		
			class EV_SPATIALSERVERCLIENT_DLL CServerSet
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				EVString strMapName;
				EVString strLayerName;
				ev_int32 nLayerIndex;
				vector<EVString> listFieldName;
				ev_uint32 nFieldCount;
				ev_uint32 nRecordCount;
				vector<EarthView::World::Spatial::CServerRecord*> listRecord;
				friend class CEVSpatialServer;
			ev_private:
				CServerSet(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerSet();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerSet();
				
				/// <summary>
                /// 获取图层对应的索引
                /// </summary>
                /// <returns>图层对应的索引</returns>
				ev_int32 getLayerIndex() const;
				
				/// <summary>
                /// 获取地图的名称
                /// </summary>
                /// <returns>地图名</returns>
				const EVString& getMapName() const;
					
				/// <summary>
                /// 获取图层名
                /// </summary>
                /// <returns>图层名</returns>
				const EVString& getLayerName() const;
					
				/// <summary>
                /// 获取记录个数
                /// </summary>
                /// <returns>记录数</returns>
				ev_uint32 getRecordCount() const;
					
				/// <summary>
                /// 获取字段个数
                /// </summary>
                /// <returns>字段数</returns>
				ev_uint32 getFieldCount() const;
					
				/// <summary>
                /// 获取指定索引的记录
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定记录对象的指针</returns>
				const EarthView::World::Spatial::CServerRecord* getRecordRef(_in ev_uint32 index) const;
		
				/// <summary>
                /// 获取指定索引的字段名
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定字段名</returns>
				const EVString& getFieldName(_in ev_uint32 index) const;
			};

			/// <summary>
			/// EarthView服务支持的查询结果集合类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerQueryResults
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				vector<EVString> listValue;
				ev_uint32 nCount;

				friend class CEVSpatialServer;
			public:
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆结果对象指针</returns>
				_extfree EarthView::World::Spatial::CServerQueryResults* clone();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerQueryResults();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerQueryResults();
				
				/// <summary>
                /// 获取查询结果个数
                /// </summary>
                /// <returns>查询结果数</returns>
				ev_uint32 getResultCount() const;
				
				/// <summary>
                /// 获取指定索引的查询结果
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的查询结果</returns>
				const EVString& getValue(_in ev_uint32 index) const;
			ev_private:
				CServerQueryResults(_in EarthView::World::Core::CNameValuePairList* pList);
			};
				
			/// <summary>
			/// EarthView服务支持的字段定义类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CWebField
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 字段名
				/// </summary>
				EVString strFieldName;
				/// <summary>
				/// 字段类型
				/// </summary>
				EarthView::World::Spatial::EVSSCWebFieldType nFieldType;
				/// <summary>
				/// 属性值
				/// </summary>
				EarthView::World::Core::CVariant value;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWebField(){};
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWebField(){};
			ev_private:
				CWebField(_in EarthView::World::Core::CNameValuePairList* pList);
					
			};

			/// <summary>
			/// EarthView服务支持的坐标点串信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerPointList
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				ev_list<EarthView::World::Spatial::CServerPoint3DF*> pointlist;
				ev_uint32 nCount;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerPointList();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerPointList();
				
				/// <summary>
                /// 获取点数
                /// </summary>
                /// <returns>点数</returns>
				ev_uint32 getPointCount() const;
				
				/// <summary>
                /// 获取指定索引的点坐标
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的点坐标对象</returns>
				const EarthView::World::Spatial::CServerPoint3DF* getPointRef(_in ev_uint32 index);
				
				/// <summary>
                /// 追加点坐标
                /// </summary>
				/// <param name="point">点坐标对象</param>
                /// <returns></returns>
				ev_void addPoint(_in const EarthView::World::Spatial::CServerPoint3DF* point);
				
				/// <summary>
                /// 追加点坐标
                /// </summary>
				/// <param name="points">坐标数组</param>
				/// <param name="count">坐标个数</param>
				/// <returns></returns>
				ev_void addPoint(_in const EarthView::World::Spatial::CServerPoint3DF* points,_in ev_uint32 count);
				
				/// <summary>
                /// 插入点坐标
                /// </summary>
				/// <param name="point">点坐标对象</param>
				/// <param name="index">插入位置</param>
                /// <returns></returns>
				ev_void insertPoint(_in const EarthView::World::Spatial::CServerPoint3DF* point,_in ev_uint32 index);
				
				/// <summary>
                /// 移除点坐标
                /// </summary>
				/// <param name="index">移除坐标的索引</param>
                /// <returns></returns>
				ev_void removePoint(_in ev_uint32 index);
				
				/// <summary>
                /// 清除点坐标
                /// </summary>
				/// <param name=""></param>
                /// <returns></returns>
				ev_void clear();
			ev_private:
				CServerPointList(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// EarthView服务查询结果内存流类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CMemoryStreamResult
				:public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				EarthView::World::Core::MemoryDataStreamPtr pPtr;
				friend class CEVSpatialServer;
			public:
				/// <summary>
                /// 获取数据的智能指针
                /// </summary>
                /// <returns>数据智能指针</returns>
				EarthView::World::Core::MemoryDataStreamPtr getDataStreamPtr();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CMemoryStreamResult();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CMemoryStreamResult();
			ev_private:
				CMemoryStreamResult(_in EarthView::World::Core::CNameValuePairList* pList);
			};
			
			/// <summary>
			/// EarthView服务支持的几何对象集合类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CGeometryList
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				vector<EarthView::World::Spatial::Geometry::IGeometry*> geometrylist;
				ev_uint32 nCount;
				friend class CEVSpatialServer;
			public:
				/// <summary>
                /// 获取几何对象数
                /// </summary>
                /// <returns>集合对象数目</returns>
				ev_uint32 getGeometryCount() const;
				
				/// <summary>
                /// 获取指定索引的几何对象
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定几何对象的指针</returns>
				const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef(_in ev_uint32 index) const;
				
				/// <summary>
                /// 追加几何对象
                /// </summary>
				/// <param name="geom">几何对象</param>
                /// <returns></returns>
				ev_void addGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
				
				/// <summary>
                /// 清空内部数据
                /// </summary>
                /// <returns></returns>
				ev_void clear();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CGeometryList();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CGeometryList();
			ev_private:
				CGeometryList(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// EarthView服务支持的要素描述类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVWebFeature
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				ev_int32 mnID;
				EarthView::World::Spatial::Geometry::IGeometry* mpGeometry;
				vector<EarthView::World::Spatial::CWebField*> mlistField;
				
				friend class CEVSpatialServer;
			public:
				
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="id">要素ID</param>
                /// <returns></returns>
				CEVWebFeature(_in ev_int32 id);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWebFeature();
					
				/// <summary>
                /// 获取要素ID
                /// </summary>
                /// <returns>ID号</returns>
				ev_uint32 getID() const;
				
				/// <summary>
                /// 获取要素几何对象类型
                /// </summary>
                /// <returns>要素对应几何类型</returns>
				EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
				
				/// <summary>
                /// 获取指定索引的字段信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定字段对象指针</returns>
				const EarthView::World::Spatial::CWebField* getFieldsRef(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取要素字段数目
                /// </summary>
                /// <returns>要素含有的字段数</returns>
				ev_uint32 getFieldCount() const;
				
				/// <summary>
                /// 获取要素对应的几何对象
                /// </summary>
                /// <returns>要素关联的集合对象指针</returns>
				const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
				
				/// <summary>
                /// 获取要素几何对象的包围盒
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

			ev_private:
				CEVWebFeature(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// EarthView服务支持的地名记录信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVPlaceNameRecord
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 坐标x值
				/// </summary>
				ev_real64 x;
				/// <summary>
				/// 坐标y值
				/// </summary>
				ev_real64 y;
				/// <summary>
				/// 地名
				/// </summary>
				EVString name;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVPlaceNameRecord();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVPlaceNameRecord();
			ev_private:
				CEVPlaceNameRecord(_in EarthView::World::Core::CNameValuePairList* pList);
			};
			
			/// <summary>
			/// EarthView服务支持的地名信息列表类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CPlaceNameList
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				vector<EarthView::World::Spatial::CEVPlaceNameRecord*> recordlist;
				ev_uint32 nCount;

				friend class CEVSpatialServer;
			public:
				
				/// <summary>
                /// 获取记录数
                /// </summary>
                /// <returns>记录数目</returns>
				ev_uint32 getRectordCount() const;
				
				/// <summary>
                /// 获取指定索引的记录信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定记录对象指针</returns>
				const EarthView::World::Spatial::CEVPlaceNameRecord* getRecordRef(_in ev_uint32 index)const;
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CPlaceNameList();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CPlaceNameList();
			ev_private:
				CPlaceNameList(_in EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// EarthView服务支持的网格对象类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerMeshObject
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name=""></param>
                /// <returns></returns>
				CServerMeshObject();
				
				/// <summary>
                /// 析构函数
                /// </summary>
				/// <param name=""></param>
                /// <returns></returns>
				~CServerMeshObject();
				
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				EVString getDatasetName()const;
				
				/// <summary>
                /// 获取数据对应的ID号
                /// </summary>
                /// <returns>实体ID号</returns>
				ev_int32 getEntityID()const;
				
				/// <summary>
                /// 获取网格ID
                /// </summary>
                /// <returns>网格ID号</returns>
				ev_int32 getMeshID()const;
				
				/// <summary>
                /// 获取网格标识
                /// </summary>
                /// <returns>网格标识</returns>
				EVString getMeshName()const;
				
				/// <summary>
                /// 获取网格信息
                /// </summary>
                /// <returns>网格对象的智能指针</returns>
				EarthView::World::Core::MemoryDataStreamPtr getMeshData() const;
				
				/// <summary>
                /// 获取实体名称
                /// </summary>
                /// <returns>实体名称</returns>
				EVString getEntityName()const;
				
				/// <summary>
                /// 是否从模板产生
                /// </summary>
                /// <returns>true/false</returns>
				ev_bool isFromTemplate()const;
				
				/// <summary>
                /// 获取模型坐标x
                /// </summary>
                /// <returns>坐标值x</returns>
				ev_real64 getPosX()const;
				
				/// <summary>
                /// 获取模型坐标y
                /// </summary>
                /// <returns>坐标值y</returns>
				ev_real64 getPosY()const;
				
				/// <summary>
                /// 获取模型坐标z
                /// </summary>
                /// <returns>坐标值z</returns>
				ev_real64 getPosZ()const;
				
				/// <summary>
                /// 获取模型缩放比例系数x
                /// </summary>
                /// <returns>缩放系数x</returns>
				ev_real64 getScaleX()const;
				
				/// <summary>
                /// 获取模型缩放比例系数y
                /// </summary>
                /// <returns>缩放系数y</returns>
				ev_real64 getScaleY()const;
				
				/// <summary>
                /// 获取模型缩放比例系数z
                /// </summary>
                /// <returns>缩放系数z</returns>
				ev_real64 getScaleZ()const;
				
				/// <summary>
                /// 获取模型旋转参数x
                /// </summary>
                /// <returns>旋转参数x</returns>
				ev_real64 getRotationX()const;
				
				/// <summary>
                /// 获取模型旋转参数y
                /// </summary>
                /// <returns>旋转参数y</returns>
				ev_real64 getRotationY()const;
				
				/// <summary>
                /// 获取模型旋转参数z
                /// </summary>
                /// <returns>旋转参数z</returns>
				ev_real64 getRotationZ()const;
				
				/// <summary>
                /// 获取模型旋转参数w
                /// </summary>
                /// <returns>旋转参数w</returns>
				ev_real64 getRotationW()const;
			ev_private:
				CServerMeshObject(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrDatasetName;
				ev_int32 mnEntityID;

				ev_int32 mnMeshID;
				EVString mstrMeshName;
				EarthView::World::Core::MemoryDataStreamPtr mPtrMeshData;
				EVString mstrEntityName;
				ev_bool mbFromTemplate;
				ev_real64 mnPosX;
				ev_real64 mnPosY;
				ev_real64 mnPosZ;
				ev_real64 mnScaleX;
				ev_real64 mnScaleY;
				ev_real64 mnScaleZ;
				ev_real64 mnRotationX;
				ev_real64 mnRotationY;
				ev_real64 mnRotationZ;
				ev_real64 mnRotationW;

				friend class CEVSpatialServer;
				friend class CEVModelDataset;
			};

			/// <summary>
			/// EarthView服务支持的网格对象类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerTemplateMeshObject
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CServerTemplateMeshObject(){}

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CServerTemplateMeshObject(){}
				
				ev_real64 getMaxDistance() const {return mMeshinst_maxdistance;}
				ev_real64 getMinDistance() const {return mMeshinst_mindistance;}
				ev_real64 getRotationX() const {return mMeshinst_rotationx;}
				ev_real64 getRotationY() const {return mMeshinst_rotationy;}
				ev_real64 getRotationZ() const {return mMeshinst_rotationz;}
				ev_real64 getRotationW() const {return mMeshinst_rotationw;}
				ev_real64 getScalX() const {return mMeshinst_scalex;}
				ev_real64 getScalY() const {return mMeshinst_scaley;}
				ev_real64 getScalZ() const {return mMeshinst_scalez;}
				ev_real64 getPosX() const {return mMeshinst_posx;}
				ev_real64 getPosY() const {return mMeshinst_posy;}
				ev_real64 getPosZ() const {return mMeshinst_posz;}
				ev_int32 getInstanceNum() const {return mMeshinst_instancenum;}
				ev_int32 getMeshInstID()const {return mMeshinst_id;}
				ev_int32 getMeshInstTmplID()const {return mMeshtmpl_id;}
				const EVString& getNodecode() const {return mMeshinst_nodecode;}
				const EVString& getAliasname() const {return mMeshinst_aliasname;}
				ev_int32 getRefCount() const {return mMeshtmpl_refcount;}
				EarthView::World::Core::MemoryDataStreamPtr getMeshTmplData() const {return mMeshtmpl_data;}
				const EVString& getFileName() const {return mMeshtmpl_filename;}
				const EVString& getname() const {return mMeshtmpl_name;}
				ev_int32 getTmplId () const {return mMeshtmpl_id;}
ev_private:
				CServerTemplateMeshObject(_in EarthView::World::Core::CNameValuePairList* plist){}
			private:
				ev_real64 mMeshinst_maxdistance;
				ev_real64 mMeshinst_mindistance;
				ev_real64 mMeshinst_rotationx;
				ev_real64 mMeshinst_rotationy;
				ev_real64 mMeshinst_rotationz;
				ev_real64 mMeshinst_rotationw;
				ev_real64 mMeshinst_scalex;
				ev_real64 mMeshinst_scaley;
				ev_real64 mMeshinst_scalez;
				ev_real64 mMeshinst_posx;
				ev_real64 mMeshinst_posy;
				ev_real64 mMeshinst_posz;
				ev_int32 mMeshinst_instancenum;
				ev_int32 mMeshinst_id;
				ev_int32 mMeshinst_tmplid;
				EVString mMeshinst_nodecode;
				EVString mMeshinst_aliasname;

				ev_int32 mMeshtmpl_refcount;
				EarthView::World::Core::MemoryDataStreamPtr mMeshtmpl_data; 
				EVString mMeshtmpl_filename;
				EVString mMeshtmpl_name;
				ev_int32 mMeshtmpl_id;

				friend class CEVSpatialServer;
				friend class CEVModelDataset;
			};

			/// <summary>
			/// EarthView服务支持的模型资源信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerModelResource
				:public EarthView::World::Core::CAllocatedObject
			{
			public:	
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerModelResource();

				/// <summary>
                /// 获取数据对应的ID号
                /// </summary>
                /// <returns>ID号</returns>
				ev_int32 getResourceID()const;
				
				/// <summary>
                /// 获取资源类型
                /// </summary>
				/// <param name=""></param>
                /// <returns></returns>
				ev_int32 getResourceType()const;
				
				/// <summary>
                /// 获取资源数目
                /// </summary>
                /// <returns>资源数</returns>
				ev_int32 getResourceCount()const;
				
				/// <summary>
                /// 获取资源对象的智能指针
                /// </summary>
                /// <returns>资源对象的智能指针</returns>
				EarthView::World::Core::MemoryDataStreamPtr getResourceData() const;
				
				/// <summary>
                /// 获文件名称
                /// </summary>
                /// <returns>文件名称</returns>
				EVString getSourceFileName()const;
			ev_private:
				CServerModelResource(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				CServerModelResource();

				ev_int32 mnID;
				ev_int32 mnType;
				ev_int32 mnCount;
				EarthView::World::Core::MemoryDataStreamPtr mPtrData;
				EVString mstrFileName;

				friend class CEVSpatialServer;
			};

			/// <summary>
			/// EarthView服务支持的模型资源信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerTemplateModelResource
				:public EarthView::World::Core::CAllocatedObject
			{
			public:	
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerTemplateModelResource() {}

				ev_int32 getRefCount() const {return mRes_refcount;}
				EarthView::World::Core::MemoryDataStreamPtr getResData() const {return mRes_data;}
				const EVString& getResFilename() const {return mRes_filename;}
				ev_int32 getResType() const {return mRes_type;}
				ev_int32 getResId() const {return mRes_id;}
				ev_int32 getSubMeshIndex() const {return mInstref_submeshindex;}
				ev_int32 getChangeFromTemplate() const {return mInstref_changefromtemplate;}
ev_private:
				CServerTemplateModelResource(_in EarthView::World::Core::CNameValuePairList* plist){};
			private:
				CServerTemplateModelResource(){};

				ev_int32 mRes_refcount;
				EarthView::World::Core::MemoryDataStreamPtr mRes_data;
				EVString mRes_filename;
				ev_int32 mRes_type;
				ev_int32 mRes_id;
				ev_int32 mInstref_submeshindex;
				ev_int32 mInstref_changefromtemplate;

				friend class CEVSpatialServer;
			};
			
			/// <summary>
			/// EarthView服务支持的资源对象类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerResourceObject
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerResourceObject();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerResourceObject();
				
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				EVString getDatasetName()const;
				
				/// <summary>
                /// 获取数据对应的ID号
                /// </summary>
                /// <returns>ID号</returns>
				ev_int32 getEntityID()const;
				
				/// <summary>
                /// 是否需要贴纹理
                /// </summary>
                /// <returns>true表示需要贴纹理</returns>
				ev_bool needOrigTexture()const;
				
				/// <summary>
                /// 获取相关的资源数目
                /// </summary>
                /// <returns>相关的资源数</returns>
				ev_uint32 getModelResourceCount()const;
				
				/// <summary>
                /// 获取指定索引的资源信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定资源对象的指针</returns>
				const EarthView::World::Spatial::CServerModelResource* getModelResourceRef(_in ev_uint32 index)const;
			ev_private:
				CServerResourceObject(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrDatasetName;
				ev_int32 mnEntityID;
				ev_bool mbNeedOrigTexture;
				vector<EarthView::World::Spatial::CServerModelResource*> mlistResource;
				ev_int32 mnResID;

				friend class CEVSpatialServer;
				friend class CEVModelDataset;
				friend class CEVModelTemplateDataset;
			};
			
			/// <summary>
			/// EarthView服务支持的贴图纹理信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerOrigTexture
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerOrigTexture();
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerOrigTexture();
				
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				EVString getDatasetName()const;
				
				/// <summary>
                /// 获取数据对应的ID号
                /// </summary>
                /// <returns>ID号</returns>
				ev_int32 getEntityID()const;
				
				/// <summary>
                /// 获取相关的资源数目
                /// </summary>
                /// <returns>相关的资源数</returns>
				ev_uint32 getModelResourceCount()const;
				
				/// <summary>
                /// 获取指定索引的资源信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定资源对象的指针</returns>
				const EarthView::World::Spatial::CServerModelResource* getModelResourceRef(_in ev_uint32 index)const;
			ev_private:
				CServerOrigTexture(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrDatasetName;
				ev_int32 mnEntityID;

				vector<EarthView::World::Spatial::CServerModelResource*> mlistResource;
				friend class CEVSpatialServer;
				friend class CEVModelDataset;
			};
			
			/// <summary>
			/// EarthView服务支持的实体对象类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerEntityObject
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CServerEntityObject();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerEntityObject();
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				EVString getDatasetName()const;
				/// <summary>
                /// 获取对应的ID号
                /// </summary>
                /// <returns>ID号</returns>
				ev_int32 getEntityID();
				
				/// <summary>
                /// 获取网格信息
                /// </summary>
                /// <returns>网格对象指针</returns>
				const EarthView::World::Spatial::CServerMeshObject& getMeshObjectRef()const;
				
				/// <summary>
                /// 获取资源数目
                /// </summary>
                /// <returns>资源数目</returns>
				ev_uint32 getModelResourceCount() const;
				
				/// <summary>
                /// 获取指定索引的资源信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的资源对象指针</returns>
				const EarthView::World::Spatial::CServerModelResource* getModelResourceRef(_in ev_uint32 index) const;
			 ev_private:
                CServerEntityObject(_in EarthView::World::Core::CNameValuePairList *pList);
			private:
				EVString mstrDatasetName;
				ev_int32 mnID;

				EarthView::World::Spatial::CServerMeshObject mMeshObject;
				vector<EarthView::World::Spatial::CServerModelResource*> mlistResource;
				friend class CEVSpatialServer;
				friend class CEVModelDataset;
				friend class CEVModelTemplateDataset;
			};

			/// <summary>
			/// EarthView服务支持的实体对象类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerTemplateEntityObject
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CServerTemplateEntityObject(){}
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CServerTemplateEntityObject(){}

				/// <summary>
				/// 获取对应的ID号
				/// </summary>
				/// <returns>ID号</returns>
				ev_int32 getEntityID()const {return mnID;}

				/// <summary>
				/// 获取网格信息
				/// </summary>
				/// <returns>网格对象指针</returns>
				const EarthView::World::Spatial::CServerTemplateMeshObject& getMeshObjectRef()const {return mMeshObject;}

				/// <summary>
				/// 获取资源数目
				/// </summary>
				/// <returns>资源数目</returns>
				ev_uint32 getModelResourceCount() const {return mlistResource.size();}

				/// <summary>
				/// 获取指定索引的资源信息
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定的资源对象指针</returns>
				const EarthView::World::Spatial::CServerTemplateModelResource* getModelResourceRef(_in ev_uint32 index) const;
ev_private:
				CServerTemplateEntityObject(_in EarthView::World::Core::CNameValuePairList *pList){}
			private:
				EVString mstrDatasetName;
				ev_int32 mnID;

				EarthView::World::Spatial::CServerTemplateMeshObject mMeshObject;
				vector<EarthView::World::Spatial::CServerTemplateModelResource*> mlistResource;
				friend class CEVSpatialServer;
				friend class CEVModelDataset;
				friend class CEVModelTemplateDataset;
			};
			
			/// <summary>
			/// EarthView服务支持的八叉树结点类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerOctreeNode
				:public EarthView::World::Core::CAllocatedObject
			{
				friend class MetaObjectInfoSerialize;
			public:
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerOctreeNode();
				
				/// <summary>
                /// 获取结点标识
                /// </summary>
                /// <returns>节点标识</returns>
				const EVString& getNodeCode()const;
				
				/// <summary>
                /// 获取x最小值
                /// </summary>
                /// <returns>x最小值</returns>
				ev_real64 getMinX()const;
				
				/// <summary>
                /// 获取x最大值
                /// </summary>
                /// <returns>x最大值</returns>
				ev_real64 getMaxX()const;
				
				/// <summary>
                /// 获取y最小值
                /// </summary>
                /// <returns>y最小值</returns>
				ev_real64 getMinY()const;
				
				/// <summary>
                /// 获取y最大值
                /// </summary>
                /// <returns>y最大值</returns>
				ev_real64 getMaxY()const;
				
				/// <summary>
                /// 获取z最小值
                /// </summary>
                /// <returns>z最小值</returns>
				ev_real64 getMinZ()const;
				
				/// <summary>
                /// 获取z最大值
                /// </summary>
                /// <returns>z最大值</returns>
				ev_real64 getMaxZ()const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getVersion() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EarthView::World::Core::MemoryDataStreamPtr getObjects() const;
			protected:
				CServerOctreeNode();
			ev_private:
				CServerOctreeNode(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrNodeCode;	
				ev_real64 mnMinX;	
				ev_real64 mnMinY;	
				ev_real64 mnMinZ;	
				ev_real64 mnMaxX;	
				ev_real64 mnMaxY;	
				ev_real64 mnMaxZ;
				ev_int32 mVersion;
				EarthView::World::Core::MemoryDataStreamPtr mObjects;
				friend class CEVSpatialServer;
				friend class CEVModelLayerInfo;
			};
			
			/// <summary>
			/// EarthView服务支持的数据库字段描述类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CServerDBField
				:public EarthView::World::Core::CAllocatedObject
			{
			friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 获取字段名称
                /// </summary>
                /// <returns>字段名称</returns>
				const EVString& getName()const;
				
				/// <summary>
                /// 获取字段别名
                /// </summary>
                /// <returns>字段别名</returns>
				const EVString&  getAliasName()const;
				
				/// <summary>
                /// 获取描述
                /// </summary>
                /// <returns>描述信息</returns>
				const EVString&  getDescription()const;
				
				/// <summary>
                /// 获取字段类型
                /// </summary>
                /// <returns>字段类型</returns>
				EarthView::World::Spatial::GeoDataset::EVFieldType getFieldType()const;
				
				/// <summary>
                /// 获取字段精度
                /// </summary>
                /// <returns>精度大小</returns>
				ev_int32 getPrecision()const;
				
				/// <summary>
                /// 获取字段长度
                /// </summary>
                /// <returns>最大字段长</returns>
				ev_int32 getSize()const;
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CServerDBField();
			protected:
				CServerDBField();
			ev_private:
				CServerDBField(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrName;
				EVString mstrAliasName;
				EVString mstrDescription;
				EarthView::World::Spatial::GeoDataset::EVFieldType mnFieldType;
				
				ev_int32 mnPrecision;
				ev_int32 mnSize;

				friend class CEVSpatialServer;
				friend class CEVModelLayerInfo;
			};

			/// <summary>
			/// EarthView服务支持的瓦片数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVTileInfo:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				EarthView::World::Core::MemoryDataStreamPtr pPtr;
				ev_bool* pIsLastest;
				EarthView::World::Spatial::EVSSCFileFormat nFileFormat;
				EVString strDataTime;
				EVString strUpdateTime;
				EVString strProperty;

				friend class CEVSpatialServer;
			public:
				
				/// <summary>
                /// 获取瓦片信息流的智能指针
                /// </summary>
                /// <returns>对应瓦片信息流的智能指针</returns>
				EarthView::World::Core::MemoryDataStreamPtr getDataStreamPtr();
				
				/// <summary>
                /// 判断数据是否最新
                /// </summary>
                /// <returns>非空表示可以获取到数据，根据值判断；空指针表示未获取到该数据</returns>
				const ev_bool* isLastest() const;
				
				/// <summary>
                /// 获取瓦片数据对应的数据格式
                /// </summary>
                /// <returns>瓦片数据格式</returns>
				EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const;
                
				/// <summary>
                /// 获取瓦片数据生成时间
                /// </summary>
                /// <returns>数据生成时间</returns>
				const EVString& getDataTime() const;
                
				/// <summary>
                /// 获取瓦片数据更新时间
                /// </summary>
                /// <returns>数据更新时间</returns>
				const EVString& getUpdateTime() const;
				
				/// <summary>
                /// 获取其他信息
                /// </summary>
                /// <returns>信息描述</returns>
				const EVString& getProperty() const;
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVTileInfo();				
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVTileInfo();
				
				/// <summary>
                /// 清除所有信息
                /// </summary>
                /// <returns></returns>
				ev_void clear();
            ev_private:
                CEVTileInfo(_in EarthView::World::Core::CNameValuePairList *pList);
			};
			
			/// <summary>
			/// EarthView服务支持的DEM数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVDEMLayerInfo:
				public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVDEMLayerInfo();
				
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVDEMLayerInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVDEMLayerInfo();
				
				/// <summary>
                /// 获取缓存类型
                /// </summary>
                /// <returns>缓存类型：SSC_CacheDataType_DEM</returns>
				EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType();
				
				/// <summary>
                /// 获取数据类型
                /// </summary>
                /// <returns>数据类型</returns>
				EarthView::World::Spatial::EVSSCLayerDataType getDataType() const;
				
				/// <summary>
                /// 获取数据格式
                /// </summary>
                /// <returns>数据格式</returns>
				EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const;
			
				/// <summary>
                /// 获取0级跨度
                /// </summary>
                /// <returns>0级瓦片对应的的跨度</returns>
				ev_real64 getSpanForZeroLevel() const;
				
				/// <summary>
                /// 获取瓦片级别数
                /// </summary>
                /// <returns>级别数</returns>
				ev_uint32 getLevelNum() const;
				
				/// <summary>
                /// 获取瓦片每行的像素数
                /// </summary>
                /// <returns>瓦片每行像素数</returns>
				ev_uint32 getSamplesPerTile() const;
				
				/// <summary>
                /// 获取最大数据级别
                /// </summary>
                /// <returns>最大数据级别</returns>
				ev_uint32 getMaxDataLavel() const;
				
				/// <summary>
                /// 获取最小数据级别
                /// </summary>
                /// <returns>最小数据级别</returns>
				ev_uint32 getMinDataLevel() const;
				
				
				/// <summary>
                /// 获取缓存模式,起点位置
                /// </summary>
                /// <returns>缓存模式：WGS84</returns>
				EarthView::World::Spatial::EVSSCCacheMode getCacheMode() const;
                /// 获取数据投影类型
                /// </summary>
                /// <returns>投影类型</returns>
				EarthView::World::Spatial::EVSSCSRS getSRS() const; 
				
				/// <summary>
                /// 获取数据时间
                /// </summary>
                /// <returns>数据采集时间</returns>
				const EVString& getDataTime() const;
				
				/// <summary>
                /// 获取数据更新时间
                /// </summary>
                /// <returns>数据更新时间</returns>
				const EVString& getUpdateTime() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				const EVString& getLayerName() const;

				/// <summary>
				/// 设置模板范围（0级跨度范围）
				/// </summary>
				/// <param name="env">0级跨度范围</param>
				/// <returns></returns>
				ev_void setTemplateEnvelope(const EarthView::World::Spatial::Geometry::IEnvelope* env);

				/// <summary>
				/// 获取模板范围（0级跨度范围）
				/// </summary>
				/// <returns>0级跨度范围</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getTemplateEnvelopeRef() const;

				///继承
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				virtual EVString getName() const;

				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_DEM_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需外部释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/// <summary>
				/// 获取0级瓦片的范围
				/// </summary>
				/// <returns></returns>
				virtual void getExtentForZeroLevel(ev_real64& north,ev_real64& south,ev_real64& east,ev_real64& west) const;

				/// <summary>
				/// 获取瓦片起点位置
				/// </summary>
				/// <returns></returns>
				virtual EVSSCCacheMode getOriginType()  const;

				virtual ev_void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 用户自定义数据
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Core::CVariant userData();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVDEMLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
				
			ev_private:
				EarthView::World::Spatial::EVSSCCacheDataType mnFileType;
				EVString mstrName;
				EVString mstrLayerName;
				EarthView::World::Spatial::EVSSCLayerDataType mnDataType;
				EarthView::World::Spatial::EVSSCFileFormat mnFileFormat;
				ev_real64 mdfSpanForZeroLevel;
				ev_uint32 mnLevelNum;
				ev_uint32 mnSamplesPerTile;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				EarthView::World::Spatial::EVSSCSRS mnSRS;
				EVString mstrDataTime;	
				EVString mstrUpdateTime;
				ev_int32 mnMaxDataLevel;	
				ev_int32 mnMinDataLevel;
				EarthView::World::Spatial::EVSSCCacheMode mnCacheMode;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;///xin jia de 
				EarthView::World::Spatial::Geometry::IEnvelope* mpTemplateEnvelope;
				ev_real64 mdfNorthForZeroLevel;
				ev_real64 mdfSouthForZeroLevel;
				ev_real64 mdfEastForZeroLevel;
				ev_real64 mdfWestForZeroLevel;

				EVSSCCacheMode mOriginType;

				EarthView::World::Spatial::GeoDataset::EVDatasetType mDatasetType;
				
				EarthView::World::Core::CVariant mUserData;

				friend class CEVSpatialServer;
				friend class CEVSpatialServerMetadataCacheVisitor;
			};

			/// <summary>
			/// EarthView服务支持的地理编码数据集元数据信息类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeoCodeLayerInfo:
				public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="geocodename">数据集名称</param>
                /// <returns></returns>
				CEVGeoCodeLayerInfo(_in const EVString& geocodename);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeoCodeLayerInfo();
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				const EVString& getGeocodeName() const;
				
				/// <summary>
                /// 获取字段名称
                /// </summary>
                /// <returns>字段名称</returns>
				const EVString& getFieldName() const;
				
				/// <summary>
                /// 获取最大可见高度
                /// </summary>
                /// <returns>最大可见高度</returns>
				ev_real64 getMaxVisibleHeight() const;
				
				/// <summary>
                /// 获取最小可见高度
                /// </summary>
                /// <returns>最小可见高度</returns>
				ev_real64 getMinVisibleHeight() const;
				
				/// <summary>
                /// 获取标注最大标记高度
                /// </summary>
                /// <returns>标注最大标记高度</returns>
				ev_real64 getMaxLabelHeight() const;
				
				/// <summary>
                /// 获取标注最小标记高度
                /// </summary>
                /// <returns>标注最小标记高度</returns>
				ev_real64 getMinLabelHeight() const;
				
				/// <summary>
                /// 获取标注停靠风格
                /// </summary>
                /// <returns>停靠风格标识</returns>
				const EVString& getLabelDockStyle() const;

				/// <summary>
                /// 获取标注字体信息
                /// </summary>
                /// <returns>标注字体对象指针，不需外部释放</returns>
				const EarthView::World::Spatial::CServerFont* getFont() const;
				
				/// <summary>
                /// 获取图标信息
                /// </summary>
                /// <returns>图标对象指针，不需外部释放</returns>
				const EarthView::World::Spatial::CServerIcon* getIcon() const;

				///继承
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				virtual EVString getName() const;//同于getGeocodeName
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_GEOCODE_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需外部释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVGeoCodeLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrGeocodeName;
				EVString mstrFieldName;
				EVString mstrLabelDockStyle;

				ev_real64 mnMaxVisibleHeight;
				ev_real64 mnMinVisibleHeight;
				ev_real64 mnMaxLabelHeight;
				ev_real64 mnMinLabelHeight;
				
				EarthView::World::Spatial::CServerFont mFont;
				EarthView::World::Spatial::CServerIcon mIcon;

				friend class CEVSpatialServer;
			};

			class EV_SPATIALSERVERCLIENT_DLL CEVOBQDataMetaInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
ev_private:
				CEVOBQDataMetaInfo(_in EarthView::World::Core::CNameValuePairList* plist);				

			public:
				CEVOBQDataMetaInfo(_in const EVString& name,EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				virtual ~CEVOBQDataMetaInfo();
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				virtual EVString getName() const;
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				virtual ev_int32 getSrid()const ;

				virtual ev_void setVersion(ev_int32 version);
				virtual ev_int32 getVersion() ;		
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			private:				
				EVString mName;
				ev_int32 mVersion;
				ev_int32 mSrid;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialReference;
				EarthView::World::Spatial::Geometry::IEnvelope* mEnvelope;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mType;
				

				

			};

			class EV_SPATIALSERVERCLIENT_DLL CStreetViewMetaDataInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				CStreetViewMetaDataInfo(_in const EVString& name,EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				virtual ~CStreetViewMetaDataInfo();

				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				virtual EVString getName() const;
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				virtual ev_int32 getSrid()const ;
				virtual ev_int64 getPointCount();
				virtual ev_int32 getSubDivisionLevel();
				virtual ev_bool setName(EVString& name);
				virtual ev_bool setEnvelopeRef(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				virtual ev_bool setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* pSR);
				virtual ev_bool setSrid(ev_int32 srid);
				virtual ev_bool setPointCount(ev_int64 count);
				virtual ev_bool setSubDivisionLevel(ev_int32 level);
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			private:				
				EVString mName;				
				ev_int32 mSrid;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialReference;
				EarthView::World::Spatial::Geometry::IEnvelope* mEnvelope;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mType;
				ev_int64 mPointcount;
				ev_int32 mSubDivisionLevel;
ev_private:
				CStreetViewMetaDataInfo( EarthView::World::Core::CNameValuePairList *pList );

			};


		

			class EV_SPATIALSERVERCLIENT_DLL CEVBaseModelLayerInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
ev_private:
				CEVBaseModelLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist):EarthView::World::Spatial::GeoDataset::IDataMetaInfo(plist){}

			public:
				CEVBaseModelLayerInfo(_in const EVString& modelname){}
				virtual ~CEVBaseModelLayerInfo(){}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const{return EarthView::World::Spatial::GeoDataset::DT_UNKNOWN;}
				virtual EVString getName() const{return "";}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const{return NULL;}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const{return NULL;}
				virtual ev_int32 getSrid()const {return 0;}
				virtual ev_int32 getEvid()const {return 0;}
				virtual ev_void setVersion(ev_int32 version){}
				virtual ev_int32 getVersion() {return 0;}
				virtual ev_int32 getOctreeVersion() {return 0;}
				virtual void setAltitudeModel(EarthView::World::Spatial::Utility::EVAltitudeMode model) {}
				virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeModel() const {return EarthView::World::Spatial::Utility::AM_UNKNOW;}
				virtual void setAltitudeValue(ev_real64 value) {}
				virtual ev_real64 getAltitudeValue() const {return 0.0;}
				virtual ev_uint32 getOctreeNodeCount() {return 0;}
				virtual const EarthView::World::Spatial::CServerOctreeNode* getOctreeNodeRef(_in ev_uint32 index)const {return NULL;}
				virtual ev_uint32 getDBFieldCount() {return 0;}
				virtual const EarthView::World::Spatial::CServerDBField* getDBFieldRef(_in ev_uint32 index)const {return NULL;}
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther){}
			};

			/// <summary>
			/// EarthView服务支持的模型数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVModelLayerInfo
				:public CEVBaseModelLayerInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="modelname">模型数据名称</param>
                /// <returns></returns>
				CEVModelLayerInfo(_in const EVString& modelname);

				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_MODEL_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				virtual EVString getName() const;
				
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需外部释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/// <summary>
                /// 获取空间参考的SRID标识
                /// </summary>
                /// <returns>srid号</returns>
				ev_int32 getSrid()const;
				
				/// <summary>
                /// 获取对应的id号
                /// </summary>
                /// <returns>数据集id号</returns>
				ev_int32 getEvid()const;

				/// <summary>
				/// 设置数据集版本号
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setVersion(ev_int32 version);

				/// <summary>
				/// 获取版本号
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getVersion();

				/// <summary>
				/// 获取八叉树版本
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getOctreeVersion();
				
				/// <summary>
				/// 设置高度模式
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setAltitudeModel(EarthView::World::Spatial::Utility::EVAltitudeMode model);

				/// <summary>
				/// 获取高度模式
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeModel() const ;

				/// <summary>
				/// 设置高度模式值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setAltitudeValue(ev_real64 value);

				/// <summary>
				/// 获取高度模式值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 getAltitudeValue() const ;

				/// <summary>
                /// 获取八叉树结点数
                /// </summary>
                /// <returns>结点数目</returns>
				ev_uint32 getOctreeNodeCount();
				
				/// <summary>
                /// 获取指定索引的八叉树结点信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的八叉树结点对象指针</returns>
				const EarthView::World::Spatial::CServerOctreeNode* getOctreeNodeRef(_in ev_uint32 index)const;
				
				/// <summary>
                /// 获取数据库字段数目
                /// </summary>
                /// <returns>字段数目</returns>
				ev_uint32 getDBFieldCount();
				
				/// <summary>
                /// 获取指定索引的字段信息
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定的字段信息对象指针，不需释放</returns>
				const EarthView::World::Spatial::CServerDBField* getDBFieldRef(_in ev_uint32 index)const;
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVModelLayerInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVModelLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			protected:
				EVString mstrModelName;
				ev_int32 mnSrid;
                mutable EarthView::World::Spatial::Geometry::ISpatialReference* mSR;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				ev_int32 mnEvid;
 				ev_int32 mVersion;
				EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeModel;
				ev_real64 mAltitudeValue;

				//EarthView::World::Spatial::GeoDataset::EVDatasetType mnDatsatType;
				vector<EarthView::World::Spatial::CServerOctreeNode*> mlistOctreeNode;
				vector<EarthView::World::Spatial::CServerDBField*> mlistDBField;

				friend class CEVSpatialServer;
			};
			
			
			/// <summary>
			/// EarthView服务支持的模型模板数据集元数据信息类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVModelTemplateLayerInfo
				:public CEVModelLayerInfo
			{
			public:
				CEVModelTemplateLayerInfo(_in const EVString& datasetname): CEVModelLayerInfo(datasetname){}
				~CEVModelTemplateLayerInfo(){}

				EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					return EarthView::World::Spatial::GeoDataset::DT_SERVER_MODEL_TEMPLATE_DATASET;
				}
ev_private:
				CEVModelTemplateLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist): CEVModelLayerInfo(plist){}
			};

			/// <summary>
			/// EarthView服务支持的KML数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVKMLLayerInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
			public:				
				//const CClientBaseDefine::KMLLod* getKMLLodRef() const;
				//const CClientBaseDefine::LatLonAltBox* getKMLLatLonAltBoxRef() const;
				/*
				ev_real64 getEast() const;
				ev_real64 getWest() const;
				ev_real64 getSouth() const;
				ev_real64 getNorth() const;
				ev_real64 getMaxAltitude() const;
				ev_real64 getMinAltitude() const;
				*/
				
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVKMLLayerInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVKMLLayerInfo();

				//继承
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				virtual EVString getName() const;
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_KML_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVKMLLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrKMLName;
				//CClientBaseDefine::LatLonAltBox mKMLLatLonAltBox;
				//CClientBaseDefine::KMLLod mKMLLod;
				/*
				ev_real64 mdfNorth;
				ev_real64 mdfSouth;
				ev_real64 mdfEast;
				ev_real64 mdfWest;
				ev_real64 mdfMinAltitude;
				ev_real64 mdfMaxAltitude;
				*/
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				friend class CEVSpatialServer;
			};


			class EV_SPATIALSERVERCLIENT_DLL CEVVector3DMetaInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
ev_private:
				CEVVector3DMetaInfo(_in EarthView::World::Core::CNameValuePairList* plist);				

			public:
				CEVVector3DMetaInfo(_in const EVString& name,EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				virtual ~CEVVector3DMetaInfo();
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				virtual EVString getName() const;
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				virtual ev_int32 getSrid()const ;

				virtual ev_void setVersion(ev_int32 version);
				virtual ev_int32 getVersion() ;		

				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
				virtual ev_void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type);
				
				virtual EarthView::World::Spatial::Atlas::EVLayerType getLayerType() const;
				virtual ev_void setLayerType(EarthView::World::Spatial::Atlas::EVLayerType type);

				virtual void fromStream(EarthView::World::Core::CDataStream& objStream);

				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			private:				
				EVString mName;
				ev_uint32 mVersion;
				ev_int32 mSrid;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialReference;
				EarthView::World::Spatial::Geometry::IEnvelope* mEnvelope;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mType;
				EarthView::World::Spatial::Geometry::EVGeometryType mGeometryType;
				EarthView::World::Spatial::Atlas::EVLayerType mLayerType;
			};

			/// <summary>
			/// EarthView服务支持的数据集元数据信息类（部分元数据的抽象）
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVLayerInfo:
				public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVLayerInfo();
				
				/// <summary>
                /// 获取描述信息
                /// </summary>
                /// <returns>描述信息</returns>
				virtual EVString getLayerDescription() const;
				
				/// <summary>
                /// 获取所包含数据时间
                /// </summary>
                /// <returns>数据采集时间</returns>
				virtual EVString getDataTime() const;
				
				/// <summary>
                /// 获取数据更新时间
                /// </summary>
                /// <returns>更新时间</returns>
				virtual EVString getUpdateTime() const;
				
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				virtual EVString getLayerName() const;
				//virtual const EVString getLayerAttributes() const;
				
				/// <summary>
                /// 获取投影类型
                /// </summary>
                /// <returns>投影类型</returns>
				virtual EarthView::World::Spatial::EVSSCSRS getSRS() const;
				
				/// <summary>
                /// 获取文件格式
                /// </summary>
                /// <returns>文件格式</returns>
				virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const;
				
				/// <summary>
                /// 获取数据格式
                /// </summary>
                /// <returns>数据格式</returns>
				virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const;
				
				/// <summary>
                /// 获取要素几何类型
                /// </summary>
                /// <returns>几何类型</returns>
				virtual EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const;
				
				/// <summary>
                /// 获取最大数据级别
                /// </summary>
                /// <returns>最大数据级别</returns>
				virtual ev_int32 getMaxDataLevel() const;
				
				/// <summary>
                /// 获取最小数据级别
                /// </summary>
                /// <returns>最小数据级别</returns>
				virtual ev_int32 getMinDataLevel() const;
				
				/// <summary>
                /// 获取最大字段级别
                /// </summary>
                /// <returns>最大字段级别</returns>
				virtual ev_int32 getMaxFieldLevel() const;
				
				/// <summary>
                /// 获取最小字段级别
                /// </summary>
                /// <returns>最小字段级别</returns>
				virtual ev_int32 getMinFieldLevel() const;
				
				/// <summary>
                /// 获取最大比例尺
                /// </summary>
                /// <returns>最大比例尺分母</returns>
				virtual ev_real64 getMaxScale() const;
				
				/// <summary>
                /// 获取最小比例尺
                /// </summary>
                /// <returns>最小比例尺分母</returns>
				virtual ev_real64 getMinScale() const;
				
				/// <summary>
                /// 获取属性字段个数
                /// </summary>
                /// <returns>属性个数</returns>
				virtual ev_uint32 getAttributesCount() const;
				
				/// <summary>
                /// 获取指定属性名称
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定属性字段名称</returns>
				virtual EVString getAttribute(_in ev_uint32 index)const;

				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围和对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			protected:
				CEVLayerInfo(_in const CEVLayerInfo& info);
				CEVLayerInfo();
			ev_private:
				CEVLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);	
			ev_private:
				///图层名称
				EVString mstrLayerName;
				EVString mstrDescription;
				EVString mstrDataTime;
				EVString mstrUpdateTime;
				vector<EVString> mListLayerAttributes;

				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;

				EarthView::World::Spatial::EVSSCLayerDataType mnLayerDataType;
				EarthView::World::Spatial::EVSSCFileFormat mnFileFormat;
				EarthView::World::Spatial::EVSSCGeometryType mnGeometryType;
				EarthView::World::Spatial::EVSSCSRS mnSRS;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
				ev_int32 mnMaxDataLevel;
				ev_int32 mnMinDataLevel;
				ev_int32 mnMaxFieldLevel;
				ev_int32 mnMinFieldLevel;
				ev_real64 mdfMaxScale;
				ev_real64 mdfMinScale;

				friend class CEVSpatialServer;
				friend class CEVSpatialServerMetadataCacheVisitor;
			};

			/// <summary>
			/// EarthView服务支持的WMTS数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVWMTSLayerInfo
				:public EarthView::World::Spatial::CEVLayerInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVWMTSLayerInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
				/// <param name=""></param>
                /// <returns></returns>
				virtual ~CEVWMTSLayerInfo();
				
				/// <summary>
                /// 获取标注字段
                /// </summary>
                /// <returns>标注字段名称</returns>
				const EVString getAnnotationField() const;
				
				/// <summary>
                /// 获取缓存模式
                /// </summary>
                /// <returns>缓存模式：WGS84/Mercator</returns>
				EarthView::World::Spatial::EVSSCCacheMode getCacheMode() const;
				
				/// <summary>
                /// 获取风格标识
                /// </summary>
                /// <returns>风格标识</returns>
				const EVString getStyleName() const;
				
				/// <summary>
                /// 获取专题标识
                /// </summary>
                /// <returns>专题标识</returns>
				const EVString getTheme() const;				
				
				/// <summary>
                /// 获取是否可查询
                /// </summary>
                /// <returns>0不可查询，1可以查询</returns>
				ev_int32 getQuaryable() const;
				
				/// <summary>
                /// 获取瓦片高度
                /// </summary>
                /// <returns>高度值，单位像素</returns>
				ev_uint32 getTileHeight() const;
				
				/// <summary>
                /// 获取瓦片宽度
                /// </summary>
                /// <returns>宽度值，单位像素</returns>
				ev_uint32 getTileWidth() const;
				
				/// <summary>
                /// 获取缓存数据类型
                /// </summary>
                /// <returns>vector/image/dem</returns>
				EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType() const;
				
				//inherit
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_WMTS_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				//inherit
				/// <summary>
				/// 获取数据集类型
				/// </summary>
				/// <returns>数据集类型：DT_SERVER_WMTS_DATASET</returns>
				virtual ev_void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
				
				//inherit
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>名称</returns>
				virtual EVString getName() const;//同于getGeocodeName

				/// <summary>
				/// 用户自定义数据
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Core::CVariant userData();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVWMTSLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			ev_private :	
				///数据集名称
				EVString mstrName;
				EarthView::World::Spatial::EVSSCCacheDataType mnFileType;
				EarthView::World::Spatial::EVSSCCacheMode mnCacheMode;
				EVString mstrAnnotationField;
				ev_int32 mnQuaryable;
				EVString mstrStyleName;
				EVString mstrTheme;
				ev_uint32 mnTileHeight;
				ev_uint32 mnTileWidth;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mDatasetType;
			
				EarthView::World::Core::CVariant mUserData;

				friend class CEVSpatialServer;
				friend class CEVSpatialServerMetadataCacheVisitor;
			};

			

			

			/// <summary>
			/// EarthView服务支持的WMS地图图层数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVMapLayerInfo:
					public EarthView::World::Spatial::CEVLayerInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVMapLayerInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVMapLayerInfo();
				
				/// <summary>
                /// 是否有附加缓存信息
                /// </summary>
                /// <returns>true表示有</returns>
				ev_bool hasCache() const;
				
				/// <summary>
                /// 获取专题信息
                /// </summary>
                /// <returns>专题对象指针</returns>
				const EarthView::World::Spatial::CServerTheme* getThemeRef() const;
				
				/// <summary>
                /// 获取风格信息
                /// </summary>
                /// <returns>风格对象指针</returns>
				const EarthView::World::Spatial::CServerStyle* getStyleRef() const;
				
				/// <summary>
                /// 获取缓存信息
                /// </summary>
                /// <returns>缓存对象指针</returns>
				const EarthView::World::Spatial::CServerCacheLayerInfo* getCacheLayerInfoRef() const;
				
				/// <summary>
                /// 获取标注信息
                /// </summary>
                /// <returns>标注对象指针</returns>
				const EarthView::World::Spatial::CServerAnnotation* getAnnotationRef() const;

				//inherit
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>名称</returns>
				virtual EVString getName() const;//同于getGeocodeName
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_WMS_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="info">拷贝对象</param>
                /// <returns></returns>
				CEVMapLayerInfo(_in const CEVMapLayerInfo& info);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			ev_private:
				CEVMapLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EarthView::World::Spatial::CServerAnnotation* mpAnnotation;
				ev_bool mbHasCache; 
				EarthView::World::Spatial::CServerTheme* mpTheme;
				EarthView::World::Spatial::CServerStyle* mpStyle;
				EarthView::World::Spatial::CServerCacheLayerInfo* mpCacheLayerInfo;
				friend class CEVWMSMapInfo;
				friend class CEVSpatialServer;

			};

			/// <summary>
			/// EarthView服务支持的几何数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVGeometryInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="maoname">数据集名称</param>
                /// <returns></returns>
				CEVGeometryInfo(_in const EVString& mapname);
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_GEOMETRY_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>名称</returns>
				virtual EVString getName() const;
				
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeometryInfo();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			protected:
				CEVGeometryInfo();
			ev_private:
				
				CEVGeometryInfo(_in EarthView::World::Core::CNameValuePairList* plist);
				EVString mstrName;
				friend class CEVSpatialServer;
			};	
			
			/// <summary>
			/// EarthView服务支持的WFS图层数据集元数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVWFSLayerInfo
				:public EarthView::World::Spatial::CEVMapLayerInfo
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVWFSLayerInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVWFSLayerInfo();
				
				//inherit
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_WFS_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

			ev_private:
				CEVWFSLayerInfo(_in EarthView::World::Core::CNameValuePairList* plist);

				friend class CEVSpatialServer;
			};


			/// <summary>
			/// EarthView服务支持的WMS地图数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSMapInfo:
						public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据集名称</param>
                /// <returns></returns>
				CEVWMSMapInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVWMSMapInfo();
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>名称</returns>
				virtual EVString getName() const;
				
				/// <summary>
                /// 获取描述信息
                /// </summary>
                /// <returns>描述</returns>
				const EVString getDescription() const;
				
				/// <summary>
                /// 获取投影类型
                /// </summary>
                /// <returns>投影类型</returns>
				EarthView::World::Spatial::EVSSCSRS getSRS() const;
				
				/// <summary>
                /// 获取最大比例尺
                /// </summary>
                /// <returns>最大比例尺分母</returns>
				ev_real64 getMaxScale() const;
				
				/// <summary>
                /// 获取最小比例尺
                /// </summary>
                /// <returns>最小比例尺分母</returns>
				ev_real64 getMinScale() const;
				
				/// <summary>
                /// 获取图层数目
                /// </summary>
                /// <returns>图层个数</returns>
				ev_uint32 getLayerCount() const;
				
				/// <summary>
                /// 获取指定索引图层的元数据
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>图层元数据信息对象指针</returns>
				const EarthView::World::Spatial::CEVMapLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取指定名称图层的元数据
                /// </summary>
				/// <param name="layername">图层名称</param>
                /// <returns>图层元数据信息对象指针</returns>
				const EarthView::World::Spatial::CEVMapLayerInfo* getLayerInfoRef(_in EVString layername) const;
				
				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取空间参考信息
                /// </summary>
                /// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_WMS_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			protected:
				CEVWMSMapInfo();
			ev_private:
				CEVWMSMapInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrMapName;
				EVString mstrDescription;
				EarthView::World::Spatial::EVSSCSRS mnSRS;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				ev_real64 mdfMaxScale;
				ev_real64 mdfMinScale; 
				ev_uint32 mnLayerCount;
				vector<EarthView::World::Spatial::CEVMapLayerInfo*> mlistLayers;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
				friend class CEVSpatialServer;
			};

			
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSChartObjectInfo:
				public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
		ev_private:
				CEVWMSChartObjectInfo(_in EarthView::World::Core::CNameValuePairList *pList)
					: EarthView::World::Spatial::GeoDataset::IDataMetaInfo(pList)
				{
					if (NULL != pList && pList->GetAt("objectname"))
					{
						mChartObjectName = EVString((ev_char*)(pList->GetAt("objectname")));
					}
				}
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="objectname">数据集名称</param>
				/// <returns></returns>
				CEVWMSChartObjectInfo(_in const EVString& objectname)
					:mChartObjectName(objectname)
				{
					mnSRS = SSC_SRS_Unknown;
					mpSR = NULL;
					mpEnvelope =NULL;
				}

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWMSChartObjectInfo()
				{
					if (NULL != mpSR)
					{
						delete mpSR;
					}
					if(mpEnvelope)
						EV_DELETE mpEnvelope;
				}

				EVString getName() const
				{
					return mChartObjectName;
				}

				EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					return EarthView::World::Spatial::GeoDataset::DT_SERVER_WMS_CHART_DATASET;
				}

				const EVString& getChartObjectName()const
				{
					return mChartObjectName;
				}
				
				const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
				{
					return mpEnvelope;
				}

				EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					return mpSR;
				}


				ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					const CEVWMSChartObjectInfo* p = dynamic_cast<const CEVWMSChartObjectInfo*>(pOther);
					if (NULL != p)
					{
						mChartObjectName = p->mChartObjectName;
						mpEnvelope = p->mpEnvelope->clone();
						if (NULL != p->mpSR)
						{
							if (NULL != mpSR)
							{
								delete mpSR;
							}
							mpSR = p->mpSR->clone();
						}
					}					
				}

			private:
				EarthView::World::Spatial::EVSSCSRS mnSRS;
				EVString mChartObjectName;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
				friend class CEVSpatialServer;
			};
			
			
			
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSImageInfo:
				public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
				friend class MetaObjectInfoSerialize;
ev_private:
				CEVWMSImageInfo(_in EarthView::World::Core::CNameValuePairList *pList)
					: EarthView::World::Spatial::GeoDataset::IDataMetaInfo(pList)
				{
					if (NULL != pList && pList->GetAt("dataname"))
					{
						mDataname = EVString((ev_char*)(pList->GetAt("dataname")));
					}
				}
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="objectname">数据名称</param>
				/// <returns></returns>
				CEVWMSImageInfo(_in const EVString& dataname)
					:mDataname(dataname)
				{
					mpSR = NULL;
				}

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWMSImageInfo()
				{

				}

				const EVString& getDataname()const {return mDataname;}
				ev_real64 getDownRightX() {return downRightX;}
				ev_real64 getDownRightY() {return downRightY;}
				ev_real64 getTmageHeight() {return imageHeight;}
				const EVString& getImageName()const {return imageName;}
				const EVString& getImageType()const {return imageType;}
				ev_real64 getImageWidth() {return imageWidth;}
				ev_int32 getNumberOfBand() {return numberOfBand;}
				const EVString getRasterTime() const {return rasterTime;}
				ev_real64 getResolutionOfX() {return resolutionOfX;}
				ev_real64 getResolutionOfY() {return resolutionOfY;}
				ev_real64 getUpLeftX() {return upLeftX;}
				ev_real64 getUpLeftY() {return upLeftY;}
				const EVString& getWKTProjectInfo() const {return WKTProjectInfo;}

				EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{					
					return mpSR;
				}

				ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
				{
					const CEVWMSImageInfo* p = dynamic_cast<const CEVWMSImageInfo*>(pOther);
					if (NULL != p)
					{
						mDataname = p->mDataname;
						downRightX = p->downRightX;	
						downRightY = p->downRightY;	
						imageHeight = p->imageHeight;	
						imageName = p->imageName;	
						imageType = p->imageType;
						imageWidth = p->imageWidth;	
						numberOfBand = p->numberOfBand;	
						rasterTime = p->rasterTime;
						resolutionOfX = p->resolutionOfX;
						resolutionOfY = p->resolutionOfY;
						upLeftX = p->upLeftX;	
						upLeftY = p->upLeftY;	
						WKTProjectInfo = p->WKTProjectInfo;
					}
				}

				EVString getName() const
				{
					return mDataname;
				}

				EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
				{
					return EarthView::World::Spatial::GeoDataset::DT_SERVER_WMS_IMAGE_DATASET;
				}
			private:
				EVString mDataname;
				ev_real64 downRightX;	
				ev_real64 downRightY;	
				ev_real64 imageHeight;	
				EVString imageName;	
				EVString imageType;
				ev_real64 imageWidth;	
				ev_int32 numberOfBand;	
				EVString rasterTime;
				ev_real64 resolutionOfX;
				ev_real64 resolutionOfY;
				ev_real64 upLeftX;	
				ev_real64 upLeftY;	
				EVString WKTProjectInfo;

				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;

				friend class CEVSpatialServer;
			};
			/// <summary>
			/// EarthView服务支持的WFS地图数据信息类
			/// </summary>	
			class EV_SPATIALSERVERCLIENT_DLL CEVWFSMapInfo:
						public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="objectname">数据名称</param>
                /// <returns></returns>
				CEVWFSMapInfo(_in const EVString& objectname);
				
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVWFSMapInfo();
				
				/// <summary>
                /// 获取数据名称
                /// </summary>
                /// <returns>数据名称</returns>
				virtual EVString getName() const;
				
				/// <summary>
                /// 获取数据描述
                /// </summary>
                /// <returns>数据描述</returns>
				const EVString getDescription() const;
				
				/// <summary>
                /// 获取投影信息
                /// </summary>
                /// <returns>数据投影类型</returns>
				EarthView::World::Spatial::EVSSCSRS getSRS() const;
				
				/// <summary>
                /// 获取最大比例尺
                /// </summary>
                /// <returns>最大比例尺分母</returns>
				ev_real64 getMaxScale() const;
				
				/// <summary>
                /// 获取最小比例尺
                /// </summary>
                /// <returns>最小比例尺分母</returns>
				ev_real64 getMinScale() const;
				
				/// <summary>
                /// 获取图层数
                /// </summary>
                /// <returns>所含图层数</returns>
				ev_uint32 getLayerCount() const;
				
				/// <summary>
                /// 获取指定索引图层的元数据
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>图层元数据信息对象指针</returns>
				const EarthView::World::Spatial::CEVWFSLayerInfo* getLayerInfoRef(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取指定名称图层的元数据
                /// </summary>
				/// <param name="layername">图层名称</param>
                /// <returns>图层元数据信息对象指针</returns>
				const EarthView::World::Spatial::CEVWFSLayerInfo* getLayerInfoRef(_in EVString layername) const;
				
				/// <summary>
                /// 获取数据集包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				
				/// <summary>
                /// 获取空间参考
                /// </summary>
                /// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型：DT_SERVER_WFS_DATASET</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clone(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
			protected:
				CEVWFSMapInfo();
			ev_private:
				CEVWFSMapInfo(_in EarthView::World::Core::CNameValuePairList* plist);
			private:
				EVString mstrMapName;
				EVString mstrDescription;
				EarthView::World::Spatial::EVSSCSRS mnSRS;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
				ev_real64 mdfMaxScale;
				ev_real64 mdfMinScale; 
				ev_uint32 mnLayerCount;
				vector<EarthView::World::Spatial::CEVWFSLayerInfo*> mlistLayers;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
				friend class CEVSpatialServer;
			};

			
		
			
		}
	}
}
#endif
