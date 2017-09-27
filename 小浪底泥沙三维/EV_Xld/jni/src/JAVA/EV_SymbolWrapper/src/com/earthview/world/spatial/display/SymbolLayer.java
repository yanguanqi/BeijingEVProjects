package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 风格图层类提供方法如下：获取该层的风格对象、设置风格对象虚方法：获取与设置是否可见、是否颜色锁定
 */
public class SymbolLayer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSymbolLayer", new SymbolLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSymbolLayerProxy", new SymbolLayerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public SymbolLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSymbolLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SymbolLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取该层的风格对象
	 * @param  
	 * @return 风格对象
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置风格对象
	 * @param symbol 风格对象
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	protected  boolean isVisible_void_callback()
	{
		boolean returnValue = isVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取是否可见
	 * @param  
	 * @return 是否可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  boolean isColorLock_void_callback()
	{
		boolean returnValue = isColorLock();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isColorLock_void(long pNativeObject);
	/**
	 * 是否颜色锁定
	 * @param  
	 * @return 返回值为true，则颜色锁定；否则没有锁定
	 */
	public boolean isColorLock()
	{
		boolean returnValue = isColorLock_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isColorLock_void_NoVirtual(long pNativeObject);
	protected boolean isColorLock_NoVirtual()
	{
		boolean returnValue = isColorLock_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColorLock_ev_bool_callback(boolean lock)
	{
		boolean lockParamValue = lock;
		setColorLock(lockParamValue);
	}

	native private void setColorLock_ev_bool(long pNativeObject, boolean lock);
	/**
	 * 设置颜色锁定
	 * @param lock 颜色锁定
	 */
	public void setColorLock(boolean lock)
	{
		boolean lockParamValue = lock;
		setColorLock_ev_bool(this.nativeObject.pointer, lockParamValue);
	}
	native private void setColorLock_ev_bool_NoVirtual(long pNativeObject, boolean lock);
	protected void setColorLock_NoVirtual(boolean lock)
	{
		boolean lockParamValue = lock;
		setColorLock_ev_bool_NoVirtual(this.nativeObject.pointer, lockParamValue);
	}

	public SymbolLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isColorLock_void(long pNativeObject, String method);
	native protected void register_setColorLock_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isColorLock_void(this.nativeObject.pointer, "isColorLock_void_callback");
			this.register_setColorLock_ev_bool(this.nativeObject.pointer, "setColorLock_ev_bool_callback");
		}
	}
	
	public static SymbolLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolLayer obj = null;
 		if(baseObj instanceof SymbolLayer)
		{
			obj = (SymbolLayer)baseObj;
		} else {
			obj = new SymbolLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
