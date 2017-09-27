package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshLodUsage extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::MeshLodUsage", new MeshLodUsageClassFactory());
	}

	native private double get_userValue_void(long pNativeObject);
	public double get_userValue()
	{
		double jniValue = get_userValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_userValue_Real (long pNativeObject, double value);
	public void set_userValue(double userValue)
	{
		double userValueParamValue = userValue;
		
		set_userValue_Real(this.nativeObject.pointer, userValueParamValue);
	}
	
	native private double get_value_void(long pNativeObject);
	public double get_value()
	{
		double jniValue = get_value_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_value_Real (long pNativeObject, double value);
	public void set_value(double value)
	{
		double valueParamValue = value;
		
		set_value_Real(this.nativeObject.pointer, valueParamValue);
	}
	
	native private String get_manualName_void(long pNativeObject);
	public String get_manualName()
	{
		String jniValue = get_manualName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_manualName_EVString (long pNativeObject, String value);
	public void set_manualName(String manualName)
	{
		String manualNameParamValue = manualName;
		
		set_manualName_EVString(this.nativeObject.pointer, manualNameParamValue);
	}
	
	native private String get_manualGroup_void(long pNativeObject);
	public String get_manualGroup()
	{
		String jniValue = get_manualGroup_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_manualGroup_EVString (long pNativeObject, String value);
	public void set_manualGroup(String manualGroup)
	{
		String manualGroupParamValue = manualGroup;
		
		set_manualGroup_EVString(this.nativeObject.pointer, manualGroupParamValue);
	}
	
	native private long get_manualMesh_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr get_manualMesh()
	{
		long jniValue = get_manualMesh_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	
	native private void set_manualMesh_CMeshPtr (long pNativeObject, long value);
	public void set_manualMesh(com.earthview.world.graphic.MeshPtr manualMesh)
	{
		long manualMeshParamValue = manualMesh.nativeObject.pointer;
		
		set_manualMesh_CMeshPtr(this.nativeObject.pointer, manualMeshParamValue);
	}
	
	native private long get_edgeData_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData get_edgeData()
	{
		long jniValue = get_edgeData_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	
	native private void set_edgeData_CEdgeData (long pNativeObject, long value);
	public void set_edgeData(com.earthview.world.graphic.EdgeData edgeData)
	{
		long edgeDataParamValue = (edgeData == null ? 0L : edgeData.nativeObject.pointer);
		
		set_edgeData_CEdgeData(this.nativeObject.pointer, edgeDataParamValue);
	}
	
	public MeshLodUsage() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MeshLodUsage", null);
	}

	public MeshLodUsage(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshLodUsage(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshLodUsage fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshLodUsage obj = null;
 		if(baseObj instanceof MeshLodUsage)
		{
			obj = (MeshLodUsage)baseObj;
		} else {
			obj = new MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MeshLodUsage");
			obj.increaseCast();
		}

		return obj;
	}
}
