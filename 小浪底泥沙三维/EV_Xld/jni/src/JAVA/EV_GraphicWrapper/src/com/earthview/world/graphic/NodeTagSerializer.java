package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeTagSerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNodeTagSerializer", new NodeTagSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNodeTagSerializerProxy", new NodeTagSerializerClassFactory());
	}

	public NodeTagSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCNodeTagSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NodeTagSerializer".equals(this.getClass().getName()))
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

	native private long get_mNodeTag_void(long pNativeObject);
	public com.earthview.world.graphic.NodeTag get_mNodeTag()
	{
		long jniValue = get_mNodeTag_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.NodeTag __returnValue = new com.earthview.world.graphic.NodeTag(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CNodeTag");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeTag)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CNodeTag");
		}
		return __returnValue;
	}
	
	native private void set_mNodeTag_CNodeTag (long pNativeObject, long value);
	public void set_mNodeTag(com.earthview.world.graphic.NodeTag mNodeTag)
	{
		long mNodeTagParamValue = mNodeTag.nativeObject.pointer;
		
		set_mNodeTag_CNodeTag(this.nativeObject.pointer, mNodeTagParamValue);
	}
	
	public NodeTagSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeTagSerializer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static NodeTagSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeTagSerializer obj = null;
 		if(baseObj instanceof NodeTagSerializer)
		{
			obj = (NodeTagSerializer)baseObj;
		} else {
			obj = new NodeTagSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeTagSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
