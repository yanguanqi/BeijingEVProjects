package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CategorySerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCategorySerializer", new CategorySerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCategorySerializerProxy", new CategorySerializerClassFactory());
	}

	public CategorySerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCategorySerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CategorySerializer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fromStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void fromStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void fromStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private void toStreamImplement_DataStreamPtr(long pNativeObject, long stream);
	public void toStreamImplement(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStreamImplement_DataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected void toStreamImplement_NoVirtual(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStreamImplement_DataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private long get_mCategory_void(long pNativeObject);
	public com.earthview.world.graphic.Category get_mCategory()
	{
		long jniValue = get_mCategory_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.Category __returnValue = new com.earthview.world.graphic.Category(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCategory");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Category)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCategory");
		}
		return __returnValue;
	}
	
	native private void set_mCategory_CCategory (long pNativeObject, long value);
	public void set_mCategory(com.earthview.world.graphic.Category mCategory)
	{
		long mCategoryParamValue = mCategory.nativeObject.pointer;
		
		set_mCategory_CCategory(this.nativeObject.pointer, mCategoryParamValue);
	}
	
	native private long get_mNodeTagSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.NodeTagSerializerList get_mNodeTagSerializerList()
	{
		long jniValue = get_mNodeTagSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.NodeTagSerializerList __returnValue = new com.earthview.world.graphic.NodeTagSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeTagSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeTagSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeTagSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_mNodeTagSerializerList_CNodeTagSerializerList (long pNativeObject, long value);
	public void set_mNodeTagSerializerList(com.earthview.world.graphic.NodeTagSerializerList mNodeTagSerializerList)
	{
		long mNodeTagSerializerListParamValue = mNodeTagSerializerList.nativeObject.pointer;
		
		set_mNodeTagSerializerList_CNodeTagSerializerList(this.nativeObject.pointer, mNodeTagSerializerListParamValue);
	}
	
	native private long getNodeTagList_void(long pNativeObject);
	public com.earthview.world.graphic.NodeTagList getNodeTagList()
	{
		long returnValue = getNodeTagList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.NodeTagList __returnValue = new com.earthview.world.graphic.NodeTagList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeTagList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeTagList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeTagList");
		}
		return __returnValue;
	}
	public CategorySerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CategorySerializer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void flipToLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipToLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipToLittleEndian(VoidPointer pData, long size)
	{
		super.flipToLittleEndian_NoVirtual(pData, size);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size, long count)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size, count);
	}
	public void flipFromLittleEndian(VoidPointer pData, long size)
	{
		super.flipFromLittleEndian_NoVirtual(pData, size);
	}
	public void flipEndian(VoidPointer pData, long size, long count)
	{
		super.flipEndian_NoVirtual(pData, size, count);
	}
	public void flipEndian(VoidPointer pData, long size)
	{
		super.flipEndian_NoVirtual(pData, size);
	}
	//// Determine the endianness of the incoming stream compared to native
	public void determineEndianness(com.earthview.world.core.DataStreamPtr stream)
	{
		super.determineEndianness_NoVirtual(stream);
	}
	//// Determine the endianness to write with based on option
	public void determineEndianness(com.earthview.world.graphic.AnimationBaseSerializer.Endian requestedEndian)
	{
		super.determineEndianness_NoVirtual(requestedEndian);
	}
	
	native protected void register_fromStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_toStreamImplement_DataStreamPtr(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipToLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipFromLittleEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_flipEndian_void_ev_size_t(long pNativeObject, String method);
	native protected void register_determineEndianness_DataStreamPtr(long pNativeObject, String method);
	native protected void register_determineEndianness_Endian(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_fromStreamImplement_DataStreamPtr(this.nativeObject.pointer, "fromStreamImplement_DataStreamPtr_callback");
			this.register_toStreamImplement_DataStreamPtr(this.nativeObject.pointer, "toStreamImplement_DataStreamPtr_callback");
			this.register_flipToLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipToLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipToLittleEndian_void_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipFromLittleEndian_void_ev_size_t(this.nativeObject.pointer, "flipFromLittleEndian_void_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_ev_size_t_callback");
			this.register_flipEndian_void_ev_size_t(this.nativeObject.pointer, "flipEndian_void_ev_size_t_callback");
			this.register_determineEndianness_DataStreamPtr(this.nativeObject.pointer, "determineEndianness_DataStreamPtr_callback");
			this.register_determineEndianness_Endian(this.nativeObject.pointer, "determineEndianness_Endian_callback");
		}
	}
	
	public static CategorySerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CategorySerializer obj = null;
 		if(baseObj instanceof CategorySerializer)
		{
			obj = (CategorySerializer)baseObj;
		} else {
			obj = new CategorySerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCategorySerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
