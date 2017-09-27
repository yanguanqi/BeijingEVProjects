package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialGridIndexParam extends com.earthview.world.spatial.geodataset.Ispatialindexparam {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam", new SpatialGridIndexParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCSpatialGridIndexParamProxy", new SpatialGridIndexParamClassFactory());
	}

	public SpatialGridIndexParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSpatialGridIndexParamProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.SpatialGridIndexParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public SpatialGridIndexParam(double gridOneSize, double gridTwoSize, double gridThreeSize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer gridOneSizePtr = new BasePointer(gridOneSize);
		list.add("gridOneSize", gridOneSizePtr.get());
		BasePointer gridTwoSizePtr = new BasePointer(gridTwoSize);
		list.add("gridTwoSize", gridTwoSizePtr.get());
		BasePointer gridThreeSizePtr = new BasePointer(gridThreeSize);
		list.add("gridThreeSize", gridThreeSizePtr.get());
		Create("JCSpatialGridIndexParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.SpatialGridIndexParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setGridOneSize_ev_real64(long pNativeObject, double gridSize);
	public void setGridOneSize(double gridSize)
	{
		double gridSizeParamValue = gridSize;
		setGridOneSize_ev_real64(this.nativeObject.pointer, gridSizeParamValue);
	}
	native private void setGridTwoSize_ev_real64(long pNativeObject, double gridSize);
	public void setGridTwoSize(double gridSize)
	{
		double gridSizeParamValue = gridSize;
		setGridTwoSize_ev_real64(this.nativeObject.pointer, gridSizeParamValue);
	}
	native private void setGridThreeSize_ev_real64(long pNativeObject, double gridSize);
	public void setGridThreeSize(double gridSize)
	{
		double gridSizeParamValue = gridSize;
		setGridThreeSize_ev_real64(this.nativeObject.pointer, gridSizeParamValue);
	}
	native private void getGridSize_ev_real64_ev_real64_ev_real64(long pNativeObject, long gridOneSize, long gridTwoSize, long gridThreeSize);
	public void getGridSize(DoublePointer gridOneSize, DoublePointer gridTwoSize, DoublePointer gridThreeSize)
	{
		long gridOneSizeParamValue = gridOneSize.nativeObject.pointer;
		long gridTwoSizeParamValue = gridTwoSize.nativeObject.pointer;
		long gridThreeSizeParamValue = gridThreeSize.nativeObject.pointer;
		getGridSize_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, gridOneSizeParamValue, gridTwoSizeParamValue, gridThreeSizeParamValue);
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

	public SpatialGridIndexParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialGridIndexParam(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static SpatialGridIndexParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialGridIndexParam obj = null;
 		if(baseObj instanceof SpatialGridIndexParam)
		{
			obj = (SpatialGridIndexParam)baseObj;
		} else {
			obj = new SpatialGridIndexParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialGridIndexParam");
			obj.increaseCast();
		}

		return obj;
	}
}
