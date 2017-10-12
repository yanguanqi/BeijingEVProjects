package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CResourceData", new ResourceDataClassFactory());
	}

	public ResourceData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CResourceData", null);
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getDataType_void(long pNativeObject);
	public String getDataType()
	{
		String returnValue = getDataType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDataType_EVString(long pNativeObject, String dataType);
	public void setDataType(String dataType)
	{
		String dataTypeParamValue = dataType;
		setDataType_EVString(this.nativeObject.pointer, dataTypeParamValue);
	}
	native private long getResourceData_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr getResourceData()
	{
		long returnValue = getResourceData_void(this.nativeObject.pointer);
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
	native private void setResourceData_MemoryDataStreamPtr(long pNativeObject, long data);
	public void setResourceData(com.earthview.world.core.MemoryDataStreamPtr data)
	{
		long dataParamValue = data.nativeObject.pointer;
		setResourceData_MemoryDataStreamPtr(this.nativeObject.pointer, dataParamValue);
	}
	native private int getResourceType_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.MaterialResourceType getResourceType()
	{
		int returnValue = getResourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.MaterialResourceType.toEnum(returnValue);
	}
	native private void setResourceType_MaterialResourceType(long pNativeObject, int type);
	public void setResourceType(com.earthview.world.spatial3d.dataset.MaterialResourceType type)
	{
		int typeParamValue = type.getValue();
		setResourceType_MaterialResourceType(this.nativeObject.pointer, typeParamValue);
	}
	public ResourceData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ResourceData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceData obj = null;
 		if(baseObj instanceof ResourceData)
		{
			obj = (ResourceData)baseObj;
		} else {
			obj = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceData");
			obj.increaseCast();
		}

		return obj;
	}
}
