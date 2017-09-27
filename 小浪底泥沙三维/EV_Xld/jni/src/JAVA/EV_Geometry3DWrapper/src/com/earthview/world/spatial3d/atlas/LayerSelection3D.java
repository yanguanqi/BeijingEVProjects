package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerSelection3D extends com.earthview.world.spatial.atlas.Ilayerselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLayerSelection3D", new LayerSelection3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCLayerSelection3DProxy", new LayerSelection3DClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayerSelection3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayerSelection3DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.LayerSelection3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getSelection_void(long pNativeObject);
	///<summary>
	///获取选择
	///</summary>
	///<returns>选择集指针</return>
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

	native private void setSelection_IFeatureSelection(long pNativeObject, long selection);
	/**
	 * 设置选择
	 * @param selection 选择集
	 */
	public void setSelection(com.earthview.world.spatial.geodataset.Ifeatureselection selection)
	{
		long selectionParamValue = (selection == null ? 0L : selection.nativeObject.pointer);
		setSelection_IFeatureSelection(this.nativeObject.pointer, selectionParamValue);
	}
	public LayerSelection3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerSelection3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取选择集的绘制风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSelectionSymbol()
	{
		return super.getSelectionSymbol_NoVirtual();
	}
	/**
	 * 设置选择集的绘制风格
	 * @param symbol 风格
	 */
	public void setSelectionSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setSelectionSymbol_NoVirtual(symbol);
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
	
	public static LayerSelection3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerSelection3D obj = null;
 		if(baseObj instanceof LayerSelection3D)
		{
			obj = (LayerSelection3D)baseObj;
		} else {
			obj = new LayerSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerSelection3D");
			obj.increaseCast();
		}

		return obj;
	}
}
