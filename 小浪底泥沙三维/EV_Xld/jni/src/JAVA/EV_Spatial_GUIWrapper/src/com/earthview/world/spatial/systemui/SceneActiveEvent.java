package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneActiveEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSceneActiveEvent", new SceneActiveEventClassFactory());
	}

	public SceneActiveEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CSceneActiveEvent", list);
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
	native private long getScene_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Iscene getScene()
	{
		long returnValue = getScene_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private void setScene_IScene(long pNativeObject, long ref_map);
	public void setScene(com.earthview.world.spatial.atlas.Iscene ref_map)
	{
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		setScene_IScene(this.nativeObject.pointer, ref_mapParamValue);
	}
	native private void setName_EVString(long pNativeObject, String name);
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getName_void(long pNativeObject);
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
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
	public SceneActiveEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneActiveEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneActiveEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneActiveEvent obj = null;
 		if(baseObj instanceof SceneActiveEvent)
		{
			obj = (SceneActiveEvent)baseObj;
		} else {
			obj = new SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneActiveEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
