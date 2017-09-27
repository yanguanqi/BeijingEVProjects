package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///十进制度		
public class Imaplistener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::IMapListener", new ImaplistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JIMapListenerProxy", new ImaplistenerClassFactory());
	}

	public Imaplistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIMapListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.atlas.Imaplistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onBeforeAddLayer_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onBeforeAddLayer(layerParamValue);
	}

	native private void onBeforeAddLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在添加图层之前的事件
	 * @param layer 待添加的图层
	 */
	public void onBeforeAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeAddLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onBeforeAddLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onBeforeAddLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeAddLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void onAfterAddLayer_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onAfterAddLayer(layerParamValue);
	}

	native private void onAfterAddLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在添加图层之后的事件
	 * @param layer 己添加的图层
	 */
	public void onAfterAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterAddLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onAfterAddLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onAfterAddLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterAddLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void onBeforeRemoveLayer_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onBeforeRemoveLayer(layerParamValue);
	}

	native private void onBeforeRemoveLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在移除图层之前的事件
	 * @param layer 待移除的图层
	 */
	public void onBeforeRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeRemoveLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onBeforeRemoveLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onBeforeRemoveLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeRemoveLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void onAfterRemoveLayer_ILayer_callback(long layer)
	{
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		onAfterRemoveLayer(layerParamValue);
	}

	native private void onAfterRemoveLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在移除图层之后的事件
	 * @param layer 己移除的图层
	 */
	public void onAfterRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterRemoveLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onAfterRemoveLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onAfterRemoveLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterRemoveLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	protected  void onBeforeMoveLayer_ev_int32_ev_int32_callback(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onBeforeMoveLayer(oldIndexParamValue, newIndexParamValue);
	}

	native private void onBeforeMoveLayer_ev_int32_ev_int32(long pNativeObject, int oldIndex, int newIndex);
	/**
	 * 在移动图层之前的事件
	 * @param oldIndex 原来的索引
	 * @param newIndex 新的索引
	 */
	public void onBeforeMoveLayer(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onBeforeMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void onBeforeMoveLayer_ev_int32_ev_int32_NoVirtual(long pNativeObject, int oldIndex, int newIndex);
	protected void onBeforeMoveLayer_NoVirtual(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onBeforeMoveLayer_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	protected  void onAfterMoveLayer_ev_int32_ev_int32_callback(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onAfterMoveLayer(oldIndexParamValue, newIndexParamValue);
	}

	native private void onAfterMoveLayer_ev_int32_ev_int32(long pNativeObject, int oldIndex, int newIndex);
	/**
	 * 在移动图层之后的事件
	 * @param oldIndex 原来的索引
	 * @param newIndex 新的索引
	 */
	public void onAfterMoveLayer(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onAfterMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void onAfterMoveLayer_ev_int32_ev_int32_NoVirtual(long pNativeObject, int oldIndex, int newIndex);
	protected void onAfterMoveLayer_NoVirtual(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onAfterMoveLayer_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	protected  void onMapSelectionChanged_void_callback()
	{
		onMapSelectionChanged();
	}

	native private void onMapSelectionChanged_void(long pNativeObject);
	/**
	 * 地图的选中集合发生变化的事件
	 * @param  
	 */
	public void onMapSelectionChanged()
	{
		onMapSelectionChanged_void(this.nativeObject.pointer);
	}
	native private void onMapSelectionChanged_void_NoVirtual(long pNativeObject);
	protected void onMapSelectionChanged_NoVirtual()
	{
		onMapSelectionChanged_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback(long display, long layer, int type)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.atlas.Ilayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial.atlas.Ilayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		com.earthview.world.spatial.atlas.EVVectorLayerRendererType typeParamValue = com.earthview.world.spatial.atlas.EVVectorLayerRendererType.toEnum(type);
		onMapDraw(displayParamValue, layerParamValue, typeParamValue);
	}

	native private void onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(long pNativeObject, long display, long layer, int type);
	/**
	 * 地图绘制事件
	 * @param display 显示参数
	 * @param layer 正在绘制的图层
	 * @param type 正在绘制的类型
	 */
	public void onMapDraw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int typeParamValue = type.getValue();
		onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.nativeObject.pointer, displayParamValue, layerParamValue, typeParamValue);
	}
	native private void onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(long pNativeObject, long display, long layer, int type);
	protected void onMapDraw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int typeParamValue = type.getValue();
		onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(this.nativeObject.pointer, displayParamValue, layerParamValue, typeParamValue);
	}

	public Imaplistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imaplistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onBeforeAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onAfterMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMapSelectionChanged_void(long pNativeObject, String method);
	native protected void register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onBeforeAddLayer_ILayer(this.nativeObject.pointer, "onBeforeAddLayer_ILayer_callback");
			this.register_onAfterAddLayer_ILayer(this.nativeObject.pointer, "onAfterAddLayer_ILayer_callback");
			this.register_onBeforeRemoveLayer_ILayer(this.nativeObject.pointer, "onBeforeRemoveLayer_ILayer_callback");
			this.register_onAfterRemoveLayer_ILayer(this.nativeObject.pointer, "onAfterRemoveLayer_ILayer_callback");
			this.register_onBeforeMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onBeforeMoveLayer_ev_int32_ev_int32_callback");
			this.register_onAfterMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onAfterMoveLayer_ev_int32_ev_int32_callback");
			this.register_onMapSelectionChanged_void(this.nativeObject.pointer, "onMapSelectionChanged_void_callback");
			this.register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.nativeObject.pointer, "onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback");
		}
	}
	
	public static Imaplistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imaplistener obj = null;
 		if(baseObj instanceof Imaplistener)
		{
			obj = (Imaplistener)baseObj;
		} else {
			obj = new Imaplistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMapListener");
			obj.increaseCast();
		}

		return obj;
	}
}
