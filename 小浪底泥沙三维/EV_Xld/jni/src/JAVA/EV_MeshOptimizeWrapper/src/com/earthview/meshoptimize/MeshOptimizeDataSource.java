package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeDataSource extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeDataSource", new MeshOptimizeDataSourceClassFactory());
	}

	public MeshOptimizeDataSource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshOptimizeDataSource", null);
	}

	native private String get_ExportName_void(long pNativeObject);
	public String get_ExportName()
	{
		String jniValue = get_ExportName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ExportName_EVString (long pNativeObject, String value);
	public void set_ExportName(String ExportName)
	{
		String ExportNameParamValue = ExportName;
		
		set_ExportName_EVString(this.nativeObject.pointer, ExportNameParamValue);
	}
	
	native private long get_MeshDataList_void(long pNativeObject);
	public com.earthview.meshoptimize.MeshOptimizeDataList get_MeshDataList()
	{
		long jniValue = get_MeshDataList_void(this.nativeObject.pointer);
		
		com.earthview.meshoptimize.MeshOptimizeDataList __returnValue = new com.earthview.meshoptimize.MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshOptimizeDataList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.MeshOptimizeDataList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshOptimizeDataList");
		}
		return __returnValue;
	}
	
	native private void set_MeshDataList_MeshOptimizeDataList (long pNativeObject, long value);
	public void set_MeshDataList(com.earthview.meshoptimize.MeshOptimizeDataList MeshDataList)
	{
		long MeshDataListParamValue = MeshDataList.nativeObject.pointer;
		
		set_MeshDataList_MeshOptimizeDataList(this.nativeObject.pointer, MeshDataListParamValue);
	}
	
	public MeshOptimizeDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshOptimizeDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshOptimizeDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshOptimizeDataSource obj = null;
 		if(baseObj instanceof MeshOptimizeDataSource)
		{
			obj = (MeshOptimizeDataSource)baseObj;
		} else {
			obj = new MeshOptimizeDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshOptimizeDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
