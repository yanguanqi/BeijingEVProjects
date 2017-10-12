package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceDataList extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CResourceDataList", new ResourceDataListClassFactory());
	}

	public ResourceDataList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CResourceDataList", null);
	}

	native private void push_back_CResourceData(long pNativeObject, long t);
	public void push_back(ResourceData t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CResourceData(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_CResourceData(long pNativeObject, long t);
	public void push_front(ResourceData t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_CResourceData(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private void pop_front_void(long pNativeObject);
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public ResourceData front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		ResourceData __returnValue = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate, "CResourceData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ResourceData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceData");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public ResourceData back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		ResourceData __returnValue = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate, "CResourceData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ResourceData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceData");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public ResourceData at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		ResourceData __returnValue = new ResourceData(CreatedWhenConstruct.CWC_NotToCreate, "CResourceData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (ResourceData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceData");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CResourceData(long pNativeObject, long pos, long t);
	public void insert(long pos, ResourceData t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CResourceData(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ResourceDataList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceDataList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ResourceDataList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceDataList obj = null;
 		if(baseObj instanceof ResourceDataList)
		{
			obj = (ResourceDataList)baseObj;
		} else {
			obj = new ResourceDataList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceDataList");
			obj.increaseCast();
		}

		return obj;
	}
}
