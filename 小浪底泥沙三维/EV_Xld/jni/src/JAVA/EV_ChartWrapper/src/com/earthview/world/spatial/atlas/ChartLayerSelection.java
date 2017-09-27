package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图图层选择集类
 */
public class ChartLayerSelection extends com.earthview.world.spatial.atlas.Ilayerselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CChartLayerSelection", new ChartLayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JCChartLayerSelectionProxy", new ChartLayerSelectionClassFactory());
	}

	native private long getSelection_void(long pNativeObject);
	/**
	 * 获取要素选择集
	 * @return 要素选择集对象指针，不需释放，只要进行了选择操作，不论有无选中要素，返回指针都非空
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
	 * 获取选择集渲染风格，无实际操作，与接口一致
	 * @return 返回空，不只有一种符号
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
	 * 设置选择集渲染风格，无实际操作，与接口一致
	 * @param symbol 渲染风格
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

	protected  long getPointSelectionSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getPointSelectionSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPointSelectionSymbol_void(long pNativeObject);
	/**
	 * 获取选中点要素的渲染风格
	 * @return 渲染风格对象指针，不需释放
	 */
	public com.earthview.world.spatial.display.Isymbol getPointSelectionSymbol()
	{
		long returnValue = getPointSelectionSymbol_void(this.nativeObject.pointer);
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
	native private long getPointSelectionSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getPointSelectionSymbol_NoVirtual()
	{
		long returnValue = getPointSelectionSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setPointSelectionSymbol_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setPointSelectionSymbol(symbolParamValue);
	}

	native private void setPointSelectionSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置选中线要素的渲染风格
	 * @param symbol 渲染风格
	 */
	public void setPointSelectionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setPointSelectionSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setPointSelectionSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setPointSelectionSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setPointSelectionSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	protected  long getLineSelectionSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getLineSelectionSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLineSelectionSymbol_void(long pNativeObject);
	/**
	 * 获取选中线要素的渲染风格
	 * @return 渲染风格对象指针，不需释放
	 */
	public com.earthview.world.spatial.display.Isymbol getLineSelectionSymbol()
	{
		long returnValue = getLineSelectionSymbol_void(this.nativeObject.pointer);
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
	native private long getLineSelectionSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getLineSelectionSymbol_NoVirtual()
	{
		long returnValue = getLineSelectionSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setLineSelectionSymbol_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setLineSelectionSymbol(symbolParamValue);
	}

	native private void setLineSelectionSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置选中线要素的渲染风格
	 * @param symbol 渲染风格
	 */
	public void setLineSelectionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setLineSelectionSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setLineSelectionSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setLineSelectionSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setLineSelectionSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	protected  long getAreaSelectionSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getAreaSelectionSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAreaSelectionSymbol_void(long pNativeObject);
	/**
	 * 获取选中面要素的渲染风格
	 * @return 渲染风格对象指针，不需释放
	 */
	public com.earthview.world.spatial.display.Isymbol getAreaSelectionSymbol()
	{
		long returnValue = getAreaSelectionSymbol_void(this.nativeObject.pointer);
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
	native private long getAreaSelectionSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getAreaSelectionSymbol_NoVirtual()
	{
		long returnValue = getAreaSelectionSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setAreaSelectionSymbol_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setAreaSelectionSymbol(symbolParamValue);
	}

	native private void setAreaSelectionSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置选中面要素的渲染风格
	 * @param symbol 渲染风格
	 */
	public void setAreaSelectionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setAreaSelectionSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setAreaSelectionSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setAreaSelectionSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setAreaSelectionSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	public ChartLayerSelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartLayerSelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getPointSelectionSymbol_void(long pNativeObject, String method);
	native protected void register_setPointSelectionSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getLineSelectionSymbol_void(long pNativeObject, String method);
	native protected void register_setLineSelectionSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getAreaSelectionSymbol_void(long pNativeObject, String method);
	native protected void register_setAreaSelectionSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getSelection_void(long pNativeObject, String method);
	native protected void register_getSelectionSymbol_void(long pNativeObject, String method);
	native protected void register_setSelectionSymbol_ISymbol(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getPointSelectionSymbol_void(this.nativeObject.pointer, "getPointSelectionSymbol_void_callback");
			this.register_setPointSelectionSymbol_ISymbol(this.nativeObject.pointer, "setPointSelectionSymbol_ISymbol_callback");
			this.register_getLineSelectionSymbol_void(this.nativeObject.pointer, "getLineSelectionSymbol_void_callback");
			this.register_setLineSelectionSymbol_ISymbol(this.nativeObject.pointer, "setLineSelectionSymbol_ISymbol_callback");
			this.register_getAreaSelectionSymbol_void(this.nativeObject.pointer, "getAreaSelectionSymbol_void_callback");
			this.register_setAreaSelectionSymbol_ISymbol(this.nativeObject.pointer, "setAreaSelectionSymbol_ISymbol_callback");
			this.register_getSelection_void(this.nativeObject.pointer, "getSelection_void_callback");
			this.register_getSelectionSymbol_void(this.nativeObject.pointer, "getSelectionSymbol_void_callback");
			this.register_setSelectionSymbol_ISymbol(this.nativeObject.pointer, "setSelectionSymbol_ISymbol_callback");
		}
	}
	
	public static ChartLayerSelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartLayerSelection obj = null;
 		if(baseObj instanceof ChartLayerSelection)
		{
			obj = (ChartLayerSelection)baseObj;
		} else {
			obj = new ChartLayerSelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartLayerSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
