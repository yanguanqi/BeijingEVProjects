package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的数据集元数据信息类（部分元数据的抽象）
 */
public class Evlayerinfo extends com.earthview.world.spatial.geodataset.Idatametainfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVLayerInfo", new EvlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVLayerInfoProxy", new EvlayerinfoClassFactory());
	}

	protected  String getLayerDescription_void_callback()
	{
		String returnValue = getLayerDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getLayerDescription_void(long pNativeObject);
	/**
	 * 获取描述信息
	 * @return 描述信息
	 */
	public String getLayerDescription()
	{
		String returnValue = getLayerDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLayerDescription_void_NoVirtual(long pNativeObject);
	protected String getLayerDescription_NoVirtual()
	{
		String returnValue = getLayerDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getDataTime_void_callback()
	{
		String returnValue = getDataTime();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDataTime_void(long pNativeObject);
	/**
	 * 获取所包含数据时间
	 * @return 数据采集时间
	 */
	public String getDataTime()
	{
		String returnValue = getDataTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDataTime_void_NoVirtual(long pNativeObject);
	protected String getDataTime_NoVirtual()
	{
		String returnValue = getDataTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getUpdateTime_void_callback()
	{
		String returnValue = getUpdateTime();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据更新时间
	 * @return 更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getLayerName_void_callback()
	{
		String returnValue = getLayerName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getLayerName_void(long pNativeObject);
	/**
	 * 获取数据名称
	 * @return 数据名称
	 */
	public String getLayerName()
	{
		String returnValue = getLayerName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLayerName_void_NoVirtual(long pNativeObject);
	protected String getLayerName_NoVirtual()
	{
		String returnValue = getLayerName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getSRS_void_callback()
	{
		com.earthview.world.spatial.EVSSCSRS returnValue = getSRS();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSRS_void(long pNativeObject);
	/**
	 * /获取投影类型/
	 * @return 投影类型
	 */
	public com.earthview.world.spatial.EVSSCSRS getSRS()
	{
		int returnValue = getSRS_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCSRS.toEnum(returnValue);
	}
	native private int getSRS_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCSRS getSRS_NoVirtual()
	{
		int returnValue = getSRS_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCSRS.toEnum(returnValue);
	}

	protected  int getFileFormat_void_callback()
	{
		com.earthview.world.spatial.EVSSCFileFormat returnValue = getFileFormat();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getFileFormat_void(long pNativeObject);
	/**
	 * 获取文件格式
	 * @return 文件格式
	 */
	public com.earthview.world.spatial.EVSSCFileFormat getFileFormat()
	{
		int returnValue = getFileFormat_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCFileFormat.toEnum(returnValue);
	}
	native private int getFileFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCFileFormat getFileFormat_NoVirtual()
	{
		int returnValue = getFileFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCFileFormat.toEnum(returnValue);
	}

	protected  int getLayerDataType_void_callback()
	{
		com.earthview.world.spatial.EVSSCLayerDataType returnValue = getLayerDataType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getLayerDataType_void(long pNativeObject);
	/**
	 * 获取数据格式
	 * @return 数据格式
	 */
	public com.earthview.world.spatial.EVSSCLayerDataType getLayerDataType()
	{
		int returnValue = getLayerDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCLayerDataType.toEnum(returnValue);
	}
	native private int getLayerDataType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCLayerDataType getLayerDataType_NoVirtual()
	{
		int returnValue = getLayerDataType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCLayerDataType.toEnum(returnValue);
	}

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.EVSSCGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取要素几何类型
	 * @return 几何类型
	 */
	public com.earthview.world.spatial.EVSSCGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVSSCGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCGeometryType.toEnum(returnValue);
	}

	protected  int getMaxDataLevel_void_callback()
	{
		int returnValue = getMaxDataLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxDataLevel_void(long pNativeObject);
	/**
	 * 获取最大数据级别
	 * @return 最大数据级别
	 */
	public int getMaxDataLevel()
	{
		int returnValue = getMaxDataLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxDataLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxDataLevel_NoVirtual()
	{
		int returnValue = getMaxDataLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMinDataLevel_void_callback()
	{
		int returnValue = getMinDataLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMinDataLevel_void(long pNativeObject);
	/**
	 * 获取最小数据级别
	 * @return 最小数据级别
	 */
	public int getMinDataLevel()
	{
		int returnValue = getMinDataLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinDataLevel_void_NoVirtual(long pNativeObject);
	protected int getMinDataLevel_NoVirtual()
	{
		int returnValue = getMinDataLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMaxFieldLevel_void_callback()
	{
		int returnValue = getMaxFieldLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxFieldLevel_void(long pNativeObject);
	/**
	 * 获取最大字段级别
	 * @return 最大字段级别
	 */
	public int getMaxFieldLevel()
	{
		int returnValue = getMaxFieldLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxFieldLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxFieldLevel_NoVirtual()
	{
		int returnValue = getMaxFieldLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMinFieldLevel_void_callback()
	{
		int returnValue = getMinFieldLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMinFieldLevel_void(long pNativeObject);
	/**
	 * 获取最小字段级别
	 * @return 最小字段级别
	 */
	public int getMinFieldLevel()
	{
		int returnValue = getMinFieldLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinFieldLevel_void_NoVirtual(long pNativeObject);
	protected int getMinFieldLevel_NoVirtual()
	{
		int returnValue = getMinFieldLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMaxScale_void_callback()
	{
		double returnValue = getMaxScale();
		double __returnValue = returnValue;
		return __returnValue;
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
	native private double getMaxScale_void_NoVirtual(long pNativeObject);
	protected double getMaxScale_NoVirtual()
	{
		double returnValue = getMaxScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMinScale_void_callback()
	{
		double returnValue = getMinScale();
		double __returnValue = returnValue;
		return __returnValue;
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
	native private double getMinScale_void_NoVirtual(long pNativeObject);
	protected double getMinScale_NoVirtual()
	{
		double returnValue = getMinScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getAttributesCount_void_callback()
	{
		long returnValue = getAttributesCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getAttributesCount_void(long pNativeObject);
	/**
	 * 获取属性字段个数
	 * @return 属性个数
	 */
	public long getAttributesCount()
	{
		long returnValue = getAttributesCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAttributesCount_void_NoVirtual(long pNativeObject);
	protected long getAttributesCount_NoVirtual()
	{
		long returnValue = getAttributesCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getAttribute_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getAttribute(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAttribute_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定属性名称
	 * @param index 索引
	 * @return 指定属性字段名称
	 */
	public String getAttribute(long index)
	{
		long indexParamValue = index;
		String returnValue = getAttribute_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getAttribute_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getAttribute_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getAttribute_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 包围和对象指针
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

	public Evlayerinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evlayerinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据集类型
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		return super.getDatasetType_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @return 数据集的名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	
	native protected void register_getLayerDescription_void(long pNativeObject, String method);
	native protected void register_getDataTime_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_getLayerName_void(long pNativeObject, String method);
	native protected void register_getSRS_void(long pNativeObject, String method);
	native protected void register_getFileFormat_void(long pNativeObject, String method);
	native protected void register_getLayerDataType_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getMaxDataLevel_void(long pNativeObject, String method);
	native protected void register_getMinDataLevel_void(long pNativeObject, String method);
	native protected void register_getMaxFieldLevel_void(long pNativeObject, String method);
	native protected void register_getMinFieldLevel_void(long pNativeObject, String method);
	native protected void register_getMaxScale_void(long pNativeObject, String method);
	native protected void register_getMinScale_void(long pNativeObject, String method);
	native protected void register_getAttributesCount_void(long pNativeObject, String method);
	native protected void register_getAttribute_ev_uint32(long pNativeObject, String method);
	native protected void register_ev_clone_IDataMetaInfo(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getLayerDescription_void(this.nativeObject.pointer, "getLayerDescription_void_callback");
			this.register_getDataTime_void(this.nativeObject.pointer, "getDataTime_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_getLayerName_void(this.nativeObject.pointer, "getLayerName_void_callback");
			this.register_getSRS_void(this.nativeObject.pointer, "getSRS_void_callback");
			this.register_getFileFormat_void(this.nativeObject.pointer, "getFileFormat_void_callback");
			this.register_getLayerDataType_void(this.nativeObject.pointer, "getLayerDataType_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getMaxDataLevel_void(this.nativeObject.pointer, "getMaxDataLevel_void_callback");
			this.register_getMinDataLevel_void(this.nativeObject.pointer, "getMinDataLevel_void_callback");
			this.register_getMaxFieldLevel_void(this.nativeObject.pointer, "getMaxFieldLevel_void_callback");
			this.register_getMinFieldLevel_void(this.nativeObject.pointer, "getMinFieldLevel_void_callback");
			this.register_getMaxScale_void(this.nativeObject.pointer, "getMaxScale_void_callback");
			this.register_getMinScale_void(this.nativeObject.pointer, "getMinScale_void_callback");
			this.register_getAttributesCount_void(this.nativeObject.pointer, "getAttributesCount_void_callback");
			this.register_getAttribute_ev_uint32(this.nativeObject.pointer, "getAttribute_ev_uint32_callback");
			this.register_ev_clone_IDataMetaInfo(this.nativeObject.pointer, "ev_clone_IDataMetaInfo_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
		}
	}
	
	public static Evlayerinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evlayerinfo obj = null;
 		if(baseObj instanceof Evlayerinfo)
		{
			obj = (Evlayerinfo)baseObj;
		} else {
			obj = new Evlayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
