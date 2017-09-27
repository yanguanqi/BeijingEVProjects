package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CLodObject", new LodObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCLodObjectProxy", new LodObjectClassFactory());
	}

	native private String getFile_void(long pNativeObject);
	/**
	 * 获取meshx全路径
	 * @param  
	 */
	public String getFile()
	{
		String returnValue = getFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getGroup_void(long pNativeObject);
	/**
	 * 获取资源组
	 * @param  
	 */
	public String getGroup()
	{
		String returnValue = getGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 获取场景管理器
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置可见性
	 * @param  
	 */
	public void setVisible(boolean flag)
	{
		boolean flagParamValue = flag;
		setVisible_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 获取可见性
	 * @param  
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean isAttached_void_callback()
	{
		boolean returnValue = isAttached();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAttached_void(long pNativeObject);
	/**
	 * 是否挂接
	 * @param  
	 */
	public boolean isAttached()
	{
		boolean returnValue = isAttached_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAttached_void_NoVirtual(long pNativeObject);
	protected boolean isAttached_NoVirtual()
	{
		boolean returnValue = isAttached_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNode_void(long pNativeObject);
	/**
	 * 获取接节点
	 * @param  
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
	native private long getNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getNode_NoVirtual()
	{
		long returnValue = getNode_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean attachToNode_CNode_callback(long n)
	{
		com.earthview.world.graphic.Node nParamValue = (n == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nParamValue != null)
		{
		nParamValue.setDelegate(true);
		nParamValue.setInstancePointer(new InstancePointer(n));
		IClassFactory nParamValueClassFactory = GlobalClassFactoryMap.get(nParamValue.getCppInstanceTypeName());
		if (nParamValueClassFactory != null)
		{
			nParamValue.setDelegate(true);
			nParamValue = (com.earthview.world.graphic.Node)nParamValueClassFactory.create();
			nParamValue.setDelegate(true);
			nParamValue.setInstancePointer(new InstancePointer(n));
		}
		}
		boolean returnValue = attachToNode(nParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean attachToNode_CNode(long pNativeObject, long n);
	/**
	 * 挂接节点
	 * @param  
	 */
	public boolean attachToNode(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}
	native private boolean attachToNode_CNode_NoVirtual(long pNativeObject, long n);
	protected boolean attachToNode_NoVirtual(com.earthview.world.graphic.Node n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = attachToNode_CNode_NoVirtual(this.nativeObject.pointer, nParamValue);
		return returnValue;
	}

	protected  long detachFromNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = detachFromNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long detachFromNode_void(long pNativeObject);
	/**
	 * 反挂接节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node detachFromNode()
	{
		long returnValue = detachFromNode_void(this.nativeObject.pointer);
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
	native private long detachFromNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node detachFromNode_NoVirtual()
	{
		long returnValue = detachFromNode_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean applyScenePosition_void_callback()
	{
		boolean returnValue = applyScenePosition();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean applyScenePosition_void(long pNativeObject);
	/**
	 * 应用meshx中存储的位置
	 * @param  
	 */
	public boolean applyScenePosition()
	{
		boolean returnValue = applyScenePosition_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean applyScenePosition_void_NoVirtual(long pNativeObject);
	protected boolean applyScenePosition_NoVirtual()
	{
		boolean returnValue = applyScenePosition_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setHighLight_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 设置高亮
	 * @param  
	 */
	public void setHighLight(boolean flag)
	{
		boolean flagParamValue = flag;
		setHighLight_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getHighLight_void(long pNativeObject);
	/**
	 * 获取高亮状态
	 * @param  
	 */
	public boolean getHighLight()
	{
		boolean returnValue = getHighLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	public LodObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_attachToNode_CNode(long pNativeObject, String method);
	native protected void register_detachFromNode_void(long pNativeObject, String method);
	native protected void register_applyScenePosition_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_attachToNode_CNode(this.nativeObject.pointer, "attachToNode_CNode_callback");
			this.register_detachFromNode_void(this.nativeObject.pointer, "detachFromNode_void_callback");
			this.register_applyScenePosition_void(this.nativeObject.pointer, "applyScenePosition_void_callback");
		}
	}
	
	public static LodObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodObject obj = null;
 		if(baseObj instanceof LodObject)
		{
			obj = (LodObject)baseObj;
		} else {
			obj = new LodObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodObject");
			obj.increaseCast();
		}

		return obj;
	}
}
