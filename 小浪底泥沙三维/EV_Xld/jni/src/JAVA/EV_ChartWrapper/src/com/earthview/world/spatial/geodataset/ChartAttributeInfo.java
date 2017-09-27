package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class ChartAttributeInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartAttributeInfo", new ChartAttributeInfoClassFactory());
	}

	native private int getCode_void(long pNativeObject);
	public int getCode()
	{
		int returnValue = getCode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAcronym_void(long pNativeObject);
	public BytePointer getAcronym()
	{
		long returnValue = getAcronym_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDescribe_void(long pNativeObject);
	public BytePointer getDescribe()
	{
		long returnValue = getDescribe_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVChartAttributeType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVChartAttributeType.toEnum(returnValue);
	}
	native private long createField_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifield createField()
	{
		long returnValue = createField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	public ChartAttributeInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartAttributeInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ChartAttributeInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartAttributeInfo obj = null;
 		if(baseObj instanceof ChartAttributeInfo)
		{
			obj = (ChartAttributeInfo)baseObj;
		} else {
			obj = new ChartAttributeInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartAttributeInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
