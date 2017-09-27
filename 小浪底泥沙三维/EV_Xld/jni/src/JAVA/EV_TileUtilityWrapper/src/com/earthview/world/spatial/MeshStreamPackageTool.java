package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///扩展的流
public class MeshStreamPackageTool extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMeshStreamPackageTool", new MeshStreamPackageToolClassFactory());
	}

	public MeshStreamPackageTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshStreamPackageTool", null);
	}

	native private static long encodeMeshStreamTo7z_MeshStream(long meshStream);
	public static com.earthview.world.core.MemoryDataStreamPtr encodeMeshStreamTo7z(com.earthview.world.spatial.MeshStream meshStream)
	{
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		long returnValue = encodeMeshStreamTo7z_MeshStream(meshStreamParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long encodeMeshStreamTo7z_ForBatch_MeshStream(long meshStream);
	public static com.earthview.world.core.MemoryDataStreamPtr encodeMeshStreamTo7z_ForBatch(com.earthview.world.spatial.MeshStream meshStream)
	{
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		long returnValue = encodeMeshStreamTo7z_ForBatch_MeshStream(meshStreamParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static void clearMemForBatch_void();
	public static void clearMemForBatch()
	{
		clearMemForBatch_void();
	}
	native private static long decodeMeshStreamFrom7z_MemoryDataStreamPtr(long package7z);
	public static com.earthview.world.spatial.MeshStream decodeMeshStreamFrom7z(com.earthview.world.core.MemoryDataStreamPtr package7z)
	{
		long package7zParamValue = package7z.nativeObject.pointer;
		long returnValue = decodeMeshStreamFrom7z_MemoryDataStreamPtr(package7zParamValue);
		com.earthview.world.spatial.MeshStream __returnValue = new com.earthview.world.spatial.MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MeshStream");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.MeshStream)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MeshStream");
		}
		return __returnValue;
	}
	public MeshStreamPackageTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshStreamPackageTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshStreamPackageTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshStreamPackageTool obj = null;
 		if(baseObj instanceof MeshStreamPackageTool)
		{
			obj = (MeshStreamPackageTool)baseObj;
		} else {
			obj = new MeshStreamPackageTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshStreamPackageTool");
			obj.increaseCast();
		}

		return obj;
	}
}
