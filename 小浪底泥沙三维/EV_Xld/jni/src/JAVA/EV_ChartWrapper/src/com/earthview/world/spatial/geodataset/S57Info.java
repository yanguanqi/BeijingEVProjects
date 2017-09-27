package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class S57Info extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CS57Info", new S57InfoClassFactory());
	}

	native private static long getStaticInstance_void();
	public static com.earthview.world.spatial.geodataset.S57Info getStaticInstance()
	{
		long returnValue = getStaticInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.S57Info __returnValue = new com.earthview.world.spatial.geodataset.S57Info(CreatedWhenConstruct.CWC_NotToCreate, "CS57Info");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.S57Info)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CS57Info");
		}
		return __returnValue;
	}
	native private long getChartAttributeInfo_ev_int32(long pNativeObject, int code);
	public com.earthview.world.spatial.geodataset.ChartAttributeInfo getChartAttributeInfo(int code)
	{
		int codeParamValue = code;
		long returnValue = getChartAttributeInfo_ev_int32(this.nativeObject.pointer, codeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartAttributeInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartAttributeInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartAttributeInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartAttributeInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartAttributeInfo");
		}
		return __returnValue;
	}
	native private long getChartAttributeInfo_ev_char(long pNativeObject, long name);
	public com.earthview.world.spatial.geodataset.ChartAttributeInfo getChartAttributeInfo(BytePointer name)
	{
		long nameParamValue = (name == null ? 0L : name.nativeObject.pointer);
		long returnValue = getChartAttributeInfo_ev_char(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartAttributeInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartAttributeInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartAttributeInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartAttributeInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartAttributeInfo");
		}
		return __returnValue;
	}
	native private long getChartClassInfo_ev_int32(long pNativeObject, int code);
	public com.earthview.world.spatial.geodataset.ChartClassInfo getChartClassInfo(int code)
	{
		int codeParamValue = code;
		long returnValue = getChartClassInfo_ev_int32(this.nativeObject.pointer, codeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartClassInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartClassInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartClassInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartClassInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartClassInfo");
		}
		return __returnValue;
	}
	native private long getChartClassInfo_ev_char(long pNativeObject, long name);
	public com.earthview.world.spatial.geodataset.ChartClassInfo getChartClassInfo(BytePointer name)
	{
		long nameParamValue = (name == null ? 0L : name.nativeObject.pointer);
		long returnValue = getChartClassInfo_ev_char(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartClassInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartClassInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartClassInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartClassInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartClassInfo");
		}
		return __returnValue;
	}
	native private long getClassName_ev_int32(long pNativeObject, int code);
	public BytePointer getClassName(int code)
	{
		int codeParamValue = code;
		long returnValue = getClassName_ev_int32(this.nativeObject.pointer, codeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public S57Info(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public S57Info(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static S57Info fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		S57Info obj = null;
 		if(baseObj instanceof S57Info)
		{
			obj = (S57Info)baseObj;
		} else {
			obj = new S57Info(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CS57Info");
			obj.increaseCast();
		}

		return obj;
	}
}
