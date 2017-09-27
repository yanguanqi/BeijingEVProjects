package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CRenderState", new RenderStateClassFactory());
	}

	public RenderState() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderState", null);
	}

	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void addTemplateSubRenderState_CSubRenderState(long pNativeObject, long subRenderState);
	public void addTemplateSubRenderState(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		addTemplateSubRenderState_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private void removeTemplateSubRenderState_CSubRenderState(long pNativeObject, long subRenderState);
	public void removeTemplateSubRenderState(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		removeTemplateSubRenderState_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private long getTemplateSubRenderStateList_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateList getTemplateSubRenderStateList()
	{
		long returnValue = getTemplateSubRenderStateList_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.SubRenderStateList __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateList(CreatedWhenConstruct.CWC_NotToCreate, "SubRenderStateList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SubRenderStateList");
		}
		return __returnValue;
	}
	native private void setLightCount_ev_int32(long pNativeObject, long lightCount);
	public void setLightCount(NativeIntegerBuffer lightCount)
	{
		long lightCountParamValue = (lightCount == null ? 0L : lightCount.nativeObject.pointer);
		setLightCount_ev_int32(this.nativeObject.pointer, lightCountParamValue);
	}
	native private void getLightCount_ev_int32(long pNativeObject, long lightCount);
	public void getLightCount(NativeIntegerBuffer lightCount)
	{
		long lightCountParamValue = (lightCount == null ? 0L : lightCount.nativeObject.pointer);
		getLightCount_ev_int32(this.nativeObject.pointer, lightCountParamValue);
	}
	native private void setLightCountAutoUpdate_ev_bool(long pNativeObject, boolean autoUpdate);
	public void setLightCountAutoUpdate(boolean autoUpdate)
	{
		boolean autoUpdateParamValue = autoUpdate;
		setLightCountAutoUpdate_ev_bool(this.nativeObject.pointer, autoUpdateParamValue);
	}
	native private boolean getLightCountAutoUpdate_void(long pNativeObject);
	public boolean getLightCountAutoUpdate()
	{
		boolean returnValue = getLightCountAutoUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RenderState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderState obj = null;
 		if(baseObj instanceof RenderState)
		{
			obj = (RenderState)baseObj;
		} else {
			obj = new RenderState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderState");
			obj.increaseCast();
		}

		return obj;
	}
}
