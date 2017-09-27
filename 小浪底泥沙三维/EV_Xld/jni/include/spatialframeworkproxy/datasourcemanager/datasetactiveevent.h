#ifndef DATASET_ACTIVE_EVENT_H__
#define DATASET_ACTIVE_EVENT_H__
#include "core/event.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idataset.h"
#include "spatialdatabase/fields.h"
#include "spatialobject/coordinatesystem/coordinatesysenumtype.h"
#include "spatialinterface/igeometry.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"


namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				class CDataSourceActiveEvent;

				class EV_FRAMEWORKPROXY_DLL CDatasetActiveEvent : public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
					CDatasetActiveEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDatasetActiveEvent();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型，FrameworkEventType类型</param>
					/// <returns></returns>					
					CDatasetActiveEvent(ev_int32 type);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					~CDatasetActiveEvent();
					
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>					
					const EVString& getDatasetName() const; 

					/// <summary>
					/// 设置数据集名称
					/// </summary>
					/// <param name="name">数据集名称</param>
					/// <returns></returns>					
					ev_void setDatasetName(const EVString& name); 

					/// <summary>
					/// 获取数据集所属数据源的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>					
					const EVString& getDataSourceName() const;

					/// <summary>
					/// 设置数据集所属数据源的名称
					/// </summary>
					/// <param name="name">数据源名称</param>
					/// <returns></returns>					
					ev_void setDataSourceName(const EVString& name);

					/// <summary>
					/// 获取数据集所属数据源的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>					
					EarthView::World::Spatial::GeoDataset::EVDataSourceType getSourceType() const; 

					/// <summary>
					/// 设置数据集所属数据源的类型
					/// </summary>
					/// <param name="type">数据源类型</param>
					/// <returns></returns>					
					ev_void setSourceType(EarthView::World::Spatial::GeoDataset::EVDataSourceType type); 

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>					
					EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const; 

					/// <summary>
					/// 设置数据集类型
					/// </summary>
					/// <param name="type">数据集类型</param>
					/// <returns></returns>					
					ev_void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type); 


					/// <summary>
					/// 设置创建模型数据集时的属性字段
					/// </summary>
					/// <param name="fields">属性字段</param>
					/// <returns></returns>					
					ev_void setModelDatasetAttrFilds(EarthView::World::Spatial::GeoDataset::CFields& fields);

					/// <summary>
					/// 设置创建矢量数据集时的属性字段
					/// </summary>
					/// <param name="fields">属性字段</param>
					/// <returns></returns>					
					ev_void setVectorDatasetAttrFilds(EarthView::World::Spatial::GeoDataset::CFields& fields);

					/// <summary>
					/// 获取创建模型数据集时的属性字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段列表</returns>					
					const EarthView::World::Spatial::GeoDataset::CFields* getModelDatasetAttrFilds() const;

					/// <summary>
					/// 设置创建矢量数据集是的矢量类型及坐标系统
					/// </summary>
					/// <param name="type">矢量类型</param>
					/// <param name="coordSys">坐标系统</param>
					/// <returns></returns>					
					ev_void setVectorDatasetInfo(EarthView::World::Spatial::Geometry::EVGeometryType type, ev_int32 coordSys);
					/// <summary>
					/// 设置创建矢量数据集是的矢量类型及坐标系统
					/// </summary>
					/// <param name="type">矢量类型</param>
					/// <param name="WKTcoordSys">坐标系统</param>
					/// <returns></returns>					
					ev_void setVectorDatasetInfo(EarthView::World::Spatial::Geometry::EVGeometryType type, EVString wktCoordSys);
					/// <summary>
					/// 获取创建矢量数据集市设置的矢量数据集类型和坐标系统
					/// </summary>
					/// <param name="type">输出 矢量类型</param>
					/// <param name="coordSys">输出 坐标系统</param>
					/// <returns></returns>					
					ev_void getVectorDatasetInfo(EarthView::World::Spatial::Geometry::EVGeometryType& type, ev_int32& coordSys);
					/// <summary>
					/// 获取创建矢量数据集市设置的矢量数据集类型和坐标系统
					/// </summary>
					/// <param name="type">输出 矢量类型</param>
					/// <param name="wktCoordSys">输出 坐标系统</param>
					/// <returns></returns>					
					ev_void getVectorDatasetInfo(EarthView::World::Spatial::Geometry::EVGeometryType& type, EVString& wktCoordSys);

					/// <summary>
					/// 获取创建矢量数据集时的属性字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段列表</returns>					
					const EarthView::World::Spatial::GeoDataset::CFields* getVectorDatasetAttrFilds() const;
					/// <summary>
					/// 设置模型数据集类型
					/// </summary>
					/// <param name="isModelTemplateDataset"> true: 模型模板数据集； false：模型数据集</param>
					/// <returns></returns>					
					ev_void setModelDatasetType(ev_bool isModelTemplateDataset);

					/// <summary>
					/// 获取模型数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>true: 模型模板数据集； false：模型数据集</returns>					
					ev_bool getModelDatasetType() const;

					/// <summary>
					/// 设置模型数据集的坐标系统类型
					/// </summary>
					/// <param name="type">0:EVWellKnownGeoCSType; 1: EVWellKnownProjCSType</param>
					/// <param name="coordSys">坐标系统</param>
					/// <returns></returns>					
					ev_void setModelDatasetCoordSys( ev_int32 type, ev_int32 coordSys);

					/// <summary>
					/// 设置坐标系统的名称
					/// </summary>
					/// <param name="name">坐标系统名称</param>
					/// <returns></returns>					
					ev_void setCoordianteSystemName(EVString& name);

					/// <summary>
					/// 获取坐标系统名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统名称</returns>					
					const EVString& getCoordianteSystemName() const;

					/// <summary>
					/// 获取模型数据集使用的坐标系统类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>0:EVWellKnownGeoCSType; 1: EVWellKnownProjCSType</returns>					
					ev_int32 getModelDatasetCoordSysType() const;

					/// <summary>
					/// 获取设置的模型数据集的EVWellKnownGeoCSType类型坐标系统值
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统值</returns>					
					EarthView::World::Spatial::Utility::EVWellKnownGeoCSType getModelDatasetGeoCSType() const;

					/// <summary>
					/// 获取设置的模型数据集的EVWellKnownProjCSType类型坐标系统值
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统值</returns>					
					EarthView::World::Spatial::Utility::EVWellKnownProjCSType getModelDatasetProjCSType() const;

					/// <summary>
					/// 获取坐标系统值，不带坐标系统类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统值</returns>					
					ev_int32 getCoordSys() const;
					/// <summary>
					/// 获取坐标系统值，不带坐标系统类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统值</returns>					
					EVString getWKTCoordSys() const;
					/// <summary>
					/// 获取事件处理的状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>true成功， false 失败</returns>					
					ev_bool getResponseState();

					/// <summary>
					/// 设置事件处理的状态
					/// </summary>
					/// <param name="state">true成功， false 失败</param>
					/// <returns></returns>					
					ev_void setResponseState(ev_bool state);

					/// <summary>
					/// 设置错误消息
					/// </summary>
					/// <param name="msg">错误消息</param>
					/// <returns></returns>
					ev_void setErrorMsg(const EVString& msg);

					/// <summary>
					/// 获取错误消息
					/// </summary>
					/// <param name=""></param>
					/// <returns>错误消息</returns>
					EVString getErrorMsg() const;

				protected:
				private:

					EVString mDataSetName;

					EVString mDataSourceName;

					EarthView::World::Spatial::GeoDataset::EVDataSourceType mDataSourceType;

					EarthView::World::Spatial::GeoDataset::EVDatasetType mDataSetType;

					///模型数据集使用
					EarthView::World::Spatial::GeoDataset::CFields* mpModelDatasetAttrFilds;

					///矢量数据集字段
					EarthView::World::Spatial::GeoDataset::CFields* m_pVectorDatasetAttrFilds;

					///矢量数据集使用
					EarthView::World::Spatial::Geometry::EVGeometryType mGeometryType;

					///坐标系统
					ev_int32 mCoordSys;
					///自定义坐标系统 wkt
					EVString mWKTCoordSys;
					// 0:EVWellKnownGeoCSType; 1: EVWellKnownProjCSType; -1 :UserDefine
					ev_int32 mCoordSysType;

					EVString mCoordianteSystemName;

					/// 是否是模型模板数据集
					ev_bool mIsModelTemplateDataset;

					ev_bool mResponseState;

					EVString mErrorMsg;

				};
			}}}}
#endif
