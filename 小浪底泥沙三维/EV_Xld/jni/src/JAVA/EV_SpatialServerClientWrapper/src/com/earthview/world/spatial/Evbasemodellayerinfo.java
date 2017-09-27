package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evbasemodellayerinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVBaseModelLayerInfo", new EvbasemodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVBaseModelLayerInfoProxy", new EvbasemodellayerinfoClassFactory());
	}

	public Evbasemodellayerinfo(String modelname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer modelnamePtr = new BasePointer(modelname);
		list.add("modelname", modelnamePtr.get());
		Create("JCEVBaseModelLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evbasemodellayerinfo".equals(this.getClass().getName()))
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

	native private String getName_void(long pNativeObject);
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

	protected  int getSrid_void_callback()
	{
		int returnValue = getSrid();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSrid_void(long pNativeObject);
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

	protected  int getEvid_void_callback()
	{
		int returnValue = getEvid();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getEvid_void(long pNativeObject);
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

	protected  void setVersion_ev_int32_callback(int version)
	{
		int versionParamValue = version;
		setVersion(versionParamValue);
	}

	native private void setVersion_ev_int32(long pNativeObject, int version);
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

	protected  int getVersion_void_callback()
	{
		int returnValue = getVersion();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getVersion_void(long pNativeObject);
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

	protected  int getOctreeVersion_void_callback()
	{
		int returnValue = getOctreeVersion();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getOctreeVersion_void(long pNativeObject);
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

	protected  void setAltitudeModel_EVAltitudeMode_callback(int model)
	{
		com.earthview.world.spatial.utility.EVAltitudeMode modelParamValue = com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(model);
		setAltitudeModel(modelParamValue);
	}

	native private void setAltitudeModel_EVAltitudeMode(long pNativeObject, int model);
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

	protected  int getAltitudeModel_void_callback()
	{
		com.earthview.world.spatial.utility.EVAltitudeMode returnValue = getAltitudeModel();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getAltitudeModel_void(long pNativeObject);
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

	protected  void setAltitudeValue_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setAltitudeValue(valueParamValue);
	}

	native private void setAltitudeValue_ev_real64(long pNativeObject, double value);
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

	protected  double getAltitudeValue_void_callback()
	{
		double returnValue = getAltitudeValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitudeValue_void(long pNativeObject);
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

	protected  long getOctreeNodeCount_void_callback()
	{
		long returnValue = getOctreeNodeCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getOctreeNodeCount_void(long pNativeObject);
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

	protected  long getOctreeNodeRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.ServerOctreeNode returnValue = getOctreeNodeRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOctreeNodeRef_ev_uint32(long pNativeObject, long index);
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

	protected  long getDBFieldCount_void_callback()
	{
		long returnValue = getDBFieldCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getDBFieldCount_void(long pNativeObject);
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

	protected  long getDBFieldRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.ServerDBField returnValue = getDBFieldRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDBFieldRef_ev_uint32(long pNativeObject, long index);
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

	protected  void ev_clone_IDataMetaInfo_callback(long pOther)
	{
		com.earthview.world.spatial.geodataset.Idatametainfo pOtherParamValue = (pOther == 0L ? null : new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOtherParamValue != null)
		{
		pOtherParamValue.setDelegate(true);
		pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		IClassFactory pOtherParamValueClassFactory = GlobalClassFactoryMap.get(pOtherParamValue.getCppInstanceTypeName());
		if (pOtherParamValueClassFactory != null)
		{
			pOtherParamValue.setDelegate(true);
			pOtherParamValue = (com.earthview.world.spatial.geodataset.Idatametainfo)pOtherParamValueClassFactory.create();
			pOtherParamValue.setDelegate(true);
			pOtherParamValue.setInstancePointer(new InstancePointer(pOther));
		}
		}
		ev_clone(pOtherParamValue);
	}

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
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

	public Evbasemodellayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evbasemodellayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Evbasemodellayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evbasemodellayerinfo obj = null;
 		if(baseObj instanceof Evbasemodellayerinfo)
		{
			obj = (Evbasemodellayerinfo)baseObj;
		} else {
			obj = new Evbasemodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVBaseModelLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
