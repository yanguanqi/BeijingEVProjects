package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///尾迹
public class TextureStreamItem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::TextureStreamItem", new TextureStreamItemClassFactory());
	}

	public TextureStreamItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TextureStreamItem", null);
	}

	native private long get_mIndex_void(long pNativeObject);
	public long get_mIndex()
	{
		long jniValue = get_mIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIndex_ev_uint32 (long pNativeObject, long value);
	public void set_mIndex(long mIndex)
	{
		long mIndexParamValue = mIndex;
		
		set_mIndex_ev_uint32(this.nativeObject.pointer, mIndexParamValue);
	}
	
	native private long get_mStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr get_mStream()
	{
		long jniValue = get_mStream_void(this.nativeObject.pointer);
		
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mStream_MemoryDataStreamPtr (long pNativeObject, long value);
	public void set_mStream(com.earthview.world.core.MemoryDataStreamPtr mStream)
	{
		long mStreamParamValue = mStream.nativeObject.pointer;
		
		set_mStream_MemoryDataStreamPtr(this.nativeObject.pointer, mStreamParamValue);
	}
	
	native private String get_filenmae_void(long pNativeObject);
	public String get_filenmae()
	{
		String jniValue = get_filenmae_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_filenmae_EVString (long pNativeObject, String value);
	public void set_filenmae(String filenmae)
	{
		String filenmaeParamValue = filenmae;
		
		set_filenmae_EVString(this.nativeObject.pointer, filenmaeParamValue);
	}
	
	public TextureStreamItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureStreamItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureStreamItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureStreamItem obj = null;
 		if(baseObj instanceof TextureStreamItem)
		{
			obj = (TextureStreamItem)baseObj;
		} else {
			obj = new TextureStreamItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TextureStreamItem");
			obj.increaseCast();
		}

		return obj;
	}
}
