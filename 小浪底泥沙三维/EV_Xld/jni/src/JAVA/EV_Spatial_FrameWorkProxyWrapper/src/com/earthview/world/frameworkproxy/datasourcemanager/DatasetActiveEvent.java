package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetActiveEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent", new DatasetActiveEventClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DatasetActiveEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDatasetActiveEvent", null);
	}

	/**
	 * 构造函数
	 * @param type 事件类型，FrameworkEventType类型
	 */
	public DatasetActiveEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CDatasetActiveEvent", list);
	}

	native private long getDatasetName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public StringPointer getDatasetName()
	{
		long returnValue = getDatasetName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDatasetName_EVString(long pNativeObject, String name);
	/**
	 * 设置数据集名称
	 * @param name 数据集名称
	 */
	public void setDatasetName(String name)
	{
		String nameParamValue = name;
		setDatasetName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getDataSourceName_void(long pNativeObject);
	/**
	 * 获取数据集所属数据源的名称
	 * @param  
	 * @return 数据源名称
	 */
	public StringPointer getDataSourceName()
	{
		long returnValue = getDataSourceName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDataSourceName_EVString(long pNativeObject, String name);
	/**
	 * 设置数据集所属数据源的名称
	 * @param name 数据源名称
	 */
	public void setDataSourceName(String name)
	{
		String nameParamValue = name;
		setDataSourceName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private int getSourceType_void(long pNativeObject);
	/**
	 * 获取数据集所属数据源的类型
	 * @param  
	 * @return 数据源类型
	 */
	public com.earthview.world.spatial.geodataset.EVDataSourceType getSourceType()
	{
		int returnValue = getSourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDataSourceType.toEnum(returnValue);
	}
	native private void setSourceType_EVDataSourceType(long pNativeObject, int type);
	/**
	 * 设置数据集所属数据源的类型
	 * @param type 数据源类型
	 */
	public void setSourceType(com.earthview.world.spatial.geodataset.EVDataSourceType type)
	{
		int typeParamValue = type.getValue();
		setSourceType_EVDataSourceType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private void setDatasetType_EVDatasetType(long pNativeObject, int type);
	/**
	 * 设置数据集类型
	 * @param type 数据集类型
	 */
	public void setDatasetType(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		setDatasetType_EVDatasetType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setModelDatasetAttrFilds_CFields(long pNativeObject, long fields);
	/**
	 * 设置创建模型数据集时的属性字段
	 * @param fields 属性字段
	 */
	public void setModelDatasetAttrFilds(com.earthview.world.spatial.geodataset.Fields fields)
	{
		long fieldsParamValue = fields.nativeObject.pointer;
		setModelDatasetAttrFilds_CFields(this.nativeObject.pointer, fieldsParamValue);
	}
	native private void setVectorDatasetAttrFilds_CFields(long pNativeObject, long fields);
	/**
	 * 设置创建矢量数据集时的属性字段
	 * @param fields 属性字段
	 */
	public void setVectorDatasetAttrFilds(com.earthview.world.spatial.geodataset.Fields fields)
	{
		long fieldsParamValue = fields.nativeObject.pointer;
		setVectorDatasetAttrFilds_CFields(this.nativeObject.pointer, fieldsParamValue);
	}
	native private long getModelDatasetAttrFilds_void(long pNativeObject);
	/**
	 * 获取创建模型数据集时的属性字段
	 * @param  
	 * @return 字段列表
	 */
	public com.earthview.world.spatial.geodataset.Fields getModelDatasetAttrFilds()
	{
		long returnValue = getModelDatasetAttrFilds_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Fields __returnValue = new com.earthview.world.spatial.geodataset.Fields(CreatedWhenConstruct.CWC_NotToCreate, "CFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Fields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFields");
		}
		return __returnValue;
	}
	native private void setVectorDatasetInfo_EVGeometryType_ev_int32(long pNativeObject, int type, int coordSys);
	/**
	 * 设置创建矢量数据集是的矢量类型及坐标系统
	 * @param type 矢量类型
	 * @param coordSys 坐标系统
	 */
	public void setVectorDatasetInfo(com.earthview.world.spatial.geometry.EVGeometryType type, int coordSys)
	{
		int typeParamValue = type.getValue();
		int coordSysParamValue = coordSys;
		setVectorDatasetInfo_EVGeometryType_ev_int32(this.nativeObject.pointer, typeParamValue, coordSysParamValue);
	}
	native private void setVectorDatasetInfo_EVGeometryType_EVString(long pNativeObject, int type, String wktCoordSys);
	/**
	 * 设置创建矢量数据集是的矢量类型及坐标系统
	 * @param type 矢量类型
	 * @param WKTcoordSys 坐标系统
	 */
	public void setVectorDatasetInfo(com.earthview.world.spatial.geometry.EVGeometryType type, String wktCoordSys)
	{
		int typeParamValue = type.getValue();
		String wktCoordSysParamValue = wktCoordSys;
		setVectorDatasetInfo_EVGeometryType_EVString(this.nativeObject.pointer, typeParamValue, wktCoordSysParamValue);
	}
	native private void getVectorDatasetInfo_EVGeometryType_ev_int32(long pNativeObject, long type, long coordSys);
	/**
	 * 获取创建矢量数据集市设置的矢量数据集类型和坐标系统
	 * @param type 输出矢量类型
	 * @param coordSys 输出坐标系统
	 */
	public void getVectorDatasetInfo(EnumPointer type, IntegerPointer coordSys)
	{
		long typeParamValue = type.nativeObject.pointer;
		long coordSysParamValue = coordSys.nativeObject.pointer;
		getVectorDatasetInfo_EVGeometryType_ev_int32(this.nativeObject.pointer, typeParamValue, coordSysParamValue);
	}
	native private void getVectorDatasetInfo_EVGeometryType_EVString(long pNativeObject, long type, long wktCoordSys);
	/**
	 * 获取创建矢量数据集市设置的矢量数据集类型和坐标系统
	 * @param type 输出矢量类型
	 * @param wktCoordSys 输出坐标系统
	 */
	public void getVectorDatasetInfo(EnumPointer type, StringPointer wktCoordSys)
	{
		long typeParamValue = type.nativeObject.pointer;
		long wktCoordSysParamValue = wktCoordSys.nativeObject.pointer;
		getVectorDatasetInfo_EVGeometryType_EVString(this.nativeObject.pointer, typeParamValue, wktCoordSysParamValue);
	}
	native private long getVectorDatasetAttrFilds_void(long pNativeObject);
	/**
	 * 获取创建矢量数据集时的属性字段
	 * @param  
	 * @return 字段列表
	 */
	public com.earthview.world.spatial.geodataset.Fields getVectorDatasetAttrFilds()
	{
		long returnValue = getVectorDatasetAttrFilds_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Fields __returnValue = new com.earthview.world.spatial.geodataset.Fields(CreatedWhenConstruct.CWC_NotToCreate, "CFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Fields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFields");
		}
		return __returnValue;
	}
	native private void setModelDatasetType_ev_bool(long pNativeObject, boolean isModelTemplateDataset);
	/**
	 * 设置模型数据集类型
	 * @param isModelTemplateDataset true:模型模板数据集；false：模型数据集
	 */
	public void setModelDatasetType(boolean isModelTemplateDataset)
	{
		boolean isModelTemplateDatasetParamValue = isModelTemplateDataset;
		setModelDatasetType_ev_bool(this.nativeObject.pointer, isModelTemplateDatasetParamValue);
	}
	native private boolean getModelDatasetType_void(long pNativeObject);
	/**
	 * 获取模型数据集类型
	 * @param  
	 * @return true:模型模板数据集；false：模型数据集
	 */
	public boolean getModelDatasetType()
	{
		boolean returnValue = getModelDatasetType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelDatasetCoordSys_ev_int32_ev_int32(long pNativeObject, int type, int coordSys);
	/**
	 * 设置模型数据集的坐标系统类型
	 * @param type 0:EVWellKnownGeoCSType;1:EVWellKnownProjCSType
	 * @param coordSys 坐标系统
	 */
	public void setModelDatasetCoordSys(int type, int coordSys)
	{
		int typeParamValue = type;
		int coordSysParamValue = coordSys;
		setModelDatasetCoordSys_ev_int32_ev_int32(this.nativeObject.pointer, typeParamValue, coordSysParamValue);
	}
	native private void setCoordianteSystemName_EVString(long pNativeObject, long name);
	/**
	 * 设置坐标系统的名称
	 * @param name 坐标系统名称
	 */
	public void setCoordianteSystemName(StringPointer name)
	{
		long nameParamValue = name.nativeObject.pointer;
		setCoordianteSystemName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getCoordianteSystemName_void(long pNativeObject);
	/**
	 * 获取坐标系统名称
	 * @param  
	 * @return 坐标系统名称
	 */
	public StringPointer getCoordianteSystemName()
	{
		long returnValue = getCoordianteSystemName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getModelDatasetCoordSysType_void(long pNativeObject);
	/**
	 * 获取模型数据集使用的坐标系统类型
	 * @param  
	 * @return 0:EVWellKnownGeoCSType;1:EVWellKnownProjCSType
	 */
	public int getModelDatasetCoordSysType()
	{
		int returnValue = getModelDatasetCoordSysType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getModelDatasetGeoCSType_void(long pNativeObject);
	/**
	 * 获取设置的模型数据集的EVWellKnownGeoCSType类型坐标系统值
	 * @param  
	 * @return 坐标系统值
	 */
	public com.earthview.world.spatial.utility.EVWellKnownGeoCSType getModelDatasetGeoCSType()
	{
		int returnValue = getModelDatasetGeoCSType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVWellKnownGeoCSType.toEnum(returnValue);
	}
	native private int getModelDatasetProjCSType_void(long pNativeObject);
	/**
	 * 获取设置的模型数据集的EVWellKnownProjCSType类型坐标系统值
	 * @param  
	 * @return 坐标系统值
	 */
	public com.earthview.world.spatial.utility.EVWellKnownProjCSType getModelDatasetProjCSType()
	{
		int returnValue = getModelDatasetProjCSType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVWellKnownProjCSType.toEnum(returnValue);
	}
	native private int getCoordSys_void(long pNativeObject);
	/**
	 * 获取坐标系统值，不带坐标系统类型
	 * @param  
	 * @return 坐标系统值
	 */
	public int getCoordSys()
	{
		int returnValue = getCoordSys_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getWKTCoordSys_void(long pNativeObject);
	/**
	 * 获取坐标系统值，不带坐标系统类型
	 * @param  
	 * @return 坐标系统值
	 */
	public String getWKTCoordSys()
	{
		String returnValue = getWKTCoordSys_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getResponseState_void(long pNativeObject);
	/**
	 * 获取事件处理的状态
	 * @param  
	 * @return true成功，false失败
	 */
	public boolean getResponseState()
	{
		boolean returnValue = getResponseState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResponseState_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置事件处理的状态
	 * @param state true成功，false失败
	 */
	public void setResponseState(boolean state)
	{
		boolean stateParamValue = state;
		setResponseState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private void setErrorMsg_EVString(long pNativeObject, String msg);
	/**
	 * 设置错误消息
	 * @param msg 错误消息
	 */
	public void setErrorMsg(String msg)
	{
		String msgParamValue = msg;
		setErrorMsg_EVString(this.nativeObject.pointer, msgParamValue);
	}
	native private String getErrorMsg_void(long pNativeObject);
	/**
	 * 获取错误消息
	 * @param  
	 * @return 错误消息
	 */
	public String getErrorMsg()
	{
		String returnValue = getErrorMsg_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DatasetActiveEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetActiveEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetActiveEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetActiveEvent obj = null;
 		if(baseObj instanceof DatasetActiveEvent)
		{
			obj = (DatasetActiveEvent)baseObj;
		} else {
			obj = new DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasetActiveEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
