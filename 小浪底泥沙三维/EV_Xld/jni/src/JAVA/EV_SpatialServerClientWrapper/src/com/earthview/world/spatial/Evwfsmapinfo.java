package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的WFS地图数据信息类
 */
public class Evwfsmapinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSMapInfo", new EvwfsmapinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSMapInfoProxy", new EvwfsmapinfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param objectname 数据名称
	 */
	public Evwfsmapinfo(String objectname) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objectnamePtr = new BasePointer(objectname);
		list.add("objectname", objectnamePtr.get());
		Create("JCEVWFSMapInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.Evwfsmapinfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据名称
	 * @return 数据名称
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

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据描述
	 * @return 数据描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSRS_void(long pNativeObject);
	/**
	 * 获取投影信息
	 * @return 数据投影类型
	 */
	public com.earthview.world.spatial.EVSSCSRS getSRS()
	{
		int returnValue = getSRS_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCSRS.toEnum(returnValue);
	}
	native private double getMaxScale_void(long pNativeObject);
	/**
	 * 获取最大比例尺
	 * @return 最大比例尺分母
	 */
	public double getMaxScale()
	{
		double returnValue = getMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinScale_void(long pNativeObject);
	/**
	 * 获取最小比例尺
	 * @return 最小比例尺分母
	 */
	public double getMinScale()
	{
		double returnValue = getMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取图层数
	 * @return 所含图层数
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引图层的元数据
	 * @param index 索引
	 * @return 图层元数据信息对象指针
	 */
	public com.earthview.world.spatial.Evwfslayerinfo getLayerInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwfslayerinfo __returnValue = new com.earthview.world.spatial.Evwfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVWFSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwfslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWFSLayerInfo");
		}
		return __returnValue;
	}
	native private long getLayerInfoRef_EVString(long pNativeObject, String layername);
	/**
	 * 获取指定名称图层的元数据
	 * @param layername 图层名称
	 * @return 图层元数据信息对象指针
	 */
	public com.earthview.world.spatial.Evwfslayerinfo getLayerInfoRef(String layername)
	{
		String layernameParamValue = layername;
		long returnValue = getLayerInfoRef_EVString(this.nativeObject.pointer, layernameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evwfslayerinfo __returnValue = new com.earthview.world.spatial.Evwfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVWFSLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evwfslayerinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVWFSLayerInfo");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据集包围盒信息
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
	 * 获取空间参考
	 * @return 空间参考对象指针，不需释放
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

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @return 数据集类型：DT_SERVER_WFS_DATASET
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

	public Evwfsmapinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwfsmapinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Evwfsmapinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwfsmapinfo obj = null;
 		if(baseObj instanceof Evwfsmapinfo)
		{
			obj = (Evwfsmapinfo)baseObj;
		} else {
			obj = new Evwfsmapinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWFSMapInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
