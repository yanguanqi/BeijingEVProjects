package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapLayersAddedEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent", new MapLayersAddedEventClassFactory());
	}

	public MapLayersAddedEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CMapLayersAddedEvent", list);
	}

	native private boolean getFlag_void(long pNativeObject);
	public boolean getFlag()
	{
		boolean returnValue = getFlag_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFlag_ev_bool(long pNativeObject, boolean flag);
	public void setFlag(boolean flag)
	{
		boolean flagParamValue = flag;
		setFlag_ev_bool(this.nativeObject.pointer, flagParamValue);
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
	public MapLayersAddedEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapLayersAddedEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapLayersAddedEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapLayersAddedEvent obj = null;
 		if(baseObj instanceof MapLayersAddedEvent)
		{
			obj = (MapLayersAddedEvent)baseObj;
		} else {
			obj = new MapLayersAddedEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapLayersAddedEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
