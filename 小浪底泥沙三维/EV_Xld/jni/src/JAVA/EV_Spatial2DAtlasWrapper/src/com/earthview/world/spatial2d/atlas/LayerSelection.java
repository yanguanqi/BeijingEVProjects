package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图层选择类
 */
public class LayerSelection extends com.earthview.world.spatial.atlas.Ilayerselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CLayerSelection", new LayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCLayerSelectionProxy", new LayerSelectionClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayerSelection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayerSelectionProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.atlas.LayerSelection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getSelection_void(long pNativeObject);
	/**
	 * 获取选择集
	 * @param  
	 * @return 要素集合
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection getSelection()
	{
		long returnValue = getSelection_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}
	native private long getSelection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeatureselection getSelection_NoVirtual()
	{
		long returnValue = getSelection_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}

	native private long getSelectionSymbol_void(long pNativeObject);
	/**
	 * 获取选择集的绘制风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSelectionSymbol()
	{
		long returnValue = getSelectionSymbol_void(this.nativeObject.pointer);
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
	native private long getSelectionSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getSelectionSymbol_NoVirtual()
	{
		long returnValue = getSelectionSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setSelectionSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置选择集的绘制风格
	 * @param symbol 风格
	 */
	public void setSelectionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSelectionSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setSelectionSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setSelectionSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSelectionSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	public LayerSelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerSelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSelection_void(long pNativeObject, String method);
	native protected void register_getSelectionSymbol_void(long pNativeObject, String method);
	native protected void register_setSelectionSymbol_ISymbol(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSelection_void(this.nativeObject.pointer, "getSelection_void_callback");
			this.register_getSelectionSymbol_void(this.nativeObject.pointer, "getSelectionSymbol_void_callback");
			this.register_setSelectionSymbol_ISymbol(this.nativeObject.pointer, "setSelectionSymbol_ISymbol_callback");
		}
	}
	
	public static LayerSelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerSelection obj = null;
 		if(baseObj instanceof LayerSelection)
		{
			obj = (LayerSelection)baseObj;
		} else {
			obj = new LayerSelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
