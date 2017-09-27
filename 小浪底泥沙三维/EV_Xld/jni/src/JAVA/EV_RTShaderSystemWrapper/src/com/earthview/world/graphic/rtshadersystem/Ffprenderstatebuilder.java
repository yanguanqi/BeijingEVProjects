package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ffprenderstatebuilder extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder", new FfprenderstatebuilderClassFactory());
	}

	public Ffprenderstatebuilder() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFFPRenderStateBuilder", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder __returnValue = new com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder(CreatedWhenConstruct.CWC_NotToCreate, "CFFPRenderStateBuilder");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFFPRenderStateBuilder");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder __returnValue = new com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder(CreatedWhenConstruct.CWC_NotToCreate, "CFFPRenderStateBuilder");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Ffprenderstatebuilder)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFFPRenderStateBuilder");
		}
		return __returnValue;
	}
	native private boolean initialize_void(long pNativeObject);
	public boolean initialize()
	{
		boolean returnValue = initialize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void ev_finalize_void(long pNativeObject);
	public void ev_finalize()
	{
		ev_finalize_void(this.nativeObject.pointer);
	}
	native private void buildRenderState_SGPass_CTargetRenderState(long pNativeObject, long sgPass, long renderState);
	public void buildRenderState(com.earthview.world.graphic.rtshadersystem.ShaderGenerator.Sgpass sgPass, com.earthview.world.graphic.rtshadersystem.TargetRenderState renderState)
	{
		long sgPassParamValue = (sgPass == null ? 0L : sgPass.nativeObject.pointer);
		long renderStateParamValue = (renderState == null ? 0L : renderState.nativeObject.pointer);
		buildRenderState_SGPass_CTargetRenderState(this.nativeObject.pointer, sgPassParamValue, renderStateParamValue);
	}
	public Ffprenderstatebuilder(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ffprenderstatebuilder(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ffprenderstatebuilder fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ffprenderstatebuilder obj = null;
 		if(baseObj instanceof Ffprenderstatebuilder)
		{
			obj = (Ffprenderstatebuilder)baseObj;
		} else {
			obj = new Ffprenderstatebuilder(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFFPRenderStateBuilder");
			obj.increaseCast();
		}

		return obj;
	}
}
