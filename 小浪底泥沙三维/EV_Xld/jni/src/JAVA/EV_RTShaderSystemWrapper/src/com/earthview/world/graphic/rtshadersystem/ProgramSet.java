package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProgramSet extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CProgramSet", new ProgramSetClassFactory());
	}

	public ProgramSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CProgramSet", null);
	}

	native private long getCpuVertexProgram_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Program getCpuVertexProgram()
	{
		long returnValue = getCpuVertexProgram_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Program __returnValue = new com.earthview.world.graphic.rtshadersystem.Program(CreatedWhenConstruct.CWC_NotToCreate, "CProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Program)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProgram");
		}
		return __returnValue;
	}
	native private long getCpuFragmentProgram_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Program getCpuFragmentProgram()
	{
		long returnValue = getCpuFragmentProgram_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Program __returnValue = new com.earthview.world.graphic.rtshadersystem.Program(CreatedWhenConstruct.CWC_NotToCreate, "CProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Program)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProgram");
		}
		return __returnValue;
	}
	native private long getGpuVertexProgram_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramPtr getGpuVertexProgram()
	{
		long returnValue = getGpuVertexProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long getGpuFragmentProgram_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramPtr getGpuFragmentProgram()
	{
		long returnValue = getGpuFragmentProgram_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramPtr");
		}
		return __returnValue;
	}
	public ProgramSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProgramSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProgramSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProgramSet obj = null;
 		if(baseObj instanceof ProgramSet)
		{
			obj = (ProgramSet)baseObj;
		} else {
			obj = new ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProgramSet");
			obj.increaseCast();
		}

		return obj;
	}
}
