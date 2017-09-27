package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialIndexParamFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory", new SpatialIndexParamFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCSpatialIndexParamFactoryProxy", new SpatialIndexParamFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SpatialIndexParamFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSpatialIndexParamFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.SpatialIndexParamFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createSpatialIndexParam_EVSpatialIndexEnum_callback(int type)
	{
		com.earthview.world.spatial.geodataset.EVSpatialIndexEnum typeParamValue = com.earthview.world.spatial.geodataset.EVSpatialIndexEnum.toEnum(type);
		com.earthview.world.spatial.geodataset.Ispatialindexparam returnValue = createSpatialIndexParam(typeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSpatialIndexParam_EVSpatialIndexEnum(long pNativeObject, int type);
	/**
	 * 将参数输出到流
	 * @param stream 输出参数，流
	 */
	public com.earthview.world.spatial.geodataset.Ispatialindexparam createSpatialIndexParam(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum type)
	{
		int typeParamValue = type.getValue();
		long returnValue = createSpatialIndexParam_EVSpatialIndexEnum(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ispatialindexparam __returnValue = new com.earthview.world.spatial.geodataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndexParam");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ispatialindexparam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndexParam");
		}
		return __returnValue;
	}
	native private long createSpatialIndexParam_EVSpatialIndexEnum_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.geodataset.Ispatialindexparam createSpatialIndexParam_NoVirtual(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum type)
	{
		int typeParamValue = type.getValue();
		long returnValue = createSpatialIndexParam_EVSpatialIndexEnum_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ispatialindexparam __returnValue = new com.earthview.world.spatial.geodataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndexParam");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ispatialindexparam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndexParam");
		}
		return __returnValue;
	}

	protected  long createSpatialIndexParam_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		com.earthview.world.spatial.geodataset.Ispatialindexparam returnValue = createSpatialIndexParam(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSpatialIndexParam_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流创建空间索引参数对象
	 * @param stream 输入参数，流
	 */
	public com.earthview.world.spatial.geodataset.Ispatialindexparam createSpatialIndexParam(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createSpatialIndexParam_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ispatialindexparam __returnValue = new com.earthview.world.spatial.geodataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndexParam");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ispatialindexparam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndexParam");
		}
		return __returnValue;
	}
	native private long createSpatialIndexParam_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.geodataset.Ispatialindexparam createSpatialIndexParam_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createSpatialIndexParam_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ispatialindexparam __returnValue = new com.earthview.world.spatial.geodataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialIndexParam");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ispatialindexparam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISpatialIndexParam");
		}
		return __returnValue;
	}

	public SpatialIndexParamFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialIndexParamFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createSpatialIndexParam_EVSpatialIndexEnum(long pNativeObject, String method);
	native protected void register_createSpatialIndexParam_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createSpatialIndexParam_EVSpatialIndexEnum(this.nativeObject.pointer, "createSpatialIndexParam_EVSpatialIndexEnum_callback");
			this.register_createSpatialIndexParam_CDataStream(this.nativeObject.pointer, "createSpatialIndexParam_CDataStream_callback");
		}
	}
	
	public static SpatialIndexParamFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialIndexParamFactory obj = null;
 		if(baseObj instanceof SpatialIndexParamFactory)
		{
			obj = (SpatialIndexParamFactory)baseObj;
		} else {
			obj = new SpatialIndexParamFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialIndexParamFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
