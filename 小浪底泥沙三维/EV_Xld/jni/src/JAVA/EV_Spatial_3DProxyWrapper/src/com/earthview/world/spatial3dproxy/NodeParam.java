package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型节点参数类设置模型节点参数
 */
public class NodeParam extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CNodeParam", new NodeParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCNodeParamProxy", new NodeParamClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_node 模型节点
	 * @param pos 模型位置
	 * @param rot 模型旋转角度数组
	 * @param scale 模型缩放因子
	 */
	public NodeParam(com.earthview.world.graphic.Node ref_node, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 rot, com.earthview.world.spatial.math.Vector3 scale) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_nodePtr = new BasePointer(ref_node);
		list.add("ref_node", ref_nodePtr.get());
		BasePointer posPtr = new BasePointer(pos);
		list.add("pos", posPtr.get());
		BasePointer rotPtr = new BasePointer(rot);
		list.add("rot", rotPtr.get());
		BasePointer scalePtr = new BasePointer(scale);
		list.add("scale", scalePtr.get());
		Create("JCNodeParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.NodeParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_modelObj 模型对象
	 * @param pos 模型位置
	 * @param rot 模型旋转角度数组
	 * @param scale 模型缩放因子
	 * @param mat4 模型世界变换矩阵
	 */
	public NodeParam(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_modelObj, com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 rot, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Matrix4 mat4) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_modelObjPtr = new BasePointer(ref_modelObj);
		list.add("ref_modelObj", ref_modelObjPtr.get());
		BasePointer posPtr = new BasePointer(pos);
		list.add("pos", posPtr.get());
		BasePointer rotPtr = new BasePointer(rot);
		list.add("rot", rotPtr.get());
		BasePointer scalePtr = new BasePointer(scale);
		list.add("scale", scalePtr.get());
		BasePointer mat4Ptr = new BasePointer(mat4);
		list.add("mat4", mat4Ptr.get());
		Create("JCNodeParamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.NodeParam".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setPos_CVector3(long pNativeObject, long v3);
	/**
	 * 设置节点位置
	 * @param v3 位置数组
	 */
	public void setPos(com.earthview.world.spatial.math.Vector3 v3)
	{
		long v3ParamValue = v3.nativeObject.pointer;
		setPos_CVector3(this.nativeObject.pointer, v3ParamValue);
	}
	native private long getPos_void(long pNativeObject);
	/**
	 * 获取节点位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPos()
	{
		long returnValue = getPos_void(this.nativeObject.pointer);
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
	native private void setRot_CVector3(long pNativeObject, long v3);
	/**
	 * 设置节点旋转角度数组
	 * @param v3 旋转角度数组
	 */
	public void setRot(com.earthview.world.spatial.math.Vector3 v3)
	{
		long v3ParamValue = v3.nativeObject.pointer;
		setRot_CVector3(this.nativeObject.pointer, v3ParamValue);
	}
	native private long getRot_void(long pNativeObject);
	/**
	 * 获取节点旋转角度数组
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getRot()
	{
		long returnValue = getRot_void(this.nativeObject.pointer);
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
	native private void setScale_CVector3(long pNativeObject, long v3);
	/**
	 * 设置节点缩放值
	 * @param v3 缩放值
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 v3)
	{
		long v3ParamValue = v3.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, v3ParamValue);
	}
	native private long getScale_void(long pNativeObject);
	/**
	 * 获取节点缩放值
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
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
	public NodeParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static NodeParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeParam obj = null;
 		if(baseObj instanceof NodeParam)
		{
			obj = (NodeParam)baseObj;
		} else {
			obj = new NodeParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeParam");
			obj.increaseCast();
		}

		return obj;
	}
}
