#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGE_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CDATAEXCHANGE_H

#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
#include "spatialinterface/idataexchange.h"
#include "spatialinterface/idataexchangelistener.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ifeatureselection.h"
#include "core/stringvector.h"
// using namespace EarthView::World::Spatial::Geometry;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换参数类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataExchangeParam
					:public EarthView::World::Core::CAllocatedObject
				{
				private:
					//ev_bool bIgnoreFields;
					//ev_bool bIgnoreError;
					//ev_bool bIgnoreStyle;
					//ev_bool bDefaultName;
					//ev_bool bSrcDataSourceIsFolderPath;
					//ev_bool bDestDataSourceIsFolderPath;
					EarthView::World::Spatial::Convertor::EVDatasetDimension mnToDimension;
					//IQueryFilter* pFilter;
					ev_uint32* mpSelectedIDs;///从0开始
					ev_uint32 mnSelectedIDCount;
					ev_bool mbConvertAllFeatures;///转换所有的要素
					ev_vector<EVString> mlistFieldName;///要转换的字段名称
					ev_uint32 mnFieldNameCount;
					ev_bool mbConvertAllFields;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSRS;///目标投影
					ev_real64 m7Param[7];///坐标转换7参数
					ev_bool mbLocked;
					ev_bool mbTranslateCoordinates;
					ev_bool mbDiscardEmptyGeometryRecord;
					ev_bool mbDiscardInsignificanceGeometryRecord;
					EVString mstrSQL;
					ev_bool mbUseSQL;
					ev_bool mbUseSelectID;
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CDataExchangeParam();

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CDataExchangeParam();

					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name="param">拷贝对象</param>
					/// <returns></returns>
					CDataExchangeParam(_in const CDataExchangeParam& param);

					/// <summary>
					/// 是否抛弃空几何对象对应的记录
					/// </summary>
					/// <returns>true抛弃对应记录，false保留</returns>
					ev_bool isDiscardEmptyGeometryRecord()const;

					/// <summary>
					/// 是否抛弃无效几何对象对应的记录，如某线只含1个点，多边形含有一点或2点
					/// </summary>
					/// <returns>true抛弃对应记录，false保留</returns>
					ev_bool isDiscardInsignificanceGeometryRecord()const;

					/// <summary>
					/// 设置是否抛弃空几何对象对应的记录
					/// </summary>
					/// <param name="value">true抛弃空几何对象对应记录，false保留</param>
					/// <returns></returns>
					ev_void setDiscardEmptyGeometryRecord(_in ev_bool value);

					/// <summary>
					/// 设置是否抛弃无效几何对象对应的记录
					/// </summary>
					/// <param name="value">true抛弃无效几何对象对应记录，false保留</param>
					/// <returns></returns>
					ev_void setDiscardInsignificanceGeometryRecord(_in ev_bool value);
					/// <summary>
					/// 设置投影7参数
					/// </summary>
					/// <param name="dx">偏移参数x</param>
					/// <param name="dy">偏移参数y</param>
					/// <param name="dz">偏移参数z</param>
					/// <param name="rx">旋转参数x</param>
					/// <param name="ry">旋转参数y</param>
					/// <param name="rz">旋转参数z</param>
					/// <param name="ppm">比例参数</param>
					/// <returns></returns>
					ev_void setProject7Param(_in ev_real64 dx,_in ev_real64 dy,_in ev_real64 dz,_in ev_real64 rx,_in ev_real64 ry,_in ev_real64 rz,_in ev_real64 ppm);
					
					/// <summary>
					/// 获取坐标转换7参数
					/// </summary>
					/// <returns>参数首地址，不需释放</returns>
					const ev_real64* getProject7Param()const;

					/// <summary>
					/// 为目标数据设置新坐标系
					/// </summary>
					/// <param name="sr">坐标系对象</param>
					/// <param name="translateCoordinates">是否转换坐标</param>
					/// <returns></returns>
					ev_void setDestSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr,_in ev_bool translateCoordinates);
					
					/// <summary>
					/// 获取是否转换坐标
					/// </summary>
					/// <returns>true标识进行坐标转换，false表示直接拷贝坐标</returns>
					ev_bool isTranslateCoordiantes()const;
					
					/// <summary>
					/// 投影转换参数恢复默认
					/// </summary>
					/// <returns></returns>
					ev_void resetProject7Param();
					
					/// <summary>
					/// 获取目标数据集坐标参考
					/// </summary>
					/// <returns>坐标参考对象指针，不需释放</returns>
					const EarthView::World::Spatial::Geometry::ISpatialReference* getDestSpatialReference()const;
					
					/// <summary>
					/// 设置目标数据集维度
					/// </summary>
					/// <param name="dimesion">目标数据集维度</param>
					/// <returns></returns>
					ev_void setDestDimension(_in EarthView::World::Spatial::Convertor::EVDatasetDimension dimesion);

					/// <summary>
					/// 获取目标数据集维度
					/// </summary>
					/// <returns>目标数据集维度</returns>
					EarthView::World::Spatial::Convertor::EVDatasetDimension getDestDimension();

					/// <summary>
					/// 设置选择要素的sql语句
					/// </summary>
					/// <param name="sql">sql语句</param>
					/// <returns></returns>
					ev_void setSelectFeatureSQL(_in const EVString& sql);

					/// <summary>
					/// 获取选择要素的sql语句
					/// </summary>
					/// <returns>选择要素所用的sql语句</returns>
					const EVString getSelectFeatureSQL()const;

					/// <summary>
					/// 使用sql语句选择要素
					/// </summary>
					/// <returns>处理部分要素的情况下，如果使用sql语句选择要素，返回true,否则，返回false</returns>
					/// <returns>处理全部要素时，返回false</returns>
					ev_bool isSelectFeatureBySQL();

					/// <summary>
					/// 使用选定id号选择要素
					/// </summary>
					/// <returns>处理部分要素的情况下，如果使用选定id选择要素，返回true,否则，返回false</returns>
					/// <returns>处理全部要素时，返回false</returns>
					ev_bool isSelectFeatureByIDs();

					/// <summary>
					/// 设置选择要素（需要转换的要素）
					/// </summary>
					/// <param name="features">要素ID序列</param>
					/// <param name="count">要素ID个数</param>
					/// <returns></returns>
					ev_void setSelectedFeatures(_in ev_int32* featureIDs,_in ev_uint32 count);

					/// <summary>
					/// 获取所选择要素的个数
					/// </summary>
					/// <returns>选择要素的个数</returns>
					ev_uint32 getSelectedFeatureCount() const;

					/// <summary>
					/// 选择要素中指定索引的id
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>对应要素id</returns>
					ev_int32 getSelectedFeatureID(_in ev_uint32 index) const;

					/// <summary>
					/// 重新设置需要转换的要素
					/// </summary>
					/// <returns></returns>
					ev_void resetConvertFeatures();///还原为全部转换

					/// <summary>
					/// 是否转换所有要素
					/// </summary>
					/// <returns>true/false</returns>
					ev_bool isConvertAllFeatures() const;
					//EarthView::World::Spatial::Convertor::CDataExchangeParam* clone();

					/// <summary>
					/// 设置要转换的字段
					/// </summary>
					/// <param name="fieldnamelist">字段名称列表</param>
					/// <returns></returns>
					ev_void setSelectedFields(_in EarthView::World::Core::StringVector& fieldnamelist);

					/// <summary>
					/// 获取要转换的字段个数
					/// </summary>
					/// <returns>字段个数</returns>
					ev_uint32 getSelectedFieldCount() const;

					/// <summary>
					/// 选择字段指定索引对应的名称
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>对应名称</returns>
					EVString getSelectedFieldName(_in ev_uint32 index);

					/// <summary>
					/// 重新设置要选则的字段
					/// </summary>
					/// <returns></returns>
					ev_void resetConvertFields();///还原为全部转换

					/// <summary>
					/// 是否转换所有字段
					/// </summary>
					/// <returns>true/false</returns>
					ev_bool isConvertAllFields()const;
				ev_private:
					CDataExchangeParam(_in EarthView::World::Core::CNameValuePairList* pList );
				private:
					ev_void lockParam();
					ev_void unlockParam();

					friend class CDataExchange2D;
				};

				/// <summary>
				/// 数据交换驱动类
				/// </summary>
				class CDataDriver;

				/// <summary>
				/// 数据交换类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDataExchange:
					public EarthView::World::Spatial::Convertor::IDataExchange
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CDataExchange();

					/// <summary>
					/// 数据转换
					/// </summary>
					/// <returns>转换结果，0 OK</returns>
					///1 Error_DataPath;2 Error_DataFormat_Or_NotSupport;3 Error_DataExists;4 Error_DataNotExists;5 Error_Data;6 Error_DataCannotRead
					///7 Error_DataCannotWrite;8 Error_ReadData;9 Error_WriteData;10 Error_OperateMode;11 Error_FeatureIndex;12 Error_DriverParamNotEnough
					///13 Error_DriverParam;14 Error_DataSource;20 Error_NotSupportSuchProjection;21 Error_DataStructure;100 Error_Other
					virtual ev_int32 exchange();
					/// <summary>
					/// 设置源数据转换驱动
					/// </summary>
					/// <param name="driver">驱动对象</param>
					/// <returns></returns>
					virtual ev_void setSrcDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);

					/// <summary>
					/// 设置目标数据转换驱动
					/// </summary>
					/// <param name="driver">驱动对象</param>
					/// <returns></returns>
					virtual ev_void setDestDataDriver(_in const EarthView::World::Spatial::Convertor::CDataDriver* ref_driver);

					/// <summary>
					/// 获取数据转换类型
					/// </summary>
					/// <returns>数据转换类型，2维还是3维</returns>
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const;

					/// <summary>
					/// 设置监听（内部保存引用）
					/// </summary>
					/// <param name="listener">监听对象，程序结束需外部删除</param>
					/// <returns></returns>
					virtual ev_void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);

					/// <summary>
					/// 获取监听对象
					/// </summary>
					/// <returns>获取监听对象指针</returns>
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const;
				ev_private:
					CDataExchange(_in EarthView::World::Core::CNameValuePairList* pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CDataExchange();
					
					EarthView::World::Spatial::Convertor::EVDataExchangeType mnDataExchangeType;

					EarthView::World::Spatial::Convertor::CDataDriver* mpSrcDriver;
					EarthView::World::Spatial::Convertor::CDataDriver* mpDestDriver;
				
					EarthView::World::Spatial::Convertor::IDataExchangeListener* mpListener;
				};
			}
		}
	}
}
#endif
