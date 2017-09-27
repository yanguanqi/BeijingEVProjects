package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DEvent", new Analysis3DEventClassFactory());
	}

	public Analysis3DEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CAnalysis3DEvent", list);
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
	native private void setScene_IScene(long pNativeObject, long ref_scene);
	public void setScene(com.earthview.world.spatial.atlas.Iscene ref_scene)
	{
		long ref_sceneParamValue = (ref_scene == null ? 0L : ref_scene.nativeObject.pointer);
		setScene_IScene(this.nativeObject.pointer, ref_sceneParamValue);
	}
	native private long getTool_void(long pNativeObject);
	public com.earthview.world.spatial3d.analysis.Ianalysis3dtool getTool()
	{
		long returnValue = getTool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool __returnValue = new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate, "IAnalysis3DTool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IAnalysis3DTool");
		}
		return __returnValue;
	}
	native private void setTool_IAnalysis3DTool(long pNativeObject, long ref_tool);
	public void setTool(com.earthview.world.spatial3d.analysis.Ianalysis3dtool ref_tool)
	{
		long ref_toolParamValue = (ref_tool == null ? 0L : ref_tool.nativeObject.pointer);
		setTool_IAnalysis3DTool(this.nativeObject.pointer, ref_toolParamValue);
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
	public Analysis3DEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Analysis3DEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DEvent obj = null;
 		if(baseObj instanceof Analysis3DEvent)
		{
			obj = (Analysis3DEvent)baseObj;
		} else {
			obj = new Analysis3DEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
