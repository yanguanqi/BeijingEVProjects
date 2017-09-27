package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateAccessor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor", new SubRenderStateAccessorClassFactory());
	}

	native private void addSubRenderStateInstance_CSubRenderState(long pNativeObject, long subRenderState);
	public void addSubRenderStateInstance(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		addSubRenderStateInstance_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private void removeSubRenderStateInstance_CSubRenderState(long pNativeObject, long subRenderState);
	public void removeSubRenderStateInstance(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		removeSubRenderStateInstance_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private long getSubRenderStateInstanceSet_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateSet getSubRenderStateInstanceSet()
	{
		long returnValue = getSubRenderStateInstanceSet_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.SubRenderStateSet __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate, "SubRenderStateSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SubRenderStateSet");
		}
		return __returnValue;
	}
	public SubRenderStateAccessor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubRenderStateAccessor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubRenderStateAccessor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubRenderStateAccessor obj = null;
 		if(baseObj instanceof SubRenderStateAccessor)
		{
			obj = (SubRenderStateAccessor)baseObj;
		} else {
			obj = new SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubRenderStateAccessor");
			obj.increaseCast();
		}

		return obj;
	}
}
