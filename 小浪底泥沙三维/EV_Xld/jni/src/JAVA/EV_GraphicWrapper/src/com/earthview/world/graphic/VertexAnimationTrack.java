package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 顶点动画轨迹类管理顶点动画轨迹
 */
public class VertexAnimationTrack extends com.earthview.world.graphic.AnimationTrack {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexAnimationTrack", new VertexAnimationTrackClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCVertexAnimationTrackProxy", new VertexAnimationTrackClassFactory());
	}

	public enum TargetMode implements INativeEnum<TargetMode> {
		TM_SOFTWARE(TargetModeHelper.ENUM_VALUES[0]),
		TM_HARDWARE(TargetModeHelper.ENUM_VALUES[1]);
		private int value;
		TargetMode(int i) {
			this.value = i;
		}
		public TargetMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TargetMode toEnum(int retval) {
			if(retval == TM_SOFTWARE.value){
				return TM_SOFTWARE;
			}
			else if(retval == TM_HARDWARE.value){
				return TM_HARDWARE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TargetModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param animType 顶点变换动画类型
	 */
	public VertexAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.VertexAnimationType animType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer animTypePtr = new BasePointer(animType);
		list.add("animType", animTypePtr.get());
		Create("JCVertexAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param animType 顶点变换动画类型
	 * @param targetData 顶点数据对象
	 * @param target 动画类型(软/硬)
	 */
	public VertexAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.VertexAnimationType animType, com.earthview.world.graphic.VertexData ref_targetData, com.earthview.world.graphic.VertexAnimationTrack.TargetMode target) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer animTypePtr = new BasePointer(animType);
		list.add("animType", animTypePtr.get());
		BasePointer ref_targetDataPtr = new BasePointer(ref_targetData);
		list.add("ref_targetData", ref_targetDataPtr.get());
		BasePointer targetPtr = new BasePointer(target);
		list.add("target", targetPtr.get());
		Create("JCVertexAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param animType 顶点变换动画类型
	 * @param targetData 顶点数据对象
	 */
	public VertexAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.VertexAnimationType animType, com.earthview.world.graphic.VertexData ref_targetData) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer animTypePtr = new BasePointer(animType);
		list.add("animType", animTypePtr.get());
		BasePointer ref_targetDataPtr = new BasePointer(ref_targetData);
		list.add("ref_targetData", ref_targetDataPtr.get());
		Create("JCVertexAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getAnimationType_void(long pNativeObject);
	/**
	 * 获得顶点动画类型
	 * @param  
	 * @return 顶点动画类型
	 */
	public com.earthview.world.graphic.VertexAnimationType getAnimationType()
	{
		int returnValue = getAnimationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexAnimationType.toEnum(returnValue);
	}
	native private boolean getVertexAnimationIncludesNormals_void(long pNativeObject);
	/**
	 * 获得顶点动画是否包含法向量
	 * @param  
	 * @return 顶点动画类型
	 */
	public boolean getVertexAnimationIncludesNormals()
	{
		boolean returnValue = getVertexAnimationIncludesNormals_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long createVertexMorphKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.VertexMorphKeyFrame returnValue = createVertexMorphKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexMorphKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 创建变形动画关键帧
	 * @param timePos 时间点
	 * @return 变形动画关键帧指针
	 */
	public com.earthview.world.graphic.VertexMorphKeyFrame createVertexMorphKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createVertexMorphKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexMorphKeyFrame __returnValue = new com.earthview.world.graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexMorphKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexMorphKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexMorphKeyFrame");
		}
		return __returnValue;
	}
	native private long createVertexMorphKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.VertexMorphKeyFrame createVertexMorphKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createVertexMorphKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexMorphKeyFrame __returnValue = new com.earthview.world.graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexMorphKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexMorphKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexMorphKeyFrame");
		}
		return __returnValue;
	}

	protected  long createVertexPoseKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.VertexPoseKeyFrame returnValue = createVertexPoseKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexPoseKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 创建姿态动画关键帧
	 * @param timePos 时间点
	 * @return 姿态动画关键帧指针
	 */
	public com.earthview.world.graphic.VertexPoseKeyFrame createVertexPoseKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createVertexPoseKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexPoseKeyFrame __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexPoseKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexPoseKeyFrame");
		}
		return __returnValue;
	}
	native private long createVertexPoseKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.VertexPoseKeyFrame createVertexPoseKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createVertexPoseKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexPoseKeyFrame __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexPoseKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexPoseKeyFrame");
		}
		return __returnValue;
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

	protected  void applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback(long data, long timeIndex, double weight, long poseList)
	{
		com.earthview.world.graphic.VertexData dataParamValue = (data == 0L ? null : new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate));
		if(dataParamValue != null)
		{
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.graphic.VertexData)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
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
		double weightParamValue = weight;
		com.earthview.world.graphic.PoseList poseListParamValue = (poseList == 0L ? null : new com.earthview.world.graphic.PoseList(CreatedWhenConstruct.CWC_NotToCreate));
		if(poseListParamValue != null)
		{
		poseListParamValue.setDelegate(true);
		poseListParamValue.setInstancePointer(new InstancePointer(poseList));
		IClassFactory poseListParamValueClassFactory = GlobalClassFactoryMap.get(poseListParamValue.getCppInstanceTypeName());
		if (poseListParamValueClassFactory != null)
		{
			poseListParamValue.setDelegate(true);
			poseListParamValue = (com.earthview.world.graphic.PoseList)poseListParamValueClassFactory.create();
			poseListParamValue.setDelegate(true);
			poseListParamValue.setInstancePointer(new InstancePointer(poseList));
		}
		}
		applyToVertexData(dataParamValue, timeIndexParamValue, weightParamValue, poseListParamValue);
	}

	native private void applyToVertexData_CVertexData_CTimeIndex_Real_PoseList(long pNativeObject, long data, long timeIndex, double weight, long poseList);
	/**
	 * 动画轨迹应用到特定的顶点
	 * @param data 顶点数据
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 * @param poseList 姿态集合
	 */
	public void applyToVertexData(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex, double weight, com.earthview.world.graphic.PoseList poseList)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		long poseListParamValue = (poseList == null ? 0L : poseList.nativeObject.pointer);
		applyToVertexData_CVertexData_CTimeIndex_Real_PoseList(this.nativeObject.pointer, dataParamValue, timeIndexParamValue, weightParamValue, poseListParamValue);
	}
	native private void applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_NoVirtual(long pNativeObject, long data, long timeIndex, double weight, long poseList);
	protected void applyToVertexData_NoVirtual(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex, double weight, com.earthview.world.graphic.PoseList poseList)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		long poseListParamValue = (poseList == null ? 0L : poseList.nativeObject.pointer);
		applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_NoVirtual(this.nativeObject.pointer, dataParamValue, timeIndexParamValue, weightParamValue, poseListParamValue);
	}

	protected  void applyToVertexData_CVertexData_CTimeIndex_Real_callback(long data, long timeIndex, double weight)
	{
		com.earthview.world.graphic.VertexData dataParamValue = (data == 0L ? null : new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate));
		if(dataParamValue != null)
		{
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.graphic.VertexData)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
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
		double weightParamValue = weight;
		applyToVertexData(dataParamValue, timeIndexParamValue, weightParamValue);
	}

	native private void applyToVertexData_CVertexData_CTimeIndex_Real(long pNativeObject, long data, long timeIndex, double weight);
	/**
	 * 动画轨迹应用到特定的顶点
	 * @param data 顶点数据
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 */
	public void applyToVertexData(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToVertexData_CVertexData_CTimeIndex_Real(this.nativeObject.pointer, dataParamValue, timeIndexParamValue, weightParamValue);
	}
	native private void applyToVertexData_CVertexData_CTimeIndex_Real_NoVirtual(long pNativeObject, long data, long timeIndex, double weight);
	protected void applyToVertexData_NoVirtual(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToVertexData_CVertexData_CTimeIndex_Real_NoVirtual(this.nativeObject.pointer, dataParamValue, timeIndexParamValue, weightParamValue);
	}

	protected  void applyToVertexData_CVertexData_CTimeIndex_callback(long data, long timeIndex)
	{
		com.earthview.world.graphic.VertexData dataParamValue = (data == 0L ? null : new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate));
		if(dataParamValue != null)
		{
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.graphic.VertexData)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
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
		applyToVertexData(dataParamValue, timeIndexParamValue);
	}

	native private void applyToVertexData_CVertexData_CTimeIndex(long pNativeObject, long data, long timeIndex);
	/**
	 * 动画轨迹应用到特定的顶点
	 * @param data 顶点数据
	 * @param timeIndex 时间索引
	 */
	public void applyToVertexData(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToVertexData_CVertexData_CTimeIndex(this.nativeObject.pointer, dataParamValue, timeIndexParamValue);
	}
	native private void applyToVertexData_CVertexData_CTimeIndex_NoVirtual(long pNativeObject, long data, long timeIndex);
	protected void applyToVertexData_NoVirtual(com.earthview.world.graphic.VertexData data, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToVertexData_CVertexData_CTimeIndex_NoVirtual(this.nativeObject.pointer, dataParamValue, timeIndexParamValue);
	}

	native private long getVertexMorphKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得顶点变形关键帧
	 * @param index 关键帧索引
	 * @return 顶点变形关键帧
	 */
	public com.earthview.world.graphic.VertexMorphKeyFrame getVertexMorphKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getVertexMorphKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexMorphKeyFrame __returnValue = new com.earthview.world.graphic.VertexMorphKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexMorphKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexMorphKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexMorphKeyFrame");
		}
		return __returnValue;
	}
	native private long getVertexPoseKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得顶点姿态关键帧
	 * @param index 关键帧索引
	 * @return 顶点姿态关键帧
	 */
	public com.earthview.world.graphic.VertexPoseKeyFrame getVertexPoseKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getVertexPoseKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexPoseKeyFrame __returnValue = new com.earthview.world.graphic.VertexPoseKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CVertexPoseKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexPoseKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexPoseKeyFrame");
		}
		return __returnValue;
	}
	native private void setAssociatedVertexData_CVertexData(long pNativeObject, long ref_data);
	/**
	 * 设置顶点动画轨迹相关顶点数据
	 * @param data 顶点数据
	 */
	public void setAssociatedVertexData(com.earthview.world.graphic.VertexData ref_data)
	{
		long ref_dataParamValue = (ref_data == null ? 0L : ref_data.nativeObject.pointer);
		setAssociatedVertexData_CVertexData(this.nativeObject.pointer, ref_dataParamValue);
	}
	native private long getAssociatedVertexData_void(long pNativeObject);
	/**
	 * 获得顶点动画轨迹相关顶点数据
	 * @param  
	 * @return 返回顶点动画轨迹相关顶点数据
	 */
	public com.earthview.world.graphic.VertexData getAssociatedVertexData()
	{
		long returnValue = getAssociatedVertexData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private void setTargetMode_TargetMode(long pNativeObject, int m);
	/**
	 * 设置定点动画类型
	 * @param m 定点动画类型
	 */
	public void setTargetMode(com.earthview.world.graphic.VertexAnimationTrack.TargetMode m)
	{
		int mParamValue = m.getValue();
		setTargetMode_TargetMode(this.nativeObject.pointer, mParamValue);
	}
	native private int getTargetMode_void(long pNativeObject);
	/**
	 * 获得定点动画类型
	 * @param  
	 * @return 返回定点动画类型
	 */
	public com.earthview.world.graphic.VertexAnimationTrack.TargetMode getTargetMode()
	{
		int returnValue = getTargetMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.VertexAnimationTrack.TargetMode.toEnum(returnValue);
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

	native private long _clone_CAnimation(long pNativeObject, long newParent);
	/**
	 * clone顶点动画轨迹
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.VertexAnimationTrack _clone(com.earthview.world.graphic.Animation newParent)
	{
		long newParentParamValue = (newParent == null ? 0L : newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimation(this.nativeObject.pointer, newParentParamValue);
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
	native private void _applyBaseKeyFrame_CKeyFrame(long pNativeObject, long base);
	/**
	 * 应用关键帧
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
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

	native private void applyPoseToVertexData_CPose_CVertexData_Real(long pNativeObject, long pose, long data, double influence);
	/**
	 * 将姿态数据集合应用到顶点数据产生顶点姿态动画
	 * @param pose 姿态数据
	 * @param data 顶点数据
	 * @param influence 姿态影响系数
	 */
	public void applyPoseToVertexData(com.earthview.world.graphic.Pose pose, com.earthview.world.graphic.VertexData data, double influence)
	{
		long poseParamValue = (pose == null ? 0L : pose.nativeObject.pointer);
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		double influenceParamValue = influence;
		applyPoseToVertexData_CPose_CVertexData_Real(this.nativeObject.pointer, poseParamValue, dataParamValue, influenceParamValue);
	}
	public VertexAnimationTrack(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexAnimationTrack(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_createVertexMorphKeyFrame_Real(long pNativeObject, String method);
	native protected void register_createVertexPoseKeyFrame_Real(long pNativeObject, String method);
	native protected void register_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList(long pNativeObject, String method);
	native protected void register_applyToVertexData_CVertexData_CTimeIndex_Real(long pNativeObject, String method);
	native protected void register_applyToVertexData_CVertexData_CTimeIndex(long pNativeObject, String method);
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
			this.register_createVertexMorphKeyFrame_Real(this.nativeObject.pointer, "createVertexMorphKeyFrame_Real_callback");
			this.register_createVertexPoseKeyFrame_Real(this.nativeObject.pointer, "createVertexPoseKeyFrame_Real_callback");
			this.register_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList(this.nativeObject.pointer, "applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback");
			this.register_applyToVertexData_CVertexData_CTimeIndex_Real(this.nativeObject.pointer, "applyToVertexData_CVertexData_CTimeIndex_Real_callback");
			this.register_applyToVertexData_CVertexData_CTimeIndex(this.nativeObject.pointer, "applyToVertexData_CVertexData_CTimeIndex_callback");
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
	
	public static VertexAnimationTrack fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexAnimationTrack obj = null;
 		if(baseObj instanceof VertexAnimationTrack)
		{
			obj = (VertexAnimationTrack)baseObj;
		} else {
			obj = new VertexAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexAnimationTrack");
			obj.increaseCast();
		}

		return obj;
	}
}
