package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

//////////////////////////////////////////////////
public class ChartClassInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartClassInfo", new ChartClassInfoClassFactory());
	}

	native private int getChartFieldType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVChartDataType getChartFieldType()
	{
		int returnValue = getChartFieldType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVChartDataType.toEnum(returnValue);
	}
	native private int getClassCode_void(long pNativeObject);
	public int getClassCode()
	{
		int returnValue = getClassCode_void(this.nativeObject.pointer);
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
	native private long getAttributeNum_void(long pNativeObject);
	public long getAttributeNum()
	{
		long returnValue = getAttributeNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAttributeName_ev_uint32(long pNativeObject, long index);
	public String getAttributeName(long index)
	{
		long indexParamValue = index;
		String returnValue = getAttributeName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getAttributeFieldRef_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.geodataset.Ifield getAttributeFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getAttributeFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getAttributeFieldsRef_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifields getAttributeFieldsRef()
	{
		long returnValue = getAttributeFieldsRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	public ChartClassInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartClassInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ChartClassInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartClassInfo obj = null;
 		if(baseObj instanceof ChartClassInfo)
		{
			obj = (ChartClassInfo)baseObj;
		} else {
			obj = new ChartClassInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartClassInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
