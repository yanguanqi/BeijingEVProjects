package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 光源类可以使用该类表现光源在场景中的变化,设置光源位置，类型等
 */
public class Light extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLight", new LightClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLightProxy", new LightClassFactory());
	}

	/**
	 * 内部动态对象类扩展覆盖，自定义其对象属性
	 */
	public static class LightInternalAnimableObject extends com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLight::CLightInternalAnimableObject", new LightInternalAnimableObjectClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CLight::JCLightInternalAnimableObjectProxy", new LightInternalAnimableObjectClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 父类
		 */
		public LightInternalAnimableObject(com.earthview.world.graphic.Light ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCLightInternalAnimableObjectProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Light$LightInternalAnimableObject".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long createAnimableValue_EVString(long pNativeObject, String valueName);
		/**
		 * 为可动画的值名称创建公共指针复制CAnimableObject::createAnimableValue
		 * @param  
		 * @return 可动画值名称公共指针
		 */
		public com.earthview.world.graphic.AnimableValuePtr createAnimableValue(String valueName)
		{
			String valueNameParamValue = valueName;
			long returnValue = createAnimableValue_EVString(this.nativeObject.pointer, valueNameParamValue);
			com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
			}
			return __returnValue;
		}
		native private long createAnimableValue_EVString_NoVirtual(long pNativeObject, String valueName);
		protected com.earthview.world.graphic.AnimableValuePtr createAnimableValue_NoVirtual(String valueName)
		{
			String valueNameParamValue = valueName;
			long returnValue = createAnimableValue_EVString_NoVirtual(this.nativeObject.pointer, valueNameParamValue);
			com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
			}
			return __returnValue;
		}

		public LightInternalAnimableObject(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LightInternalAnimableObject(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 初始化可动画路径
		 * @param  
		 */
		public void initialiseAnimableDictionary(com.earthview.world.core.StringVector val)
		{
			super.initialiseAnimableDictionary_NoVirtual(val);
		}
		/**
		 * 获得可动画路径
		 * @param  
		 * @return 返回路径名称
		 */
		public String getAnimableDictionaryName()
		{
			return super.getAnimableDictionaryName_NoVirtual();
		}
		
		native protected void register_initialiseAnimableDictionary_StringVector(long pNativeObject, String method);
		native protected void register_getAnimableDictionaryName_void(long pNativeObject, String method);
		native protected void register_createAnimableValue_EVString(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_initialiseAnimableDictionary_StringVector(this.nativeObject.pointer, "initialiseAnimableDictionary_StringVector_callback");
				this.register_getAnimableDictionaryName_void(this.nativeObject.pointer, "getAnimableDictionaryName_void_callback");
				this.register_createAnimableValue_EVString(this.nativeObject.pointer, "createAnimableValue_EVString_callback");
			}
		}
		
		public static LightInternalAnimableObject fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LightInternalAnimableObject obj = null;
 			if(baseObj instanceof LightInternalAnimableObject)
			{
				obj = (LightInternalAnimableObject)baseObj;
			} else {
				obj = new LightInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CLightInternalAnimableObject");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LightInternalAnimableObjectClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LightInternalAnimableObject emptyInstance = new LightInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long createAnimableValue_EVString_callback(String valueName)
	{
		String valueNameParamValue = valueName;
		com.earthview.world.graphic.AnimableValuePtr returnValue = createAnimableValue(valueNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAnimableValue_EVString(long pNativeObject, String valueName);
	public com.earthview.world.graphic.AnimableValuePtr createAnimableValue(String valueName)
	{
		String valueNameParamValue = valueName;
		long returnValue = createAnimableValue_EVString(this.nativeObject.pointer, valueNameParamValue);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}
	native private long createAnimableValue_EVString_NoVirtual(long pNativeObject, String valueName);
	protected com.earthview.world.graphic.AnimableValuePtr createAnimableValue_NoVirtual(String valueName)
	{
		String valueNameParamValue = valueName;
		long returnValue = createAnimableValue_EVString_NoVirtual(this.nativeObject.pointer, valueNameParamValue);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}

	native private long getAnimableObjectPtr_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		long returnValue = getAnimableObjectPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectInternalAnimableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectInternalAnimableObject");
		}
		return __returnValue;
	}
	native private long getAnimableObjectPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr_NoVirtual()
	{
		long returnValue = getAnimableObjectPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject __returnValue = new com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObjectInternalAnimableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObjectInternalAnimableObject");
		}
		return __returnValue;
	}

	native private double get_tempSquareDist_void(long pNativeObject);
	public double get_tempSquareDist()
	{
		double jniValue = get_tempSquareDist_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_tempSquareDist_Real (long pNativeObject, double value);
	public void set_tempSquareDist(double tempSquareDist)
	{
		double tempSquareDistParamValue = tempSquareDist;
		
		set_tempSquareDist_Real(this.nativeObject.pointer, tempSquareDistParamValue);
	}
	
	native private void _calcTempSquareDist_CVector3(long pNativeObject, long worldPos);
	/**
	 * 计算当前正方形距离世界位置的距离内部方法
	 * @param worldPos 世界位置的三维矢量
	 */
	public void _calcTempSquareDist(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		long worldPosParamValue = worldPos.nativeObject.pointer;
		_calcTempSquareDist_CVector3(this.nativeObject.pointer, worldPosParamValue);
	}
	/**
	 * 光源类型
	 */
	public enum LightTypes implements INativeEnum<LightTypes> {
		LT_POINT(LightTypesHelper.ENUM_VALUES[0]),
		LT_DIRECTIONAL(LightTypesHelper.ENUM_VALUES[1]),
		LT_SPOTLIGHT(LightTypesHelper.ENUM_VALUES[2]);
		private int value;
		LightTypes(int i) {
			this.value = i;
		}
		public LightTypes getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LightTypes toEnum(int retval) {
			if(retval == LT_POINT.value){
				return LT_POINT;
			}
			else if(retval == LT_DIRECTIONAL.value){
				return LT_DIRECTIONAL;
			}
			else if(retval == LT_SPOTLIGHT.value){
				return LT_SPOTLIGHT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LightTypesHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Light() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLightProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Light".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public Light(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCLightProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Light".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setType_LightTypes(long pNativeObject, int type);
	/**
	 * 设置光源类型
	 * @param type 光源类型
	 */
	public void setType(com.earthview.world.graphic.Light.LightTypes type)
	{
		int typeParamValue = type.getValue();
		setType_LightTypes(this.nativeObject.pointer, typeParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取光源类型
	 * @param  
	 * @return 光源类型
	 */
	public com.earthview.world.graphic.Light.LightTypes getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Light.LightTypes.toEnum(returnValue);
	}
	native private void setDiffuseColour_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置漫射光颜色设置色光三原色：红绿蓝
	 * @param red 红色值
	 * @param green 绿色值
	 * @param blue 蓝色值
	 */
	public void setDiffuseColour(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setDiffuseColour_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setDiffuseColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置漫射光颜色
	/// 传入颜色值对象
	/// </summary>
	/// <param name="colour">颜色</param>
	/// <returns</returns>
	public void setDiffuseColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setDiffuseColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getDiffuseColour_void(long pNativeObject);
	/**
	 * 获取漫射光颜色
	 * @return 本对象
	 */
	public com.earthview.world.graphic.ColourValue getDiffuseColour()
	{
		long returnValue = getDiffuseColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setSpecularColour_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 设置镜面反射光颜色设置色光三原色：红绿蓝
	 * @param red 红色
	 * @param green 绿色
	 * @param blue 蓝色
	 */
	public void setSpecularColour(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setSpecularColour_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setSpecularColour_CColourValue(long pNativeObject, long colour);
	/// <summary>
	/// 设置镜面反射光颜色
	/// 传入颜色值对象
	/// </summary>
	/// <param name="colour">颜色</param>
	/// <returns</returns>
	public void setSpecularColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setSpecularColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getSpecularColour_void(long pNativeObject);
	/**
	 * 获取镜面反射光颜色
	 * @return 本对象
	 */
	public com.earthview.world.graphic.ColourValue getSpecularColour()
	{
		long returnValue = getSpecularColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setAttenuation_Real_Real_Real_Real(long pNativeObject, double range, double constant, double linear, double quadratic);
	/**
	 * 设置光源衰减参数随着距离变化，光线如何衰减
	 * @param range 在世界单位下，光源的最高射程
	 * @param constant 衰减公式常数值：1.0为不衰减，0.0为完全衰减
	 * @param linear 线性值：1表示衰减平均分布在距离中
	 * @param quadratic 二次值：添加一个曲率
	 */
	public void setAttenuation(double range, double constant, double linear, double quadratic)
	{
		double rangeParamValue = range;
		double constantParamValue = constant;
		double linearParamValue = linear;
		double quadraticParamValue = quadratic;
		setAttenuation_Real_Real_Real_Real(this.nativeObject.pointer, rangeParamValue, constantParamValue, linearParamValue, quadraticParamValue);
	}
	native private double getAttenuationRange_void(long pNativeObject);
	/**
	 * 获取范围值
	 * @return 返回range值
	 */
	public double getAttenuationRange()
	{
		double returnValue = getAttenuationRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAttenuationConstant_void(long pNativeObject);
	/**
	 * 获取衰减公式常数值
	 * @return 返回常数值
	 */
	public double getAttenuationConstant()
	{
		double returnValue = getAttenuationConstant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAttenuationLinear_void(long pNativeObject);
	/**
	 * 获取线性值
	 * @return 返回线性值
	 */
	public double getAttenuationLinear()
	{
		double returnValue = getAttenuationLinear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAttenuationQuadric_void(long pNativeObject);
	/**
	 * 获取衰减公式二次值
	 * @return 返回二次值
	 */
	public double getAttenuationQuadric()
	{
		double returnValue = getAttenuationQuadric_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPosition_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置光源位置坐标只适用于点光源
	 * @param x 横坐标
	 * @param y 纵坐标
	 * @param z 高程值
	 */
	public void setPosition(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setPosition_CVector3(long pNativeObject, long vec);
	/**
	 * 设置光源位置坐标只适用于点光源
	 * @param vec 三维向量
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private long getPosition_void(long pNativeObject);
	/**
	 * 获取点光源坐标只适用于点光源
	 * @return 返回坐标值
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setDirection_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置光源照射方向只适用于平行光
	 * @param x 横坐标
	 * @param y 纵坐标
	 * @param z 高程值
	 */
	public void setDirection(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setDirection_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setDirection_CVector3(long pNativeObject, long vec);
	/**
	 * 设置光源照射方向只适用于平行光
	 * @param vec 三维向量
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setDirection_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private long getDirection_void(long pNativeObject);
	/**
	 * 获取点光源照射方向只适用于平行光
	 * @return 返回坐标值
	 */
	public com.earthview.world.spatial.math.Vector3 getDirection()
	{
		long returnValue = getDirection_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setSpotlightRange_CRadian_CRadian_Real(long pNativeObject, long innerAngle, long outerAngle, double falloff);
	/**
	 * 设置聚光灯照射范围
	 * @param innerAngle 内锥角
	 * @param outerAngle 外锥角
	 * @param falloff 衰减率：1.0意思为线性衰减，小于1.0衰减的慢，大于1.0衰减的快，默认为1.0
	 */
	public void setSpotlightRange(com.earthview.world.spatial.math.Radian innerAngle, com.earthview.world.spatial.math.Radian outerAngle, double falloff)
	{
		long innerAngleParamValue = innerAngle.nativeObject.pointer;
		long outerAngleParamValue = outerAngle.nativeObject.pointer;
		double falloffParamValue = falloff;
		setSpotlightRange_CRadian_CRadian_Real(this.nativeObject.pointer, innerAngleParamValue, outerAngleParamValue, falloffParamValue);
	}
	native private void setSpotlightRange_CRadian_CRadian(long pNativeObject, long innerAngle, long outerAngle);
	/**
	 * 设置聚光灯照射范围
	 * @param innerAngle 内锥角
	 * @param outerAngle 外锥角
	 */
	public void setSpotlightRange(com.earthview.world.spatial.math.Radian innerAngle, com.earthview.world.spatial.math.Radian outerAngle)
	{
		long innerAngleParamValue = innerAngle.nativeObject.pointer;
		long outerAngleParamValue = outerAngle.nativeObject.pointer;
		setSpotlightRange_CRadian_CRadian(this.nativeObject.pointer, innerAngleParamValue, outerAngleParamValue);
	}
	native private long getSpotlightInnerAngle_void(long pNativeObject);
	/**
	 * 获取聚光灯内锥角
	 * @return 角度值
	 */
	public com.earthview.world.spatial.math.Radian getSpotlightInnerAngle()
	{
		long returnValue = getSpotlightInnerAngle_void(this.nativeObject.pointer);
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
	native private long getSpotlightOuterAngle_void(long pNativeObject);
	/**
	 * 获取聚光灯外锥角
	 * @return 角度值
	 */
	public com.earthview.world.spatial.math.Radian getSpotlightOuterAngle()
	{
		long returnValue = getSpotlightOuterAngle_void(this.nativeObject.pointer);
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
	native private double getSpotlightFalloff_void(long pNativeObject);
	/**
	 * 获取衰减率内锥角与外锥角直接的光线
	 * @return 衰减率
	 */
	public double getSpotlightFalloff()
	{
		double returnValue = getSpotlightFalloff_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSpotlightInnerAngle_CRadian(long pNativeObject, long val);
	/**
	 * 设置聚光灯内锥角
	 * @param val 弧度
	 */
	public void setSpotlightInnerAngle(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setSpotlightInnerAngle_CRadian(this.nativeObject.pointer, valParamValue);
	}
	native private void setSpotlightOuterAngle_CRadian(long pNativeObject, long val);
	/**
	 * 设置聚光灯外锥角
	 * @param val 弧度
	 */
	public void setSpotlightOuterAngle(com.earthview.world.spatial.math.Radian val)
	{
		long valParamValue = val.nativeObject.pointer;
		setSpotlightOuterAngle_CRadian(this.nativeObject.pointer, valParamValue);
	}
	native private void setSpotlightFalloff_Real(long pNativeObject, double val);
	/**
	 * 设置聚光灯内外锥角之间的衰减率
	 * @param val 弧度
	 */
	public void setSpotlightFalloff(double val)
	{
		double valParamValue = val;
		setSpotlightFalloff_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setSpotlightNearClipDistance_Real(long pNativeObject, double nearClip);
	public void setSpotlightNearClipDistance(double nearClip)
	{
		double nearClipParamValue = nearClip;
		setSpotlightNearClipDistance_Real(this.nativeObject.pointer, nearClipParamValue);
	}
	native private double getSpotlightNearClipDistance_void(long pNativeObject);
	public double getSpotlightNearClipDistance()
	{
		double returnValue = getSpotlightNearClipDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPowerScale_Real(long pNativeObject, double power);
	/**
	 * 设置光源强度只在高动态范围（HDR）渲染的时候考虑此因素
	 * @param power 光源的额定强度，默认为1.0
	 */
	public void setPowerScale(double power)
	{
		double powerParamValue = power;
		setPowerScale_Real(this.nativeObject.pointer, powerParamValue);
	}
	native private double getPowerScale_void(long pNativeObject);
	/**
	 * 获取光源强度只在高动态范围（HDR）渲染的时候考虑此因素
	 * @return 光源强度
	 */
	public double getPowerScale()
	{
		double returnValue = getPowerScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	/**
	 * 通报挂接内部方法
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void _notifyAttached_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	native private void _notifyMoved_void(long pNativeObject);
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		_notifyMoved_void(this.nativeObject.pointer);
	}
	native private void _notifyMoved_void_NoVirtual(long pNativeObject);
	protected void _notifyMoved_NoVirtual()
	{
		_notifyMoved_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获取当前对象的平行轴边框盒边框盒在当地坐标系中
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	/**
	 * 更新渲染队列移动对象必须添加到CRenderable内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDerivedPosition_ev_bool(long pNativeObject, boolean cameraRelativeIfSet);
	/**
	 * 取得光源的位置，包括从节点累积的平移
	 * @param cameraRelativeIfSet 设置为true，使用当前摄像机比例关系
	 * @return 三维矢量
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedPosition(boolean cameraRelativeIfSet)
	{
		boolean cameraRelativeIfSetParamValue = cameraRelativeIfSet;
		long returnValue = getDerivedPosition_ev_bool(this.nativeObject.pointer, cameraRelativeIfSetParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getDerivedPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getDerivedPosition()
	{
		long returnValue = getDerivedPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long getDerivedDirection_void(long pNativeObject);
	/**
	 * 取得光源的方向，包括从附属累积的旋转
	 * @param  
	 * @return 三维矢量
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedDirection()
	{
		long returnValue = getDerivedDirection_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/// <summary>
	/// 设置是否可见
	/// 如果不可见，则对场景渲染无影响                
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 半径值
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getAs4DVector_ev_bool(long pNativeObject, boolean cameraRelativeIfSet);
	/**
	 * 获取作为四维矢量的光源的详细参数
	 * @param cameraRelativeIfSet true，如果已经创建，返回摄像机缩放关系数据
	 */
	public com.earthview.world.spatial.math.Vector4 getAs4DVector(boolean cameraRelativeIfSet)
	{
		boolean cameraRelativeIfSetParamValue = cameraRelativeIfSet;
		long returnValue = getAs4DVector_ev_bool(this.nativeObject.pointer, cameraRelativeIfSetParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getAs4DVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 getAs4DVector()
	{
		long returnValue = getAs4DVector_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	protected  long _getNearClipVolume_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.spatial.math.PlaneBoundedVolume returnValue = _getNearClipVolume(camParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getNearClipVolume_CCamera(long pNativeObject, long cam);
	/**
	 * 计算近裁剪体内部方法光源和摄像机之间的近裁剪矩形体
	 * @param cam 摄像机
	 */
	public com.earthview.world.spatial.math.PlaneBoundedVolume _getNearClipVolume(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long returnValue = _getNearClipVolume_CCamera(this.nativeObject.pointer, camParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolume __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate, "CPlaneBoundedVolume");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolume)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		}
		return __returnValue;
	}
	native private long _getNearClipVolume_CCamera_NoVirtual(long pNativeObject, long cam);
	protected com.earthview.world.spatial.math.PlaneBoundedVolume _getNearClipVolume_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long returnValue = _getNearClipVolume_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolume __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate, "CPlaneBoundedVolume");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolume)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		}
		return __returnValue;
	}

	protected  long _getFrustumClipVolumes_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.spatial.math.PlaneBoundedVolumeList returnValue = _getFrustumClipVolumes(camParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getFrustumClipVolumes_CCamera(long pNativeObject, long cam);
	/**
	 * 计算平截头体外部的裁剪体内部方法
	 * @param cam 摄像机
	 */
	public com.earthview.world.spatial.math.PlaneBoundedVolumeList _getFrustumClipVolumes(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long returnValue = _getFrustumClipVolumes_CCamera(this.nativeObject.pointer, camParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolumeList __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolumeList(CreatedWhenConstruct.CWC_NotToCreate, "PlaneBoundedVolumeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolumeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PlaneBoundedVolumeList");
		}
		return __returnValue;
	}
	native private long _getFrustumClipVolumes_CCamera_NoVirtual(long pNativeObject, long cam);
	protected com.earthview.world.spatial.math.PlaneBoundedVolumeList _getFrustumClipVolumes_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long returnValue = _getFrustumClipVolumes_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolumeList __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolumeList(CreatedWhenConstruct.CWC_NotToCreate, "PlaneBoundedVolumeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolumeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PlaneBoundedVolumeList");
		}
		return __returnValue;
	}

	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获得类型标志信息
	 * @param  
	 * @return 标志
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCustomShadowCameraSetup_ShadowCameraSetupPtr(long pNativeObject, long customShadowSetup);
	/**
	 * 使用自定义阴影摄像机
	 * @param customShadowSetup 自定义阴影摄像机
	 */
	public void setCustomShadowCameraSetup(com.earthview.world.graphic.ShadowCameraSetupPtr customShadowSetup)
	{
		long customShadowSetupParamValue = customShadowSetup.nativeObject.pointer;
		setCustomShadowCameraSetup_ShadowCameraSetupPtr(this.nativeObject.pointer, customShadowSetupParamValue);
	}
	native private void resetCustomShadowCameraSetup_void(long pNativeObject);
	/**
	 * 重置默认阴影摄像机
	 * @param  
	 */
	public void resetCustomShadowCameraSetup()
	{
		resetCustomShadowCameraSetup_void(this.nativeObject.pointer);
	}
	native private long getCustomShadowCameraSetup_void(long pNativeObject);
	/**
	 * 获取自定义阴影摄像机
	 * @param  
	 */
	public com.earthview.world.graphic.ShadowCameraSetupPtr getCustomShadowCameraSetup()
	{
		long returnValue = getCustomShadowCameraSetup_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShadowCameraSetupPtr __returnValue = new com.earthview.world.graphic.ShadowCameraSetupPtr(CreatedWhenConstruct.CWC_NotToCreate, "ShadowCameraSetupPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCameraSetupPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ShadowCameraSetupPtr");
		}
		return __returnValue;
	}
	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	native private long _getIndexInFrame_void(long pNativeObject);
	/**
	 * 在当前渲染对象中检索光源
	 * @param  
	 */
	public long _getIndexInFrame()
	{
		long returnValue = _getIndexInFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyIndexInFrame_ev_size_t(long pNativeObject, long i);
	/**
	 * 唤醒检索线程
	 * @param i 
	 */
	public void _notifyIndexInFrame(long i)
	{
		long iParamValue = i;
		_notifyIndexInFrame_ev_size_t(this.nativeObject.pointer, iParamValue);
	}
	native private void setShadowFarDistance_Real(long pNativeObject, double distance);
	/**
	 * 设置从可见光源阴影到摄像机最大距离
	 * @param distance 距离
	 */
	public void setShadowFarDistance(double distance)
	{
		double distanceParamValue = distance;
		setShadowFarDistance_Real(this.nativeObject.pointer, distanceParamValue);
	}
	native private void resetShadowFarDistance_void(long pNativeObject);
	/**
	 * 重置从可见光源阴影到摄像机最大距离
	 * @param  
	 */
	public void resetShadowFarDistance()
	{
		resetShadowFarDistance_void(this.nativeObject.pointer);
	}
	native private double getShadowFarDistance_void(long pNativeObject);
	/**
	 * 获取从可见光源阴影到摄像机最大距离
	 * @param  
	 * @return 距离值
	 */
	public double getShadowFarDistance()
	{
		double returnValue = getShadowFarDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowFarDistanceSquared_void(long pNativeObject);
	/**
	 * 获取从可见光源阴影到摄像机最大距离的平方值
	 * @param  
	 * @return 距离值
	 */
	public double getShadowFarDistanceSquared()
	{
		double returnValue = getShadowFarDistanceSquared_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowNearClipDistance_Real(long pNativeObject, double nearClip);
	/**
	 * 设置阴影摄像机使用的近裁剪面距离如果光源照射到阴影纹理
	 * @param nearClip 近裁剪面距离，或使用主摄像机设置
	 */
	public void setShadowNearClipDistance(double nearClip)
	{
		double nearClipParamValue = nearClip;
		setShadowNearClipDistance_Real(this.nativeObject.pointer, nearClipParamValue);
	}
	native private double getShadowNearClipDistance_void(long pNativeObject);
	/**
	 * 获取阴影摄像机使用的近裁剪面距离如果光源照射到阴影纹理
	 * @param  
	 */
	public double getShadowNearClipDistance()
	{
		double returnValue = getShadowNearClipDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _deriveShadowNearClipDistance_CCamera(long pNativeObject, long maincam);
	/**
	 * 派生出阴影摄像机近裁剪面距离如果有光源从光源派生，如果设置光源从主摄像机派生
	 * @param maincam 主摄像机名称
	 */
	public double _deriveShadowNearClipDistance(com.earthview.world.graphic.Camera maincam)
	{
		long maincamParamValue = (maincam == null ? 0L : maincam.nativeObject.pointer);
		double returnValue = _deriveShadowNearClipDistance_CCamera(this.nativeObject.pointer, maincamParamValue);
		return returnValue;
	}
	native private void setShadowFarClipDistance_Real(long pNativeObject, double farClip);
	/**
	 * 设置阴影摄像机使用的远裁剪面距离如果光源照射到阴影纹理
	 * @param nearClip 远裁剪面距离，或使用主摄像机设置
	 */
	public void setShadowFarClipDistance(double farClip)
	{
		double farClipParamValue = farClip;
		setShadowFarClipDistance_Real(this.nativeObject.pointer, farClipParamValue);
	}
	native private double getShadowFarClipDistance_void(long pNativeObject);
	/**
	 * 获取阴影摄像机使用的远裁剪面距离如果光源照射到阴影纹理
	 * @param  
	 */
	public double getShadowFarClipDistance()
	{
		double returnValue = getShadowFarClipDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double _deriveShadowFarClipDistance_CCamera(long pNativeObject, long maincam);
	/**
	 * 派生出阴影摄像机远裁剪面距离如果有光源从光源派生，如果设置光源从主摄像机派生
	 * @param maincam 主摄像机名称
	 */
	public double _deriveShadowFarClipDistance(com.earthview.world.graphic.Camera maincam)
	{
		long maincamParamValue = (maincam == null ? 0L : maincam.nativeObject.pointer);
		double returnValue = _deriveShadowFarClipDistance_CCamera(this.nativeObject.pointer, maincamParamValue);
		return returnValue;
	}
	native private void _setCameraRelative_CCamera(long pNativeObject, long cam);
	/**
	 * 设置光源关联摄像机用于摄像机相关对象渲染
	 * @param cam 摄像机
	 */
	public void _setCameraRelative(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_setCameraRelative_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void setCustomParameter_ev_uint16_CVector4(long pNativeObject, int index, long value);
	/**
	 * 设置光源自定义参数用于计算渲染细节，像GPU参数
	 * @param index 检索
	 * @param value 关联值
	 */
	public void setCustomParameter(int index, com.earthview.world.spatial.math.Vector4 value)
	{
		int indexParamValue = index;
		long valueParamValue = value.nativeObject.pointer;
		setCustomParameter_ev_uint16_CVector4(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private long getCustomParameter_ev_uint16(long pNativeObject, int index);
	/**
	 * 得到光源自定义参数用于计算渲染细节，像GPU参数
	 * @param index 检索
	 * @return 关联值
	 */
	public com.earthview.world.spatial.math.Vector4 getCustomParameter(int index)
	{
		int indexParamValue = index;
		long returnValue = getCustomParameter_ev_uint16(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	protected  void _updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters_callback(int paramIndex, long constantEntry, long params)
	{
		int paramIndexParamValue = paramIndex;
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntryParamValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
		constantEntryParamValue.setDelegate(true);
		constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		IClassFactory constantEntryParamValueClassFactory = GlobalClassFactoryMap.get(constantEntryParamValue.getCppInstanceTypeName());
		if (constantEntryParamValueClassFactory != null)
		{
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)constantEntryParamValueClassFactory.create();
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		}
		com.earthview.world.graphic.GpuProgramParameters paramsParamValue = (params == 0L ? null : new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.graphic.GpuProgramParameters)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		_updateCustomGpuParameter(paramIndexParamValue, constantEntryParamValue, paramsParamValue);
	}

	native private void _updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, int paramIndex, long constantEntry, long params);
	/**
	 * 更新一个自定义EarthView::World::Graphic::CGpuProgramParameters常数
	 * @param paramIndex 更新索引常数
	 * @param constantEntry 从程序参数获取自动常数
	 * @param params 参数
	 */
	public void _updateCustomGpuParameter(int paramIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		int paramIndexParamValue = paramIndex;
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		_updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, paramIndexParamValue, constantEntryParamValue, paramsParamValue);
	}
	native private void _updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(long pNativeObject, int paramIndex, long constantEntry, long params);
	protected void _updateCustomGpuParameter_NoVirtual(int paramIndex, com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		int paramIndexParamValue = paramIndex;
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		_updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(this.nativeObject.pointer, paramIndexParamValue, constantEntryParamValue, paramsParamValue);
	}

	protected  void update_void_callback()
	{
		update();
	}

	native private void update_void(long pNativeObject);
	/**
	 * 同步父节点内部方法
	 * @param  
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	public Light(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Light(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		return super.getWorldBoundingSphere_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		return super.getWorldBoundingSphere_NoVirtual();
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setSelectionColour_NoVirtual(colour);
	}
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		return super.setSelected_NoVirtual(objIndics);
	}
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		return super.getSelected_NoVirtual();
	}
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
	}
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
	}
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
	}
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		super.renderSelection_NoVirtual();
	}
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		return super.startEditing_NoVirtual(objectIndex);
	}
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		super.endEditing_NoVirtual();
	}
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		return super.getEditBoundingBox_NoVirtual();
	}
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		return super._getParentNodeFullTransform_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		super.setCastShadows_NoVirtual(enabled);
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		return super.getEdgeList_NoVirtual();
	}
	public boolean hasEdgeList()
	{
		return super.hasEdgeList_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		return super.getWorldBoundingBox_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_createAnimableValue_EVString(long pNativeObject, String method);
	native protected void register__getNearClipVolume_CCamera(long pNativeObject, String method);
	native protected void register__getFrustumClipVolumes_CCamera(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimableValue_EVString(this.nativeObject.pointer, "createAnimableValue_EVString_callback");
			this.register__getNearClipVolume_CCamera(this.nativeObject.pointer, "_getNearClipVolume_CCamera_callback");
			this.register__getFrustumClipVolumes_CCamera(this.nativeObject.pointer, "_getFrustumClipVolumes_CCamera_callback");
			this.register__updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_ev_uint16_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static Light fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Light obj = null;
 		if(baseObj instanceof Light)
		{
			obj = (Light)baseObj;
		} else {
			obj = new Light(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLight");
			obj.increaseCast();
		}

		return obj;
	}
}
