package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画类管理组成动画的一系列动画轨迹等
 */
public class Animation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation", new AnimationClassFactory());
	}

	public enum InterpolationMode implements INativeEnum<InterpolationMode> {
		IM_LINEAR(InterpolationModeHelper.ENUM_VALUES[0]),
		IM_SPLINE(InterpolationModeHelper.ENUM_VALUES[1]);
		private int value;
		InterpolationMode(int i) {
			this.value = i;
		}
		public InterpolationMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final InterpolationMode toEnum(int retval) {
			if(retval == IM_LINEAR.value){
				return IM_LINEAR;
			}
			else if(retval == IM_SPLINE.value){
				return IM_SPLINE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class InterpolationModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum RotationInterpolationMode implements INativeEnum<RotationInterpolationMode> {
		RIM_LINEAR(RotationInterpolationModeHelper.ENUM_VALUES[0]),
		RIM_SPHERICAL(RotationInterpolationModeHelper.ENUM_VALUES[1]);
		private int value;
		RotationInterpolationMode(int i) {
			this.value = i;
		}
		public RotationInterpolationMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final RotationInterpolationMode toEnum(int retval) {
			if(retval == RIM_LINEAR.value){
				return RIM_LINEAR;
			}
			else if(retval == RIM_SPHERICAL.value){
				return RIM_SPHERICAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class RotationInterpolationModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param name 动画名称
	 * @param length 动画长度
	 */
	public Animation(String name, double length) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer lengthPtr = new BasePointer(length);
		list.add("length", lengthPtr.get());
		Create("CAnimation", list);
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获得动画名称
	 * @param  
	 * @return 动画名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getLength_void(long pNativeObject);
	/**
	 * 获得动画长度
	 * @param  
	 * @return 动画长度
	 */
	public double getLength()
	{
		double returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLength_Real(long pNativeObject, double len);
	/**
	 * 设置动画长度
	 * @param len 动画长度
	 */
	public void setLength(double len)
	{
		double lenParamValue = len;
		setLength_Real(this.nativeObject.pointer, lenParamValue);
	}
	native private long createNodeTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 为动画节点创建动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 动画轨迹指针
	 */
	public com.earthview.world.graphic.NodeAnimationTrack createNodeTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private long createSphereNodeTrack_ev_uint16(long pNativeObject, int handle);
	public com.earthview.world.graphic.SphereNodeAnimationTrack createSphereNodeTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createSphereNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private long createNumericTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 创建数字动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.NumericAnimationTrack createNumericTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = createNumericTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
		}
		return __returnValue;
	}
	native private long createVertexTrack_ev_uint16_VertexAnimationType(long pNativeObject, int handle, int animType);
	/**
	 * 创建顶点动画轨迹
	 * @param handle 动画轨迹标识
	 * @param animType 顶点动画类型
	 * @return 顶点动画轨迹指针
	 */
	public com.earthview.world.graphic.VertexAnimationTrack createVertexTrack(int handle, com.earthview.world.graphic.VertexAnimationType animType)
	{
		int handleParamValue = handle;
		int animTypeParamValue = animType.getValue();
		long returnValue = createVertexTrack_ev_uint16_VertexAnimationType(this.nativeObject.pointer, handleParamValue, animTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
		}
		return __returnValue;
	}
	native private long createNodeTrack_ev_uint16_CNode(long pNativeObject, int handle, long ref_node);
	/**
	 * 创建节点动画轨迹
	 * @param handle 动画轨迹标识
	 * @param node 节点指针
	 * @return 节点动画轨迹指针
	 */
	public com.earthview.world.graphic.NodeAnimationTrack createNodeTrack(int handle, com.earthview.world.graphic.Node ref_node)
	{
		int handleParamValue = handle;
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		long returnValue = createNodeTrack_ev_uint16_CNode(this.nativeObject.pointer, handleParamValue, ref_nodeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private long createSphereNodeTrack_ev_uint16_CNode(long pNativeObject, int handle, long ref_node);
	public com.earthview.world.graphic.SphereNodeAnimationTrack createSphereNodeTrack(int handle, com.earthview.world.graphic.Node ref_node)
	{
		int handleParamValue = handle;
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		long returnValue = createSphereNodeTrack_ev_uint16_CNode(this.nativeObject.pointer, handleParamValue, ref_nodeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private long createNumericTrack_ev_uint16_AnimableValuePtr(long pNativeObject, int handle, long anim);
	/**
	 * 创建数字动画轨迹
	 * @param handle 动画轨迹标识
	 * @param anim 可动画的值的指针
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.NumericAnimationTrack createNumericTrack(int handle, com.earthview.world.graphic.AnimableValuePtr anim)
	{
		int handleParamValue = handle;
		long animParamValue = anim.nativeObject.pointer;
		long returnValue = createNumericTrack_ev_uint16_AnimableValuePtr(this.nativeObject.pointer, handleParamValue, animParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
		}
		return __returnValue;
	}
	native private long createVertexTrack_ev_uint16_CVertexData_VertexAnimationType(long pNativeObject, int handle, long ref_data, int animType);
	/**
	 * 创建顶点动画轨迹
	 * @param handle 动画轨迹标识
	 * @param data 顶点数据
	 * @param animType 顶点动画类型
	 * @return 顶点动画轨迹指针
	 */
	public com.earthview.world.graphic.VertexAnimationTrack createVertexTrack(int handle, com.earthview.world.graphic.VertexData ref_data, com.earthview.world.graphic.VertexAnimationType animType)
	{
		int handleParamValue = handle;
		long ref_dataParamValue = (ref_data == null ? 0L : ref_data.nativeObject.pointer);
		int animTypeParamValue = animType.getValue();
		long returnValue = createVertexTrack_ev_uint16_CVertexData_VertexAnimationType(this.nativeObject.pointer, handleParamValue, ref_dataParamValue, animTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
		}
		return __returnValue;
	}
	native private int getNumNodeTracks_void(long pNativeObject);
	/**
	 * 获得动画中节点动画轨迹对象的数量
	 * @param  
	 * @return 动画中节点动画轨迹对象的数量
	 */
	public int getNumNodeTracks()
	{
		int returnValue = getNumNodeTracks_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumSphereNodeTracks_void(long pNativeObject);
	public int getNumSphereNodeTracks()
	{
		int returnValue = getNumSphereNodeTracks_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNodeTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 由动画轨迹标识获得节点动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 节点动画轨迹指针
	 */
	public com.earthview.world.graphic.NodeAnimationTrack getNodeTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private long getSphereNodeTrack_ev_uint16(long pNativeObject, int handle);
	public com.earthview.world.graphic.SphereNodeAnimationTrack getSphereNodeTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getSphereNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private boolean hasNodeTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 判断是否存在与动画轨迹标识对应的节点动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 存在返回true，否则false
	 */
	public boolean hasNodeTrack(int handle)
	{
		int handleParamValue = handle;
		boolean returnValue = hasNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}
	native private boolean hasSphereNodeTrack_ev_uint16(long pNativeObject, int handle);
	public boolean hasSphereNodeTrack(int handle)
	{
		int handleParamValue = handle;
		boolean returnValue = hasSphereNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}
	native private int getNumNumericTracks_void(long pNativeObject);
	/**
	 * 获得动画中数字动画轨迹对象的数量
	 * @param  
	 * @return 动画中数字动画轨迹对象的数量
	 */
	public int getNumNumericTracks()
	{
		int returnValue = getNumNumericTracks_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumericTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 由动画轨迹标识获得数字动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.NumericAnimationTrack getNumericTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getNumericTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
		}
		return __returnValue;
	}
	native private boolean hasNumericTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 判断是否存在与动画轨迹标识对应的节点动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 存在返回true，否则false
	 */
	public boolean hasNumericTrack(int handle)
	{
		int handleParamValue = handle;
		boolean returnValue = hasNumericTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}
	native private int getNumVertexTracks_void(long pNativeObject);
	/**
	 * 获得动画中顶点动画轨迹对象的数量
	 * @param  
	 * @return 动画中顶点动画轨迹对象的数量
	 */
	public int getNumVertexTracks()
	{
		int returnValue = getNumVertexTracks_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 由动画轨迹标识获得顶点动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 顶点动画轨迹指针
	 */
	public com.earthview.world.graphic.VertexAnimationTrack getVertexTrack(int handle)
	{
		int handleParamValue = handle;
		long returnValue = getVertexTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
		}
		return __returnValue;
	}
	native private boolean hasVertexTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 判断是否存在与动画轨迹标识对应的顶点动画轨迹
	 * @param handle 动画轨迹标识
	 * @return 存在返回true，否则false
	 */
	public boolean hasVertexTrack(int handle)
	{
		int handleParamValue = handle;
		boolean returnValue = hasVertexTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
		return returnValue;
	}
	native private void destroyNodeTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 销毁节点动画轨迹
	 * @param handle 动画轨迹标识
	 */
	public void destroyNodeTrack(int handle)
	{
		int handleParamValue = handle;
		destroyNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
	}
	native private void destroySphereNodeTrack_ev_uint16(long pNativeObject, int handle);
	public void destroySphereNodeTrack(int handle)
	{
		int handleParamValue = handle;
		destroySphereNodeTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
	}
	native private void destroyNumericTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 销毁数字动画轨迹
	 * @param handle 动画轨迹标识
	 */
	public void destroyNumericTrack(int handle)
	{
		int handleParamValue = handle;
		destroyNumericTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
	}
	native private void destroyVertexTrack_ev_uint16(long pNativeObject, int handle);
	/**
	 * 销毁顶点动画轨迹
	 * @param handle 动画轨迹标识
	 */
	public void destroyVertexTrack(int handle)
	{
		int handleParamValue = handle;
		destroyVertexTrack_ev_uint16(this.nativeObject.pointer, handleParamValue);
	}
	native private void destroyAllTracks_void(long pNativeObject);
	/**
	 * 销毁所有动画轨迹
	 * @param  
	 */
	public void destroyAllTracks()
	{
		destroyAllTracks_void(this.nativeObject.pointer);
	}
	native private void destroyAllNodeTracks_void(long pNativeObject);
	/**
	 * 销毁所有节点动画轨迹
	 * @param  
	 */
	public void destroyAllNodeTracks()
	{
		destroyAllNodeTracks_void(this.nativeObject.pointer);
	}
	native private void destroyAllSphereNodeTracks_void(long pNativeObject);
	public void destroyAllSphereNodeTracks()
	{
		destroyAllSphereNodeTracks_void(this.nativeObject.pointer);
	}
	native private void destroyAllNumericTracks_void(long pNativeObject);
	/**
	 * 销毁所有数字动画轨迹
	 * @param  
	 */
	public void destroyAllNumericTracks()
	{
		destroyAllNumericTracks_void(this.nativeObject.pointer);
	}
	native private void destroyAllVertexTracks_void(long pNativeObject);
	/**
	 * 销毁所有顶点动画轨迹
	 * @param  
	 */
	public void destroyAllVertexTracks()
	{
		destroyAllVertexTracks_void(this.nativeObject.pointer);
	}
	native private void apply_Real_Real_Real(long pNativeObject, double timePos, double weight, double scale);
	/**
	 * 使当前时间点的动画轨迹对其控制的对象产生作用
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param scale 动画大小变换比例
	 */
	public void apply(double timePos, double weight, double scale)
	{
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_Real_Real_Real(this.nativeObject.pointer, timePosParamValue, weightParamValue, scaleParamValue);
	}
	native private void apply_Real_Real(long pNativeObject, double timePos, double weight);
	/**
	 * 使当前时间点的动画轨迹对其控制的对象产生作用，动画大小变换比例1.0
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void apply(double timePos, double weight)
	{
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		apply_Real_Real(this.nativeObject.pointer, timePosParamValue, weightParamValue);
	}
	native private void apply_Real(long pNativeObject, double timePos);
	/**
	 * 使当前时间点的动画轨迹对其控制的对象产生作用，当前权重1.0，动画大小变换比例1.0
	 * @param timePos 当前时间点
	 */
	public void apply(double timePos)
	{
		double timePosParamValue = timePos;
		apply_Real(this.nativeObject.pointer, timePosParamValue);
	}
	native private void applyToNode_CNode_Real_Real_Real(long pNativeObject, long node, double timePos, double weight, double scale);
	/**
	 * 使当前时间点的动画轨迹对其控制的当前节点对象产生作用
	 * @param node 节点指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param scale 动画大小变换比例
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, double timePos, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode_CNode_Real_Real_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToNode_CNode_Real_Real(long pNativeObject, long node, double timePos, double weight);
	/**
	 * 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，动画大小变换比例1.0
	 * @param node 节点指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, double timePos, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		applyToNode_CNode_Real_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue, weightParamValue);
	}
	native private void applyToNode_CNode_Real(long pNativeObject, long node, double timePos);
	/**
	 * 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，当前权重1.0，动画大小变换比例1.0
	 * @param node 节点指针
	 * @param timePos 当前时间点
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, double timePos)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		applyToNode_CNode_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue);
	}
	native private void applyToSphereNode_CNode_Real_Real_Real(long pNativeObject, long node, double timePos, double weight, double scale);
	public void applyToSphereNode(com.earthview.world.graphic.Node node, double timePos, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToSphereNode_CNode_Real_Real_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToSphereNode_CNode_Real_Real(long pNativeObject, long node, double timePos, double weight);
	/**
	 * 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，动画大小变换比例1.0
	 * @param node 节点指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void applyToSphereNode(com.earthview.world.graphic.Node node, double timePos, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		applyToSphereNode_CNode_Real_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue, weightParamValue);
	}
	native private void applyToSphereNode_CNode_Real(long pNativeObject, long node, double timePos);
	/**
	 * 使当前时间点的动画轨迹对其控制的当前节点对象产生作用，当前权重1.0，动画大小变换比例1.0
	 * @param node 节点指针
	 * @param timePos 当前时间点
	 */
	public void applyToSphereNode(com.earthview.world.graphic.Node node, double timePos)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		double timePosParamValue = timePos;
		applyToSphereNode_CNode_Real(this.nativeObject.pointer, nodeParamValue, timePosParamValue);
	}
	native private void apply_CSkeleton_Real_Real_Real(long pNativeObject, long skeleton, double timePos, double weight, double scale);
	/**
	 * 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用
	 * @param skeleton 骨骼数据指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param scale 动画大小变换比例
	 */
	public void apply(com.earthview.world.graphic.Skeleton skeleton, double timePos, double weight, double scale)
	{
		long skeletonParamValue = (skeleton == null ? 0L : skeleton.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_CSkeleton_Real_Real_Real(this.nativeObject.pointer, skeletonParamValue, timePosParamValue, weightParamValue, scaleParamValue);
	}
	native private void apply_CSkeleton_Real_Real(long pNativeObject, long skeleton, double timePos, double weight);
	/**
	 * 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用，动画大小变换比例1.0
	 * @param skeleton 骨骼数据指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void apply(com.earthview.world.graphic.Skeleton skeleton, double timePos, double weight)
	{
		long skeletonParamValue = (skeleton == null ? 0L : skeleton.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		apply_CSkeleton_Real_Real(this.nativeObject.pointer, skeletonParamValue, timePosParamValue, weightParamValue);
	}
	native private void apply_CSkeleton_Real(long pNativeObject, long skeleton, double timePos);
	/**
	 * 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用，当前权重1.0，动画大小变换比例1.0
	 * @param skeleton 骨骼数据指针
	 * @param timePos 当前时间点
	 */
	public void apply(com.earthview.world.graphic.Skeleton skeleton, double timePos)
	{
		long skeletonParamValue = (skeleton == null ? 0L : skeleton.nativeObject.pointer);
		double timePosParamValue = timePos;
		apply_CSkeleton_Real(this.nativeObject.pointer, skeletonParamValue, timePosParamValue);
	}
	native private void apply_CSkeleton_Real_ev_real32_BoneBlendMask_Real(long pNativeObject, long skeleton, double timePos, float weight, long blendMask, double scale);
	/**
	 * 使当前时间点的动画轨迹对其控制的与给定的骨骼对应的节点对象产生作用
	 * @param skeleton 骨骼数据指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param blendMask 动画混合权重集合
	 * @param scale 动画大小变换比例
	 */
	public void apply(com.earthview.world.graphic.Skeleton skeleton, double timePos, float weight, com.earthview.world.graphic.AnimationState.BoneBlendMask blendMask, double scale)
	{
		long skeletonParamValue = (skeleton == null ? 0L : skeleton.nativeObject.pointer);
		double timePosParamValue = timePos;
		float weightParamValue = weight;
		long blendMaskParamValue = (blendMask == null ? 0L : blendMask.nativeObject.pointer);
		double scaleParamValue = scale;
		apply_CSkeleton_Real_ev_real32_BoneBlendMask_Real(this.nativeObject.pointer, skeletonParamValue, timePosParamValue, weightParamValue, blendMaskParamValue, scaleParamValue);
	}
	native private void apply_CEntity_Real_Real_ev_bool_ev_bool(long pNativeObject, long entity, double timePos, double weight, boolean software, boolean hardware);
	/**
	 * 使当前时间点的动画轨迹对其控制的与给定的实体对应的顶点产生作用
	 * @param entity 实体对象指针
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param software 是否应用软件变形顶点数据
	 * @param hardware 是否应用硬件变形顶点数据
	 */
	public void apply(com.earthview.world.graphic.Entity entity, double timePos, double weight, boolean software, boolean hardware)
	{
		long entityParamValue = (entity == null ? 0L : entity.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		boolean softwareParamValue = software;
		boolean hardwareParamValue = hardware;
		apply_CEntity_Real_Real_ev_bool_ev_bool(this.nativeObject.pointer, entityParamValue, timePosParamValue, weightParamValue, softwareParamValue, hardwareParamValue);
	}
	native private void applyToAnimable_AnimableValuePtr_Real_Real_Real(long pNativeObject, long anim, double timePos, double weight, double scale);
	/**
	 * 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用
	 * @param anim 可动画的值
	 * @param timePos 当前时间点
	 * @param weight 权重
	 * @param scale 动画大小变换比例
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, double timePos, double weight, double scale)
	{
		long animParamValue = anim.nativeObject.pointer;
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToAnimable_AnimableValuePtr_Real_Real_Real(this.nativeObject.pointer, animParamValue, timePosParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToAnimable_AnimableValuePtr_Real_Real(long pNativeObject, long anim, double timePos, double weight);
	/**
	 * 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用，动画大小变换比例1.0
	 * @param anim 可动画的值
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, double timePos, double weight)
	{
		long animParamValue = anim.nativeObject.pointer;
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		applyToAnimable_AnimableValuePtr_Real_Real(this.nativeObject.pointer, animParamValue, timePosParamValue, weightParamValue);
	}
	native private void applyToAnimable_AnimableValuePtr_Real(long pNativeObject, long anim, double timePos);
	/**
	 * 使当前时间点的数字动画轨迹对其控制的可动画的值产生作用，当前权重1.0，动画大小变换比例1.0
	 * @param anim 可动画的值
	 * @param timePos 当前时间点
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, double timePos)
	{
		long animParamValue = anim.nativeObject.pointer;
		double timePosParamValue = timePos;
		applyToAnimable_AnimableValuePtr_Real(this.nativeObject.pointer, animParamValue, timePosParamValue);
	}
	native private void applyToVertexData_CVertexData_Real_Real(long pNativeObject, long data, double timePos, double weight);
	/**
	 * 使当前时间点的顶点动画轨迹对其控制的顶点数据产生作用
	 * @param data 顶点数据
	 * @param timePos 当前时间点
	 * @param weight 权重
	 */
	public void applyToVertexData(com.earthview.world.graphic.VertexData data, double timePos, double weight)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		double timePosParamValue = timePos;
		double weightParamValue = weight;
		applyToVertexData_CVertexData_Real_Real(this.nativeObject.pointer, dataParamValue, timePosParamValue, weightParamValue);
	}
	native private void applyToVertexData_CVertexData_Real(long pNativeObject, long data, double timePos);
	/**
	 * 使当前时间点的顶点动画轨迹对其控制的顶点数据产生作用
	 * @param data 顶点数据
	 * @param timePos 当前时间点
	 */
	public void applyToVertexData(com.earthview.world.graphic.VertexData data, double timePos)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		double timePosParamValue = timePos;
		applyToVertexData_CVertexData_Real(this.nativeObject.pointer, dataParamValue, timePosParamValue);
	}
	native private void setInterpolationMode_InterpolationMode(long pNativeObject, int im);
	/**
	 * 设置关键帧插值方式
	 * @param im 动画插值方式
	 */
	public void setInterpolationMode(com.earthview.world.graphic.Animation.InterpolationMode im)
	{
		int imParamValue = im.getValue();
		setInterpolationMode_InterpolationMode(this.nativeObject.pointer, imParamValue);
	}
	native private int getInterpolationMode_void(long pNativeObject);
	/**
	 * 获得关键帧插值方式
	 * @param  
	 * @return 当前动画插值方式
	 */
	public com.earthview.world.graphic.Animation.InterpolationMode getInterpolationMode()
	{
		int returnValue = getInterpolationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Animation.InterpolationMode.toEnum(returnValue);
	}
	native private void setRotationInterpolationMode_RotationInterpolationMode(long pNativeObject, int im);
	/**
	 * 设置旋转插值方式
	 * @param im 旋转插值方式
	 */
	public void setRotationInterpolationMode(com.earthview.world.graphic.Animation.RotationInterpolationMode im)
	{
		int imParamValue = im.getValue();
		setRotationInterpolationMode_RotationInterpolationMode(this.nativeObject.pointer, imParamValue);
	}
	native private int getRotationInterpolationMode_void(long pNativeObject);
	/**
	 * 获得旋转插值方式
	 * @param  
	 * @return 旋转插值方式
	 */
	public com.earthview.world.graphic.Animation.RotationInterpolationMode getRotationInterpolationMode()
	{
		int returnValue = getRotationInterpolationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Animation.RotationInterpolationMode.toEnum(returnValue);
	}
	native private static void setDefaultInterpolationMode_InterpolationMode(int im);
	/**
	 * 设置动画关键帧默认插值方式
	 * @param im 默认插值方式
	 */
	public static void setDefaultInterpolationMode(com.earthview.world.graphic.Animation.InterpolationMode im)
	{
		int imParamValue = im.getValue();
		setDefaultInterpolationMode_InterpolationMode(imParamValue);
	}
	native private static int getDefaultInterpolationMode_void();
	/**
	 * 活得动画关键帧默认插值方式
	 * @param  
	 * @return 默认插值方式
	 */
	public static com.earthview.world.graphic.Animation.InterpolationMode getDefaultInterpolationMode()
	{
		int returnValue = getDefaultInterpolationMode_void();
		return com.earthview.world.graphic.Animation.InterpolationMode.toEnum(returnValue);
	}
	native private static void setDefaultRotationInterpolationMode_RotationInterpolationMode(int im);
	/**
	 * 设置默认旋转插值方式
	 * @param im 默认旋转插值方式
	 */
	public static void setDefaultRotationInterpolationMode(com.earthview.world.graphic.Animation.RotationInterpolationMode im)
	{
		int imParamValue = im.getValue();
		setDefaultRotationInterpolationMode_RotationInterpolationMode(imParamValue);
	}
	native private static int getDefaultRotationInterpolationMode_void();
	/**
	 * 获得默认旋转插值方式
	 * @param  
	 * @return 默认旋转插值方式
	 */
	public static com.earthview.world.graphic.Animation.RotationInterpolationMode getDefaultRotationInterpolationMode()
	{
		int returnValue = getDefaultRotationInterpolationMode_void();
		return com.earthview.world.graphic.Animation.RotationInterpolationMode.toEnum(returnValue);
	}
	/**
	 * 节点动画轨迹集合类管理节点动画轨迹集合
	 */
	public static class NodeTrackList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NodeTrackList", new NodeTrackListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public NodeTrackList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NodeTrackList", null);
		}

		native private boolean push_ev_uint16_CNodeAnimationTrack(long pNativeObject, int key, long ref_val);
		/**
		 * 增加节点动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CNodeAnimationTrack(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public NodeTrackList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeTrackList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeTrackList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeTrackList obj = null;
 			if(baseObj instanceof NodeTrackList)
			{
				obj = (NodeTrackList)baseObj;
			} else {
				obj = new NodeTrackList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeTrackList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeTrackListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeTrackList emptyInstance = new NodeTrackList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点动画轨迹集合类管理节点动画轨迹集合
	 */
	public static class SphereNodeTrackList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::SphereNodeTrackList", new SphereNodeTrackListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public SphereNodeTrackList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SphereNodeTrackList", null);
		}

		native private boolean push_ev_uint16_CSphereNodeAnimationTrack(long pNativeObject, int key, long ref_val);
		/**
		 * 增加节点动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CSphereNodeAnimationTrack(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public SphereNodeTrackList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SphereNodeTrackList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SphereNodeTrackList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SphereNodeTrackList obj = null;
 			if(baseObj instanceof SphereNodeTrackList)
			{
				obj = (SphereNodeTrackList)baseObj;
			} else {
				obj = new SphereNodeTrackList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SphereNodeTrackList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SphereNodeTrackListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SphereNodeTrackList emptyInstance = new SphereNodeTrackList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点动画轨迹键值对结构管理节点动画轨迹键值
	 */
	public static class NodeTrackPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NodeTrackPair", new NodeTrackPairClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public NodeTrackPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NodeTrackPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.NodeAnimationTrack get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
			}
			return __returnValue;
		}
		
		native private void set_second_CNodeAnimationTrack (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.NodeAnimationTrack second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CNodeAnimationTrack(this.nativeObject.pointer, secondParamValue);
		}
		
		public NodeTrackPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeTrackPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeTrackPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeTrackPair obj = null;
 			if(baseObj instanceof NodeTrackPair)
			{
				obj = (NodeTrackPair)baseObj;
			} else {
				obj = new NodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeTrackPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeTrackPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeTrackPair emptyInstance = new NodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SphereNodeTrackPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::SphereNodeTrackPair", new SphereNodeTrackPairClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public SphereNodeTrackPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SphereNodeTrackPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.SphereNodeAnimationTrack get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
			}
			return __returnValue;
		}
		
		native private void set_second_CSphereNodeAnimationTrack (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.SphereNodeAnimationTrack second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CSphereNodeAnimationTrack(this.nativeObject.pointer, secondParamValue);
		}
		
		public SphereNodeTrackPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SphereNodeTrackPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SphereNodeTrackPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SphereNodeTrackPair obj = null;
 			if(baseObj instanceof SphereNodeTrackPair)
			{
				obj = (SphereNodeTrackPair)baseObj;
			} else {
				obj = new SphereNodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SphereNodeTrackPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SphereNodeTrackPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SphereNodeTrackPair emptyInstance = new SphereNodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点动画轨迹集合迭代器管理节点动画轨迹集合迭代器操作
	 */
	public static class NodeTrackIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NodeTrackIterator", new NodeTrackIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public NodeTrackIterator(com.earthview.world.graphic.Animation.NodeTrackIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("NodeTrackIterator", list);
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public NodeTrackIterator(com.earthview.world.graphic.Animation.NodeTrackList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("NodeTrackIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.NodeAnimationTrack nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.NodeAnimationTrack next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NodeAnimationTrack __returnValue = new com.earthview.world.graphic.NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNodeAnimationTrack");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Animation.NodeTrackPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.NodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NodeTrackPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Animation.NodeTrackPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.NodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NodeTrackPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Animation.NodeTrackPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.NodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NodeTrackPair");
			}
			return __returnValue;
		}
		public NodeTrackIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NodeTrackIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NodeTrackIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NodeTrackIterator obj = null;
 			if(baseObj instanceof NodeTrackIterator)
			{
				obj = (NodeTrackIterator)baseObj;
			} else {
				obj = new NodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NodeTrackIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NodeTrackIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NodeTrackIterator emptyInstance = new NodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 节点动画轨迹集合迭代器管理节点动画轨迹集合迭代器操作
	 */
	public static class SphereNodeTrackIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::SphereNodeTrackIterator", new SphereNodeTrackIteratorClassFactory());
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public SphereNodeTrackIterator(com.earthview.world.graphic.Animation.SphereNodeTrackIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("SphereNodeTrackIterator", list);
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public SphereNodeTrackIterator(com.earthview.world.graphic.Animation.SphereNodeTrackList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("SphereNodeTrackIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.SphereNodeAnimationTrack nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SphereNodeAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.SphereNodeAnimationTrack next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Animation.SphereNodeTrackPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.SphereNodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.SphereNodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "SphereNodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.SphereNodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Animation.SphereNodeTrackPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.SphereNodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.SphereNodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "SphereNodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.SphereNodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Animation.SphereNodeTrackPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.SphereNodeTrackPair __returnValue = new com.earthview.world.graphic.Animation.SphereNodeTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "SphereNodeTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.SphereNodeTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackPair");
			}
			return __returnValue;
		}
		public SphereNodeTrackIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SphereNodeTrackIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SphereNodeTrackIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SphereNodeTrackIterator obj = null;
 			if(baseObj instanceof SphereNodeTrackIterator)
			{
				obj = (SphereNodeTrackIterator)baseObj;
			} else {
				obj = new SphereNodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SphereNodeTrackIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SphereNodeTrackIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SphereNodeTrackIterator emptyInstance = new SphereNodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 数字动画轨迹集合类管理数字动画轨迹集合操作
	 */
	public static class NumericTrackList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NumericTrackList", new NumericTrackListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public NumericTrackList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NumericTrackList", null);
		}

		native private boolean push_ev_uint16_CNumericAnimationTrack(long pNativeObject, int key, long ref_val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CNumericAnimationTrack(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public NumericTrackList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NumericTrackList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NumericTrackList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NumericTrackList obj = null;
 			if(baseObj instanceof NumericTrackList)
			{
				obj = (NumericTrackList)baseObj;
			} else {
				obj = new NumericTrackList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NumericTrackList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NumericTrackListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NumericTrackList emptyInstance = new NumericTrackList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 数字动画轨迹键值对结构管理数字动画轨迹键值
	 */
	public static class NumericTrackPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NumericTrackPair", new NumericTrackPairClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public NumericTrackPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("NumericTrackPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.NumericAnimationTrack get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
			}
			return __returnValue;
		}
		
		native private void set_second_CNumericAnimationTrack (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.NumericAnimationTrack second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CNumericAnimationTrack(this.nativeObject.pointer, secondParamValue);
		}
		
		public NumericTrackPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NumericTrackPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NumericTrackPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NumericTrackPair obj = null;
 			if(baseObj instanceof NumericTrackPair)
			{
				obj = (NumericTrackPair)baseObj;
			} else {
				obj = new NumericTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NumericTrackPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NumericTrackPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NumericTrackPair emptyInstance = new NumericTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 数字动画轨迹集合迭代器管理数字动画轨迹集合迭代器操作
	 */
	public static class NumericTrackIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::NumericTrackIterator", new NumericTrackIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public NumericTrackIterator(com.earthview.world.graphic.Animation.NumericTrackList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("NumericTrackIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public NumericTrackIterator(com.earthview.world.graphic.Animation.NumericTrackIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("NumericTrackIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.NumericAnimationTrack nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.NumericAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.NumericAnimationTrack next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.NumericAnimationTrack __returnValue = new com.earthview.world.graphic.NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CNumericAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.NumericAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNumericAnimationTrack");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Animation.NumericTrackPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NumericTrackPair __returnValue = new com.earthview.world.graphic.Animation.NumericTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NumericTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NumericTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NumericTrackPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Animation.NumericTrackPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NumericTrackPair __returnValue = new com.earthview.world.graphic.Animation.NumericTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NumericTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NumericTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NumericTrackPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Animation.NumericTrackPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.NumericTrackPair __returnValue = new com.earthview.world.graphic.Animation.NumericTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "NumericTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.NumericTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "NumericTrackPair");
			}
			return __returnValue;
		}
		public NumericTrackIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public NumericTrackIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static NumericTrackIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			NumericTrackIterator obj = null;
 			if(baseObj instanceof NumericTrackIterator)
			{
				obj = (NumericTrackIterator)baseObj;
			} else {
				obj = new NumericTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "NumericTrackIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class NumericTrackIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			NumericTrackIterator emptyInstance = new NumericTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 顶点动画轨迹集合类管理顶点动画轨迹集合
	 */
	public static class VertexTrackList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::VertexTrackList", new VertexTrackListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public VertexTrackList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexTrackList", null);
		}

		native private boolean push_ev_uint16_CVertexAnimationTrack(long pNativeObject, int key, long ref_val);
		/**
		 * 增加动画集合元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(int key, NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> ref_val)
		{
			int keyParamValue = key;
			long ref_valParamValue = ref_val.nativeObject.pointer;
			boolean returnValue = push_ev_uint16_CVertexAnimationTrack(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_uint16(long pNativeObject, int key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public VertexTrackList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexTrackList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexTrackList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexTrackList obj = null;
 			if(baseObj instanceof VertexTrackList)
			{
				obj = (VertexTrackList)baseObj;
			} else {
				obj = new VertexTrackList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexTrackList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexTrackListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexTrackList emptyInstance = new VertexTrackList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 顶点动画轨迹键值对结构管理顶点动画轨迹键值
	 */
	public static class VertexAnimationTrackPair extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::CVertexAnimationTrackPair", new VertexAnimationTrackPairClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public VertexAnimationTrackPair() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CVertexAnimationTrackPair", null);
		}

		native private int get_first_void(long pNativeObject);
		public int get_first()
		{
			int jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_uint16 (long pNativeObject, int value);
		public void set_first(int first)
		{
			int firstParamValue = first;
			
			set_first_ev_uint16(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public com.earthview.world.graphic.VertexAnimationTrack get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
			}
			return __returnValue;
		}
		
		native private void set_second_CVertexAnimationTrack (long pNativeObject, long value);
		public void set_second(com.earthview.world.graphic.VertexAnimationTrack second)
		{
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			
			set_second_CVertexAnimationTrack(this.nativeObject.pointer, secondParamValue);
		}
		
		public VertexAnimationTrackPair(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexAnimationTrackPair(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexAnimationTrackPair fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexAnimationTrackPair obj = null;
 			if(baseObj instanceof VertexAnimationTrackPair)
			{
				obj = (VertexAnimationTrackPair)baseObj;
			} else {
				obj = new VertexAnimationTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CVertexAnimationTrackPair");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexAnimationTrackPairClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexAnimationTrackPair emptyInstance = new VertexAnimationTrackPair(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 顶点动画轨迹集合迭代器管理顶点动画轨迹集合迭代器操作
	 */
	public static class VertexTrackIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::VertexTrackIterator", new VertexTrackIteratorClassFactory());
		}

		/**
		 * 构造函数
		 * @param lst 迭代器对应集合
		 */
		public VertexTrackIterator(com.earthview.world.graphic.Animation.VertexTrackList lst) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer lstPtr = new BasePointer(lst);
			list.add("lst", lstPtr.get());
			Create("VertexTrackIterator", list);
		}

		/**
		 * 复制构造函数
		 * @param other 其它迭代器
		 */
		public VertexTrackIterator(com.earthview.world.graphic.Animation.VertexTrackIterator other) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer otherPtr = new BasePointer(other);
			list.add("other", otherPtr.get());
			Create("VertexTrackIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		/**
		 * 判断迭代器是否到达容器末尾
		 * @param  
		 * @return 是返回true，否则false
		 */
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		/**
		 * 迭代器位置后移
		 * @param  
		 */
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private int nextKey_void(long pNativeObject);
		/**
		 * 返回容器当前的键
		 * @param  
		 * @return 键
		 */
		public int nextKey()
		{
			int returnValue = nextKey_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long nextValue_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.VertexAnimationTrack nextValue()
		{
			long returnValue = nextValue_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
			}
			return __returnValue;
		}
		native private long nextValuePtr_void(long pNativeObject);
		/**
		 * 返回容器当前的值指针
		 * @param  
		 * @return 值地址
		 */
		public NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> nextValuePtr()
		{
			long returnValue = nextValuePtr_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.VertexAnimationTrack>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		/**
		 * 返回容器当前的值
		 * @param  
		 * @return 值
		 */
		public com.earthview.world.graphic.VertexAnimationTrack next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.VertexAnimationTrack __returnValue = new com.earthview.world.graphic.VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrack");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexAnimationTrack)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrack");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		/**
		 * 返回容器首键值对
		 * @param  
		 * @return 首键值对
		 */
		public com.earthview.world.graphic.Animation.VertexAnimationTrackPair getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.VertexAnimationTrackPair __returnValue = new com.earthview.world.graphic.Animation.VertexAnimationTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.VertexAnimationTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrackPair");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		/**
		 * 返回容器尾键值对
		 * @param  
		 * @return 尾键值对
		 */
		public com.earthview.world.graphic.Animation.VertexAnimationTrackPair getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.VertexAnimationTrackPair __returnValue = new com.earthview.world.graphic.Animation.VertexAnimationTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.VertexAnimationTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrackPair");
			}
			return __returnValue;
		}
		native private long getCurrent_void(long pNativeObject);
		/**
		 * 返回容器当前键值对
		 * @param  
		 * @return 当前键值对
		 */
		public com.earthview.world.graphic.Animation.VertexAnimationTrackPair getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Animation.VertexAnimationTrackPair __returnValue = new com.earthview.world.graphic.Animation.VertexAnimationTrackPair(CreatedWhenConstruct.CWC_NotToCreate, "CVertexAnimationTrackPair");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Animation.VertexAnimationTrackPair)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVertexAnimationTrackPair");
			}
			return __returnValue;
		}
		public VertexTrackIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexTrackIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexTrackIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexTrackIterator obj = null;
 			if(baseObj instanceof VertexTrackIterator)
			{
				obj = (VertexTrackIterator)baseObj;
			} else {
				obj = new VertexTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexTrackIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexTrackIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexTrackIterator emptyInstance = new VertexTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long _getNodeTrackList_void(long pNativeObject);
	/**
	 * 获得节点动画轨迹集合
	 * @param  
	 * @return 节点动画轨迹集合
	 */
	public com.earthview.world.graphic.Animation.NodeTrackList _getNodeTrackList()
	{
		long returnValue = _getNodeTrackList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.NodeTrackList __returnValue = new com.earthview.world.graphic.Animation.NodeTrackList(CreatedWhenConstruct.CWC_NotToCreate, "NodeTrackList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.NodeTrackList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NodeTrackList");
		}
		return __returnValue;
	}
	native private long _getSphereNodeTrackList_void(long pNativeObject);
	public com.earthview.world.graphic.Animation.SphereNodeTrackList _getSphereNodeTrackList()
	{
		long returnValue = _getSphereNodeTrackList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.SphereNodeTrackList __returnValue = new com.earthview.world.graphic.Animation.SphereNodeTrackList(CreatedWhenConstruct.CWC_NotToCreate, "SphereNodeTrackList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.SphereNodeTrackList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackList");
		}
		return __returnValue;
	}
	native private long getNodeTrackIterator_void(long pNativeObject);
	/**
	 * 获得节点动画轨迹集合迭代器
	 * @param  
	 * @return 节点动画轨迹集合迭代器
	 */
	public com.earthview.world.graphic.Animation.NodeTrackIterator getNodeTrackIterator()
	{
		long returnValue = getNodeTrackIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.NodeTrackIterator __returnValue = new com.earthview.world.graphic.Animation.NodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "NodeTrackIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.NodeTrackIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "NodeTrackIterator");
		}
		return __returnValue;
	}
	native private long getSphereNodeTrackIterator_void(long pNativeObject);
	public com.earthview.world.graphic.Animation.SphereNodeTrackIterator getSphereNodeTrackIterator()
	{
		long returnValue = getSphereNodeTrackIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.SphereNodeTrackIterator __returnValue = new com.earthview.world.graphic.Animation.SphereNodeTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.SphereNodeTrackIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SphereNodeTrackIterator");
		}
		return __returnValue;
	}
	native private long _getNumericTrackList_void(long pNativeObject);
	/**
	 * 获得数字动画轨迹集合
	 * @param  
	 * @return 数字动画轨迹集合
	 */
	public com.earthview.world.graphic.Animation.NumericTrackList _getNumericTrackList()
	{
		long returnValue = _getNumericTrackList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.NumericTrackList __returnValue = new com.earthview.world.graphic.Animation.NumericTrackList(CreatedWhenConstruct.CWC_NotToCreate, "NumericTrackList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.NumericTrackList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NumericTrackList");
		}
		return __returnValue;
	}
	native private long getNumericTrackIterator_void(long pNativeObject);
	/**
	 * 获得数字动画轨迹集合迭代器
	 * @param  
	 * @return 数字动画轨迹集合迭代器
	 */
	public com.earthview.world.graphic.Animation.NumericTrackIterator getNumericTrackIterator()
	{
		long returnValue = getNumericTrackIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.NumericTrackIterator __returnValue = new com.earthview.world.graphic.Animation.NumericTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "NumericTrackIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.NumericTrackIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "NumericTrackIterator");
		}
		return __returnValue;
	}
	native private long _getVertexTrackList_void(long pNativeObject);
	/**
	 * 获得顶点动画轨迹集合
	 * @param  
	 * @return 顶点动画轨迹集合
	 */
	public com.earthview.world.graphic.Animation.VertexTrackList _getVertexTrackList()
	{
		long returnValue = _getVertexTrackList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.VertexTrackList __returnValue = new com.earthview.world.graphic.Animation.VertexTrackList(CreatedWhenConstruct.CWC_NotToCreate, "VertexTrackList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.VertexTrackList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexTrackList");
		}
		return __returnValue;
	}
	native private long getVertexTrackIterator_void(long pNativeObject);
	/**
	 * 获得顶点动画轨迹集合迭代器
	 * @param  
	 * @return 顶点动画轨迹集合迭代器
	 */
	public com.earthview.world.graphic.Animation.VertexTrackIterator getVertexTrackIterator()
	{
		long returnValue = getVertexTrackIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Animation.VertexTrackIterator __returnValue = new com.earthview.world.graphic.Animation.VertexTrackIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexTrackIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation.VertexTrackIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexTrackIterator");
		}
		return __returnValue;
	}
	native private void optimise_ev_bool(long pNativeObject, boolean discardIdentityNodeTracks);
	/**
	 * 优化动画
	 * @param discardIdentityNodeTracks 是否删除没有变化的节点轨迹
	 */
	public void optimise(boolean discardIdentityNodeTracks)
	{
		boolean discardIdentityNodeTracksParamValue = discardIdentityNodeTracks;
		optimise_ev_bool(this.nativeObject.pointer, discardIdentityNodeTracksParamValue);
	}
	native private void optimise_void(long pNativeObject);
	/**
	 * 优化动画，删除没有变化的节点轨迹
	 * @param  
	 */
	public void optimise()
	{
		optimise_void(this.nativeObject.pointer);
	}
	///typedef set<ev_uint16> EarthView::World::Graphic::CAnimation::TrackHandleList;
	/// <summary>
	/// 动画轨迹Handle标识集合类
	/// 管理动画轨迹Handle标识集合
	/// </summary>
	public static class TrackHandleList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimation::TrackHandleList", new TrackHandleListClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public TrackHandleList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TrackHandleList", null);
		}

		native private void insert_ev_uint16(long pNativeObject, int val);
		/**
		 * 集合插入元素
		 * @param val Handle标识
		 * @return 插入后的键值对
		 */
		public void insert(int val)
		{
			int valParamValue = val;
			insert_ev_uint16(this.nativeObject.pointer, valParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回集合的大小
		 * @param  
		 * @return 集合的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long erase_ev_uint16(long pNativeObject, int key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public long erase(int key)
		{
			int keyParamValue = key;
			long returnValue = erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断集合是否为空
		 * @param  
		 * @return 集合为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空集合
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private long count_ev_uint16(long pNativeObject, int key);
		/**
		 * 返回值元素的个数
		 * @param key 键
		 * @return 值元素的个数
		 */
		public long count(int key)
		{
			int keyParamValue = key;
			long returnValue = count_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long max_size_void(long pNativeObject);
		/**
		 * 返回集合能容纳的元素的最大限值
		 * @param  
		 * @return 集合能容纳的元素的最大限值
		 */
		public long max_size()
		{
			long returnValue = max_size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_TrackHandleList(long pNativeObject, long other);
		/**
		 * 交换两个集合变量
		 * @param other 其它集合
		 */
		public void swap(com.earthview.world.graphic.Animation.TrackHandleList other)
		{
			long otherParamValue = other.nativeObject.pointer;
			swap_TrackHandleList(this.nativeObject.pointer, otherParamValue);
		}
		public TrackHandleList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TrackHandleList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TrackHandleList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TrackHandleList obj = null;
 			if(baseObj instanceof TrackHandleList)
			{
				obj = (TrackHandleList)baseObj;
			} else {
				obj = new TrackHandleList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TrackHandleList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TrackHandleListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TrackHandleList emptyInstance = new TrackHandleList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void _collectIdentityNodeTracks_TrackHandleList(long pNativeObject, long tracks);
	/**
	 * 搜集没有变化的节点轨迹
	 * @param tracks 动画轨迹Handle标识集合对象
	 */
	public void _collectIdentityNodeTracks(com.earthview.world.graphic.Animation.TrackHandleList tracks)
	{
		long tracksParamValue = tracks.nativeObject.pointer;
		_collectIdentityNodeTracks_TrackHandleList(this.nativeObject.pointer, tracksParamValue);
	}
	native private void _destroyNodeTracks_TrackHandleList(long pNativeObject, long tracks);
	/**
	 * 删除节点轨迹
	 * @param tracks 要删除的动画轨迹Handle标识集合对象
	 */
	public void _destroyNodeTracks(com.earthview.world.graphic.Animation.TrackHandleList tracks)
	{
		long tracksParamValue = tracks.nativeObject.pointer;
		_destroyNodeTracks_TrackHandleList(this.nativeObject.pointer, tracksParamValue);
	}
	native private long ev_clone_EVString(long pNativeObject, String newName);
	/**
	 * 克隆动画
	 * @param newName 新产生的动画的名称
	 * @return 新产生的动画指针
	 */
	public com.earthview.world.graphic.Animation ev_clone(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, newNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Animation __returnValue = new com.earthview.world.graphic.Animation(CreatedWhenConstruct.CWC_NotToCreate, "CAnimation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Animation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimation");
		}
		return __returnValue;
	}
	native private void _keyFrameListChanged_void(long pNativeObject);
	/**
	 * 通知动画其关键帧列表已变化
	 * @param  
	 */
	public void _keyFrameListChanged()
	{
		_keyFrameListChanged_void(this.nativeObject.pointer);
	}
	native private long _getTimeIndex_Real(long pNativeObject, double timePos);
	/**
	 * 将动画时间点转为时间索引
	 * @param timePos 时间点
	 * @return 时间索引
	 */
	public com.earthview.world.graphic.TimeIndex _getTimeIndex(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = _getTimeIndex_Real(this.nativeObject.pointer, timePosParamValue);
		com.earthview.world.graphic.TimeIndex __returnValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTimeIndex");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TimeIndex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTimeIndex");
		}
		return __returnValue;
	}
	native private void setUseBaseKeyFrame_ev_bool_Real_EVString(long pNativeObject, boolean useBaseKeyFrame, double keyframeTime, String baseAnimName);
	public void setUseBaseKeyFrame(boolean useBaseKeyFrame, double keyframeTime, String baseAnimName)
	{
		boolean useBaseKeyFrameParamValue = useBaseKeyFrame;
		double keyframeTimeParamValue = keyframeTime;
		String baseAnimNameParamValue = baseAnimName;
		setUseBaseKeyFrame_ev_bool_Real_EVString(this.nativeObject.pointer, useBaseKeyFrameParamValue, keyframeTimeParamValue, baseAnimNameParamValue);
	}
	native private void setUseBaseKeyFrame_ev_bool_Real(long pNativeObject, boolean useBaseKeyFrame, double keyframeTime);
	public void setUseBaseKeyFrame(boolean useBaseKeyFrame, double keyframeTime)
	{
		boolean useBaseKeyFrameParamValue = useBaseKeyFrame;
		double keyframeTimeParamValue = keyframeTime;
		setUseBaseKeyFrame_ev_bool_Real(this.nativeObject.pointer, useBaseKeyFrameParamValue, keyframeTimeParamValue);
	}
	native private void setUseBaseKeyFrame_ev_bool(long pNativeObject, boolean useBaseKeyFrame);
	public void setUseBaseKeyFrame(boolean useBaseKeyFrame)
	{
		boolean useBaseKeyFrameParamValue = useBaseKeyFrame;
		setUseBaseKeyFrame_ev_bool(this.nativeObject.pointer, useBaseKeyFrameParamValue);
	}
	native private boolean getUseBaseKeyFrame_void(long pNativeObject);
	public boolean getUseBaseKeyFrame()
	{
		boolean returnValue = getUseBaseKeyFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBaseKeyFrameTime_void(long pNativeObject);
	public double getBaseKeyFrameTime()
	{
		double returnValue = getBaseKeyFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBaseKeyFrameAnimationName_void(long pNativeObject);
	public StringPointer getBaseKeyFrameAnimationName()
	{
		long returnValue = getBaseKeyFrameAnimationName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void _applyBaseKeyFrame_void(long pNativeObject);
	public void _applyBaseKeyFrame()
	{
		_applyBaseKeyFrame_void(this.nativeObject.pointer);
	}
	native private void _notifyContainer_CAnimationContainer(long pNativeObject, long ref_c);
	public void _notifyContainer(com.earthview.world.graphic.AnimationContainer ref_c)
	{
		long ref_cParamValue = (ref_c == null ? 0L : ref_c.nativeObject.pointer);
		_notifyContainer_CAnimationContainer(this.nativeObject.pointer, ref_cParamValue);
	}
	native private long getContainer_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationContainer getContainer()
	{
		long returnValue = getContainer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationContainer __returnValue = new com.earthview.world.graphic.AnimationContainer(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationContainer");
		}
		return __returnValue;
	}
	public Animation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Animation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Animation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Animation obj = null;
 		if(baseObj instanceof Animation)
		{
			obj = (Animation)baseObj;
		} else {
			obj = new Animation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
