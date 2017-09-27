package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CSubRenderState", new SubRenderStateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCSubRenderStateProxy", new SubRenderStateClassFactory());
	}

	public SubRenderState() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSubRenderStateProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.SubRenderState".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getExecutionOrder_void_callback()
	{
		int returnValue = getExecutionOrder();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getExecutionOrder_void(long pNativeObject);
	public int getExecutionOrder()
	{
		int returnValue = getExecutionOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getExecutionOrder_void_NoVirtual(long pNativeObject);
	protected int getExecutionOrder_NoVirtual()
	{
		int returnValue = getExecutionOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void copyFrom_CSubRenderState_callback(long rhs)
	{
		com.earthview.world.graphic.rtshadersystem.SubRenderState rhsParamValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
		rhsParamValue.setDelegate(true);
		rhsParamValue.setInstancePointer(new InstancePointer(rhs));
		IClassFactory rhsParamValueClassFactory = GlobalClassFactoryMap.get(rhsParamValue.getCppInstanceTypeName());
		if (rhsParamValueClassFactory != null)
		{
			rhsParamValue.setDelegate(true);
			rhsParamValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)rhsParamValueClassFactory.create();
			rhsParamValue.setDelegate(true);
			rhsParamValue.setInstancePointer(new InstancePointer(rhs));
		}
		copyFrom(rhsParamValue);
	}

	native private void copyFrom_CSubRenderState(long pNativeObject, long rhs);
	public void copyFrom(com.earthview.world.graphic.rtshadersystem.SubRenderState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		copyFrom_CSubRenderState(this.nativeObject.pointer, rhsParamValue);
	}
	native private void copyFrom_CSubRenderState_NoVirtual(long pNativeObject, long rhs);
	protected void copyFrom_NoVirtual(com.earthview.world.graphic.rtshadersystem.SubRenderState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		copyFrom_CSubRenderState_NoVirtual(this.nativeObject.pointer, rhsParamValue);
	}

	native private long OperatorAssign_CSubRenderState(long pNativeObject, long rhs);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState OperatorAssign(com.earthview.world.graphic.rtshadersystem.SubRenderState rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CSubRenderState(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.rtshadersystem.SubRenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderState");
		}
		return __returnValue;
	}
	protected  boolean createCpuSubPrograms_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = createCpuSubPrograms(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createCpuSubPrograms_CProgramSet(long pNativeObject, long programSet);
	public boolean createCpuSubPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = createCpuSubPrograms_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean createCpuSubPrograms_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean createCpuSubPrograms_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = createCpuSubPrograms_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	protected  void updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback(long rend, long pass, long source, long pLightList)
	{
		com.earthview.world.graphic.Renderable rendParamValue = (rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
		if(rendParamValue != null)
		{
		rendParamValue.setDelegate(true);
		rendParamValue.setInstancePointer(new InstancePointer(rend));
		IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
		if (rendParamValueClassFactory != null)
		{
			rendParamValue.setDelegate(true);
			rendParamValue = (com.earthview.world.graphic.Renderable)rendParamValueClassFactory.create();
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
		}
		}
		com.earthview.world.graphic.Pass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(passParamValue != null)
		{
		passParamValue.setDelegate(true);
		passParamValue.setInstancePointer(new InstancePointer(pass));
		IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
		if (passParamValueClassFactory != null)
		{
			passParamValue.setDelegate(true);
			passParamValue = (com.earthview.world.graphic.Pass)passParamValueClassFactory.create();
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
		}
		}
		com.earthview.world.graphic.AutoParamDataSource sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.AutoParamDataSource)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.LightList pLightListParamValue = (pLightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLightListParamValue != null)
		{
		pLightListParamValue.setDelegate(true);
		pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		IClassFactory pLightListParamValueClassFactory = GlobalClassFactoryMap.get(pLightListParamValue.getCppInstanceTypeName());
		if (pLightListParamValueClassFactory != null)
		{
			pLightListParamValue.setDelegate(true);
			pLightListParamValue = (com.earthview.world.graphic.LightList)pLightListParamValueClassFactory.create();
			pLightListParamValue.setDelegate(true);
			pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		}
		}
		updateGpuProgramsParams(rendParamValue, passParamValue, sourceParamValue, pLightListParamValue);
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
	native private void updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(long pNativeObject, long rend, long pass, long source, long pLightList);
	protected void updateGpuProgramsParams_NoVirtual(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue);
	}

	protected  boolean preAddToRenderState_CRenderState_CPass_CPass_callback(long renderState, long srcPass, long dstPass)
	{
		com.earthview.world.graphic.rtshadersystem.RenderState renderStateParamValue = (renderState == 0L ? null : new com.earthview.world.graphic.rtshadersystem.RenderState(CreatedWhenConstruct.CWC_NotToCreate));
		if(renderStateParamValue != null)
		{
		renderStateParamValue.setDelegate(true);
		renderStateParamValue.setInstancePointer(new InstancePointer(renderState));
		IClassFactory renderStateParamValueClassFactory = GlobalClassFactoryMap.get(renderStateParamValue.getCppInstanceTypeName());
		if (renderStateParamValueClassFactory != null)
		{
			renderStateParamValue.setDelegate(true);
			renderStateParamValue = (com.earthview.world.graphic.rtshadersystem.RenderState)renderStateParamValueClassFactory.create();
			renderStateParamValue.setDelegate(true);
			renderStateParamValue.setInstancePointer(new InstancePointer(renderState));
		}
		}
		com.earthview.world.graphic.Pass srcPassParamValue = (srcPass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcPassParamValue != null)
		{
		srcPassParamValue.setDelegate(true);
		srcPassParamValue.setInstancePointer(new InstancePointer(srcPass));
		IClassFactory srcPassParamValueClassFactory = GlobalClassFactoryMap.get(srcPassParamValue.getCppInstanceTypeName());
		if (srcPassParamValueClassFactory != null)
		{
			srcPassParamValue.setDelegate(true);
			srcPassParamValue = (com.earthview.world.graphic.Pass)srcPassParamValueClassFactory.create();
			srcPassParamValue.setDelegate(true);
			srcPassParamValue.setInstancePointer(new InstancePointer(srcPass));
		}
		}
		com.earthview.world.graphic.Pass dstPassParamValue = (dstPass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(dstPassParamValue != null)
		{
		dstPassParamValue.setDelegate(true);
		dstPassParamValue.setInstancePointer(new InstancePointer(dstPass));
		IClassFactory dstPassParamValueClassFactory = GlobalClassFactoryMap.get(dstPassParamValue.getCppInstanceTypeName());
		if (dstPassParamValueClassFactory != null)
		{
			dstPassParamValue.setDelegate(true);
			dstPassParamValue = (com.earthview.world.graphic.Pass)dstPassParamValueClassFactory.create();
			dstPassParamValue.setDelegate(true);
			dstPassParamValue.setInstancePointer(new InstancePointer(dstPass));
		}
		}
		boolean returnValue = preAddToRenderState(renderStateParamValue, srcPassParamValue, dstPassParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean preAddToRenderState_CRenderState_CPass_CPass(long pNativeObject, long renderState, long srcPass, long dstPass);
	public boolean preAddToRenderState(com.earthview.world.graphic.rtshadersystem.RenderState renderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long renderStateParamValue = (renderState == null ? 0L : renderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		boolean returnValue = preAddToRenderState_CRenderState_CPass_CPass(this.nativeObject.pointer, renderStateParamValue, srcPassParamValue, dstPassParamValue);
		return returnValue;
	}
	native private boolean preAddToRenderState_CRenderState_CPass_CPass_NoVirtual(long pNativeObject, long renderState, long srcPass, long dstPass);
	protected boolean preAddToRenderState_NoVirtual(com.earthview.world.graphic.rtshadersystem.RenderState renderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long renderStateParamValue = (renderState == null ? 0L : renderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		boolean returnValue = preAddToRenderState_CRenderState_CPass_CPass_NoVirtual(this.nativeObject.pointer, renderStateParamValue, srcPassParamValue, dstPassParamValue);
		return returnValue;
	}

	native private long getAccessor_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessorPtr getAccessor()
	{
		long returnValue = getAccessor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessorPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "SubRenderStateAccessorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SubRenderStateAccessorPtr");
		}
		return __returnValue;
	}
	protected  boolean resolveParameters_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = resolveParameters(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resolveParameters_CProgramSet(long pNativeObject, long programSet);
	/// Protected methods
	public boolean resolveParameters(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveParameters_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean resolveParameters_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean resolveParameters_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveParameters_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	protected  boolean resolveDependencies_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = resolveDependencies(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resolveDependencies_CProgramSet(long pNativeObject, long programSet);
	public boolean resolveDependencies(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveDependencies_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean resolveDependencies_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean resolveDependencies_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = resolveDependencies_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	protected  boolean addFunctionInvocations_CProgramSet_callback(long programSet)
	{
		com.earthview.world.graphic.rtshadersystem.ProgramSet programSetParamValue = (programSet == 0L ? null : new com.earthview.world.graphic.rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate));
		if(programSetParamValue != null)
		{
		programSetParamValue.setDelegate(true);
		programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		IClassFactory programSetParamValueClassFactory = GlobalClassFactoryMap.get(programSetParamValue.getCppInstanceTypeName());
		if (programSetParamValueClassFactory != null)
		{
			programSetParamValue.setDelegate(true);
			programSetParamValue = (com.earthview.world.graphic.rtshadersystem.ProgramSet)programSetParamValueClassFactory.create();
			programSetParamValue.setDelegate(true);
			programSetParamValue.setInstancePointer(new InstancePointer(programSet));
		}
		}
		boolean returnValue = addFunctionInvocations(programSetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean addFunctionInvocations_CProgramSet(long pNativeObject, long programSet);
	public boolean addFunctionInvocations(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = addFunctionInvocations_CProgramSet(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}
	native private boolean addFunctionInvocations_CProgramSet_NoVirtual(long pNativeObject, long programSet);
	protected boolean addFunctionInvocations_NoVirtual(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		long programSetParamValue = (programSet == null ? 0L : programSet.nativeObject.pointer);
		boolean returnValue = addFunctionInvocations_CProgramSet_NoVirtual(this.nativeObject.pointer, programSetParamValue);
		return returnValue;
	}

	public SubRenderState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubRenderState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getExecutionOrder_void(long pNativeObject, String method);
	native protected void register_copyFrom_CSubRenderState(long pNativeObject, String method);
	native protected void register_createCpuSubPrograms_CProgramSet(long pNativeObject, String method);
	native protected void register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(long pNativeObject, String method);
	native protected void register_preAddToRenderState_CRenderState_CPass_CPass(long pNativeObject, String method);
	native protected void register_resolveParameters_CProgramSet(long pNativeObject, String method);
	native protected void register_resolveDependencies_CProgramSet(long pNativeObject, String method);
	native protected void register_addFunctionInvocations_CProgramSet(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getExecutionOrder_void(this.nativeObject.pointer, "getExecutionOrder_void_callback");
			this.register_copyFrom_CSubRenderState(this.nativeObject.pointer, "copyFrom_CSubRenderState_callback");
			this.register_createCpuSubPrograms_CProgramSet(this.nativeObject.pointer, "createCpuSubPrograms_CProgramSet_callback");
			this.register_updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList(this.nativeObject.pointer, "updateGpuProgramsParams_CRenderable_CPass_CAutoParamDataSource_LightList_callback");
			this.register_preAddToRenderState_CRenderState_CPass_CPass(this.nativeObject.pointer, "preAddToRenderState_CRenderState_CPass_CPass_callback");
			this.register_resolveParameters_CProgramSet(this.nativeObject.pointer, "resolveParameters_CProgramSet_callback");
			this.register_resolveDependencies_CProgramSet(this.nativeObject.pointer, "resolveDependencies_CProgramSet_callback");
			this.register_addFunctionInvocations_CProgramSet(this.nativeObject.pointer, "addFunctionInvocations_CProgramSet_callback");
		}
	}
	
	public static SubRenderState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubRenderState obj = null;
 		if(baseObj instanceof SubRenderState)
		{
			obj = (SubRenderState)baseObj;
		} else {
			obj = new SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubRenderState");
			obj.increaseCast();
		}

		return obj;
	}
}
