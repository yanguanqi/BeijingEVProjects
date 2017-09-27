package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字动画轨迹类管理数字动画轨迹
 */
public class NumericAnimationTrack extends com.earthview.world.graphic.AnimationTrack {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNumericAnimationTrack", new NumericAnimationTrackClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNumericAnimationTrackProxy", new NumericAnimationTrackClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 */
	public NumericAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		Create("JCNumericAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NumericAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param target 可动画值对象
	 */
	public NumericAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.AnimableValuePtr target) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer targetPtr = new BasePointer(target);
		list.add("target", targetPtr.get());
		Create("JCNumericAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NumericAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createNumericKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.NumericKeyFrame returnValue = createNumericKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createNumericKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 在给定时间点产生新的数字动画关键帧并加入到动画序列
	 * @param timePos 动画时间点
	 * @return 产生的数字动画关键帧
	 */
	public com.earthview.world.graphic.NumericKeyFrame createNumericKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNumericKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericKeyFrame __returnValue = new com.earthview.world.graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CNumericKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericKeyFrame");
		}
		return __returnValue;
	}
	native private long createNumericKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.NumericKeyFrame createNumericKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNumericKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericKeyFrame __returnValue = new com.earthview.world.graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CNumericKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericKeyFrame");
		}
		return __returnValue;
	}

	native private void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(long pNativeObject, long timeIndex, long kf);
	/**
	 * 数字动画关键帧插值
	 * @param timeIndex 时间索引
	 * @param kf 插值结果
	 * @return 标识是否插值成功
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

	native private void apply_CTimeIndex_Real_Real(long pNativeObject, long timeIndex, double weight, double scale);
	/**
	 * 对特定的数字动画帧应用动画轨迹
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

	native private void apply_CTimeIndex_Real(long pNativeObject, long timeIndex, double weight);
	/**
	 * 对特定的数字动画帧应用动画轨迹
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

	native private void apply_CTimeIndex(long pNativeObject, long timeIndex);
	/**
	 * 对特定的数字动画帧应用动画轨迹
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

	native private void applyToAnimable_AnimableValuePtr_CTimeIndex_Real_Real(long pNativeObject, long anim, long timeIndex, double weight, double scale);
	/**
	 * 对可动画值应用动画轨迹
	 * @param anim 可动画值对象
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 * @param scale 动画大小变化比例
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long animParamValue = anim.nativeObject.pointer;
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToAnimable_AnimableValuePtr_CTimeIndex_Real_Real(this.nativeObject.pointer, animParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToAnimable_AnimableValuePtr_CTimeIndex_Real(long pNativeObject, long anim, long timeIndex, double weight);
	/**
	 * 对可动画值应用动画轨迹
	 * @param anim 可动画值对象
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long animParamValue = anim.nativeObject.pointer;
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToAnimable_AnimableValuePtr_CTimeIndex_Real(this.nativeObject.pointer, animParamValue, timeIndexParamValue, weightParamValue);
	}
	native private void applyToAnimable_AnimableValuePtr_CTimeIndex(long pNativeObject, long anim, long timeIndex);
	/**
	 * 对可动画值应用动画轨迹
	 * @param anim 可动画值对象
	 * @param timeIndex 时间索引
	 */
	public void applyToAnimable(com.earthview.world.graphic.AnimableValuePtr anim, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long animParamValue = anim.nativeObject.pointer;
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToAnimable_AnimableValuePtr_CTimeIndex(this.nativeObject.pointer, animParamValue, timeIndexParamValue);
	}
	protected  long getAssociatedAnimable_void_callback()
	{
		com.earthview.world.graphic.AnimableValuePtr returnValue = getAssociatedAnimable();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAssociatedAnimable_void(long pNativeObject);
	/**
	 * 获得相关的可动画对象指针
	 * @param  
	 * @return 可动画对象指针
	 */
	public com.earthview.world.graphic.AnimableValuePtr getAssociatedAnimable()
	{
		long returnValue = getAssociatedAnimable_void(this.nativeObject.pointer);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate, "AnimableValuePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}
	native private long getAssociatedAnimable_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.AnimableValuePtr getAssociatedAnimable_NoVirtual()
	{
		long returnValue = getAssociatedAnimable_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate, "AnimableValuePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}

	protected  void setAssociatedAnimable_AnimableValuePtr_callback(long val)
	{
		com.earthview.world.graphic.AnimableValuePtr valParamValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.graphic.AnimableValuePtr)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		setAssociatedAnimable(valParamValue);
	}

	native private void setAssociatedAnimable_AnimableValuePtr(long pNativeObject, long val);
	/**
	 * 设置相关的可动画对象
	 * @param val 可动画对象指针
	 */
	public void setAssociatedAnimable(com.earthview.world.graphic.AnimableValuePtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAssociatedAnimable_AnimableValuePtr(this.nativeObject.pointer, valParamValue);
	}
	native private void setAssociatedAnimable_AnimableValuePtr_NoVirtual(long pNativeObject, long val);
	protected void setAssociatedAnimable_NoVirtual(com.earthview.world.graphic.AnimableValuePtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setAssociatedAnimable_AnimableValuePtr_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	native private long getNumericKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据索引获得数字动画关键帧
	 * @param  
	 * @return 数字动画关键帧指针
	 */
	public com.earthview.world.graphic.NumericKeyFrame getNumericKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getNumericKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.NumericKeyFrame __returnValue = new com.earthview.world.graphic.NumericKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CNumericKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.NumericKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNumericKeyFrame");
		}
		return __returnValue;
	}
	native private long _clone_CAnimation(long pNativeObject, long newParent);
	/**
	 * clone数字动画轨迹
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.NumericAnimationTrack _clone(com.earthview.world.graphic.Animation newParent)
	{
		long newParentParamValue = (newParent == null ? 0L : newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimation(this.nativeObject.pointer, newParentParamValue);
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

	public NumericAnimationTrack(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NumericAnimationTrack(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 返回动画中关键帧数量
	 * @param  
	 * @return 关键帧数量
	 */
	public int getNumKeyFrames()
	{
		return super.getNumKeyFrames_NoVirtual();
	}
	/**
	 * 根据索引获得关键帧
	 * @param index 关键帧索引
	 * @return 关键帧指针
	 */
	public com.earthview.world.graphic.KeyFrame getKeyFrame(int index)
	{
		return super.getKeyFrame_NoVirtual(index);
	}
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
		return super.getKeyFramesAtTime_NoVirtual(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
	}
	/**
	 * 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
	 * @param timeIndex 时间索引
	 * @param keyFrame1 关键帧1
	 * @param keyFrame2 关键帧2
	 * @return 前后两关键帧之间的时间距离
	 */
	public double getKeyFramesAtTime(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2)
	{
		return super.getKeyFramesAtTime_NoVirtual(timeIndex, keyFrame1, keyFrame2);
	}
	/**
	 * 在给定的时间点创建关键帧
	 * @param timePos 时间点
	 * @return 创建的关键帧
	 */
	public com.earthview.world.graphic.KeyFrame createKeyFrame(double timePos)
	{
		return super.createKeyFrame_NoVirtual(timePos);
	}
	/**
	 * 根据索引删除关键帧
	 * @param index 关键帧索引
	 */
	public void removeKeyFrame(int index)
	{
		super.removeKeyFrame_NoVirtual(index);
	}
	/**
	 * 删除所有关键帧
	 * @param 0 0
	 */
	public void removeAllKeyFrames()
	{
		super.removeAllKeyFrames_NoVirtual();
	}
	/**
	 * 通知动画轨迹动画帧已经改变
	 * @param  
	 */
	public void _keyFrameDataChanged()
	{
		super._keyFrameDataChanged_NoVirtual();
	}
	/**
	 * 判断动画轨迹是否含有效帧
	 * @param  
	 * @return 存在返回true，否则false
	 */
	public boolean hasNonZeroKeyFrames()
	{
		return super.hasNonZeroKeyFrames_NoVirtual();
	}
	/**
	 * 通过删除相同关键帧优化动画轨迹
	 * @param  
	 */
	public void optimise()
	{
		super.optimise_NoVirtual();
	}
	/**
	 * 以唯一、有序的排列方式收集关键帧时间
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _collectKeyFrameTimes(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		super._collectKeyFrameTimes_NoVirtual(keyFrameTimes);
	}
	/**
	 * 创建关键帧时间索引集合
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _buildKeyFrameIndexMap(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		super._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
	}
	/**
	 * 应用关键帧
	 * @param keyFrameTimes 关键帧对象
	 */
	public void _applyBaseKeyFrame(com.earthview.world.graphic.KeyFrame base)
	{
		super._applyBaseKeyFrame_NoVirtual(base);
	}
	/**
	 * 设置动画轨迹的监听器
	 * @param l 动画轨迹的监听器对象
	 */
	public void setListener(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_l)
	{
		super.setListener_NoVirtual(ref_l);
	}
	/**
	 * clone动画轨迹
	 * @param clone 动画轨迹
	 */
	public void populateClone(com.earthview.world.graphic.AnimationTrack clone)
	{
		super.populateClone_NoVirtual(clone);
	}
	
	native protected void register_createNumericKeyFrame_Real(long pNativeObject, String method);
	native protected void register_getAssociatedAnimable_void(long pNativeObject, String method);
	native protected void register_setAssociatedAnimable_AnimableValuePtr(long pNativeObject, String method);
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
			this.register_createNumericKeyFrame_Real(this.nativeObject.pointer, "createNumericKeyFrame_Real_callback");
			this.register_getAssociatedAnimable_void(this.nativeObject.pointer, "getAssociatedAnimable_void_callback");
			this.register_setAssociatedAnimable_AnimableValuePtr(this.nativeObject.pointer, "setAssociatedAnimable_AnimableValuePtr_callback");
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
	
	public static NumericAnimationTrack fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NumericAnimationTrack obj = null;
 		if(baseObj instanceof NumericAnimationTrack)
		{
			obj = (NumericAnimationTrack)baseObj;
		} else {
			obj = new NumericAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNumericAnimationTrack");
			obj.increaseCast();
		}

		return obj;
	}
}
