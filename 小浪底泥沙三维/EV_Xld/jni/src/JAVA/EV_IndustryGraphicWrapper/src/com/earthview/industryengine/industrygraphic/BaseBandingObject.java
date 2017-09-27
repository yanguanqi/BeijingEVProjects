package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 挂接对象基类
 */
public class BaseBandingObject extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CBaseBandingObject", new BaseBandingObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCBaseBandingObjectProxy", new BaseBandingObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public BaseBandingObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBaseBandingObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.BaseBandingObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public BaseBandingObject(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCBaseBandingObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.BaseBandingObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean getCanSwapBuffer_void_callback()
	{
		boolean returnValue = getCanSwapBuffer();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCanSwapBuffer_void(long pNativeObject);
	/**
	 * 获取是否能够交换buffer
	 * @return 是否能够交换buffer
	 */
	public boolean getCanSwapBuffer()
	{
		boolean returnValue = getCanSwapBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCanSwapBuffer_void_NoVirtual(long pNativeObject);
	protected boolean getCanSwapBuffer_NoVirtual()
	{
		boolean returnValue = getCanSwapBuffer_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setName_EarthView_World_Core_ev_string_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EarthView_World_Core_ev_string(long pNativeObject, String name);
	/**
	 * 设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EarthView_World_Core_ev_string(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EarthView_World_Core_ev_string_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EarthView_World_Core_ev_string_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setNeedUpdate_ev_bool_callback(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate(needUpdateParamValue);
	}

	native private void setNeedUpdate_ev_bool(long pNativeObject, boolean needUpdate);
	/**
	 * 设置是否需要更新
	 * @param needUpdate 更新状态
	 */
	public void setNeedUpdate(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool(this.nativeObject.pointer, needUpdateParamValue);
	}
	native private void setNeedUpdate_ev_bool_NoVirtual(long pNativeObject, boolean needUpdate);
	protected void setNeedUpdate_NoVirtual(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool_NoVirtual(this.nativeObject.pointer, needUpdateParamValue);
	}

	protected  boolean getNeedUpdate_void_callback()
	{
		boolean returnValue = getNeedUpdate();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getNeedUpdate_void(long pNativeObject);
	/**
	 * 获取是否需要更新
	 * @return 是否需要更新
	 */
	public boolean getNeedUpdate()
	{
		boolean returnValue = getNeedUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getNeedUpdate_void_NoVirtual(long pNativeObject);
	protected boolean getNeedUpdate_NoVirtual()
	{
		boolean returnValue = getNeedUpdate_void_NoVirtual(this.nativeObject.pointer);
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
	 * 获取绑定的节点
	 * @return 绑定的节点
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

	protected  void update_void_callback()
	{
		update();
	}

	native private void update_void(long pNativeObject);
	/**
	 * 更新
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	public BaseBandingObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BaseBandingObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCanSwapBuffer_void(long pNativeObject, String method);
	native protected void register_setName_EarthView_World_Core_ev_string(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setNeedUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_getNeedUpdate_void(long pNativeObject, String method);
	native protected void register_getNode_void(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCanSwapBuffer_void(this.nativeObject.pointer, "getCanSwapBuffer_void_callback");
			this.register_setName_EarthView_World_Core_ev_string(this.nativeObject.pointer, "setName_EarthView_World_Core_ev_string_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setNeedUpdate_ev_bool(this.nativeObject.pointer, "setNeedUpdate_ev_bool_callback");
			this.register_getNeedUpdate_void(this.nativeObject.pointer, "getNeedUpdate_void_callback");
			this.register_getNode_void(this.nativeObject.pointer, "getNode_void_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
		}
	}
	
	public static BaseBandingObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BaseBandingObject obj = null;
 		if(baseObj instanceof BaseBandingObject)
		{
			obj = (BaseBandingObject)baseObj;
		} else {
			obj = new BaseBandingObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBaseBandingObject");
			obj.increaseCast();
		}

		return obj;
	}
}
