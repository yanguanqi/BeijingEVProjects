package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的模型模板数据集元数据信息类
 */
public class Evmodeltemplatelayerinfo extends com.earthview.world.spatial.Evmodellayerinfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelTemplateLayerInfo", new EvmodeltemplatelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelTemplateLayerInfoProxy", new EvmodeltemplatelayerinfoClassFactory());
	}

	public Evmodeltemplatelayerinfo(String datasetname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer datasetnamePtr = new BasePointer(datasetname);
		list.add("datasetname", datasetnamePtr.get());
		Create("JCEVModelTemplateLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evmodeltemplatelayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	public Evmodeltemplatelayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evmodeltemplatelayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public int getSrid()
	{
		return super.getSrid_NoVirtual();
	}
	public int getEvid()
	{
		return super.getEvid_NoVirtual();
	}
	public void setVersion(int version)
	{
		super.setVersion_NoVirtual(version);
	}
	public int getVersion()
	{
		return super.getVersion_NoVirtual();
	}
	public int getOctreeVersion()
	{
		return super.getOctreeVersion_NoVirtual();
	}
	public void setAltitudeModel(com.earthview.world.spatial.utility.EVAltitudeMode model)
	{
		super.setAltitudeModel_NoVirtual(model);
	}
	public com.earthview.world.spatial.utility.EVAltitudeMode getAltitudeModel()
	{
		return super.getAltitudeModel_NoVirtual();
	}
	public void setAltitudeValue(double value)
	{
		super.setAltitudeValue_NoVirtual(value);
	}
	public double getAltitudeValue()
	{
		return super.getAltitudeValue_NoVirtual();
	}
	public long getOctreeNodeCount()
	{
		return super.getOctreeNodeCount_NoVirtual();
	}
	public com.earthview.world.spatial.ServerOctreeNode getOctreeNodeRef(long index)
	{
		return super.getOctreeNodeRef_NoVirtual(index);
	}
	public long getDBFieldCount()
	{
		return super.getDBFieldCount_NoVirtual();
	}
	public com.earthview.world.spatial.ServerDBField getDBFieldRef(long index)
	{
		return super.getDBFieldRef_NoVirtual(index);
	}
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		super.ev_clone_NoVirtual(pOther);
	}
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取数据集的坐标系统
	 * @return 坐标系统对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	
	native protected void register_getSrid_void(long pNativeObject, String method);
	native protected void register_getEvid_void(long pNativeObject, String method);
	native protected void register_setVersion_ev_int32(long pNativeObject, String method);
	native protected void register_getVersion_void(long pNativeObject, String method);
	native protected void register_getOctreeVersion_void(long pNativeObject, String method);
	native protected void register_setAltitudeModel_EVAltitudeMode(long pNativeObject, String method);
	native protected void register_getAltitudeModel_void(long pNativeObject, String method);
	native protected void register_setAltitudeValue_ev_real64(long pNativeObject, String method);
	native protected void register_getAltitudeValue_void(long pNativeObject, String method);
	native protected void register_getOctreeNodeCount_void(long pNativeObject, String method);
	native protected void register_getOctreeNodeRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getDBFieldCount_void(long pNativeObject, String method);
	native protected void register_getDBFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSrid_void(this.nativeObject.pointer, "getSrid_void_callback");
			this.register_getEvid_void(this.nativeObject.pointer, "getEvid_void_callback");
			this.register_setVersion_ev_int32(this.nativeObject.pointer, "setVersion_ev_int32_callback");
			this.register_getVersion_void(this.nativeObject.pointer, "getVersion_void_callback");
			this.register_getOctreeVersion_void(this.nativeObject.pointer, "getOctreeVersion_void_callback");
			this.register_setAltitudeModel_EVAltitudeMode(this.nativeObject.pointer, "setAltitudeModel_EVAltitudeMode_callback");
			this.register_getAltitudeModel_void(this.nativeObject.pointer, "getAltitudeModel_void_callback");
			this.register_setAltitudeValue_ev_real64(this.nativeObject.pointer, "setAltitudeValue_ev_real64_callback");
			this.register_getAltitudeValue_void(this.nativeObject.pointer, "getAltitudeValue_void_callback");
			this.register_getOctreeNodeCount_void(this.nativeObject.pointer, "getOctreeNodeCount_void_callback");
			this.register_getOctreeNodeRef_ev_uint32(this.nativeObject.pointer, "getOctreeNodeRef_ev_uint32_callback");
			this.register_getDBFieldCount_void(this.nativeObject.pointer, "getDBFieldCount_void_callback");
			this.register_getDBFieldRef_ev_uint32(this.nativeObject.pointer, "getDBFieldRef_ev_uint32_callback");
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evmodeltemplatelayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evmodeltemplatelayerinfo obj = null;
 		if(baseObj instanceof Evmodeltemplatelayerinfo)
		{
			obj = (Evmodeltemplatelayerinfo)baseObj;
		} else {
			obj = new Evmodeltemplatelayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVModelTemplateLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
