package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 默认空间索引参数类
 */
public class Rtreespatialindexparam extends com.earthview.world.spatial.geodataset.Ispatialindexparam {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam", new RtreespatialindexparamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCRTreeSpatialIndexParamProxy", new RtreespatialindexparamClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Rtreespatialindexparam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRTreeSpatialIndexParamProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.Rtreespatialindexparam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将参数输出到流
	 * @param stream 输出参数，流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Rtreespatialindexparam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Rtreespatialindexparam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexType()
	{
		return super.getSpatialIndexType_NoVirtual();
	}
	
	native protected void register_getSpatialIndexType_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSpatialIndexType_void(this.nativeObject.pointer, "getSpatialIndexType_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Rtreespatialindexparam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Rtreespatialindexparam obj = null;
 		if(baseObj instanceof Rtreespatialindexparam)
		{
			obj = (Rtreespatialindexparam)baseObj;
		} else {
			obj = new Rtreespatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRTreeSpatialIndexParam");
			obj.increaseCast();
		}

		return obj;
	}
}
