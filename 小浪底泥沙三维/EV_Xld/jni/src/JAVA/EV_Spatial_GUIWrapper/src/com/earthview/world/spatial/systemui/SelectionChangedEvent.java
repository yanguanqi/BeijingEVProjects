package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SelectionChangedEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSelectionChangedEvent", new SelectionChangedEventClassFactory());
	}

	public SelectionChangedEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CSelectionChangedEvent", list);
	}

	native private long getID_void(long pNativeObject);
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setID_ev_uint32(long pNativeObject, long id);
	public void setID(long id)
	{
		long idParamValue = id;
		setID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getSpatialControl_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ispatialcontrol getSpatialControl()
	{
		long returnValue = getSpatialControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private void setSpatialControl_ISpatialControl(long pNativeObject, long ref_control);
	public void setSpatialControl(com.earthview.world.spatial.atlas.Ispatialcontrol ref_control)
	{
		long ref_controlParamValue = (ref_control == null ? 0L : ref_control.nativeObject.pointer);
		setSpatialControl_ISpatialControl(this.nativeObject.pointer, ref_controlParamValue);
	}
	native private long getLayerCount_void(long pNativeObject);
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayer_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.atlas.Ilayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private boolean addLayer_ILayer(long pNativeObject, long ref_layer);
	public boolean addLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = addLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
		return returnValue;
	}
	native private boolean removeLayer_ILayer(long pNativeObject, long layer);
	public boolean removeLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private int existLayer_ILayer(long pNativeObject, long layer);
	public int existLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int returnValue = existLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean getResponseState_void(long pNativeObject);
	public boolean getResponseState()
	{
		boolean returnValue = getResponseState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResponseState_ev_bool(long pNativeObject, boolean state);
	public void setResponseState(boolean state)
	{
		boolean stateParamValue = state;
		setResponseState_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	public SelectionChangedEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SelectionChangedEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SelectionChangedEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SelectionChangedEvent obj = null;
 		if(baseObj instanceof SelectionChangedEvent)
		{
			obj = (SelectionChangedEvent)baseObj;
		} else {
			obj = new SelectionChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSelectionChangedEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
