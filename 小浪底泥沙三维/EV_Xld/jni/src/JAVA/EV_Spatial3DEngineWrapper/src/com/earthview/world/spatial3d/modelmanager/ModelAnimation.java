package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelAnimation extends com.earthview.world.graphic.FrameListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelAnimation", new ModelAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCModelAnimationProxy", new ModelAnimationClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ModelAnimation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelAnimationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.ModelAnimation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void enableAnimation_void(long pNativeObject);
	/**
	 * 使动画有效
	 */
	public void enableAnimation()
	{
		enableAnimation_void(this.nativeObject.pointer);
	}
	native private void disableAnimation_void(long pNativeObject);
	/**
	 * 使动画无效
	 */
	public void disableAnimation()
	{
		disableAnimation_void(this.nativeObject.pointer);
	}
	native private long addAnimationState_EVString_CAnimationState_AnimationType(long pNativeObject, String animationName, long animationState, int animationType);
	/**
	 * 添加模型带有的动画对象
	 * @param animationName 动画的名字
	 * @param animationState 动画对象
	 * @param animationType 动画的类型
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation addAnimationState(String animationName, com.earthview.world.graphic.AnimationState animationState, com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation.AnimationType animationType)
	{
		String animationNameParamValue = animationName;
		long animationStateParamValue = (animationState == null ? 0L : animationState.nativeObject.pointer);
		int animationTypeParamValue = animationType.getValue();
		long returnValue = addAnimationState_EVString_CAnimationState_AnimationType(this.nativeObject.pointer, animationNameParamValue, animationStateParamValue, animationTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation(CreatedWhenConstruct.CWC_NotToCreate, "CModelAnimationInfomation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInfomation");
		}
		return __returnValue;
	}
	native private void removeAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * 移除模型带有的动画对象
	 * @param animationName 动画的名字
	 */
	public void removeAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		removeAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void startAllAnimation_void(long pNativeObject);
	/**
	 * 开始播放所有的动画
	 */
	public void startAllAnimation()
	{
		startAllAnimation_void(this.nativeObject.pointer);
	}
	native private void startAllNodeAnimation_void(long pNativeObject);
	/**
	 * 开始播放所有的动画
	 */
	public void startAllNodeAnimation()
	{
		startAllNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAllAnimation_void(long pNativeObject);
	/**
	 * 停止播放所有的动画
	 */
	public void stopAllAnimation()
	{
		stopAllAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAllNodeAnimation_void(long pNativeObject);
	/**
	 * 停止播放所有的节点动画
	 */
	public void stopAllNodeAnimation()
	{
		stopAllNodeAnimation_void(this.nativeObject.pointer);
	}
	native private void stopRangeAnimation_Real(long pNativeObject, double timePosition);
	/**
	 * 停止播放区间动画,并静止到某个时间
	 * @param timePosition 静止的时间的位置
	 */
	public void stopRangeAnimation(double timePosition)
	{
		double timePositionParamValue = timePosition;
		stopRangeAnimation_Real(this.nativeObject.pointer, timePositionParamValue);
	}
	native private void pauseAllAnimation_void(long pNativeObject);
	/**
	 * 暂停播放所有的动画
	 */
	public void pauseAllAnimation()
	{
		pauseAllAnimation_void(this.nativeObject.pointer);
	}
	native private void continueAllAnimation_void(long pNativeObject);
	/**
	 * 继续播放所有的动画
	 */
	public void continueAllAnimation()
	{
		continueAllAnimation_void(this.nativeObject.pointer);
	}
	native private void setAllAnimationLoop_ev_bool(long pNativeObject, boolean loop);
	/**
	 * 设置动画是否循环播放
	 * @param loop 动画的循环标志
	 */
	public void setAllAnimationLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setAllAnimationLoop_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private void startAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * 根据动画的名字开启某个动画
	 * @param animationName 动画的名字
	 */
	public void startAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		startAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void startAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * 根据动画的名字开启某个动画
	 * @param animationName 动画的名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void startAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		startAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void stopAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * 根据动画的名字停止某个动画
	 * @param animationName 动画的名字
	 * @param disableOther 动画的循环标志
	 * @param animationName 动画的名字
	 */
	public void stopAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		stopAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void stopAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * 根据动画的名字停止某个动画
	 * @param animationName 动画的名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void stopAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		stopAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void pauseAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * 根据动画的名字暂停某个动画
	 * @param animationName 动画的名字
	 */
	public void pauseAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		pauseAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void pauseAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * 根据动画的名字暂停某个动画
	 * @param animationName 动画的名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void pauseAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		pauseAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void continueAnimation_EVString(long pNativeObject, String animationName);
	/**
	 * 根据动画的名字继续某个动画
	 * @param animationName 动画的名字
	 */
	public void continueAnimation(String animationName)
	{
		String animationNameParamValue = animationName;
		continueAnimation_EVString(this.nativeObject.pointer, animationNameParamValue);
	}
	native private void continueAnimation_EVString_ev_bool(long pNativeObject, String animationName, boolean processChild);
	/**
	 * 根据动画的名字继续某个动画
	 * @param animationName 动画的名字
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void continueAnimation(String animationName, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean processChildParamValue = processChild;
		continueAnimation_EVString_ev_bool(this.nativeObject.pointer, animationNameParamValue, processChildParamValue);
	}
	native private void setAnimationLoop_EVString_bool(long pNativeObject, String animationName, boolean loop);
	/**
	 * 根据动画的名字设置某个动画是否循播放
	 * @param animationName 动画的名字
	 * @param loop 动画的循环标志
	 */
	public void setAnimationLoop(String animationName, boolean loop)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		setAnimationLoop_EVString_bool(this.nativeObject.pointer, animationNameParamValue, loopParamValue);
	}
	native private void setAnimationLoop_EVString_bool_ev_bool(long pNativeObject, String animationName, boolean loop, boolean processChild);
	/**
	 * 根据动画的名字设置某个动画是否循播放
	 * @param animationName 动画的名字
	 * @param loop 动画的循环标志
	 * @param processChild 是否处理子动画。(只有节点动画具有子节点)
	 */
	public void setAnimationLoop(String animationName, boolean loop, boolean processChild)
	{
		String animationNameParamValue = animationName;
		boolean loopParamValue = loop;
		boolean processChildParamValue = processChild;
		setAnimationLoop_EVString_bool_ev_bool(this.nativeObject.pointer, animationNameParamValue, loopParamValue, processChildParamValue);
	}
	native private boolean frameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 处理帧事件
	 * @param evt 帧事件对象
	 */
	public boolean frameRenderingQueued(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameRenderingQueued_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameRenderingQueued_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameRenderingQueued_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameRenderingQueued_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	native private void readNodeAnimation_CSceneManager_CNode_CXmlElement(long pNativeObject, long sceneManager, long node, long xmlElement);
	/**
	 * 读取模型的节点动画
	 * @param sceneManager 场景管理器
	 * @param node 父节点
	 * @param xmlElement 动画的XML文档节点
	 */
	public void readNodeAnimation(com.earthview.world.graphic.SceneManager sceneManager, com.earthview.world.graphic.Node node, com.earthview.world.core.XmlElement xmlElement)
	{
		long sceneManagerParamValue = (sceneManager == null ? 0L : sceneManager.nativeObject.pointer);
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		readNodeAnimation_CSceneManager_CNode_CXmlElement(this.nativeObject.pointer, sceneManagerParamValue, nodeParamValue, xmlElementParamValue);
	}
	native private void readNodeAnimation_CSceneManager_CNode_CAnimationSerializer(long pNativeObject, long sceneManager, long node, long animation);
	/**
	 * 读取模型的节点动画
	 * @param sceneManager 场景管理器
	 * @param node 父节点
	 * @param animation 动画的XML序列化对象
	 */
	public void readNodeAnimation(com.earthview.world.graphic.SceneManager sceneManager, com.earthview.world.graphic.Node node, com.earthview.world.graphic.AnimationSerializer animation)
	{
		long sceneManagerParamValue = (sceneManager == null ? 0L : sceneManager.nativeObject.pointer);
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long animationParamValue = animation.nativeObject.pointer;
		readNodeAnimation_CSceneManager_CNode_CAnimationSerializer(this.nativeObject.pointer, sceneManagerParamValue, nodeParamValue, animationParamValue);
	}
	native private long getModelAnimationInformationMap_void(long pNativeObject);
	/**
	 * 返回模型管理的动画状态
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap getModelAnimationInformationMap()
	{
		long returnValue = getModelAnimationInformationMap_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInformationMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelAnimationInformationMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CModelAnimationInformationMap");
		}
		return __returnValue;
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
	 * 设置夹取播放动画的边界
	 * @param start 边界的起始时间
	 * @param end 边界的终止时间
	 */
	public void setRange(double start, double end)
	{
		double startParamValue = start;
		double endParamValue = end;
		setRange_Real_Real(this.nativeObject.pointer, startParamValue, endParamValue);
	}
	native private void setRangeStart_Real(long pNativeObject, double start);
	/**
	 * 设置夹取播放动画的前边界
	 * @param start 边界的起始时间
	 */
	public void setRangeStart(double start)
	{
		double startParamValue = start;
		setRangeStart_Real(this.nativeObject.pointer, startParamValue);
	}
	native private void setRangeEnd_Real(long pNativeObject, double end);
	/**
	 * 设置夹取播放动画的后边界
	 * @param end 边界的结束时间
	 */
	public void setRangeEnd(double end)
	{
		double endParamValue = end;
		setRangeEnd_Real(this.nativeObject.pointer, endParamValue);
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
	native private void setFrameTagList_CFrameTagList(long pNativeObject, long frameTagList);
	/**
	 * 设置关键帧标记队列
	 */
	public void setFrameTagList(com.earthview.world.graphic.FrameTagList frameTagList)
	{
		long frameTagListParamValue = frameTagList.nativeObject.pointer;
		setFrameTagList_CFrameTagList(this.nativeObject.pointer, frameTagListParamValue);
	}
	native private long getFrameTagList_void(long pNativeObject);
	/**
	 * 返回关键帧标记队列
	 */
	public com.earthview.world.graphic.FrameTagList getFrameTagList()
	{
		long returnValue = getFrameTagList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FrameTagList __returnValue = new com.earthview.world.graphic.FrameTagList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FrameTagList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFrameTagList");
		}
		return __returnValue;
	}
	native private void setNodeAnimtionLength_Real(long pNativeObject, double timeLength);
	/**
	 * 设置节点动画的总长度
	 * @param timeLength 时间长度
	 */
	public void setNodeAnimtionLength(double timeLength)
	{
		double timeLengthParamValue = timeLength;
		setNodeAnimtionLength_Real(this.nativeObject.pointer, timeLengthParamValue);
	}
	native private double getNodeAnimtionLength_void(long pNativeObject);
	/**
	 * 返回节点动画的总长度
	 */
	public double getNodeAnimtionLength()
	{
		double returnValue = getNodeAnimtionLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ModelAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelAnimation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 帧渲染之前调用
	 * @param evt 
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameStarted_NoVirtual(evt);
	}
	/**
	 * 帧渲染之后被调用
	 * @param evt 
	 */
	public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameEnded_NoVirtual(evt);
	}
	
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static ModelAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelAnimation obj = null;
 		if(baseObj instanceof ModelAnimation)
		{
			obj = (ModelAnimation)baseObj;
		} else {
			obj = new ModelAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
