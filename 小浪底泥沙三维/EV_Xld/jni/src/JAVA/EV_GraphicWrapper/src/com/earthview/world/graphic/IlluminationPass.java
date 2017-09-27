package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlluminationPass extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::IlluminationPass", new IlluminationPassClassFactory());
	}

	public IlluminationPass() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IlluminationPass", null);
	}

	native private int get_stage_void(long pNativeObject);
	public com.earthview.world.graphic.IlluminationStage get_stage()
	{
		int jniValue = get_stage_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.IlluminationStage.toEnum(jniValue);
	}
	
	native private void set_stage_IlluminationStage (long pNativeObject, int value);
	public void set_stage(com.earthview.world.graphic.IlluminationStage stage)
	{
		int stageParamValue = stage.getValue();
		
		set_stage_IlluminationStage(this.nativeObject.pointer, stageParamValue);
	}
	
	native private long get_pass_void(long pNativeObject);
	public com.earthview.world.graphic.Pass get_pass()
	{
		long jniValue = get_pass_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	
	native private void set_pass_CPass (long pNativeObject, long value);
	public void set_pass(com.earthview.world.graphic.Pass pass)
	{
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		
		set_pass_CPass(this.nativeObject.pointer, passParamValue);
	}
	
	native private boolean get_destroyOnShutdown_void(long pNativeObject);
	public boolean get_destroyOnShutdown()
	{
		boolean jniValue = get_destroyOnShutdown_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_destroyOnShutdown_ev_bool (long pNativeObject, boolean value);
	public void set_destroyOnShutdown(boolean destroyOnShutdown)
	{
		boolean destroyOnShutdownParamValue = destroyOnShutdown;
		
		set_destroyOnShutdown_ev_bool(this.nativeObject.pointer, destroyOnShutdownParamValue);
	}
	
	native private long get_originalPass_void(long pNativeObject);
	public com.earthview.world.graphic.Pass get_originalPass()
	{
		long jniValue = get_originalPass_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	
	native private void set_originalPass_CPass (long pNativeObject, long value);
	public void set_originalPass(com.earthview.world.graphic.Pass originalPass)
	{
		long originalPassParamValue = (originalPass == null ? 0L : originalPass.nativeObject.pointer);
		
		set_originalPass_CPass(this.nativeObject.pointer, originalPassParamValue);
	}
	
	public IlluminationPass(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IlluminationPass(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IlluminationPass fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IlluminationPass obj = null;
 		if(baseObj instanceof IlluminationPass)
		{
			obj = (IlluminationPass)baseObj;
		} else {
			obj = new IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IlluminationPass");
			obj.increaseCast();
		}

		return obj;
	}
}
