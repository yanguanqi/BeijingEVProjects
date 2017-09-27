package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画轨迹类管理节点动画轨迹变换
 */
public class NodeAnimationTrack extends com.earthview.world.graphic.AnimationTrack {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNodeAnimationTrack", new NodeAnimationTrackClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCNodeAnimationTrackProxy", new NodeAnimationTrackClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 */
	public NodeAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		Create("JCNodeAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NodeAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param targetNode 目标节点对象
	 */
	public NodeAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.Node ref_targetNode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer ref_targetNodePtr = new BasePointer(ref_targetNode);
		list.add("ref_targetNode", ref_targetNodePtr.get());
		Create("JCNodeAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.NodeAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createNodeKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.TransformKeyFrame returnValue = createNodeKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createNodeKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 创建新的节点动画关键帧
	 * @param timePos 时间点
	 * @return 返回变换帧指针
	 */
	public com.earthview.world.graphic.TransformKeyFrame createNodeKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNodeKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TransformKeyFrame __returnValue = new com.earthview.world.graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTransformKeyFrame");
		}
		return __returnValue;
	}
	native private long createNodeKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.TransformKeyFrame createNodeKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNodeKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TransformKeyFrame __returnValue = new com.earthview.world.graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTransformKeyFrame");
		}
		return __returnValue;
	}

	protected  long getAssociatedNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getAssociatedNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAssociatedNode_void(long pNativeObject);
	/**
	 * 获得节点动画轨迹相关节点对象
	 * @param  
	 * @return 相关节点对象
	 */
	public com.earthview.world.graphic.Node getAssociatedNode()
	{
		long returnValue = getAssociatedNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getAssociatedNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getAssociatedNode_NoVirtual()
	{
		long returnValue = getAssociatedNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  void setAssociatedNode_CNode_callback(long ref_node)
	{
		com.earthview.world.graphic.Node ref_nodeParamValue = (ref_node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_nodeParamValue != null)
		{
		ref_nodeParamValue.setDelegate(true);
		ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		IClassFactory ref_nodeParamValueClassFactory = GlobalClassFactoryMap.get(ref_nodeParamValue.getCppInstanceTypeName());
		if (ref_nodeParamValueClassFactory != null)
		{
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue = (com.earthview.world.graphic.Node)ref_nodeParamValueClassFactory.create();
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		}
		}
		setAssociatedNode(ref_nodeParamValue);
	}

	native private void setAssociatedNode_CNode(long pNativeObject, long ref_node);
	/**
	 * 设置节点动画轨迹相关节点对象
	 * @param node 相关节点对象
	 */
	public void setAssociatedNode(com.earthview.world.graphic.Node ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		setAssociatedNode_CNode(this.nativeObject.pointer, ref_nodeParamValue);
	}
	native private void setAssociatedNode_CNode_NoVirtual(long pNativeObject, long ref_node);
	protected void setAssociatedNode_NoVirtual(com.earthview.world.graphic.Node ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		setAssociatedNode_CNode_NoVirtual(this.nativeObject.pointer, ref_nodeParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_Real_Real_callback(long node, long timeIndex, double weight, double scale)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
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
		double scaleParamValue = scale;
		applyToNode(nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex_Real_Real(long pNativeObject, long node, long timeIndex, double weight, double scale);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 * @param scale 动画大小变化比例
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode_CNode_CTimeIndex_Real_Real(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_Real_Real_NoVirtual(long pNativeObject, long node, long timeIndex, double weight, double scale);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode_CNode_CTimeIndex_Real_Real_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_Real_callback(long node, long timeIndex, double weight)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
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
		applyToNode(nodeParamValue, timeIndexParamValue, weightParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex_Real(long pNativeObject, long node, long timeIndex, double weight);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToNode_CNode_CTimeIndex_Real(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_Real_NoVirtual(long pNativeObject, long node, long timeIndex, double weight);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToNode_CNode_CTimeIndex_Real_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_callback(long node, long timeIndex)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
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
		applyToNode(nodeParamValue, timeIndexParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex(long pNativeObject, long node, long timeIndex);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToNode_CNode_CTimeIndex(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_NoVirtual(long pNativeObject, long node, long timeIndex);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToNode_CNode_CTimeIndex_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue);
	}

	protected  void setUseShortestRotationPath_ev_bool_callback(boolean useShortestPath)
	{
		boolean useShortestPathParamValue = useShortestPath;
		setUseShortestRotationPath(useShortestPathParamValue);
	}

	native private void setUseShortestRotationPath_ev_bool(long pNativeObject, boolean useShortestPath);
	/**
	 * 设置是否应用最短旋转路径
	 * @param useShortestPath 是否应用最短旋转路径标识
	 */
	public void setUseShortestRotationPath(boolean useShortestPath)
	{
		boolean useShortestPathParamValue = useShortestPath;
		setUseShortestRotationPath_ev_bool(this.nativeObject.pointer, useShortestPathParamValue);
	}
	native private void setUseShortestRotationPath_ev_bool_NoVirtual(long pNativeObject, boolean useShortestPath);
	protected void setUseShortestRotationPath_NoVirtual(boolean useShortestPath)
	{
		boolean useShortestPathParamValue = useShortestPath;
		setUseShortestRotationPath_ev_bool_NoVirtual(this.nativeObject.pointer, useShortestPathParamValue);
	}

	protected  boolean getUseShortestRotationPath_void_callback()
	{
		boolean returnValue = getUseShortestRotationPath();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseShortestRotationPath_void(long pNativeObject);
	/**
	 * 获得是否应用最短旋转路径
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean getUseShortestRotationPath()
	{
		boolean returnValue = getUseShortestRotationPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseShortestRotationPath_void_NoVirtual(long pNativeObject);
	protected boolean getUseShortestRotationPath_NoVirtual()
	{
		boolean returnValue = getUseShortestRotationPath_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	 * 对特定的节点动画帧应用动画轨迹
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
	 * 对特定的节点动画帧应用动画轨迹
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
	 * 对特定的节点动画帧应用动画轨迹
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

	protected  long getNodeKeyFrame_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.TransformKeyFrame returnValue = getNodeKeyFrame(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNodeKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据索引返回节点动画
	 * @param index 动画索引
	 * @return 返回变换节点动画
	 */
	public com.earthview.world.graphic.TransformKeyFrame getNodeKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getNodeKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TransformKeyFrame __returnValue = new com.earthview.world.graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTransformKeyFrame");
		}
		return __returnValue;
	}
	native private long getNodeKeyFrame_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.TransformKeyFrame getNodeKeyFrame_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getNodeKeyFrame_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TransformKeyFrame __returnValue = new com.earthview.world.graphic.TransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTransformKeyFrame");
		}
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
	 * clone节点动画轨迹
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.NodeAnimationTrack _clone(com.earthview.world.graphic.Animation newParent)
	{
		long newParentParamValue = (newParent == null ? 0L : newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimation(this.nativeObject.pointer, newParentParamValue);
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

	protected  void buildInterpolationSplines_void_callback()
	{
		buildInterpolationSplines();
	}

	native private void buildInterpolationSplines_void(long pNativeObject);
	/**
	 * 创建动画轨迹插值曲线
	 * @param time 动画时间
	 * @return 关键帧对象
	 */
	public void buildInterpolationSplines()
	{
		buildInterpolationSplines_void(this.nativeObject.pointer);
	}
	native private void buildInterpolationSplines_void_NoVirtual(long pNativeObject);
	protected void buildInterpolationSplines_NoVirtual()
	{
		buildInterpolationSplines_void_NoVirtual(this.nativeObject.pointer);
	}

	public NodeAnimationTrack(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeAnimationTrack(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_createNodeKeyFrame_Real(long pNativeObject, String method);
	native protected void register_getAssociatedNode_void(long pNativeObject, String method);
	native protected void register_setAssociatedNode_CNode(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex_Real_Real(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex_Real(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex(long pNativeObject, String method);
	native protected void register_setUseShortestRotationPath_ev_bool(long pNativeObject, String method);
	native protected void register_getUseShortestRotationPath_void(long pNativeObject, String method);
	native protected void register_getNodeKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_buildInterpolationSplines_void(long pNativeObject, String method);
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
			this.register_createNodeKeyFrame_Real(this.nativeObject.pointer, "createNodeKeyFrame_Real_callback");
			this.register_getAssociatedNode_void(this.nativeObject.pointer, "getAssociatedNode_void_callback");
			this.register_setAssociatedNode_CNode(this.nativeObject.pointer, "setAssociatedNode_CNode_callback");
			this.register_applyToNode_CNode_CTimeIndex_Real_Real(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_Real_Real_callback");
			this.register_applyToNode_CNode_CTimeIndex_Real(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_Real_callback");
			this.register_applyToNode_CNode_CTimeIndex(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_callback");
			this.register_setUseShortestRotationPath_ev_bool(this.nativeObject.pointer, "setUseShortestRotationPath_ev_bool_callback");
			this.register_getUseShortestRotationPath_void(this.nativeObject.pointer, "getUseShortestRotationPath_void_callback");
			this.register_getNodeKeyFrame_ev_uint16(this.nativeObject.pointer, "getNodeKeyFrame_ev_uint16_callback");
			this.register_buildInterpolationSplines_void(this.nativeObject.pointer, "buildInterpolationSplines_void_callback");
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
	
	public static NodeAnimationTrack fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeAnimationTrack obj = null;
 		if(baseObj instanceof NodeAnimationTrack)
		{
			obj = (NodeAnimationTrack)baseObj;
		} else {
			obj = new NodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeAnimationTrack");
			obj.increaseCast();
		}

		return obj;
	}
}
