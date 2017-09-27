package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodIndexStreamParser extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::LodIndexStreamParser", new LodIndexStreamParserClassFactory());
	}

	public LodIndexStreamParser() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LodIndexStreamParser", null);
	}

	native private static long encodeToStream_LodIndexVector(long lv);
	public static com.earthview.world.core.MemoryDataStreamPtr encodeToStream(com.earthview.world.spatial3d.modelmanager.LodIndexVector lv)
	{
		long lvParamValue = lv.nativeObject.pointer;
		long returnValue = encodeToStream_LodIndexVector(lvParamValue);
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
	native private static long decodeFromStream_MemoryDataStreamPtr(long mem);
	public static com.earthview.world.spatial3d.modelmanager.LodIndexVector decodeFromStream(com.earthview.world.core.MemoryDataStreamPtr mem)
	{
		long memParamValue = mem.nativeObject.pointer;
		long returnValue = decodeFromStream_MemoryDataStreamPtr(memParamValue);
		com.earthview.world.spatial3d.modelmanager.LodIndexVector __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		}
		return __returnValue;
	}
	public LodIndexStreamParser(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodIndexStreamParser(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodIndexStreamParser fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodIndexStreamParser obj = null;
 		if(baseObj instanceof LodIndexStreamParser)
		{
			obj = (LodIndexStreamParser)baseObj;
		} else {
			obj = new LodIndexStreamParser(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LodIndexStreamParser");
			obj.increaseCast();
		}

		return obj;
	}
}
