package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapLayerActiveEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent", new MapLayerActiveEventClassFactory());
	}

	public MapLayerActiveEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CMapLayerActiveEvent", list);
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
	native private long getLayer_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
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
	native private void setLayer_ILayer(long pNativeObject, long ref_layer);
	public void setLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private long getMap_void(long pNativeObject);
	///所属的地图
	public com.earthview.world.spatial.atlas.Imap getMap()
	{
		long returnValue = getMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private void setMap_IMap(long pNativeObject, long ref_map);
	public void setMap(com.earthview.world.spatial.atlas.Imap ref_map)
	{
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		setMap_IMap(this.nativeObject.pointer, ref_mapParamValue);
	}
	native private long getParentGroupLayer_void(long pNativeObject);
	///所属的图层组
	public com.earthview.world.spatial.atlas.Ilayer getParentGroupLayer()
	{
		long returnValue = getParentGroupLayer_void(this.nativeObject.pointer);
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
	native private void setParentGroupLayer_ILayer(long pNativeObject, long ref_grouplayer);
	public void setParentGroupLayer(com.earthview.world.spatial.atlas.Ilayer ref_grouplayer)
	{
		long ref_grouplayerParamValue = (ref_grouplayer == null ? 0L : ref_grouplayer.nativeObject.pointer);
		setParentGroupLayer_ILayer(this.nativeObject.pointer, ref_grouplayerParamValue);
	}
	native private long getHoverParentGroupLayer_void(long pNativeObject);
	///拖拽到的节点的父节点
	public com.earthview.world.spatial.atlas.Ilayer getHoverParentGroupLayer()
	{
		long returnValue = getHoverParentGroupLayer_void(this.nativeObject.pointer);
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
	native private void setHoverParentGroupLayer_ILayer(long pNativeObject, long hoverGroupLayer);
	public void setHoverParentGroupLayer(com.earthview.world.spatial.atlas.Ilayer hoverGroupLayer)
	{
		long hoverGroupLayerParamValue = (hoverGroupLayer == null ? 0L : hoverGroupLayer.nativeObject.pointer);
		setHoverParentGroupLayer_ILayer(this.nativeObject.pointer, hoverGroupLayerParamValue);
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
	native private int getOldIndex_void(long pNativeObject);
	public int getOldIndex()
	{
		int returnValue = getOldIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNewIndex_void(long pNativeObject);
	public int getNewIndex()
	{
		int returnValue = getNewIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOldIndex_ev_int32(long pNativeObject, int index);
	public void setOldIndex(int index)
	{
		int indexParamValue = index;
		setOldIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void setNewIndex_ev_int32(long pNativeObject, int index);
	public void setNewIndex(int index)
	{
		int indexParamValue = index;
		setNewIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private boolean isUpdateCache_void(long pNativeObject);
	public boolean isUpdateCache()
	{
		boolean returnValue = isUpdateCache_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUpdateCache_ev_bool(long pNativeObject, boolean update);
	public void setUpdateCache(boolean update)
	{
		boolean updateParamValue = update;
		setUpdateCache_ev_bool(this.nativeObject.pointer, updateParamValue);
	}
	native private boolean isBatch_void(long pNativeObject);
	public boolean isBatch()
	{
		boolean returnValue = isBatch_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBatch_ev_bool(long pNativeObject, boolean batch);
	public void setBatch(boolean batch)
	{
		boolean batchParamValue = batch;
		setBatch_ev_bool(this.nativeObject.pointer, batchParamValue);
	}
	public MapLayerActiveEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapLayerActiveEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapLayerActiveEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapLayerActiveEvent obj = null;
 		if(baseObj instanceof MapLayerActiveEvent)
		{
			obj = (MapLayerActiveEvent)baseObj;
		} else {
			obj = new MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapLayerActiveEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
