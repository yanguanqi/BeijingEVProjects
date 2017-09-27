package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的地理编码数据集元数据信息类
 */
public class Evgeocodelayerinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeLayerInfo", new EvgeocodelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeLayerInfoProxy", new EvgeocodelayerinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param geocodename 数据集名称
	 */
	public Evgeocodelayerinfo(String geocodename) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer geocodenamePtr = new BasePointer(geocodename);
		list.add("geocodename", geocodenamePtr.get());
		Create("JCEVGeoCodeLayerInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evgeocodelayerinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getGeocodeName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
	 */
	public StringPointer getGeocodeName()
	{
		long returnValue = getGeocodeName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFieldName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public StringPointer getFieldName()
	{
		long returnValue = getFieldName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getMaxVisibleHeight_void(long pNativeObject);
	/**
	 * 获取最大可见高度
	 * @return 最大可见高度
	 */
	public double getMaxVisibleHeight()
	{
		double returnValue = getMaxVisibleHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinVisibleHeight_void(long pNativeObject);
	/**
	 * 获取最小可见高度
	 * @return 最小可见高度
	 */
	public double getMinVisibleHeight()
	{
		double returnValue = getMinVisibleHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxLabelHeight_void(long pNativeObject);
	/**
	 * 获取标注最大标记高度
	 * @return 标注最大标记高度
	 */
	public double getMaxLabelHeight()
	{
		double returnValue = getMaxLabelHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinLabelHeight_void(long pNativeObject);
	/**
	 * 获取标注最小标记高度
	 * @return 标注最小标记高度
	 */
	public double getMinLabelHeight()
	{
		double returnValue = getMinLabelHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLabelDockStyle_void(long pNativeObject);
	/**
	 * 获取标注停靠风格
	 * @return 停靠风格标识
	 */
	public StringPointer getLabelDockStyle()
	{
		long returnValue = getLabelDockStyle_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getFont_void(long pNativeObject);
	/**
	 * 获取标注字体信息
	 * @return 标注字体对象指针，不需外部释放
	 */
	public com.earthview.world.spatial.ServerFont getFont()
	{
		long returnValue = getFont_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerFont __returnValue = new com.earthview.world.spatial.ServerFont(CreatedWhenConstruct.CWC_NotToCreate, "CServerFont");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerFont)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerFont");
		}
		return __returnValue;
	}
	native private long getIcon_void(long pNativeObject);
	/**
	 * 获取图标信息
	 * @return 图标对象指针，不需外部释放
	 */
	public com.earthview.world.spatial.ServerIcon getIcon()
	{
		long returnValue = getIcon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerIcon __returnValue = new com.earthview.world.spatial.ServerIcon(CreatedWhenConstruct.CWC_NotToCreate, "CServerIcon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerIcon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerIcon");
		}
		return __returnValue;
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

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * /获取数据集类型/
	 * @return 数据集类型：DT_SERVER_GEOCODE_DATASET
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

	public Evgeocodelayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evgeocodelayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evgeocodelayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evgeocodelayerinfo obj = null;
 		if(baseObj instanceof Evgeocodelayerinfo)
		{
			obj = (Evgeocodelayerinfo)baseObj;
		} else {
			obj = new Evgeocodelayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVGeoCodeLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
