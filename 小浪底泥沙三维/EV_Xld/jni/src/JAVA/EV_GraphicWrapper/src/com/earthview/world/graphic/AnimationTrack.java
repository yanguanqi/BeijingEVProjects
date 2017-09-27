package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画轨迹类管理动画轨迹
 */
public class AnimationTrack extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationTrack", new AnimationTrackClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationTrackProxy", new AnimationTrackClassFactory());
	}

	/**
	 * 动画帧监听类管理动画帧
	 */
	public static class AnimationTrackListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener", new AnimationTrackListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationTrack::JCAnimationTrackListenerProxy", new AnimationTrackListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public AnimationTrackListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCAnimationTrackListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.AnimationTrack$AnimationTrackListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(long t, long timeIndex, long kf)
		{
			com.earthview.world.graphic.AnimationTrack tParamValue = (t == 0L ? null : new com.earthview.world.graphic.AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate));
			if(tParamValue != null)
			{
			tParamValue.setDelegate(true);
			tParamValue.setInstancePointer(new InstancePointer(t));
			IClassFactory tParamValueClassFactory = GlobalClassFactoryMap.get(tParamValue.getCppInstanceTypeName());
			if (tParamValueClassFactory != null)
			{
				tParamValue.setDelegate(true);
				tParamValue = (com.earthview.world.graphic.AnimationTrack)tParamValueClassFactory.create();
				tParamValue.setDelegate(true);
				tParamValue.setInstancePointer(new InstancePointer(t));
			}
			}
			com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
			IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
			if (timeIndexParamValueClassFactory != null)
			{
				timeIndexParamValue.setDelegate(true);
				timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
				timeIndexParamValue.setDelegate(true);
				timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
			}
			com.earthview.world.graphic.KeyFrame kfParamValue = (kf == 0L ? null : new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate));
			if(kfParamValue != null)
			{
			kfParamValue.setDelegate(true);
			kfParamValue.setInstancePointer(new InstancePointer(kf));
			IClassFactory kfParamValueClassFactory = GlobalClassFactoryMap.get(kfParamValue.getCppInstanceTypeName());
			if (kfParamValueClassFactory != null)
			{
				kfParamValue.setDelegate(true);
				kfParamValue = (com.earthview.world.graphic.KeyFrame)kfParamValueClassFactory.create();
				kfParamValue.setDelegate(true);
				kfParamValue.setInstancePointer(new InstancePointer(kf));
			}
			}
			boolean returnValue = getInterpolatedKeyFrame(tParamValue, timeIndexParamValue, kfParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(long pNativeObject, long t, long timeIndex, long kf);
		/**
		 * 关键帧插值
		 * @param t 动画轨迹
		 * @param timeIndex 时间索引
		 * @param kf 插值结果
		 * @return 标识是否插值成功
		 */
		public boolean getInterpolatedKeyFrame(com.earthview.world.graphic.AnimationTrack t, com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
		{
			long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
			long timeIndexParamValue = timeIndex.nativeObject.pointer;
			long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
			boolean returnValue = getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(this.nativeObject.pointer, tParamValue, timeIndexParamValue, kfParamValue);
			return returnValue;
		}
		native private boolean getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_NoVirtual(long pNativeObject, long t, long timeIndex, long kf);
		protected boolean getInterpolatedKeyFrame_NoVirtual(com.earthview.world.graphic.AnimationTrack t, com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
		{
			long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
			long timeIndexParamValue = timeIndex.nativeObject.pointer;
			long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
			boolean returnValue = getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_NoVirtual(this.nativeObject.pointer, tParamValue, timeIndexParamValue, kfParamValue);
			return returnValue;
		}

		public AnimationTrackListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AnimationTrackListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(this.nativeObject.pointer, "getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
			}
		}
		
		public static AnimationTrackListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AnimationTrackListener obj = null;
 			if(baseObj instanceof AnimationTrackListener)
			{
				obj = (AnimationTrackListener)baseObj;
			} else {
				obj = new AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CAnimationTrackListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AnimationTrackListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AnimationTrackListener emptyInstance = new AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param parent 动画类对象
	 * @param handle 动画轨迹标识
	 */
	public AnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		Create("JCAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getHandle_void(long pNativeObject);
	/**
	 * 获得动轨迹标识
	 * @param  
	 * @return 标识值
	 */
	public int getHandle()
	{
		int returnValue = getHandle_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  int getNumKeyFrames_void_callback()
	{
		int returnValue = getNumKeyFrames();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumKeyFrames_void(long pNativeObject);
	/**
	 * 返回动画中关键帧数量
	 * @param  
	 * @return 关键帧数量
	 */
	public int getNumKeyFrames()
	{
		int returnValue = getNumKeyFrames_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumKeyFrames_void_NoVirtual(long pNativeObject);
	protected int getNumKeyFrames_NoVirtual()
	{
		int returnValue = getNumKeyFrames_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getKeyFrame_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.KeyFrame returnValue = getKeyFrame(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据索引获得关键帧
	 * @param index 关键帧索引
	 * @return 关键帧指针
	 */
	public com.earthview.world.graphic.KeyFrame getKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long getKeyFrame_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.KeyFrame getKeyFrame_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getKeyFrame_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	protected  double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(long timeIndex, long keyFrame1, long keyFrame2, long firstKeyIndex)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1ParamValue = (keyFrame1 == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.KeyFrame>(new InstancePointer(keyFrame1)));
		NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2ParamValue = (keyFrame2 == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.KeyFrame>(new InstancePointer(keyFrame2)));
		UShortPointer firstKeyIndexParamValue = (firstKeyIndex == 0L ? null : new UShortPointer(new InstancePointer(firstKeyIndex)));
		double returnValue = getKeyFramesAtTime(timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue, firstKeyIndexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(long pNativeObject, long timeIndex, long keyFrame1, long keyFrame2, long firstKeyIndex);
	/**
	 * 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引
	 * @param timeIndex 时间索引
	 * @param keyFrame1 关键帧1
	 * @param keyFrame2 关键帧2
	 * @param firstKeyIndex 关键帧索引
	 * @return 前后两关键帧之间的时间距离
	 */
	public double getKeyFramesAtTime(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2, UShortPointer firstKeyIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long keyFrame1ParamValue = (keyFrame1 == null ? 0L : keyFrame1.nativeObject.pointer);
		long keyFrame2ParamValue = (keyFrame2 == null ? 0L : keyFrame2.nativeObject.pointer);
		long firstKeyIndexParamValue = (firstKeyIndex == null ? 0L : firstKeyIndex.nativeObject.pointer);
		double returnValue = getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.nativeObject.pointer, timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue, firstKeyIndexParamValue);
		return returnValue;
	}
	native private double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_NoVirtual(long pNativeObject, long timeIndex, long keyFrame1, long keyFrame2, long firstKeyIndex);
	protected double getKeyFramesAtTime_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2, UShortPointer firstKeyIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long keyFrame1ParamValue = (keyFrame1 == null ? 0L : keyFrame1.nativeObject.pointer);
		long keyFrame2ParamValue = (keyFrame2 == null ? 0L : keyFrame2.nativeObject.pointer);
		long firstKeyIndexParamValue = (firstKeyIndex == null ? 0L : firstKeyIndex.nativeObject.pointer);
		double returnValue = getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue, firstKeyIndexParamValue);
		return returnValue;
	}

	protected  double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(long timeIndex, long keyFrame1, long keyFrame2)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1ParamValue = (keyFrame1 == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.KeyFrame>(new InstancePointer(keyFrame1)));
		NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2ParamValue = (keyFrame2 == 0L ? null : new NativeObjectPointer<com.earthview.world.graphic.KeyFrame>(new InstancePointer(keyFrame2)));
		double returnValue = getKeyFramesAtTime(timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(long pNativeObject, long timeIndex, long keyFrame1, long keyFrame2);
	/**
	 * 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
	 * @param timeIndex 时间索引
	 * @param keyFrame1 关键帧1
	 * @param keyFrame2 关键帧2
	 * @return 前后两关键帧之间的时间距离
	 */
	public double getKeyFramesAtTime(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long keyFrame1ParamValue = (keyFrame1 == null ? 0L : keyFrame1.nativeObject.pointer);
		long keyFrame2ParamValue = (keyFrame2 == null ? 0L : keyFrame2.nativeObject.pointer);
		double returnValue = getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(this.nativeObject.pointer, timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue);
		return returnValue;
	}
	native private double getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_NoVirtual(long pNativeObject, long timeIndex, long keyFrame1, long keyFrame2);
	protected double getKeyFramesAtTime_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long keyFrame1ParamValue = (keyFrame1 == null ? 0L : keyFrame1.nativeObject.pointer);
		long keyFrame2ParamValue = (keyFrame2 == null ? 0L : keyFrame2.nativeObject.pointer);
		double returnValue = getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, keyFrame1ParamValue, keyFrame2ParamValue);
		return returnValue;
	}

	protected  long createKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.KeyFrame returnValue = createKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 在给定的时间点创建关键帧
	 * @param timePos 时间点
	 * @return 创建的关键帧
	 */
	public com.earthview.world.graphic.KeyFrame createKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long createKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.KeyFrame createKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	protected  void removeKeyFrame_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		removeKeyFrame(indexParamValue);
	}

	native private void removeKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据索引删除关键帧
	 * @param index 关键帧索引
	 */
	public void removeKeyFrame(int index)
	{
		int indexParamValue = index;
		removeKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeKeyFrame_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected void removeKeyFrame_NoVirtual(int index)
	{
		int indexParamValue = index;
		removeKeyFrame_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeAllKeyFrames_void_callback()
	{
		removeAllKeyFrames();
	}

	native private void removeAllKeyFrames_void(long pNativeObject);
	/**
	 * 删除所有关键帧
	 * @param 0 0
	 */
	public void removeAllKeyFrames()
	{
		removeAllKeyFrames_void(this.nativeObject.pointer);
	}
	native private void removeAllKeyFrames_void_NoVirtual(long pNativeObject);
	protected void removeAllKeyFrames_NoVirtual()
	{
		removeAllKeyFrames_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(long timeIndex, long kf)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		com.earthview.world.graphic.KeyFrame kfParamValue = (kf == 0L ? null : new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate));
		if(kfParamValue != null)
		{
		kfParamValue.setDelegate(true);
		kfParamValue.setInstancePointer(new InstancePointer(kf));
		IClassFactory kfParamValueClassFactory = GlobalClassFactoryMap.get(kfParamValue.getCppInstanceTypeName());
		if (kfParamValueClassFactory != null)
		{
			kfParamValue.setDelegate(true);
			kfParamValue = (com.earthview.world.graphic.KeyFrame)kfParamValueClassFactory.create();
			kfParamValue.setDelegate(true);
			kfParamValue.setInstancePointer(new InstancePointer(kf));
		}
		}
		getInterpolatedKeyFrame(timeIndexParamValue, kfParamValue);
	}

	native private void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(long pNativeObject, long timeIndex, long kf);
	/**
	 * 关键帧插值
	 * @param timeIndex 时间索引
	 * @param kf 插值结果
	 */
	public void getInterpolatedKeyFrame(com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
		getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(this.nativeObject.pointer, timeIndexParamValue, kfParamValue);
	}
	native private void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_NoVirtual(long pNativeObject, long timeIndex, long kf);
	protected void getInterpolatedKeyFrame_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
		getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, kfParamValue);
	}

	protected  void apply_CTimeIndex_Real_Real_callback(long timeIndex, double weight, double scale)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply(timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	native private void apply_CTimeIndex_Real_Real(long pNativeObject, long timeIndex, double weight, double scale);
	/**
	 * 对特定的动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 * @param weight 动画轨迹影响权重
	 * @param scale 动画大小变换比例
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_CTimeIndex_Real_Real(this.nativeObject.pointer, timeIndexParamValue, weightParamValue, scaleParamValue);
	}
	native private void apply_CTimeIndex_Real_Real_NoVirtual(long pNativeObject, long timeIndex, double weight, double scale);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_CTimeIndex_Real_Real_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	protected  void apply_CTimeIndex_Real_callback(long timeIndex, double weight)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		double weightParamValue = weight;
		apply(timeIndexParamValue, weightParamValue);
	}

	native private void apply_CTimeIndex_Real(long pNativeObject, long timeIndex, double weight);
	/**
	 * 对特定的动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 * @param weight 动画轨迹影响权重
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		apply_CTimeIndex_Real(this.nativeObject.pointer, timeIndexParamValue, weightParamValue);
	}
	native private void apply_CTimeIndex_Real_NoVirtual(long pNativeObject, long timeIndex, double weight);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		apply_CTimeIndex_Real_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, weightParamValue);
	}

	protected  void apply_CTimeIndex_callback(long timeIndex)
	{
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		apply(timeIndexParamValue);
	}

	native private void apply_CTimeIndex(long pNativeObject, long timeIndex);
	/**
	 * 对特定的动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		apply_CTimeIndex(this.nativeObject.pointer, timeIndexParamValue);
	}
	native private void apply_CTimeIndex_NoVirtual(long pNativeObject, long timeIndex);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		apply_CTimeIndex_NoVirtual(this.nativeObject.pointer, timeIndexParamValue);
	}

	protected  void _keyFrameDataChanged_void_callback()
	{
		_keyFrameDataChanged();
	}

	native private void _keyFrameDataChanged_void(long pNativeObject);
	/**
	 * 通知动画轨迹动画帧已经改变
	 * @param  
	 */
	public void _keyFrameDataChanged()
	{
		_keyFrameDataChanged_void(this.nativeObject.pointer);
	}
	native private void _keyFrameDataChanged_void_NoVirtual(long pNativeObject);
	protected void _keyFrameDataChanged_NoVirtual()
	{
		_keyFrameDataChanged_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean hasNonZeroKeyFrames_void_callback()
	{
		boolean returnValue = hasNonZeroKeyFrames();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasNonZeroKeyFrames_void(long pNativeObject);
	/**
	 * 判断动画轨迹是否含有效帧
	 * @param  
	 * @return 存在返回true，否则false
	 */
	public boolean hasNonZeroKeyFrames()
	{
		boolean returnValue = hasNonZeroKeyFrames_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasNonZeroKeyFrames_void_NoVirtual(long pNativeObject);
	protected boolean hasNonZeroKeyFrames_NoVirtual()
	{
		boolean returnValue = hasNonZeroKeyFrames_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void optimise_void_callback()
	{
		optimise();
	}

	native private void optimise_void(long pNativeObject);
	/**
	 * 通过删除相同关键帧优化动画轨迹
	 * @param  
	 */
	public void optimise()
	{
		optimise_void(this.nativeObject.pointer);
	}
	native private void optimise_void_NoVirtual(long pNativeObject);
	protected void optimise_NoVirtual()
	{
		optimise_void_NoVirtual(this.nativeObject.pointer);
	}

	/**
	 * 关键帧时间集合类管理关键帧时间集合
	 */
	public static class KeyFrameTimes extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes", new KeyFrameTimesClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public KeyFrameTimes() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("KeyFrameTimes", null);
		}

		native private void push_back_Real(long pNativeObject, double t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(double t)
		{
			double tParamValue = t;
			push_back_Real(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		/**
		 * 删除容器最后元素
		 * @param  
		 */
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		/**
		 * 返回容器首个元素
		 * @param  
		 * @return 返回容器首个元素
		 */
		public DoublePointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public DoublePointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_Real(long pNativeObject, long pos, double t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, double t)
		{
			long posParamValue = pos;
			double tParamValue = t;
			insert_ev_uint32_Real(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 删除容器中间位置元素
		 * @param pos 位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 返回容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		/**
		 * 重载[]操作符
		 * @param n 下标位置
		 * @return 返回下标对应的值
		 */
		public DoublePointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public DoublePointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回元素的数量大小
		 * @param  
		 * @return 返回元素的数量大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 改变容器中元素数量大小
		 * @param newSize 改变的容器中元素数量大小
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 改变容器中最小的元素容纳数量
		 * @param count 最小的元素容纳数量
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空所有元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public KeyFrameTimes(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public KeyFrameTimes(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static KeyFrameTimes fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			KeyFrameTimes obj = null;
 			if(baseObj instanceof KeyFrameTimes)
			{
				obj = (KeyFrameTimes)baseObj;
			} else {
				obj = new KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "KeyFrameTimes");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class KeyFrameTimesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			KeyFrameTimes emptyInstance = new KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void _collectKeyFrameTimes_KeyFrameTimes_callback(long keyFrameTimes)
	{
		com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimesParamValue = new com.earthview.world.graphic.AnimationTrack.KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
		keyFrameTimesParamValue.setDelegate(true);
		keyFrameTimesParamValue.setInstancePointer(new InstancePointer(keyFrameTimes));
		IClassFactory keyFrameTimesParamValueClassFactory = GlobalClassFactoryMap.get(keyFrameTimesParamValue.getCppInstanceTypeName());
		if (keyFrameTimesParamValueClassFactory != null)
		{
			keyFrameTimesParamValue.setDelegate(true);
			keyFrameTimesParamValue = (com.earthview.world.graphic.AnimationTrack.KeyFrameTimes)keyFrameTimesParamValueClassFactory.create();
			keyFrameTimesParamValue.setDelegate(true);
			keyFrameTimesParamValue.setInstancePointer(new InstancePointer(keyFrameTimes));
		}
		_collectKeyFrameTimes(keyFrameTimesParamValue);
	}

	native private void _collectKeyFrameTimes_KeyFrameTimes(long pNativeObject, long keyFrameTimes);
	/**
	 * 以唯一、有序的排列方式收集关键帧时间
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _collectKeyFrameTimes(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		long keyFrameTimesParamValue = keyFrameTimes.nativeObject.pointer;
		_collectKeyFrameTimes_KeyFrameTimes(this.nativeObject.pointer, keyFrameTimesParamValue);
	}
	native private void _collectKeyFrameTimes_KeyFrameTimes_NoVirtual(long pNativeObject, long keyFrameTimes);
	protected void _collectKeyFrameTimes_NoVirtual(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		long keyFrameTimesParamValue = keyFrameTimes.nativeObject.pointer;
		_collectKeyFrameTimes_KeyFrameTimes_NoVirtual(this.nativeObject.pointer, keyFrameTimesParamValue);
	}

	protected  void _buildKeyFrameIndexMap_KeyFrameTimes_callback(long keyFrameTimes)
	{
		com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimesParamValue = new com.earthview.world.graphic.AnimationTrack.KeyFrameTimes(CreatedWhenConstruct.CWC_NotToCreate);
		keyFrameTimesParamValue.setDelegate(true);
		keyFrameTimesParamValue.setInstancePointer(new InstancePointer(keyFrameTimes));
		IClassFactory keyFrameTimesParamValueClassFactory = GlobalClassFactoryMap.get(keyFrameTimesParamValue.getCppInstanceTypeName());
		if (keyFrameTimesParamValueClassFactory != null)
		{
			keyFrameTimesParamValue.setDelegate(true);
			keyFrameTimesParamValue = (com.earthview.world.graphic.AnimationTrack.KeyFrameTimes)keyFrameTimesParamValueClassFactory.create();
			keyFrameTimesParamValue.setDelegate(true);
			keyFrameTimesParamValue.setInstancePointer(new InstancePointer(keyFrameTimes));
		}
		_buildKeyFrameIndexMap(keyFrameTimesParamValue);
	}

	native private void _buildKeyFrameIndexMap_KeyFrameTimes(long pNativeObject, long keyFrameTimes);
	/**
	 * 创建关键帧时间索引集合
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _buildKeyFrameIndexMap(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		long keyFrameTimesParamValue = keyFrameTimes.nativeObject.pointer;
		_buildKeyFrameIndexMap_KeyFrameTimes(this.nativeObject.pointer, keyFrameTimesParamValue);
	}
	native private void _buildKeyFrameIndexMap_KeyFrameTimes_NoVirtual(long pNativeObject, long keyFrameTimes);
	protected void _buildKeyFrameIndexMap_NoVirtual(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		long keyFrameTimesParamValue = keyFrameTimes.nativeObject.pointer;
		_buildKeyFrameIndexMap_KeyFrameTimes_NoVirtual(this.nativeObject.pointer, keyFrameTimesParamValue);
	}

	protected  void _applyBaseKeyFrame_CKeyFrame_callback(long base)
	{
		com.earthview.world.graphic.KeyFrame baseParamValue = (base == 0L ? null : new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate));
		if(baseParamValue != null)
		{
		baseParamValue.setDelegate(true);
		baseParamValue.setInstancePointer(new InstancePointer(base));
		IClassFactory baseParamValueClassFactory = GlobalClassFactoryMap.get(baseParamValue.getCppInstanceTypeName());
		if (baseParamValueClassFactory != null)
		{
			baseParamValue.setDelegate(true);
			baseParamValue = (com.earthview.world.graphic.KeyFrame)baseParamValueClassFactory.create();
			baseParamValue.setDelegate(true);
			baseParamValue.setInstancePointer(new InstancePointer(base));
		}
		}
		_applyBaseKeyFrame(baseParamValue);
	}

	native private void _applyBaseKeyFrame_CKeyFrame(long pNativeObject, long base);
	/**
	 * 应用关键帧
	 * @param keyFrameTimes 关键帧对象
	 */
	public void _applyBaseKeyFrame(com.earthview.world.graphic.KeyFrame base)
	{
		long baseParamValue = (base == null ? 0L : base.nativeObject.pointer);
		_applyBaseKeyFrame_CKeyFrame(this.nativeObject.pointer, baseParamValue);
	}
	native private void _applyBaseKeyFrame_CKeyFrame_NoVirtual(long pNativeObject, long base);
	protected void _applyBaseKeyFrame_NoVirtual(com.earthview.world.graphic.KeyFrame base)
	{
		long baseParamValue = (base == null ? 0L : base.nativeObject.pointer);
		_applyBaseKeyFrame_CKeyFrame_NoVirtual(this.nativeObject.pointer, baseParamValue);
	}

	protected  void setListener_CAnimationTrackListener_callback(long ref_l)
	{
		com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_lParamValue = (ref_l == 0L ? null : new com.earthview.world.graphic.AnimationTrack.AnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lParamValue != null)
		{
		ref_lParamValue.setDelegate(true);
		ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		IClassFactory ref_lParamValueClassFactory = GlobalClassFactoryMap.get(ref_lParamValue.getCppInstanceTypeName());
		if (ref_lParamValueClassFactory != null)
		{
			ref_lParamValue.setDelegate(true);
			ref_lParamValue = (com.earthview.world.graphic.AnimationTrack.AnimationTrackListener)ref_lParamValueClassFactory.create();
			ref_lParamValue.setDelegate(true);
			ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		}
		}
		setListener(ref_lParamValue);
	}

	native private void setListener_CAnimationTrackListener(long pNativeObject, long ref_l);
	/**
	 * 设置动画轨迹的监听器
	 * @param l 动画轨迹的监听器对象
	 */
	public void setListener(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		setListener_CAnimationTrackListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void setListener_CAnimationTrackListener_NoVirtual(long pNativeObject, long ref_l);
	protected void setListener_NoVirtual(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		setListener_CAnimationTrackListener_NoVirtual(this.nativeObject.pointer, ref_lParamValue);
	}

	native private long getParent_void(long pNativeObject);
	/**
	 * 获得动画轨迹所属动画对象
	 * @param  
	 * @return 动画对象
	 */
	public com.earthview.world.graphic.Animation getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
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
	protected  long createKeyFrameImpl_Real_callback(double time)
	{
		double timeParamValue = time;
		com.earthview.world.graphic.KeyFrame returnValue = createKeyFrameImpl(timeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createKeyFrameImpl_Real(long pNativeObject, double time);
	/**
	 * 创建关键帧执行实例
	 * @param time 动画时间
	 * @return 关键帧对象
	 */
	public com.earthview.world.graphic.KeyFrame createKeyFrameImpl(double time)
	{
		double timeParamValue = time;
		long returnValue = createKeyFrameImpl_Real(this.nativeObject.pointer, timeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long createKeyFrameImpl_Real_NoVirtual(long pNativeObject, double time);
	protected com.earthview.world.graphic.KeyFrame createKeyFrameImpl_NoVirtual(double time)
	{
		double timeParamValue = time;
		long returnValue = createKeyFrameImpl_Real_NoVirtual(this.nativeObject.pointer, timeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	protected  void populateClone_CAnimationTrack_callback(long clone)
	{
		com.earthview.world.graphic.AnimationTrack cloneParamValue = (clone == 0L ? null : new com.earthview.world.graphic.AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate));
		if(cloneParamValue != null)
		{
		cloneParamValue.setDelegate(true);
		cloneParamValue.setInstancePointer(new InstancePointer(clone));
		IClassFactory cloneParamValueClassFactory = GlobalClassFactoryMap.get(cloneParamValue.getCppInstanceTypeName());
		if (cloneParamValueClassFactory != null)
		{
			cloneParamValue.setDelegate(true);
			cloneParamValue = (com.earthview.world.graphic.AnimationTrack)cloneParamValueClassFactory.create();
			cloneParamValue.setDelegate(true);
			cloneParamValue.setInstancePointer(new InstancePointer(clone));
		}
		}
		populateClone(cloneParamValue);
	}

	native private void populateClone_CAnimationTrack(long pNativeObject, long clone);
	/**
	 * clone动画轨迹
	 * @param clone 动画轨迹
	 */
	public void populateClone(com.earthview.world.graphic.AnimationTrack clone)
	{
		long cloneParamValue = (clone == null ? 0L : clone.nativeObject.pointer);
		populateClone_CAnimationTrack(this.nativeObject.pointer, cloneParamValue);
	}
	native private void populateClone_CAnimationTrack_NoVirtual(long pNativeObject, long clone);
	protected void populateClone_NoVirtual(com.earthview.world.graphic.AnimationTrack clone)
	{
		long cloneParamValue = (clone == null ? 0L : clone.nativeObject.pointer);
		populateClone_CAnimationTrack_NoVirtual(this.nativeObject.pointer, cloneParamValue);
	}

	public AnimationTrack(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationTrack(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getNumKeyFrames_void(long pNativeObject, String method);
	native protected void register_getKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(long pNativeObject, String method);
	native protected void register_createKeyFrame_Real(long pNativeObject, String method);
	native protected void register_removeKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAllKeyFrames_void(long pNativeObject, String method);
	native protected void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex_Real_Real(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex_Real(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex(long pNativeObject, String method);
	native protected void register__keyFrameDataChanged_void(long pNativeObject, String method);
	native protected void register_hasNonZeroKeyFrames_void(long pNativeObject, String method);
	native protected void register_optimise_void(long pNativeObject, String method);
	native protected void register__collectKeyFrameTimes_KeyFrameTimes(long pNativeObject, String method);
	native protected void register__buildKeyFrameIndexMap_KeyFrameTimes(long pNativeObject, String method);
	native protected void register__applyBaseKeyFrame_CKeyFrame(long pNativeObject, String method);
	native protected void register_setListener_CAnimationTrackListener(long pNativeObject, String method);
	native protected void register_createKeyFrameImpl_Real(long pNativeObject, String method);
	native protected void register_populateClone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getNumKeyFrames_void(this.nativeObject.pointer, "getNumKeyFrames_void_callback");
			this.register_getKeyFrame_ev_uint16(this.nativeObject.pointer, "getKeyFrame_ev_uint16_callback");
			this.register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.nativeObject.pointer, "getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
			this.register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(this.nativeObject.pointer, "getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
			this.register_createKeyFrame_Real(this.nativeObject.pointer, "createKeyFrame_Real_callback");
			this.register_removeKeyFrame_ev_uint16(this.nativeObject.pointer, "removeKeyFrame_ev_uint16_callback");
			this.register_removeAllKeyFrames_void(this.nativeObject.pointer, "removeAllKeyFrames_void_callback");
			this.register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(this.nativeObject.pointer, "getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
			this.register_apply_CTimeIndex_Real_Real(this.nativeObject.pointer, "apply_CTimeIndex_Real_Real_callback");
			this.register_apply_CTimeIndex_Real(this.nativeObject.pointer, "apply_CTimeIndex_Real_callback");
			this.register_apply_CTimeIndex(this.nativeObject.pointer, "apply_CTimeIndex_callback");
			this.register__keyFrameDataChanged_void(this.nativeObject.pointer, "_keyFrameDataChanged_void_callback");
			this.register_hasNonZeroKeyFrames_void(this.nativeObject.pointer, "hasNonZeroKeyFrames_void_callback");
			this.register_optimise_void(this.nativeObject.pointer, "optimise_void_callback");
			this.register__collectKeyFrameTimes_KeyFrameTimes(this.nativeObject.pointer, "_collectKeyFrameTimes_KeyFrameTimes_callback");
			this.register__buildKeyFrameIndexMap_KeyFrameTimes(this.nativeObject.pointer, "_buildKeyFrameIndexMap_KeyFrameTimes_callback");
			this.register__applyBaseKeyFrame_CKeyFrame(this.nativeObject.pointer, "_applyBaseKeyFrame_CKeyFrame_callback");
			this.register_setListener_CAnimationTrackListener(this.nativeObject.pointer, "setListener_CAnimationTrackListener_callback");
			this.register_createKeyFrameImpl_Real(this.nativeObject.pointer, "createKeyFrameImpl_Real_callback");
			this.register_populateClone_CAnimationTrack(this.nativeObject.pointer, "populateClone_CAnimationTrack_callback");
		}
	}
	
	public static AnimationTrack fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationTrack obj = null;
 		if(baseObj instanceof AnimationTrack)
		{
			obj = (AnimationTrack)baseObj;
		} else {
			obj = new AnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationTrack");
			obj.increaseCast();
		}

		return obj;
	}
}
