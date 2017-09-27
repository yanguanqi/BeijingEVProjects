package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的模型数据集元数据信息类
 */
public class Evmodellayerinfo extends com.earthview.world.spatial.Evbasemodellayerinfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelLayerInfo", new EvmodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelLayerInfoProxy", new EvmodellayerinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param modelname 模型数据名称
	 */
	public Evmodellayerinfo(String modelname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer modelnamePtr = new BasePointer(modelname);
		list.add("modelname", modelnamePtr.get());
		Create("JCEVModelLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evmodellayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型：DT_SERVER_MODEL_DATASET
	 */
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 包围盒对象指针
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间参考信息
	 * @return 空间参考对象指针，不需外部释放
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private int getSrid_void(long pNativeObject);
	/**
	 * 获取空间参考的SRID标识
	 * @return srid号
	 */
	public int getSrid()
	{
		int returnValue = getSrid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSrid_void_NoVirtual(long pNativeObject);
	protected int getSrid_NoVirtual()
	{
		int returnValue = getSrid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getEvid_void(long pNativeObject);
	/**
	 * 获取对应的id号
	 * @return 数据集id号
	 */
	public int getEvid()
	{
		int returnValue = getEvid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEvid_void_NoVirtual(long pNativeObject);
	protected int getEvid_NoVirtual()
	{
		int returnValue = getEvid_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVersion_ev_int32(long pNativeObject, int version);
	/**
	 * 设置数据集版本号
	 * @param  
	 */
	public void setVersion(int version)
	{
		int versionParamValue = version;
		setVersion_ev_int32(this.nativeObject.pointer, versionParamValue);
	}
	native private void setVersion_ev_int32_NoVirtual(long pNativeObject, int version);
	protected void setVersion_NoVirtual(int version)
	{
		int versionParamValue = version;
		setVersion_ev_int32_NoVirtual(this.nativeObject.pointer, versionParamValue);
	}

	native private int getVersion_void(long pNativeObject);
	/**
	 * 获取版本号
	 * @param  
	 */
	public int getVersion()
	{
		int returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getVersion_void_NoVirtual(long pNativeObject);
	protected int getVersion_NoVirtual()
	{
		int returnValue = getVersion_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getOctreeVersion_void(long pNativeObject);
	/**
	 * 获取八叉树版本
	 * @param  
	 */
	public int getOctreeVersion()
	{
		int returnValue = getOctreeVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getOctreeVersion_void_NoVirtual(long pNativeObject);
	protected int getOctreeVersion_NoVirtual()
	{
		int returnValue = getOctreeVersion_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setAltitudeModel_EVAltitudeMode(long pNativeObject, int model);
	/**
	 * 设置高度模式
	 * @param  
	 */
	public void setAltitudeModel(com.earthview.world.spatial.utility.EVAltitudeMode model)
	{
		int modelParamValue = model.getValue();
		setAltitudeModel_EVAltitudeMode(this.nativeObject.pointer, modelParamValue);
	}
	native private void setAltitudeModel_EVAltitudeMode_NoVirtual(long pNativeObject, int model);
	protected void setAltitudeModel_NoVirtual(com.earthview.world.spatial.utility.EVAltitudeMode model)
	{
		int modelParamValue = model.getValue();
		setAltitudeModel_EVAltitudeMode_NoVirtual(this.nativeObject.pointer, modelParamValue);
	}

	native private int getAltitudeModel_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @param  
	 */
	public com.earthview.world.spatial.utility.EVAltitudeMode getAltitudeModel()
	{
		int returnValue = getAltitudeModel_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private int getAltitudeModel_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.utility.EVAltitudeMode getAltitudeModel_NoVirtual()
	{
		int returnValue = getAltitudeModel_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}

	native private void setAltitudeValue_ev_real64(long pNativeObject, double value);
	/**
	 * 设置高度模式值
	 * @param  
	 */
	public void setAltitudeValue(double value)
	{
		double valueParamValue = value;
		setAltitudeValue_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setAltitudeValue_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setAltitudeValue_NoVirtual(double value)
	{
		double valueParamValue = value;
		setAltitudeValue_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getAltitudeValue_void(long pNativeObject);
	/**
	 * 获取高度模式值
	 * @param  
	 */
	public double getAltitudeValue()
	{
		double returnValue = getAltitudeValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAltitudeValue_void_NoVirtual(long pNativeObject);
	protected double getAltitudeValue_NoVirtual()
	{
		double returnValue = getAltitudeValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getOctreeNodeCount_void(long pNativeObject);
	/**
	 * 获取八叉树结点数
	 * @return 结点数目
	 */
	public long getOctreeNodeCount()
	{
		long returnValue = getOctreeNodeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOctreeNodeCount_void_NoVirtual(long pNativeObject);
	protected long getOctreeNodeCount_NoVirtual()
	{
		long returnValue = getOctreeNodeCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getOctreeNodeRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的八叉树结点信息
	 * @param index 索引
	 * @return 指定的八叉树结点对象指针
	 */
	public com.earthview.world.spatial.ServerOctreeNode getOctreeNodeRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getOctreeNodeRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerOctreeNode __returnValue = new com.earthview.world.spatial.ServerOctreeNode(CreatedWhenConstruct.CWC_NotToCreate, "CServerOctreeNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerOctreeNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerOctreeNode");
		}
		return __returnValue;
	}
	native private long getOctreeNodeRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.ServerOctreeNode getOctreeNodeRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getOctreeNodeRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerOctreeNode __returnValue = new com.earthview.world.spatial.ServerOctreeNode(CreatedWhenConstruct.CWC_NotToCreate, "CServerOctreeNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerOctreeNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerOctreeNode");
		}
		return __returnValue;
	}

	native private long getDBFieldCount_void(long pNativeObject);
	/**
	 * 获取数据库字段数目
	 * @return 字段数目
	 */
	public long getDBFieldCount()
	{
		long returnValue = getDBFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDBFieldCount_void_NoVirtual(long pNativeObject);
	protected long getDBFieldCount_NoVirtual()
	{
		long returnValue = getDBFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDBFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的字段信息
	 * @param index 索引
	 * @return 指定的字段信息对象指针，不需释放
	 */
	public com.earthview.world.spatial.ServerDBField getDBFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getDBFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerDBField __returnValue = new com.earthview.world.spatial.ServerDBField(CreatedWhenConstruct.CWC_NotToCreate, "CServerDBField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerDBField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerDBField");
		}
		return __returnValue;
	}
	native private long getDBFieldRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.ServerDBField getDBFieldRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getDBFieldRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerDBField __returnValue = new com.earthview.world.spatial.ServerDBField(CreatedWhenConstruct.CWC_NotToCreate, "CServerDBField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerDBField)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerDBField");
		}
		return __returnValue;
	}

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	/**
	 * 
	 * @param  
	 */
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo(this.nativeObject.pointer, pOtherParamValue);
	}
	native private void ev_clone_IDataMetaInfo_NoVirtual(long pNativeObject, long pOther);
	protected void ev_clone_NoVirtual(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo_NoVirtual(this.nativeObject.pointer, pOtherParamValue);
	}

	public Evmodellayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evmodellayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Evmodellayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evmodellayerinfo obj = null;
 		if(baseObj instanceof Evmodellayerinfo)
		{
			obj = (Evmodellayerinfo)baseObj;
		} else {
			obj = new Evmodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVModelLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
