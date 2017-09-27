package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeData", new MeshOptimizeDataClassFactory());
	}

	public MeshOptimizeData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshOptimizeData", null);
	}

	native private long get_MeshData_void(long pNativeObject);
	public com.earthview.world.graphic.MeshPtr get_MeshData()
	{
		long jniValue = get_MeshData_void(this.nativeObject.pointer);
		
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
	
	native private void set_MeshData_CMeshPtr (long pNativeObject, long value);
	public void set_MeshData(com.earthview.world.graphic.MeshPtr MeshData)
	{
		long MeshDataParamValue = MeshData.nativeObject.pointer;
		
		set_MeshData_CMeshPtr(this.nativeObject.pointer, MeshDataParamValue);
	}
	
	native private long get_AniData_void(long pNativeObject);
	public com.earthview.world.core.DataStreamPtr get_AniData()
	{
		long jniValue = get_AniData_void(this.nativeObject.pointer);
		
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	
	native private void set_AniData_DataStreamPtr (long pNativeObject, long value);
	public void set_AniData(com.earthview.world.core.DataStreamPtr AniData)
	{
		long AniDataParamValue = AniData.nativeObject.pointer;
		
		set_AniData_DataStreamPtr(this.nativeObject.pointer, AniDataParamValue);
	}
	
	native private long get_LocalMat_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_LocalMat()
	{
		long jniValue = get_LocalMat_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_LocalMat_CMatrix4 (long pNativeObject, long value);
	public void set_LocalMat(com.earthview.world.spatial.math.Matrix4 LocalMat)
	{
		long LocalMatParamValue = LocalMat.nativeObject.pointer;
		
		set_LocalMat_CMatrix4(this.nativeObject.pointer, LocalMatParamValue);
	}
	
	public MeshOptimizeData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshOptimizeData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshOptimizeData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshOptimizeData obj = null;
 		if(baseObj instanceof MeshOptimizeData)
		{
			obj = (MeshOptimizeData)baseObj;
		} else {
			obj = new MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshOptimizeData");
			obj.increaseCast();
		}

		return obj;
	}
}
