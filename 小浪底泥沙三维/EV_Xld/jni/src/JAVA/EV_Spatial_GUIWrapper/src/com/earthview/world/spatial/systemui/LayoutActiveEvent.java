package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutActiveEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayoutActiveEvent", new LayoutActiveEventClassFactory());
	}

	public LayoutActiveEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CLayoutActiveEvent", list);
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
	native private void setControl_ISpatialControl(long pNativeObject, long ref_ctrl);
	public void setControl(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		setControl_ISpatialControl(this.nativeObject.pointer, ref_ctrlParamValue);
	}
	native private long getControl_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ispatialcontrol getControl()
	{
		long returnValue = getControl_void(this.nativeObject.pointer);
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
	native private long getPageLayout_void(long pNativeObject);
	public com.earthview.world.spatial.carto.Ipagelayout getPageLayout()
	{
		long returnValue = getPageLayout_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private void setPageLayout_IPageLayout(long pNativeObject, long ref_pageLayout);
	public void setPageLayout(com.earthview.world.spatial.carto.Ipagelayout ref_pageLayout)
	{
		long ref_pageLayoutParamValue = (ref_pageLayout == null ? 0L : ref_pageLayout.nativeObject.pointer);
		setPageLayout_IPageLayout(this.nativeObject.pointer, ref_pageLayoutParamValue);
	}
	native private void setName_EVString(long pNativeObject, String name);
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
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
	public LayoutActiveEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutActiveEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayoutActiveEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutActiveEvent obj = null;
 		if(baseObj instanceof LayoutActiveEvent)
		{
			obj = (LayoutActiveEvent)baseObj;
		} else {
			obj = new LayoutActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutActiveEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
