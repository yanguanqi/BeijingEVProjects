package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 控制器管理类对控制器的一些操作，包括控制器的创建、注册、更新等
 */
public class ControllerManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CControllerManager", new ControllerManagerClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public ControllerManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CControllerManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.ControllerManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ControllerManager __returnValue = new com.earthview.world.graphic.ControllerManager(CreatedWhenConstruct.CWC_NotToCreate, "CControllerManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControllerManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.ControllerManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ControllerManager __returnValue = new com.earthview.world.graphic.ControllerManager(CreatedWhenConstruct.CWC_NotToCreate, "CControllerManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControllerManager");
		}
		return __returnValue;
	}
	native private long createController_ControllerValueRealPtr_ControllerValueRealPtr_ControllerFunctionRealPtr(long pNativeObject, long src, long dest, long func);
	/**
	 * 用控制器的管理器来建立和注册控制器
	 * @param src 来源值
	 * @param dest 目标值
	 * @param func 功能作用
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createController(com.earthview.world.graphic.ControllerValueRealPtr src, com.earthview.world.graphic.ControllerValueRealPtr dest, com.earthview.world.graphic.ControllerFunctionRealPtr func)
	{
		long srcParamValue = src.nativeObject.pointer;
		long destParamValue = dest.nativeObject.pointer;
		long funcParamValue = func.nativeObject.pointer;
		long returnValue = createController_ControllerValueRealPtr_ControllerValueRealPtr_ControllerFunctionRealPtr(this.nativeObject.pointer, srcParamValue, destParamValue, funcParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createFrameTimePassthroughController_ControllerValueRealPtr(long pNativeObject, long dest);
	/**
	 * 建立一个时间帧的控制器
	 * @param dest 目标值
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createFrameTimePassthroughController(com.earthview.world.graphic.ControllerValueRealPtr dest)
	{
		long destParamValue = dest.nativeObject.pointer;
		long returnValue = createFrameTimePassthroughController_ControllerValueRealPtr(this.nativeObject.pointer, destParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private void clearControllers_void(long pNativeObject);
	/**
	 * 去除所有存在的控制器
	 * @param  
	 */
	public void clearControllers()
	{
		clearControllers_void(this.nativeObject.pointer);
	}
	native private void updateAllControllers_void(long pNativeObject);
	/**
	 * 更新所有注册的控制器
	 * @param  
	 */
	public void updateAllControllers()
	{
		updateAllControllers_void(this.nativeObject.pointer);
	}
	native private long getFrameTimeSource_void(long pNativeObject);
	/**
	 * 将最后一个时间帧作为控制值的来源
	 * @param  
	 * @return 返回控制值
	 */
	public com.earthview.world.graphic.ControllerValueRealPtr getFrameTimeSource()
	{
		long returnValue = getFrameTimeSource_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ControllerValueRealPtr __returnValue = new com.earthview.world.graphic.ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate, "ControllerValueRealPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerValueRealPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ControllerValueRealPtr");
		}
		return __returnValue;
	}
	native private long getPassthroughControllerFunction_void(long pNativeObject);
	/**
	 * 检索一个控制器的功能
	 * @param  
	 * @return 返回控制功能的引用
	 */
	public com.earthview.world.graphic.ControllerFunctionRealPtr getPassthroughControllerFunction()
	{
		long returnValue = getPassthroughControllerFunction_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ControllerFunctionRealPtr __returnValue = new com.earthview.world.graphic.ControllerFunctionRealPtr(CreatedWhenConstruct.CWC_NotToCreate, "ControllerFunctionRealPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerFunctionRealPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ControllerFunctionRealPtr");
		}
		return __returnValue;
	}
	native private long createTextureAnimator_CTextureUnitState_Real(long pNativeObject, long ref_layer, double sequenceTime);
	/**
	 * 建立一个滚动纹理的控制器
	 * @param layer 纹理层
	 * @param sequenceTime 时间帧
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureAnimator(com.earthview.world.graphic.TextureUnitState ref_layer, double sequenceTime)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		double sequenceTimeParamValue = sequenceTime;
		long returnValue = createTextureAnimator_CTextureUnitState_Real(this.nativeObject.pointer, ref_layerParamValue, sequenceTimeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureUVScroller_CTextureUnitState_Real(long pNativeObject, long ref_layer, double speed);
	/**
	 * 建立一个滚动纹理的控制器，是建立在水平和竖直方向上的
	 * @param layer 纹理层
	 * @param speed 变动的速度
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureUVScroller(com.earthview.world.graphic.TextureUnitState ref_layer, double speed)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		double speedParamValue = speed;
		long returnValue = createTextureUVScroller_CTextureUnitState_Real(this.nativeObject.pointer, ref_layerParamValue, speedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureUScroller_CTextureUnitState_Real(long pNativeObject, long ref_layer, double uSpeed);
	/**
	 * 建立一个滚动纹理的控制器，是建立在水平面上的
	 * @param layer 纹理层
	 * @param uspeed 水平变动的速度
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureUScroller(com.earthview.world.graphic.TextureUnitState ref_layer, double uSpeed)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		double uSpeedParamValue = uSpeed;
		long returnValue = createTextureUScroller_CTextureUnitState_Real(this.nativeObject.pointer, ref_layerParamValue, uSpeedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureVScroller_CTextureUnitState_Real(long pNativeObject, long ref_layer, double vSpeed);
	/**
	 * 建立一个滚动纹理的控制器，是建立在垂直面上的
	 * @param layer 纹理层
	 * @param uspeed 垂直变动的速度
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureVScroller(com.earthview.world.graphic.TextureUnitState ref_layer, double vSpeed)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		double vSpeedParamValue = vSpeed;
		long returnValue = createTextureVScroller_CTextureUnitState_Real(this.nativeObject.pointer, ref_layerParamValue, vSpeedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureRotater_CTextureUnitState_Real(long pNativeObject, long ref_layer, double speed);
	/**
	 * 建立一个旋转纹理的控制器
	 * @param layer 纹理层
	 * @param speed 变动的速度
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureRotater(com.earthview.world.graphic.TextureUnitState ref_layer, double speed)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		double speedParamValue = speed;
		long returnValue = createTextureRotater_CTextureUnitState_Real(this.nativeObject.pointer, ref_layerParamValue, speedParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType(long pNativeObject, long ref_layer, int ttype, int waveType);
	/**
	 * 建立基于时间的灵活纹理变换
	 * @param layer 纹理层
	 * @param ttype 变换类型
	 * @param waveType 变换波形类型
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureWaveTransformer(com.earthview.world.graphic.TextureUnitState ref_layer, com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		long returnValue = createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType(this.nativeObject.pointer, ref_layerParamValue, ttypeParamValue, waveTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real(long pNativeObject, long ref_layer, int ttype, int waveType, double base);
	/**
	 * 建立基于时间的灵活纹理变换
	 * @param layer 纹理层
	 * @param ttype 变换类型
	 * @param waveType 变换波形类型
	 * @param base 输出的基本值
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureWaveTransformer(com.earthview.world.graphic.TextureUnitState ref_layer, com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		long returnValue = createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real(this.nativeObject.pointer, ref_layerParamValue, ttypeParamValue, waveTypeParamValue, baseParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real(long pNativeObject, long ref_layer, int ttype, int waveType, double base, double frequency);
	/**
	 * 建立基于时间的灵活纹理变换
	 * @param layer 纹理层
	 * @param ttype 变换类型
	 * @param waveType 变换波形类型
	 * @param base 输出的基本值
	 * @param frequency 频数
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureWaveTransformer(com.earthview.world.graphic.TextureUnitState ref_layer, com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		long returnValue = createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real(this.nativeObject.pointer, ref_layerParamValue, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real(long pNativeObject, long ref_layer, int ttype, int waveType, double base, double frequency, double phase);
	/**
	 * 建立基于时间的灵活纹理变换
	 * @param layer 纹理层
	 * @param ttype 变换类型
	 * @param waveType 变换波形类型
	 * @param base 输出的基本值
	 * @param frequency 频数
	 * @param phase 波形起始的偏移
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureWaveTransformer(com.earthview.world.graphic.TextureUnitState ref_layer, com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency, double phase)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		double phaseParamValue = phase;
		long returnValue = createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real(this.nativeObject.pointer, ref_layerParamValue, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue, phaseParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real_Real(long pNativeObject, long ref_layer, int ttype, int waveType, double base, double frequency, double phase, double amplitude);
	/**
	 * 建立基于时间的灵活纹理变换
	 * @param layer 纹理层
	 * @param ttype 变换类型
	 * @param waveType 变换波形类型
	 * @param base 输出的基本值
	 * @param frequency 频数
	 * @param phase 波形起始的偏移
	 * @param amplitude 振幅
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createTextureWaveTransformer(com.earthview.world.graphic.TextureUnitState ref_layer, com.earthview.world.graphic.TextureUnitState.TextureTransformType ttype, com.earthview.world.graphic.WaveformType waveType, double base, double frequency, double phase, double amplitude)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		int ttypeParamValue = ttype.getValue();
		int waveTypeParamValue = waveType.getValue();
		double baseParamValue = base;
		double frequencyParamValue = frequency;
		double phaseParamValue = phase;
		double amplitudeParamValue = amplitude;
		long returnValue = createTextureWaveTransformer_CTextureUnitState_TextureTransformType_WaveformType_Real_Real_Real_Real(this.nativeObject.pointer, ref_layerParamValue, ttypeParamValue, waveTypeParamValue, baseParamValue, frequencyParamValue, phaseParamValue, amplitudeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createGpuProgramTimerParam_GpuProgramParametersSharedPtr_ev_size_t(long pNativeObject, long params, long paramIndex);
	/**
	 * 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
	 * @param params 参数
	 * @param paramIndex 需要更新的参数索引
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createGpuProgramTimerParam(com.earthview.world.graphic.GpuProgramParametersSharedPtr params, long paramIndex)
	{
		long paramsParamValue = params.nativeObject.pointer;
		long paramIndexParamValue = paramIndex;
		long returnValue = createGpuProgramTimerParam_GpuProgramParametersSharedPtr_ev_size_t(this.nativeObject.pointer, paramsParamValue, paramIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private long createGpuProgramTimerParam_GpuProgramParametersSharedPtr_ev_size_t_Real(long pNativeObject, long params, long paramIndex, double timeFactor);
	/**
	 * 建立一个控制器，来给顶点或片段的程序参数传递一个时间帧值
	 * @param params 参数
	 * @param paramIndex 需要更新的参数索引
	 * @param timeFactor 时间调整的长度
	 * @return 返回指向控制器的指针
	 */
	public com.earthview.world.graphic.Controller createGpuProgramTimerParam(com.earthview.world.graphic.GpuProgramParametersSharedPtr params, long paramIndex, double timeFactor)
	{
		long paramsParamValue = params.nativeObject.pointer;
		long paramIndexParamValue = paramIndex;
		double timeFactorParamValue = timeFactor;
		long returnValue = createGpuProgramTimerParam_GpuProgramParametersSharedPtr_ev_size_t_Real(this.nativeObject.pointer, paramsParamValue, paramIndexParamValue, timeFactorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Controller __returnValue = new com.earthview.world.graphic.Controller(CreatedWhenConstruct.CWC_NotToCreate, "CController");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Controller)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CController");
		}
		return __returnValue;
	}
	native private void destroyController_CController(long pNativeObject, long controller);
	/**
	 * 删除指定的控制器
	 * @param controller 指向需要删除的控制器的指针
	 */
	public void destroyController(com.earthview.world.graphic.Controller controller)
	{
		long controllerParamValue = (controller == null ? 0L : controller.nativeObject.pointer);
		destroyController_CController(this.nativeObject.pointer, controllerParamValue);
	}
	native private double getTimeFactor_void(long pNativeObject);
	/**
	 * 得到时间的相关速度
	 * @param  
	 * @return 返回速度
	 */
	public double getTimeFactor()
	{
		double returnValue = getTimeFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimeFactor_Real(long pNativeObject, double tf);
	/**
	 * 设置速度来更新控制器的时间帧
	 * @param tf 速度（并不是真的时间速度，1.0是真实的时间）
	 */
	public void setTimeFactor(double tf)
	{
		double tfParamValue = tf;
		setTimeFactor_Real(this.nativeObject.pointer, tfParamValue);
	}
	native private double getFrameDelay_void(long pNativeObject);
	/**
	 * 得到帧之间的时间差
	 * @param  
	 * @return 返回时间差
	 */
	public double getFrameDelay()
	{
		double returnValue = getFrameDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFrameDelay_Real(long pNativeObject, double fd);
	/**
	 * 设置帧的速率
	 * @param fd 速率（1.0f/25.0f意思就是1秒钟播放25帧的动画）
	 */
	public void setFrameDelay(double fd)
	{
		double fdParamValue = fd;
		setFrameDelay_Real(this.nativeObject.pointer, fdParamValue);
	}
	native private double getElapsedTime_void(long pNativeObject);
	/**
	 * 得到已经过去的时间
	 * @param  
	 * @return 返回过去的时间
	 */
	public double getElapsedTime()
	{
		double returnValue = getElapsedTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setElapsedTime_Real(long pNativeObject, double elapsedTime);
	/**
	 * 设置已经过去的时间
	 * @param elapsedTime 已经过去的时间
	 */
	public void setElapsedTime(double elapsedTime)
	{
		double elapsedTimeParamValue = elapsedTime;
		setElapsedTime_Real(this.nativeObject.pointer, elapsedTimeParamValue);
	}
	public ControllerManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControllerManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControllerManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControllerManager obj = null;
 		if(baseObj instanceof ControllerManager)
		{
			obj = (ControllerManager)baseObj;
		} else {
			obj = new ControllerManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControllerManager");
			obj.increaseCast();
		}

		return obj;
	}
}
