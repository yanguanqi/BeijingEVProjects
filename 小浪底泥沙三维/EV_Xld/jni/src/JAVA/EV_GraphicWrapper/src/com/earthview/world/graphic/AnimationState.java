package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画状态类管理动画的状态
 */
public class AnimationState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationState", new AnimationStateClassFactory());
	}

	/**
	 * 骨骼动画混合权重集合类管理骨骼动画混合权重
	 */
	public static class BoneBlendMask extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationState::BoneBlendMask", new BoneBlendMaskClassFactory());
		}

		/**
		 * 构造函数
		 * @param blendMaskSizeHint 初始构造的元素数量
		 * @param initialWeight 初始构造的元素值
		 */
		public BoneBlendMask(long blendMaskSizeHint, float initialWeight) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer blendMaskSizeHintPtr = new BasePointer(blendMaskSizeHint);
			list.add("blendMaskSizeHint", blendMaskSizeHintPtr.get());
			BasePointer initialWeightPtr = new BasePointer(initialWeight);
			list.add("initialWeight", initialWeightPtr.get());
			Create("BoneBlendMask", list);
		}

		/**
		 * 构造函数
		 * @param blendMaskSizeHint 初始构造集合的大小
		 */
		public BoneBlendMask(long blendMaskSizeHint) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer blendMaskSizeHintPtr = new BasePointer(blendMaskSizeHint);
			list.add("blendMaskSizeHint", blendMaskSizeHintPtr.get());
			Create("BoneBlendMask", list);
		}

		native private void push_back_ev_real32(long pNativeObject, float t);
		/**
		 * 在容器最后添加元素
		 * @param t 元素值
		 */
		public void push_back(float t)
		{
			float tParamValue = t;
			push_back_ev_real32(this.nativeObject.pointer, tParamValue);
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
		public FloatPointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		/**
		 * 返回容器最后元素
		 * @param  
		 * @return 返回容器最后元素
		 */
		public FloatPointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_ev_real32(long pNativeObject, long pos, float t);
		/**
		 * 容器中间位置插入元素
		 * @param pos 位置
		 * @param t 元素值
		 */
		public void insert(long pos, float t)
		{
			long posParamValue = pos;
			float tParamValue = t;
			insert_ev_uint32_ev_real32(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public FloatPointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		/**
		 * 返回某位置的元素值
		 * @param n 位置
		 * @return 返回位置对应的值
		 */
		public FloatPointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
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
		public BoneBlendMask(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BoneBlendMask(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BoneBlendMask fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BoneBlendMask obj = null;
 			if(baseObj instanceof BoneBlendMask)
			{
				obj = (BoneBlendMask)baseObj;
			} else {
				obj = new BoneBlendMask(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BoneBlendMask");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BoneBlendMaskClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BoneBlendMask emptyInstance = new BoneBlendMask(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param animName 动画名称
	 * @param parent 所属动画状态集合
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 * @param weight 动画权重
	 * @param enabled 动画enable开关
	 */
	public AnimationState(String animName, com.earthview.world.graphic.AnimationStateSet ref_parent, double timePos, double length, double weight, boolean enabled) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer animNamePtr = new BasePointer(animName);
		list.add("animName", animNamePtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePosPtr = new BasePointer(timePos);
		list.add("timePos", timePosPtr.get());
		BasePointer lengthPtr = new BasePointer(length);
		list.add("length", lengthPtr.get());
		BasePointer weightPtr = new BasePointer(weight);
		list.add("weight", weightPtr.get());
		BasePointer enabledPtr = new BasePointer(enabled);
		list.add("enabled", enabledPtr.get());
		Create("CAnimationState", list);
	}

	/**
	 * 构造函数
	 * @param animName 动画名称
	 * @param parent 所属动画状态集合
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 * @param weight 动画权重
	 */
	public AnimationState(String animName, com.earthview.world.graphic.AnimationStateSet ref_parent, double timePos, double length, double weight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer animNamePtr = new BasePointer(animName);
		list.add("animName", animNamePtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePosPtr = new BasePointer(timePos);
		list.add("timePos", timePosPtr.get());
		BasePointer lengthPtr = new BasePointer(length);
		list.add("length", lengthPtr.get());
		BasePointer weightPtr = new BasePointer(weight);
		list.add("weight", weightPtr.get());
		Create("CAnimationState", list);
	}

	/**
	 * 构造函数
	 * @param animName 动画名称
	 * @param parent 所属动画状态集合
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 */
	public AnimationState(String animName, com.earthview.world.graphic.AnimationStateSet ref_parent, double timePos, double length) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer animNamePtr = new BasePointer(animName);
		list.add("animName", animNamePtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePosPtr = new BasePointer(timePos);
		list.add("timePos", timePosPtr.get());
		BasePointer lengthPtr = new BasePointer(length);
		list.add("length", lengthPtr.get());
		Create("CAnimationState", list);
	}

	/**
	 * 复制构造函数
	 * @param parent 所属动画状态集合
	 * @param rhs 其它动画状态
	 */
	public AnimationState(com.earthview.world.graphic.AnimationStateSet ref_parent, com.earthview.world.graphic.AnimationState rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CAnimationState", list);
	}

	native private long getAnimationName_void(long pNativeObject);
	/**
	 * 获得动画名称
	 * @param  
	 * @return 动画名称
	 */
	public StringPointer getAnimationName()
	{
		long returnValue = getAnimationName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getTimePosition_void(long pNativeObject);
	/**
	 * 获得动画当前时间点
	 * @param  
	 * @return 当前时间点
	 */
	public double getTimePosition()
	{
		double returnValue = getTimePosition_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimePosition_Real(long pNativeObject, double timePos);
	/**
	 * 设置动画当前时间点
	 * @param timePos 当前时间点
	 */
	public void setTimePosition(double timePos)
	{
		double timePosParamValue = timePos;
		setTimePosition_Real(this.nativeObject.pointer, timePosParamValue);
	}
	native private void setTimePositionInRange_Real(long pNativeObject, double timePos);
	/**
	 * 设置动画当前时间点,并保持在夹取时间段内
	 * @param timePos 当前时间点
	 */
	public void setTimePositionInRange(double timePos)
	{
		double timePosParamValue = timePos;
		setTimePositionInRange_Real(this.nativeObject.pointer, timePosParamValue);
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
	native private double getWeight_void(long pNativeObject);
	/**
	 * 获得动画权重
	 * @param  
	 * @return 动画权重
	 */
	public double getWeight()
	{
		double returnValue = getWeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWeight_Real(long pNativeObject, double weight);
	/**
	 * 设置动画权重
	 * @param weight 动画权重
	 */
	public void setWeight(double weight)
	{
		double weightParamValue = weight;
		setWeight_Real(this.nativeObject.pointer, weightParamValue);
	}
	native private void addTime_Real(long pNativeObject, double offset);
	/**
	 * 移动当前时间点，使动画状态在时间线上向前移
	 * @param offset 时间移动量
	 */
	public void addTime(double offset)
	{
		double offsetParamValue = offset;
		addTime_Real(this.nativeObject.pointer, offsetParamValue);
	}
	native private boolean hasEnded_void(long pNativeObject);
	/**
	 * 返回动画是否播放结束
	 * @param  
	 * @return 动画状态在end返回true，否则false
	 */
	public boolean hasEnded()
	{
		boolean returnValue = hasEnded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 返回动画是否处于启用状态
	 * @param  
	 * @return 动画状态enable返回true，否则false
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置动画启用状态
	 * @param enabled 动画启用状态
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean OperatorEquals_CAnimationState(long pNativeObject, long rhs);
	/**
	 * 重载==操作符
	 * @param rhs 其它动画状态
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.graphic.AnimationState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CAnimationState(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CAnimationState(long pNativeObject, long rhs);
	/**
	 * 重载!=操作符
	 * @param rhs 其它动画状态
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.graphic.AnimationState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CAnimationState(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void setLoop_ev_bool(long pNativeObject, boolean loop);
	/**
	 * 设置动画是否循环
	 * @param loop 动画循环状态
	 */
	public void setLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setLoop_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private boolean getLoop_void(long pNativeObject);
	/**
	 * 获得动画是否循环
	 * @param  
	 * @return 动画循环状态
	 */
	public boolean getLoop()
	{
		boolean returnValue = getLoop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFinished_void(long pNativeObject);
	/**
	 * 获得动画是否播放到末尾并停止
	 * @param  
	 */
	public boolean isFinished()
	{
		boolean returnValue = isFinished_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void copyStateFrom_CAnimationState(long pNativeObject, long animState);
	/**
	 * 从其它动画状态复制状态
	 * @param animState 其它动画状态
	 */
	public void copyStateFrom(com.earthview.world.graphic.AnimationState animState)
	{
		long animStateParamValue = animState.nativeObject.pointer;
		copyStateFrom_CAnimationState(this.nativeObject.pointer, animStateParamValue);
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获得所属动画状态集合
	 * @param  
	 * @return 动画状态集合
	 */
	public com.earthview.world.graphic.AnimationStateSet getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationStateSet __returnValue = new com.earthview.world.graphic.AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationStateSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationStateSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationStateSet");
		}
		return __returnValue;
	}
	native private void createBlendMask_ev_size_t_ev_real32(long pNativeObject, long blendMaskSizeHint, float initialWeight);
	/**
	 * 创建骨骼动画混合权重集合
	 * @param blendMaskSizeHint 骨骼中骨的数量
	 * @param initialWeight 权重
	 */
	public void createBlendMask(long blendMaskSizeHint, float initialWeight)
	{
		long blendMaskSizeHintParamValue = blendMaskSizeHint;
		float initialWeightParamValue = initialWeight;
		createBlendMask_ev_size_t_ev_real32(this.nativeObject.pointer, blendMaskSizeHintParamValue, initialWeightParamValue);
	}
	native private void createBlendMask_ev_size_t(long pNativeObject, long blendMaskSizeHint);
	/**
	 * 创建骨骼动画混合权重集合，权重为1.0
	 * @param blendMaskSizeHint 骨骼中骨的数量
	 */
	public void createBlendMask(long blendMaskSizeHint)
	{
		long blendMaskSizeHintParamValue = blendMaskSizeHint;
		createBlendMask_ev_size_t(this.nativeObject.pointer, blendMaskSizeHintParamValue);
	}
	native private void destroyBlendMask_void(long pNativeObject);
	/**
	 * 删除当前动画混合权重集合
	 * @param  
	 */
	public void destroyBlendMask()
	{
		destroyBlendMask_void(this.nativeObject.pointer);
	}
	native private void _setBlendMaskData_ev_real32(long pNativeObject, long blendMaskData);
	/**
	 * 设置动画混合权重集合
	 * @param blendMaskData 权重数组
	 */
	public void _setBlendMaskData(FloatPointer blendMaskData)
	{
		long blendMaskDataParamValue = (blendMaskData == null ? 0L : blendMaskData.nativeObject.pointer);
		_setBlendMaskData_ev_real32(this.nativeObject.pointer, blendMaskDataParamValue);
	}
	native private void _setBlendMask_BoneBlendMask(long pNativeObject, long blendMask);
	/**
	 * 设置动画混合权重集合
	 * @param blendMask 骨骼动画混合权重集合类对象
	 */
	public void _setBlendMask(com.earthview.world.graphic.AnimationState.BoneBlendMask blendMask)
	{
		long blendMaskParamValue = (blendMask == null ? 0L : blendMask.nativeObject.pointer);
		_setBlendMask_BoneBlendMask(this.nativeObject.pointer, blendMaskParamValue);
	}
	native private long getBlendMask_void(long pNativeObject);
	/**
	 * 获得当前动画混合权重集合
	 * @param  
	 * @return 当前动画混合权重集合
	 */
	public com.earthview.world.graphic.AnimationState.BoneBlendMask getBlendMask()
	{
		long returnValue = getBlendMask_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState.BoneBlendMask __returnValue = new com.earthview.world.graphic.AnimationState.BoneBlendMask(CreatedWhenConstruct.CWC_NotToCreate, "BoneBlendMask");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState.BoneBlendMask)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "BoneBlendMask");
		}
		return __returnValue;
	}
	native private boolean hasBlendMask_void(long pNativeObject);
	/**
	 * 判断当前动画是否具有有效权重集合
	 * @param  
	 * @return 存在返回true，否则false
	 */
	public boolean hasBlendMask()
	{
		boolean returnValue = hasBlendMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlendMaskEntry_ev_size_t_ev_real32(long pNativeObject, long boneHandle, float weight);
	/**
	 * 根据Bone标识设置其动画权重
	 * @param boneHandle bone标识
	 * @param weight 权重
	 */
	public void setBlendMaskEntry(long boneHandle, float weight)
	{
		long boneHandleParamValue = boneHandle;
		float weightParamValue = weight;
		setBlendMaskEntry_ev_size_t_ev_real32(this.nativeObject.pointer, boneHandleParamValue, weightParamValue);
	}
	native private float getBlendMaskEntry_ev_size_t(long pNativeObject, long boneHandle);
	/**
	 * 根据Bone标识获得其动画权重
	 * @param boneHandle bone标识
	 * @return 权重
	 */
	public float getBlendMaskEntry(long boneHandle)
	{
		long boneHandleParamValue = boneHandle;
		float returnValue = getBlendMaskEntry_ev_size_t(this.nativeObject.pointer, boneHandleParamValue);
		return returnValue;
	}
	native private void setClipToRange_ev_bool(long pNativeObject, boolean clip);
	/**
	 * 设置是否夹取播放动画
	 * @param clip 是否夹取
	 */
	public void setClipToRange(boolean clip)
	{
		boolean clipParamValue = clip;
		setClipToRange_ev_bool(this.nativeObject.pointer, clipParamValue);
	}
	native private boolean getClipToRange_void(long pNativeObject);
	/**
	 * 返回是否夹取播放动画
	 */
	public boolean getClipToRange()
	{
		boolean returnValue = getClipToRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRange_Real_Real(long pNativeObject, double start, double end);
	/**
	 * 设置播放动画的边界
	 * @param start 边界的起始时间
	 * @param end 边界的终止时间
	 */
	public void setRange(double start, double end)
	{
		double startParamValue = start;
		double endParamValue = end;
		setRange_Real_Real(this.nativeObject.pointer, startParamValue, endParamValue);
	}
	native private double getRangeStart_void(long pNativeObject);
	/**
	 * 返回边界的起始点
	 */
	public double getRangeStart()
	{
		double returnValue = getRangeStart_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRangeEnd_void(long pNativeObject);
	/**
	 * 返回边界的终止点
	 */
	public double getRangeEnd()
	{
		double returnValue = getRangeEnd_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AnimationState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationState obj = null;
 		if(baseObj instanceof AnimationState)
		{
			obj = (AnimationState)baseObj;
		} else {
			obj = new AnimationState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationState");
			obj.increaseCast();
		}

		return obj;
	}
}
