package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationSerializer extends com.earthview.world.graphic.AnimationBaseSerializer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationSerializer", new AnimationSerializerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationSerializerProxy", new AnimationSerializerClassFactory());
	}

	public AnimationSerializer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnimationSerializerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationSerializer".equals(this.getClass().getName()))
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

	native private long get_mkeyFrameSerializerList_void(long pNativeObject);
	public com.earthview.world.graphic.KeyframeSerializerList get_mkeyFrameSerializerList()
	{
		long jniValue = get_mkeyFrameSerializerList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.KeyframeSerializerList __returnValue = new com.earthview.world.graphic.KeyframeSerializerList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKeyframeSerializerList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyframeSerializerList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyframeSerializerList");
		}
		return __returnValue;
	}
	
	native private void set_mkeyFrameSerializerList_CKeyframeSerializerList (long pNativeObject, long value);
	public void set_mkeyFrameSerializerList(com.earthview.world.graphic.KeyframeSerializerList mkeyFrameSerializerList)
	{
		long mkeyFrameSerializerListParamValue = mkeyFrameSerializerList.nativeObject.pointer;
		
		set_mkeyFrameSerializerList_CKeyframeSerializerList(this.nativeObject.pointer, mkeyFrameSerializerListParamValue);
	}
	
	native private String get_mname_void(long pNativeObject);
	public String get_mname()
	{
		String jniValue = get_mname_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mname_EVString (long pNativeObject, String value);
	public void set_mname(String mname)
	{
		String mnameParamValue = mname;
		
		set_mname_EVString(this.nativeObject.pointer, mnameParamValue);
	}
	
	native private String get_menable_void(long pNativeObject);
	public String get_menable()
	{
		String jniValue = get_menable_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_menable_EVString (long pNativeObject, String value);
	public void set_menable(String menable)
	{
		String menableParamValue = menable;
		
		set_menable_EVString(this.nativeObject.pointer, menableParamValue);
	}
	
	native private String get_mloop_void(long pNativeObject);
	public String get_mloop()
	{
		String jniValue = get_mloop_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mloop_EVString (long pNativeObject, String value);
	public void set_mloop(String mloop)
	{
		String mloopParamValue = mloop;
		
		set_mloop_EVString(this.nativeObject.pointer, mloopParamValue);
	}
	
	native private String get_minterpolationMode_void(long pNativeObject);
	public String get_minterpolationMode()
	{
		String jniValue = get_minterpolationMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minterpolationMode_EVString (long pNativeObject, String value);
	public void set_minterpolationMode(String minterpolationMode)
	{
		String minterpolationModeParamValue = minterpolationMode;
		
		set_minterpolationMode_EVString(this.nativeObject.pointer, minterpolationModeParamValue);
	}
	
	native private String get_mrotationInterpolationMode_void(long pNativeObject);
	public String get_mrotationInterpolationMode()
	{
		String jniValue = get_mrotationInterpolationMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrotationInterpolationMode_EVString (long pNativeObject, String value);
	public void set_mrotationInterpolationMode(String mrotationInterpolationMode)
	{
		String mrotationInterpolationModeParamValue = mrotationInterpolationMode;
		
		set_mrotationInterpolationMode_EVString(this.nativeObject.pointer, mrotationInterpolationModeParamValue);
	}
	
	native private double get_mAnimationLength_void(long pNativeObject);
	public double get_mAnimationLength()
	{
		double jniValue = get_mAnimationLength_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAnimationLength_ev_real64 (long pNativeObject, double value);
	public void set_mAnimationLength(double mAnimationLength)
	{
		double mAnimationLengthParamValue = mAnimationLength;
		
		set_mAnimationLength_ev_real64(this.nativeObject.pointer, mAnimationLengthParamValue);
	}
	
	public AnimationSerializer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationSerializer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static AnimationSerializer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationSerializer obj = null;
 		if(baseObj instanceof AnimationSerializer)
		{
			obj = (AnimationSerializer)baseObj;
		} else {
			obj = new AnimationSerializer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationSerializer");
			obj.increaseCast();
		}

		return obj;
	}
}
