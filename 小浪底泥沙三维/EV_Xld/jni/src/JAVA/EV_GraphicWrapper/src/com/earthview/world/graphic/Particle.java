package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 单独的粒子实例
 */
public class Particle extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticle", new ParticleClassFactory());
	}

	///粒子的类型
	public enum ParticleType implements INativeEnum<ParticleType> {
		Visual(ParticleTypeHelper.ENUM_VALUES[0]),
		Emitter(ParticleTypeHelper.ENUM_VALUES[1]);
		private int value;
		ParticleType(int i) {
			this.value = i;
		}
		public ParticleType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ParticleType toEnum(int retval) {
			if(retval == Visual.value){
				return Visual;
			}
			else if(retval == Emitter.value){
				return Emitter;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ParticleTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private boolean get_mOwnDimensions_void(long pNativeObject);
	public boolean get_mOwnDimensions()
	{
		boolean jniValue = get_mOwnDimensions_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mOwnDimensions_ev_bool (long pNativeObject, boolean value);
	public void set_mOwnDimensions(boolean mOwnDimensions)
	{
		boolean mOwnDimensionsParamValue = mOwnDimensions;
		
		set_mOwnDimensions_ev_bool(this.nativeObject.pointer, mOwnDimensionsParamValue);
	}
	
	native private double get_mWidth_void(long pNativeObject);
	public double get_mWidth()
	{
		double jniValue = get_mWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWidth_Real (long pNativeObject, double value);
	public void set_mWidth(double mWidth)
	{
		double mWidthParamValue = mWidth;
		
		set_mWidth_Real(this.nativeObject.pointer, mWidthParamValue);
	}
	
	native private double get_mHeight_void(long pNativeObject);
	public double get_mHeight()
	{
		double jniValue = get_mHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mHeight_Real (long pNativeObject, double value);
	public void set_mHeight(double mHeight)
	{
		double mHeightParamValue = mHeight;
		
		set_mHeight_Real(this.nativeObject.pointer, mHeightParamValue);
	}
	
	native private long get_mRotation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian get_mRotation()
	{
		long jniValue = get_mRotation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	
	native private void set_mRotation_CRadian (long pNativeObject, long value);
	public void set_mRotation(com.earthview.world.spatial.math.Radian mRotation)
	{
		long mRotationParamValue = mRotation.nativeObject.pointer;
		
		set_mRotation_CRadian(this.nativeObject.pointer, mRotationParamValue);
	}
	
	native private long get_position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_position()
	{
		long jniValue = get_position_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_position_CVector3 (long pNativeObject, long value);
	public void set_position(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		
		set_position_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	
	native private long get_direction_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_direction()
	{
		long jniValue = get_direction_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_direction_CVector3 (long pNativeObject, long value);
	public void set_direction(com.earthview.world.spatial.math.Vector3 direction)
	{
		long directionParamValue = direction.nativeObject.pointer;
		
		set_direction_CVector3(this.nativeObject.pointer, directionParamValue);
	}
	
	native private long get_colour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_colour()
	{
		long jniValue = get_colour_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_colour_CColourValue (long pNativeObject, long value);
	public void set_colour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		
		set_colour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	
	native private double get_timeToLive_void(long pNativeObject);
	public double get_timeToLive()
	{
		double jniValue = get_timeToLive_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_timeToLive_Real (long pNativeObject, double value);
	public void set_timeToLive(double timeToLive)
	{
		double timeToLiveParamValue = timeToLive;
		
		set_timeToLive_Real(this.nativeObject.pointer, timeToLiveParamValue);
	}
	
	native private double get_totalTimeToLive_void(long pNativeObject);
	public double get_totalTimeToLive()
	{
		double jniValue = get_totalTimeToLive_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_totalTimeToLive_Real (long pNativeObject, double value);
	public void set_totalTimeToLive(double totalTimeToLive)
	{
		double totalTimeToLiveParamValue = totalTimeToLive;
		
		set_totalTimeToLive_Real(this.nativeObject.pointer, totalTimeToLiveParamValue);
	}
	
	native private long get_rotationSpeed_void(long pNativeObject);
	public com.earthview.world.spatial.math.Radian get_rotationSpeed()
	{
		long jniValue = get_rotationSpeed_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	
	native private void set_rotationSpeed_CRadian (long pNativeObject, long value);
	public void set_rotationSpeed(com.earthview.world.spatial.math.Radian rotationSpeed)
	{
		long rotationSpeedParamValue = rotationSpeed.nativeObject.pointer;
		
		set_rotationSpeed_CRadian(this.nativeObject.pointer, rotationSpeedParamValue);
	}
	
	native private int get_particleType_void(long pNativeObject);
	public com.earthview.world.graphic.Particle.ParticleType get_particleType()
	{
		int jniValue = get_particleType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.Particle.ParticleType.toEnum(jniValue);
	}
	
	native private void set_particleType_ParticleType (long pNativeObject, int value);
	public void set_particleType(com.earthview.world.graphic.Particle.ParticleType particleType)
	{
		int particleTypeParamValue = particleType.getValue();
		
		set_particleType_ParticleType(this.nativeObject.pointer, particleTypeParamValue);
	}
	
	native private boolean get_visible_void(long pNativeObject);
	public boolean get_visible()
	{
		boolean jniValue = get_visible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_visible_ev_bool (long pNativeObject, boolean value);
	public void set_visible(boolean visible)
	{
		boolean visibleParamValue = visible;
		
		set_visible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Particle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParticle", null);
	}

	native private void setDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 设置宽高
	 * @param width 粒子的宽度
	 * @param height 粒子的高度
	 */
	public void setDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private boolean hasOwnDimensions_void(long pNativeObject);
	/**
	 * 是否有独立的宽高
	 * @param  
	 */
	public boolean hasOwnDimensions()
	{
		boolean returnValue = hasOwnDimensions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOwnWidth_void(long pNativeObject);
	/**
	 * 如果hasOwnDimensions（）返回true,重新获得粒子的宽度
	 * @param  
	 */
	public double getOwnWidth()
	{
		double returnValue = getOwnWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOwnHeight_void(long pNativeObject);
	/**
	 * 如果hasOwnDimensions（）返回true,重新获得粒子的高度
	 * @param  
	 */
	public double getOwnHeight()
	{
		double returnValue = getOwnHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotation_CRadian(long pNativeObject, long rad);
	/**
	 * 设置旋转
	 * @param rad 弧度
	 */
	public void setRotation(com.earthview.world.spatial.math.Radian rad)
	{
		long radParamValue = rad.nativeObject.pointer;
		setRotation_CRadian(this.nativeObject.pointer, radParamValue);
	}
	native private long getRotation_void(long pNativeObject);
	/**
	 * 获得旋转
	 * @param  
	 */
	public com.earthview.world.spatial.math.Radian getRotation()
	{
		long returnValue = getRotation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private void _notifyOwner_CParticleSystem(long pNativeObject, long ref_owner);
	/**
	 * 通报拥有者
	 * @param owner 粒子的拥有者
	 */
	public void _notifyOwner(com.earthview.world.graphic.ParticleSystem ref_owner)
	{
		long ref_ownerParamValue = (ref_owner == null ? 0L : ref_owner.nativeObject.pointer);
		_notifyOwner_CParticleSystem(this.nativeObject.pointer, ref_ownerParamValue);
	}
	native private void _notifyVisualData_CParticleVisualData(long pNativeObject, long ref_vis);
	/**
	 * 内部方法，通知粒子的可选择的附加可见数据
	 * @param vis 可见数据
	 */
	public void _notifyVisualData(com.earthview.world.graphic.ParticleVisualData ref_vis)
	{
		long ref_visParamValue = (ref_vis == null ? 0L : ref_vis.nativeObject.pointer);
		_notifyVisualData_CParticleVisualData(this.nativeObject.pointer, ref_visParamValue);
	}
	native private long getVisualData_void(long pNativeObject);
	/**
	 * 获得可选择的可见数据
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleVisualData getVisualData()
	{
		long returnValue = getVisualData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleVisualData __returnValue = new com.earthview.world.graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate, "CParticleVisualData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleVisualData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleVisualData");
		}
		return __returnValue;
	}
	native private void resetDimensions_void(long pNativeObject);
	/**
	 * 重置宽高
	 * @param  
	 */
	public void resetDimensions()
	{
		resetDimensions_void(this.nativeObject.pointer);
	}
	native private long getParentSystem_void(long pNativeObject);
	public com.earthview.world.graphic.ParticleSystem getParentSystem()
	{
		long returnValue = getParentSystem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleSystem __returnValue = new com.earthview.world.graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate, "CParticleSystem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleSystem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleSystem");
		}
		return __returnValue;
	}
	public Particle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Particle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Particle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Particle obj = null;
 		if(baseObj instanceof Particle)
		{
			obj = (Particle)baseObj;
		} else {
			obj = new Particle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticle");
			obj.increaseCast();
		}

		return obj;
	}
}
