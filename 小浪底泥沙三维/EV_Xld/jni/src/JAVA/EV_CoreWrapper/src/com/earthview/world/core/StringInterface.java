package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringInterface extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CStringInterface", new StringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCStringInterfaceProxy", new StringInterfaceClassFactory());
	}

	native private void startEdit_ev_bool_bool(long pNativeObject, boolean immediate, boolean restoreable);
	public void startEdit(boolean immediate, boolean restoreable)
	{
		boolean immediateParamValue = immediate;
		boolean restoreableParamValue = restoreable;
		startEdit_ev_bool_bool(this.nativeObject.pointer, immediateParamValue, restoreableParamValue);
	}
	native private void endEdit_ev_bool(long pNativeObject, boolean apply);
	public void endEdit(boolean apply)
	{
		boolean applyParamValue = apply;
		endEdit_ev_bool(this.nativeObject.pointer, applyParamValue);
	}
	native private boolean hasValueChanged_void(long pNativeObject);
	public boolean hasValueChanged()
	{
		boolean returnValue = hasValueChanged_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void appendObserver_IStringInterfaceObserver(long pNativeObject, long observer);
	public void appendObserver(com.earthview.world.core.Istringinterfaceobserver observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		appendObserver_IStringInterfaceObserver(this.nativeObject.pointer, observerParamValue);
	}
	native private void removeObserver_IStringInterfaceObserver(long pNativeObject, long observer);
	public void removeObserver(com.earthview.world.core.Istringinterfaceobserver observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		removeObserver_IStringInterfaceObserver(this.nativeObject.pointer, observerParamValue);
	}
	native private void notifyValueChanged_EVString(long pNativeObject, String name);
	public void notifyValueChanged(String name)
	{
		String nameParamValue = name;
		notifyValueChanged_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void notifyStatusChanged_EVString_ParamStatus(long pNativeObject, String name, int status);
	public void notifyStatusChanged(String name, com.earthview.world.core.ParamStatus status)
	{
		String nameParamValue = name;
		int statusParamValue = status.getValue();
		notifyStatusChanged_EVString_ParamStatus(this.nativeObject.pointer, nameParamValue, statusParamValue);
	}
	native private boolean createParamDictionary_EVString(long pNativeObject, String className);
	public boolean createParamDictionary(String className)
	{
		String classNameParamValue = className;
		boolean returnValue = createParamDictionary_EVString(this.nativeObject.pointer, classNameParamValue);
		return returnValue;
	}
	native private String getLastErrorMessage_void(long pNativeObject);
	public String getLastErrorMessage()
	{
		String returnValue = getLastErrorMessage_void(this.nativeObject.pointer);
		return returnValue;
	}
	public StringInterface() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCStringInterfaceProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.StringInterface".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public StringInterface(VoidPointer parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer parentPtr = new BasePointer(parent);
		list.add("parent", parentPtr.get());
		Create("JCStringInterfaceProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.StringInterface".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getParamDictionary_void(long pNativeObject);
	public com.earthview.world.core.ParamDictionary getParamDictionary()
	{
		long returnValue = getParamDictionary_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.ParamDictionary __returnValue = new com.earthview.world.core.ParamDictionary(CreatedWhenConstruct.CWC_NotToCreate, "CParamDictionary");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ParamDictionary)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParamDictionary");
		}
		return __returnValue;
	}
	native private long getParameters_void(long pNativeObject);
	public com.earthview.world.core.ParameterList getParameters()
	{
		long returnValue = getParameters_void(this.nativeObject.pointer);
		com.earthview.world.core.ParameterList __returnValue = new com.earthview.world.core.ParameterList(CreatedWhenConstruct.CWC_NotToCreate, "ParameterList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.ParameterList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ParameterList");
		}
		return __returnValue;
	}
	protected  boolean setParameter_EVString_EVString_callback(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		boolean returnValue = setParameter(nameParamValue, valueParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setParameter_EVString_EVString(long pNativeObject, String name, String value);
	public boolean setParameter(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		boolean returnValue = setParameter_EVString_EVString(this.nativeObject.pointer, nameParamValue, valueParamValue);
		return returnValue;
	}
	native private boolean setParameter_EVString_EVString_NoVirtual(long pNativeObject, String name, String value);
	protected boolean setParameter_NoVirtual(String name, String value)
	{
		String nameParamValue = name;
		String valueParamValue = value;
		boolean returnValue = setParameter_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, valueParamValue);
		return returnValue;
	}

	protected  boolean setParameter_EVString_ev_bool_ev_bool_callback(String name, boolean readOnly, boolean enable)
	{
		String nameParamValue = name;
		boolean readOnlyParamValue = readOnly;
		boolean enableParamValue = enable;
		boolean returnValue = setParameter(nameParamValue, readOnlyParamValue, enableParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String name, boolean readOnly, boolean enable);
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		String nameParamValue = name;
		boolean readOnlyParamValue = readOnly;
		boolean enableParamValue = enable;
		boolean returnValue = setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, nameParamValue, readOnlyParamValue, enableParamValue);
		return returnValue;
	}
	native private boolean setParameter_EVString_ev_bool_ev_bool_NoVirtual(long pNativeObject, String name, boolean readOnly, boolean enable);
	protected boolean setParameter_NoVirtual(String name, boolean readOnly, boolean enable)
	{
		String nameParamValue = name;
		boolean readOnlyParamValue = readOnly;
		boolean enableParamValue = enable;
		boolean returnValue = setParameter_EVString_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, nameParamValue, readOnlyParamValue, enableParamValue);
		return returnValue;
	}

	protected  void setParameterList_CommonStringPairList_callback(long paramList)
	{
		com.earthview.world.core.CommonStringPairList paramListParamValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		paramListParamValue.setDelegate(true);
		paramListParamValue.setInstancePointer(new InstancePointer(paramList));
		IClassFactory paramListParamValueClassFactory = GlobalClassFactoryMap.get(paramListParamValue.getCppInstanceTypeName());
		if (paramListParamValueClassFactory != null)
		{
			paramListParamValue.setDelegate(true);
			paramListParamValue = (com.earthview.world.core.CommonStringPairList)paramListParamValueClassFactory.create();
			paramListParamValue.setDelegate(true);
			paramListParamValue.setInstancePointer(new InstancePointer(paramList));
		}
		setParameterList(paramListParamValue);
	}

	native private void setParameterList_CommonStringPairList(long pNativeObject, long paramList);
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		long paramListParamValue = paramList.nativeObject.pointer;
		setParameterList_CommonStringPairList(this.nativeObject.pointer, paramListParamValue);
	}
	native private void setParameterList_CommonStringPairList_NoVirtual(long pNativeObject, long paramList);
	protected void setParameterList_NoVirtual(com.earthview.world.core.CommonStringPairList paramList)
	{
		long paramListParamValue = paramList.nativeObject.pointer;
		setParameterList_CommonStringPairList_NoVirtual(this.nativeObject.pointer, paramListParamValue);
	}

	protected  String getParameter_EVString_callback(String name)
	{
		String nameParamValue = name;
		String returnValue = getParameter(nameParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getParameter_EVString(long pNativeObject, String name);
	public String getParameter(String name)
	{
		String nameParamValue = name;
		String returnValue = getParameter_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private String getParameter_EVString_NoVirtual(long pNativeObject, String name);
	protected String getParameter_NoVirtual(String name)
	{
		String nameParamValue = name;
		String returnValue = getParameter_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  void copyParametersTo_CStringInterface_callback(long dest)
	{
		com.earthview.world.core.StringInterface destParamValue = (dest == 0L ? null : new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate));
		if(destParamValue != null)
		{
		destParamValue.setDelegate(true);
		destParamValue.setInstancePointer(new InstancePointer(dest));
		IClassFactory destParamValueClassFactory = GlobalClassFactoryMap.get(destParamValue.getCppInstanceTypeName());
		if (destParamValueClassFactory != null)
		{
			destParamValue.setDelegate(true);
			destParamValue = (com.earthview.world.core.StringInterface)destParamValueClassFactory.create();
			destParamValue.setDelegate(true);
			destParamValue.setInstancePointer(new InstancePointer(dest));
		}
		}
		copyParametersTo(destParamValue);
	}

	native private void copyParametersTo_CStringInterface(long pNativeObject, long dest);
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		copyParametersTo_CStringInterface(this.nativeObject.pointer, destParamValue);
	}
	native private void copyParametersTo_CStringInterface_NoVirtual(long pNativeObject, long dest);
	protected void copyParametersTo_NoVirtual(com.earthview.world.core.StringInterface dest)
	{
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		copyParametersTo_CStringInterface_NoVirtual(this.nativeObject.pointer, destParamValue);
	}

	native private static void cleanupDictionary_void();
	public static void cleanupDictionary()
	{
		cleanupDictionary_void();
	}
	public StringInterface(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StringInterface(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static StringInterface fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StringInterface obj = null;
 		if(baseObj instanceof StringInterface)
		{
			obj = (StringInterface)baseObj;
		} else {
			obj = new StringInterface(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStringInterface");
			obj.increaseCast();
		}

		return obj;
	}
}
