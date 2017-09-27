package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Imapselection extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IMapSelection", new ImapselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIMapSelectionProxy", new ImapselectionClassFactory());
	}

	protected  long getSelectionCount_void_callback()
	{
		long returnValue = getSelectionCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSelectionCount_void(long pNativeObject);
	/**
	 * 获取地图中选中要素的数量
	 * @param  
	 * @return 个数
	 */
	public long getSelectionCount()
	{
		long returnValue = getSelectionCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSelectionCount_void_NoVirtual(long pNativeObject);
	protected long getSelectionCount_NoVirtual()
	{
		long returnValue = getSelectionCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getLayerSelection_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.atlas.Ilayerselection returnValue = getLayerSelection(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayerSelection_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的图层选择集
	 * @param index 索引
	 * @return 图层选择集
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerSelection_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}
	native private long getLayerSelection_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerSelection_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerselection __returnValue = new com.earthview.world.spatial.atlas.Ilayerselection(CreatedWhenConstruct.CWC_NotToCreate, "ILayerSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerSelection");
		}
		return __returnValue;
	}

	protected  void clearSelection_void_callback()
	{
		clearSelection();
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清空地图选择集
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	public Imapselection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imapselection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSelectionCount_void(long pNativeObject, String method);
	native protected void register_getLayerSelection_ev_uint32(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSelectionCount_void(this.nativeObject.pointer, "getSelectionCount_void_callback");
			this.register_getLayerSelection_ev_uint32(this.nativeObject.pointer, "getLayerSelection_ev_uint32_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
		}
	}
	
	public static Imapselection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imapselection obj = null;
 		if(baseObj instanceof Imapselection)
		{
			obj = (Imapselection)baseObj;
		} else {
			obj = new Imapselection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMapSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
