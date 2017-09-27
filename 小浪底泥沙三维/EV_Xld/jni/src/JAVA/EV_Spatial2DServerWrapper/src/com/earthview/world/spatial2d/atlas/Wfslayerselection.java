package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Wfslayerselection extends com.earthview.world.spatial.atlas.Ilayerselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CWFSLayerSelection", new WfslayerselectionClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Wfslayerselection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWFSLayerSelection", null);
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
	public Wfslayerselection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wfslayerselection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Wfslayerselection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wfslayerselection obj = null;
 		if(baseObj instanceof Wfslayerselection)
		{
			obj = (Wfslayerselection)baseObj;
		} else {
			obj = new Wfslayerselection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWFSLayerSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
