package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evwmsimageinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSImageInfo", new EvwmsimageinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSImageInfoProxy", new EvwmsimageinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param objectname 数据名称
	 */
	public Evwmsimageinfo(String dataname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer datanamePtr = new BasePointer(dataname);
		list.add("dataname", datanamePtr.get());
		Create("JCEVWMSImageInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evwmsimageinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getDataname_void(long pNativeObject);
	public StringPointer getDataname()
	{
		long returnValue = getDataname_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getDownRightX_void(long pNativeObject);
	public double getDownRightX()
	{
		double returnValue = getDownRightX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDownRightY_void(long pNativeObject);
	public double getDownRightY()
	{
		double returnValue = getDownRightY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTmageHeight_void(long pNativeObject);
	public double getTmageHeight()
	{
		double returnValue = getTmageHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getImageName_void(long pNativeObject);
	public StringPointer getImageName()
	{
		long returnValue = getImageName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getImageType_void(long pNativeObject);
	public StringPointer getImageType()
	{
		long returnValue = getImageType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getImageWidth_void(long pNativeObject);
	public double getImageWidth()
	{
		double returnValue = getImageWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumberOfBand_void(long pNativeObject);
	public int getNumberOfBand()
	{
		int returnValue = getNumberOfBand_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRasterTime_void(long pNativeObject);
	public String getRasterTime()
	{
		String returnValue = getRasterTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getResolutionOfX_void(long pNativeObject);
	public double getResolutionOfX()
	{
		double returnValue = getResolutionOfX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getResolutionOfY_void(long pNativeObject);
	public double getResolutionOfY()
	{
		double returnValue = getResolutionOfY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUpLeftX_void(long pNativeObject);
	public double getUpLeftX()
	{
		double returnValue = getUpLeftX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUpLeftY_void(long pNativeObject);
	public double getUpLeftY()
	{
		double returnValue = getUpLeftY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWKTProjectInfo_void(long pNativeObject);
	public StringPointer getWKTProjectInfo()
	{
		long returnValue = getWKTProjectInfo_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
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

	native private void ev_clone_IDataMetaInfo(long pNativeObject, long pOther);
	public void ev_clone(com.earthview.world.spatial.geodataset.Idatametainfo pOther)
	{
		long pOtherParamValue = (pOther == null ? 0L : pOther.nativeObject.pointer);
		ev_clone_IDataMetaInfo(this.nativeObject.pointer, pOtherParamValue);
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

	public Evwmsimageinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwmsimageinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据集的范围
	 * @return 内部对象引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evwmsimageinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwmsimageinfo obj = null;
 		if(baseObj instanceof Evwmsimageinfo)
		{
			obj = (Evwmsimageinfo)baseObj;
		} else {
			obj = new Evwmsimageinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWMSImageInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
