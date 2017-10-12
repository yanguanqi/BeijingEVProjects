package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CModelData", new ModelDataClassFactory());
	}

	public ModelData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelData", null);
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
	native private void setModelData_MemoryDataStreamPtr(long pNativeObject, long data);
	public void setModelData(com.earthview.world.core.MemoryDataStreamPtr data)
	{
		long dataParamValue = data.nativeObject.pointer;
		setModelData_MemoryDataStreamPtr(this.nativeObject.pointer, dataParamValue);
	}
	native private long getModelData_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr getModelData()
	{
		long returnValue = getModelData_void(this.nativeObject.pointer);
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
	native private void setDataType_EVString(long pNativeObject, String dataType);
	public void setDataType(String dataType)
	{
		String dataTypeParamValue = dataType;
		setDataType_EVString(this.nativeObject.pointer, dataTypeParamValue);
	}
	native private String getDataType_void(long pNativeObject);
	public String getDataType()
	{
		String returnValue = getDataType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBoundingbox_CAxisAlignedBox(long pNativeObject, long box);
	public void setBoundingbox(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		setBoundingbox_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	native private long getBoundingbox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingbox()
	{
		long returnValue = getBoundingbox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private void setResourceList_CResourceDataList(long pNativeObject, long res);
	public void setResourceList(ResourceDataList res)
	{
		long resParamValue = res.nativeObject.pointer;
		setResourceList_CResourceDataList(this.nativeObject.pointer, resParamValue);
	}
	native private long getResourceList_void(long pNativeObject);
	public ResourceDataList getResourceList()
	{
		long returnValue = getResourceList_void(this.nativeObject.pointer);
		ResourceDataList __returnValue = new ResourceDataList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CResourceDataList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ResourceDataList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CResourceDataList");
		}
		return __returnValue;
	}
	public ModelData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelData obj = null;
 		if(baseObj instanceof ModelData)
		{
			obj = (ModelData)baseObj;
		} else {
			obj = new ModelData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelData");
			obj.increaseCast();
		}

		return obj;
	}
}
