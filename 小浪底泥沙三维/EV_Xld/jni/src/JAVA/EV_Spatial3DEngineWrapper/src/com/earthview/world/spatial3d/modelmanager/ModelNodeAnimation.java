package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelNodeAnimation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation", new ModelNodeAnimationClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ModelNodeAnimation(com.earthview.world.graphic.SceneManager ref_sceneManager, com.earthview.world.graphic.Node ref_node) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_nodePtr = new BasePointer(ref_node);
		list.add("ref_node", ref_nodePtr.get());
		Create("CModelNodeAnimation", list);
	}

	native private void fromAnimationSeriailzer_CAnimationSerializer(long pNativeObject, long animationSeriailzer);
	/**
	 * 根据animationSeriailzer对象初始化模型的节点动画
	 * @param animationSeriailzer 动画的序列化对象
	 */
	public void fromAnimationSeriailzer(com.earthview.world.graphic.AnimationSerializer animationSeriailzer)
	{
		long animationSeriailzerParamValue = animationSeriailzer.nativeObject.pointer;
		fromAnimationSeriailzer_CAnimationSerializer(this.nativeObject.pointer, animationSeriailzerParamValue);
	}
	native private void fromXml_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 根据xmlElement对象初始化模型的节点动画
	 * @param xmlElement 动画的XML节点
	 */
	public void fromXml(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		fromXml_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
	}
	native private long getPostion_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 根据xmlElement对象解析出位置信息
	 * @param xmlElement XML文档节点
	 */
	public com.earthview.world.spatial.math.Vector3 getPostion(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		long returnValue = getPostion_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getQuaternion_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 根据xmlElement对象解析出旋转信息
	 * @param xmlElement XML文档节点
	 */
	public com.earthview.world.spatial.math.Quaternion getQuaternion(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		long returnValue = getQuaternion_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getScale_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 根据xmlElement对象解析出缩放信息
	 * @param xmlElement XML文档节点
	 */
	public com.earthview.world.spatial.math.Vector3 getScale(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		long returnValue = getScale_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getAnimationState_void(long pNativeObject);
	/**
	 * 返回节点动画对象
	 */
	public com.earthview.world.graphic.AnimationState getAnimationState()
	{
		long returnValue = getAnimationState_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long getAnimationName_void(long pNativeObject);
	/**
	 * 返回节点动画的名称
	 */
	public StringPointer getAnimationName()
	{
		long returnValue = getAnimationName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getValidStartTime_void(long pNativeObject);
	/**
	 * 返回节点动画有效的开始时间
	 */
	public double getValidStartTime()
	{
		double returnValue = getValidStartTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getValidEndTime_void(long pNativeObject);
	/**
	 * 返回节点动画有效的结束时间
	 */
	public double getValidEndTime()
	{
		double returnValue = getValidEndTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNode_void(long pNativeObject);
	/**
	 * 返回节点动画的节点
	 */
	public com.earthview.world.graphic.Node getNode()
	{
		long returnValue = getNode_void(this.nativeObject.pointer);
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
	public ModelNodeAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelNodeAnimation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelNodeAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelNodeAnimation obj = null;
 		if(baseObj instanceof ModelNodeAnimation)
		{
			obj = (ModelNodeAnimation)baseObj;
		} else {
			obj = new ModelNodeAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelNodeAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
