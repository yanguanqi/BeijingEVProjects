package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TargetRenderState extends com.earthview.world.graphic.rtshadersystem.RenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CTargetRenderState", new TargetRenderStateClassFactory());
	}

	public TargetRenderState() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTargetRenderState", null);
	}

	native private void link_CRenderState_CPass_CPass(long pNativeObject, long other, long srcPass, long dstPass);
	public void link(com.earthview.world.graphic.rtshadersystem.RenderState other, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long otherParamValue = other.nativeObject.pointer;
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		link_CRenderState_CPass_CPass(this.nativeObject.pointer, otherParamValue, srcPassParamValue, dstPassParamValue);
	}
	native private void updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(long pNativeObject, long rend, long pass, long source, long pLightList);
	public void updateGpuProgramsParams(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue);
	}
	public TargetRenderState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TargetRenderState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TargetRenderState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TargetRenderState obj = null;
 		if(baseObj instanceof TargetRenderState)
		{
			obj = (TargetRenderState)baseObj;
		} else {
			obj = new TargetRenderState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTargetRenderState");
			obj.increaseCast();
		}

		return obj;
	}
}
