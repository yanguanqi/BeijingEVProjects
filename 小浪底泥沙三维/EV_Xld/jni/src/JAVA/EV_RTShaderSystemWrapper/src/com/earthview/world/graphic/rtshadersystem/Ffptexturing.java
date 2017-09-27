package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ffptexturing extends com.earthview.world.graphic.rtshadersystem.SubRenderState {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturing", new FfptexturingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCFFPTexturingProxy", new FfptexturingClassFactory());
	}

	public Ffptexturing() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFFPTexturingProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Ffptexturing".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private static String get_Type_void();
	public static String get_Type()
	{
		String jniValue = get_Type_void();
		
		return jniValue;
	}
	
	native private static void set_Type_EVString (String value);
	public static void set_Type(String Type)
	{
		String TypeParamValue = Type;
		
		set_Type_EVString(TypeParamValue);
	}
	
	/// Per texture unit parameters.
	public static class TextureUnitParams extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams", new TextureUnitParamsClassFactory());
		}

		public TextureUnitParams() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureUnitParams", null);
		}

		native private long get_mTextureUnitState_void(long pNativeObject);
		public com.earthview.world.graphic.TextureUnitState get_mTextureUnitState()
		{
			long jniValue = get_mTextureUnitState_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.TextureUnitState __returnValue = new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate, "CTextureUnitState");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TextureUnitState)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CTextureUnitState");
			}
			return __returnValue;
		}
		
		native private void set_mTextureUnitState_CTextureUnitState (long pNativeObject, long value);
		public void set_mTextureUnitState(com.earthview.world.graphic.TextureUnitState mTextureUnitState)
		{
			long mTextureUnitStateParamValue = (mTextureUnitState == null ? 0L : mTextureUnitState.nativeObject.pointer);
			
			set_mTextureUnitState_CTextureUnitState(this.nativeObject.pointer, mTextureUnitStateParamValue);
		}
		
		native private long get_mTextureProjector_void(long pNativeObject);
		public com.earthview.world.graphic.Frustum get_mTextureProjector()
		{
			long jniValue = get_mTextureProjector_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Frustum __returnValue = new com.earthview.world.graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate, "CFrustum");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Frustum)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CFrustum");
			}
			return __returnValue;
		}
		
		native private int get_mTextureSamplerIndex_void(long pNativeObject);
		public int get_mTextureSamplerIndex()
		{
			int jniValue = get_mTextureSamplerIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_mTextureSamplerIndex_ev_uint16 (long pNativeObject, int value);
		public void set_mTextureSamplerIndex(int mTextureSamplerIndex)
		{
			int mTextureSamplerIndexParamValue = mTextureSamplerIndex;
			
			set_mTextureSamplerIndex_ev_uint16(this.nativeObject.pointer, mTextureSamplerIndexParamValue);
		}
		
		native private int get_mTextureSamplerType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuConstantType get_mTextureSamplerType()
		{
			int jniValue = get_mTextureSamplerType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuConstantType.toEnum(jniValue);
		}
		
		native private void set_mTextureSamplerType_GpuConstantType (long pNativeObject, int value);
		public void set_mTextureSamplerType(com.earthview.world.graphic.GpuConstantType mTextureSamplerType)
		{
			int mTextureSamplerTypeParamValue = mTextureSamplerType.getValue();
			
			set_mTextureSamplerType_GpuConstantType(this.nativeObject.pointer, mTextureSamplerTypeParamValue);
		}
		
		native private int get_mVSInTextureCoordinateType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuConstantType get_mVSInTextureCoordinateType()
		{
			int jniValue = get_mVSInTextureCoordinateType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuConstantType.toEnum(jniValue);
		}
		
		native private void set_mVSInTextureCoordinateType_GpuConstantType (long pNativeObject, int value);
		public void set_mVSInTextureCoordinateType(com.earthview.world.graphic.GpuConstantType mVSInTextureCoordinateType)
		{
			int mVSInTextureCoordinateTypeParamValue = mVSInTextureCoordinateType.getValue();
			
			set_mVSInTextureCoordinateType_GpuConstantType(this.nativeObject.pointer, mVSInTextureCoordinateTypeParamValue);
		}
		
		native private int get_mVSOutTextureCoordinateType_void(long pNativeObject);
		public com.earthview.world.graphic.GpuConstantType get_mVSOutTextureCoordinateType()
		{
			int jniValue = get_mVSOutTextureCoordinateType_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GpuConstantType.toEnum(jniValue);
		}
		
		native private void set_mVSOutTextureCoordinateType_GpuConstantType (long pNativeObject, int value);
		public void set_mVSOutTextureCoordinateType(com.earthview.world.graphic.GpuConstantType mVSOutTextureCoordinateType)
		{
			int mVSOutTextureCoordinateTypeParamValue = mVSOutTextureCoordinateType.getValue();
			
			set_mVSOutTextureCoordinateType_GpuConstantType(this.nativeObject.pointer, mVSOutTextureCoordinateTypeParamValue);
		}
		
		native private int get_mTexCoordCalcMethod_void(long pNativeObject);
		public TexCoordCalcMethod get_mTexCoordCalcMethod()
		{
			int jniValue = get_mTexCoordCalcMethod_void(this.nativeObject.pointer);
			
			return TexCoordCalcMethod.toEnum(jniValue);
		}
		
		native private void set_mTexCoordCalcMethod_TexCoordCalcMethod (long pNativeObject, int value);
		public void set_mTexCoordCalcMethod(TexCoordCalcMethod mTexCoordCalcMethod)
		{
			int mTexCoordCalcMethodParamValue = mTexCoordCalcMethod.getValue();
			
			set_mTexCoordCalcMethod_TexCoordCalcMethod(this.nativeObject.pointer, mTexCoordCalcMethodParamValue);
		}
		
		native private long get_mTextureMatrix_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr get_mTextureMatrix()
		{
			long jniValue = get_mTextureMatrix_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mTextureMatrix_UniformParameterPtr (long pNativeObject, long value);
		public void set_mTextureMatrix(com.earthview.world.graphic.rtshadersystem.UniformParameterPtr mTextureMatrix)
		{
			long mTextureMatrixParamValue = mTextureMatrix.nativeObject.pointer;
			
			set_mTextureMatrix_UniformParameterPtr(this.nativeObject.pointer, mTextureMatrixParamValue);
		}
		
		native private long get_mTextureViewProjImageMatrix_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr get_mTextureViewProjImageMatrix()
		{
			long jniValue = get_mTextureViewProjImageMatrix_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mTextureViewProjImageMatrix_UniformParameterPtr (long pNativeObject, long value);
		public void set_mTextureViewProjImageMatrix(com.earthview.world.graphic.rtshadersystem.UniformParameterPtr mTextureViewProjImageMatrix)
		{
			long mTextureViewProjImageMatrixParamValue = mTextureViewProjImageMatrix.nativeObject.pointer;
			
			set_mTextureViewProjImageMatrix_UniformParameterPtr(this.nativeObject.pointer, mTextureViewProjImageMatrixParamValue);
		}
		
		native private long get_mTextureSampler_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr get_mTextureSampler()
		{
			long jniValue = get_mTextureSampler_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mTextureSampler_UniformParameterPtr (long pNativeObject, long value);
		public void set_mTextureSampler(com.earthview.world.graphic.rtshadersystem.UniformParameterPtr mTextureSampler)
		{
			long mTextureSamplerParamValue = mTextureSampler.nativeObject.pointer;
			
			set_mTextureSampler_UniformParameterPtr(this.nativeObject.pointer, mTextureSamplerParamValue);
		}
		
		native private long get_mVSInputTexCoord_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ParameterPtr get_mVSInputTexCoord()
		{
			long jniValue = get_mVSInputTexCoord_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mVSInputTexCoord_ParameterPtr (long pNativeObject, long value);
		public void set_mVSInputTexCoord(com.earthview.world.graphic.rtshadersystem.ParameterPtr mVSInputTexCoord)
		{
			long mVSInputTexCoordParamValue = mVSInputTexCoord.nativeObject.pointer;
			
			set_mVSInputTexCoord_ParameterPtr(this.nativeObject.pointer, mVSInputTexCoordParamValue);
		}
		
		native private long get_mVSOutputTexCoord_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ParameterPtr get_mVSOutputTexCoord()
		{
			long jniValue = get_mVSOutputTexCoord_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mVSOutputTexCoord_ParameterPtr (long pNativeObject, long value);
		public void set_mVSOutputTexCoord(com.earthview.world.graphic.rtshadersystem.ParameterPtr mVSOutputTexCoord)
		{
			long mVSOutputTexCoordParamValue = mVSOutputTexCoord.nativeObject.pointer;
			
			set_mVSOutputTexCoord_ParameterPtr(this.nativeObject.pointer, mVSOutputTexCoordParamValue);
		}
		
		native private long get_mPSInputTexCoord_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ParameterPtr get_mPSInputTexCoord()
		{
			long jniValue = get_mPSInputTexCoord_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
			}
			return __returnValue;
		}
		
		native private void set_mPSInputTexCoord_ParameterPtr (long pNativeObject, long value);
		public void set_mPSInputTexCoord(com.earthview.world.graphic.rtshadersystem.ParameterPtr mPSInputTexCoord)
		{
			long mPSInputTexCoordParamValue = mPSInputTexCoord.nativeObject.pointer;
			
			set_mPSInputTexCoord_ParameterPtr(this.nativeObject.pointer, mPSInputTexCoordParamValue);
		}
		
		public TextureUnitParams(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureUnitParams(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureUnitParams fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureUnitParams obj = null;
 			if(baseObj instanceof TextureUnitParams)
			{
				obj = (TextureUnitParams)baseObj;
			} else {
				obj = new TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureUnitParams");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureUnitParamsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureUnitParams emptyInstance = new TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private boolean resolveParameters_CProgramSet(long pNativeObject, long programSet);
	/// Pixel shader input texture coordinates parameter.
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

	protected  void addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback(long textureUnitParams, long psMain, long texel, int groupOrder, long internalCounter)
	{
		com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParamsParamValue = (textureUnitParams == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams(CreatedWhenConstruct.CWC_NotToCreate));
		if(textureUnitParamsParamValue != null)
		{
		textureUnitParamsParamValue.setDelegate(true);
		textureUnitParamsParamValue.setInstancePointer(new InstancePointer(textureUnitParams));
		IClassFactory textureUnitParamsParamValueClassFactory = GlobalClassFactoryMap.get(textureUnitParamsParamValue.getCppInstanceTypeName());
		if (textureUnitParamsParamValueClassFactory != null)
		{
			textureUnitParamsParamValue.setDelegate(true);
			textureUnitParamsParamValue = (com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams)textureUnitParamsParamValueClassFactory.create();
			textureUnitParamsParamValue.setDelegate(true);
			textureUnitParamsParamValue.setInstancePointer(new InstancePointer(textureUnitParams));
		}
		}
		com.earthview.world.graphic.rtshadersystem.Function psMainParamValue = (psMain == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate));
		if(psMainParamValue != null)
		{
		psMainParamValue.setDelegate(true);
		psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		IClassFactory psMainParamValueClassFactory = GlobalClassFactoryMap.get(psMainParamValue.getCppInstanceTypeName());
		if (psMainParamValueClassFactory != null)
		{
			psMainParamValue.setDelegate(true);
			psMainParamValue = (com.earthview.world.graphic.rtshadersystem.Function)psMainParamValueClassFactory.create();
			psMainParamValue.setDelegate(true);
			psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		}
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr texelParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		texelParamValue.setDelegate(true);
		texelParamValue.setInstancePointer(new InstancePointer(texel));
		IClassFactory texelParamValueClassFactory = GlobalClassFactoryMap.get(texelParamValue.getCppInstanceTypeName());
		if (texelParamValueClassFactory != null)
		{
			texelParamValue.setDelegate(true);
			texelParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)texelParamValueClassFactory.create();
			texelParamValue.setDelegate(true);
			texelParamValue.setInstancePointer(new InstancePointer(texel));
		}
		int groupOrderParamValue = groupOrder;
		IntegerPointer internalCounterParamValue = new IntegerPointer(new InstancePointer(internalCounter));
		addPSSampleTexelInvocation(textureUnitParamsParamValue, psMainParamValue, texelParamValue, groupOrderParamValue, internalCounterParamValue);
	}

	native private void addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int(long pNativeObject, long textureUnitParams, long psMain, long texel, int groupOrder, long internalCounter);
	public void addPSSampleTexelInvocation(com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int groupOrder, IntegerPointer internalCounter)
	{
		long textureUnitParamsParamValue = (textureUnitParams == null ? 0L : textureUnitParams.nativeObject.pointer);
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long texelParamValue = texel.nativeObject.pointer;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int(this.nativeObject.pointer, textureUnitParamsParamValue, psMainParamValue, texelParamValue, groupOrderParamValue, internalCounterParamValue);
	}
	native private void addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_NoVirtual(long pNativeObject, long textureUnitParams, long psMain, long texel, int groupOrder, long internalCounter);
	protected void addPSSampleTexelInvocation_NoVirtual(com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int groupOrder, IntegerPointer internalCounter)
	{
		long textureUnitParamsParamValue = (textureUnitParams == null ? 0L : textureUnitParams.nativeObject.pointer);
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long texelParamValue = texel.nativeObject.pointer;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_NoVirtual(this.nativeObject.pointer, textureUnitParamsParamValue, psMainParamValue, texelParamValue, groupOrderParamValue, internalCounterParamValue);
	}

	protected  void addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback(long psMain, long arg, long texel, int samplerIndex, int blendSrc, long colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, long internalCounter)
	{
		com.earthview.world.graphic.rtshadersystem.Function psMainParamValue = (psMain == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate));
		if(psMainParamValue != null)
		{
		psMainParamValue.setDelegate(true);
		psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		IClassFactory psMainParamValueClassFactory = GlobalClassFactoryMap.get(psMainParamValue.getCppInstanceTypeName());
		if (psMainParamValueClassFactory != null)
		{
			psMainParamValue.setDelegate(true);
			psMainParamValue = (com.earthview.world.graphic.rtshadersystem.Function)psMainParamValueClassFactory.create();
			psMainParamValue.setDelegate(true);
			psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		}
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr argParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		argParamValue.setDelegate(true);
		argParamValue.setInstancePointer(new InstancePointer(arg));
		IClassFactory argParamValueClassFactory = GlobalClassFactoryMap.get(argParamValue.getCppInstanceTypeName());
		if (argParamValueClassFactory != null)
		{
			argParamValue.setDelegate(true);
			argParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)argParamValueClassFactory.create();
			argParamValue.setDelegate(true);
			argParamValue.setInstancePointer(new InstancePointer(arg));
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr texelParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		texelParamValue.setDelegate(true);
		texelParamValue.setInstancePointer(new InstancePointer(texel));
		IClassFactory texelParamValueClassFactory = GlobalClassFactoryMap.get(texelParamValue.getCppInstanceTypeName());
		if (texelParamValueClassFactory != null)
		{
			texelParamValue.setDelegate(true);
			texelParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)texelParamValueClassFactory.create();
			texelParamValue.setDelegate(true);
			texelParamValue.setInstancePointer(new InstancePointer(texel));
		}
		int samplerIndexParamValue = samplerIndex;
		com.earthview.world.graphic.LayerBlendSource blendSrcParamValue = com.earthview.world.graphic.LayerBlendSource.toEnum(blendSrc);
		com.earthview.world.graphic.ColourValue colourValueParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourValueParamValue.setDelegate(true);
		colourValueParamValue.setInstancePointer(new InstancePointer(colourValue));
		IClassFactory colourValueParamValueClassFactory = GlobalClassFactoryMap.get(colourValueParamValue.getCppInstanceTypeName());
		if (colourValueParamValueClassFactory != null)
		{
			colourValueParamValue.setDelegate(true);
			colourValueParamValue = (com.earthview.world.graphic.ColourValue)colourValueParamValueClassFactory.create();
			colourValueParamValue.setDelegate(true);
			colourValueParamValue.setInstancePointer(new InstancePointer(colourValue));
		}
		double alphaValueParamValue = alphaValue;
		boolean isAlphaArgumentParamValue = isAlphaArgument;
		int groupOrderParamValue = groupOrder;
		IntegerPointer internalCounterParamValue = new IntegerPointer(new InstancePointer(internalCounter));
		addPSArgumentInvocations(psMainParamValue, argParamValue, texelParamValue, samplerIndexParamValue, blendSrcParamValue, colourValueParamValue, alphaValueParamValue, isAlphaArgumentParamValue, groupOrderParamValue, internalCounterParamValue);
	}

	native private void addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(long pNativeObject, long psMain, long arg, long texel, int samplerIndex, int blendSrc, long colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, long internalCounter);
	public void addPSArgumentInvocations(com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int samplerIndex, com.earthview.world.graphic.LayerBlendSource blendSrc, com.earthview.world.graphic.ColourValue colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, IntegerPointer internalCounter)
	{
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long argParamValue = arg.nativeObject.pointer;
		long texelParamValue = texel.nativeObject.pointer;
		int samplerIndexParamValue = samplerIndex;
		int blendSrcParamValue = blendSrc.getValue();
		long colourValueParamValue = colourValue.nativeObject.pointer;
		double alphaValueParamValue = alphaValue;
		boolean isAlphaArgumentParamValue = isAlphaArgument;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(this.nativeObject.pointer, psMainParamValue, argParamValue, texelParamValue, samplerIndexParamValue, blendSrcParamValue, colourValueParamValue, alphaValueParamValue, isAlphaArgumentParamValue, groupOrderParamValue, internalCounterParamValue);
	}
	native private void addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_NoVirtual(long pNativeObject, long psMain, long arg, long texel, int samplerIndex, int blendSrc, long colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, long internalCounter);
	protected void addPSArgumentInvocations_NoVirtual(com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int samplerIndex, com.earthview.world.graphic.LayerBlendSource blendSrc, com.earthview.world.graphic.ColourValue colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, IntegerPointer internalCounter)
	{
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long argParamValue = arg.nativeObject.pointer;
		long texelParamValue = texel.nativeObject.pointer;
		int samplerIndexParamValue = samplerIndex;
		int blendSrcParamValue = blendSrc.getValue();
		long colourValueParamValue = colourValue.nativeObject.pointer;
		double alphaValueParamValue = alphaValue;
		boolean isAlphaArgumentParamValue = isAlphaArgument;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_NoVirtual(this.nativeObject.pointer, psMainParamValue, argParamValue, texelParamValue, samplerIndexParamValue, blendSrcParamValue, colourValueParamValue, alphaValueParamValue, isAlphaArgumentParamValue, groupOrderParamValue, internalCounterParamValue);
	}

	protected  void addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback(long psMain, long arg1, long arg2, long texel, int samplerIndex, long blendMode, int groupOrder, long internalCounter, int targetChannels)
	{
		com.earthview.world.graphic.rtshadersystem.Function psMainParamValue = (psMain == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate));
		if(psMainParamValue != null)
		{
		psMainParamValue.setDelegate(true);
		psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		IClassFactory psMainParamValueClassFactory = GlobalClassFactoryMap.get(psMainParamValue.getCppInstanceTypeName());
		if (psMainParamValueClassFactory != null)
		{
			psMainParamValue.setDelegate(true);
			psMainParamValue = (com.earthview.world.graphic.rtshadersystem.Function)psMainParamValueClassFactory.create();
			psMainParamValue.setDelegate(true);
			psMainParamValue.setInstancePointer(new InstancePointer(psMain));
		}
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr arg1ParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		arg1ParamValue.setDelegate(true);
		arg1ParamValue.setInstancePointer(new InstancePointer(arg1));
		IClassFactory arg1ParamValueClassFactory = GlobalClassFactoryMap.get(arg1ParamValue.getCppInstanceTypeName());
		if (arg1ParamValueClassFactory != null)
		{
			arg1ParamValue.setDelegate(true);
			arg1ParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)arg1ParamValueClassFactory.create();
			arg1ParamValue.setDelegate(true);
			arg1ParamValue.setInstancePointer(new InstancePointer(arg1));
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr arg2ParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		arg2ParamValue.setDelegate(true);
		arg2ParamValue.setInstancePointer(new InstancePointer(arg2));
		IClassFactory arg2ParamValueClassFactory = GlobalClassFactoryMap.get(arg2ParamValue.getCppInstanceTypeName());
		if (arg2ParamValueClassFactory != null)
		{
			arg2ParamValue.setDelegate(true);
			arg2ParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)arg2ParamValueClassFactory.create();
			arg2ParamValue.setDelegate(true);
			arg2ParamValue.setInstancePointer(new InstancePointer(arg2));
		}
		com.earthview.world.graphic.rtshadersystem.ParameterPtr texelParamValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		texelParamValue.setDelegate(true);
		texelParamValue.setInstancePointer(new InstancePointer(texel));
		IClassFactory texelParamValueClassFactory = GlobalClassFactoryMap.get(texelParamValue.getCppInstanceTypeName());
		if (texelParamValueClassFactory != null)
		{
			texelParamValue.setDelegate(true);
			texelParamValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)texelParamValueClassFactory.create();
			texelParamValue.setDelegate(true);
			texelParamValue.setInstancePointer(new InstancePointer(texel));
		}
		int samplerIndexParamValue = samplerIndex;
		com.earthview.world.graphic.LayerBlendModeEx blendModeParamValue = new com.earthview.world.graphic.LayerBlendModeEx(CreatedWhenConstruct.CWC_NotToCreate);
		blendModeParamValue.setDelegate(true);
		blendModeParamValue.setInstancePointer(new InstancePointer(blendMode));
		IClassFactory blendModeParamValueClassFactory = GlobalClassFactoryMap.get(blendModeParamValue.getCppInstanceTypeName());
		if (blendModeParamValueClassFactory != null)
		{
			blendModeParamValue.setDelegate(true);
			blendModeParamValue = (com.earthview.world.graphic.LayerBlendModeEx)blendModeParamValueClassFactory.create();
			blendModeParamValue.setDelegate(true);
			blendModeParamValue.setInstancePointer(new InstancePointer(blendMode));
		}
		int groupOrderParamValue = groupOrder;
		IntegerPointer internalCounterParamValue = new IntegerPointer(new InstancePointer(internalCounter));
		int targetChannelsParamValue = targetChannels;
		addPSBlendInvocations(psMainParamValue, arg1ParamValue, arg2ParamValue, texelParamValue, samplerIndexParamValue, blendModeParamValue, groupOrderParamValue, internalCounterParamValue, targetChannelsParamValue);
	}

	native private void addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(long pNativeObject, long psMain, long arg1, long arg2, long texel, int samplerIndex, long blendMode, int groupOrder, long internalCounter, int targetChannels);
	public void addPSBlendInvocations(com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg1, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg2, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int samplerIndex, com.earthview.world.graphic.LayerBlendModeEx blendMode, int groupOrder, IntegerPointer internalCounter, int targetChannels)
	{
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long arg1ParamValue = arg1.nativeObject.pointer;
		long arg2ParamValue = arg2.nativeObject.pointer;
		long texelParamValue = texel.nativeObject.pointer;
		int samplerIndexParamValue = samplerIndex;
		long blendModeParamValue = blendMode.nativeObject.pointer;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		int targetChannelsParamValue = targetChannels;
		addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.nativeObject.pointer, psMainParamValue, arg1ParamValue, arg2ParamValue, texelParamValue, samplerIndexParamValue, blendModeParamValue, groupOrderParamValue, internalCounterParamValue, targetChannelsParamValue);
	}
	native private void addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(long pNativeObject, long psMain, long arg1, long arg2, long texel, int samplerIndex, long blendMode, int groupOrder, long internalCounter, int targetChannels);
	protected void addPSBlendInvocations_NoVirtual(com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg1, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg2, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int samplerIndex, com.earthview.world.graphic.LayerBlendModeEx blendMode, int groupOrder, IntegerPointer internalCounter, int targetChannels)
	{
		long psMainParamValue = (psMain == null ? 0L : psMain.nativeObject.pointer);
		long arg1ParamValue = arg1.nativeObject.pointer;
		long arg2ParamValue = arg2.nativeObject.pointer;
		long texelParamValue = texel.nativeObject.pointer;
		int samplerIndexParamValue = samplerIndex;
		long blendModeParamValue = blendMode.nativeObject.pointer;
		int groupOrderParamValue = groupOrder;
		long internalCounterParamValue = internalCounter.nativeObject.pointer;
		int targetChannelsParamValue = targetChannels;
		addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(this.nativeObject.pointer, psMainParamValue, arg1ParamValue, arg2ParamValue, texelParamValue, samplerIndexParamValue, blendModeParamValue, groupOrderParamValue, internalCounterParamValue, targetChannelsParamValue);
	}

	protected  boolean isProcessingNeeded_CTextureUnitState_callback(long texUnitState)
	{
		com.earthview.world.graphic.TextureUnitState texUnitStateParamValue = (texUnitState == 0L ? null : new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate));
		if(texUnitStateParamValue != null)
		{
		texUnitStateParamValue.setDelegate(true);
		texUnitStateParamValue.setInstancePointer(new InstancePointer(texUnitState));
		IClassFactory texUnitStateParamValueClassFactory = GlobalClassFactoryMap.get(texUnitStateParamValue.getCppInstanceTypeName());
		if (texUnitStateParamValueClassFactory != null)
		{
			texUnitStateParamValue.setDelegate(true);
			texUnitStateParamValue = (com.earthview.world.graphic.TextureUnitState)texUnitStateParamValueClassFactory.create();
			texUnitStateParamValue.setDelegate(true);
			texUnitStateParamValue.setInstancePointer(new InstancePointer(texUnitState));
		}
		}
		boolean returnValue = isProcessingNeeded(texUnitStateParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isProcessingNeeded_CTextureUnitState(long pNativeObject, long texUnitState);
	public boolean isProcessingNeeded(com.earthview.world.graphic.TextureUnitState texUnitState)
	{
		long texUnitStateParamValue = (texUnitState == null ? 0L : texUnitState.nativeObject.pointer);
		boolean returnValue = isProcessingNeeded_CTextureUnitState(this.nativeObject.pointer, texUnitStateParamValue);
		return returnValue;
	}
	native private boolean isProcessingNeeded_CTextureUnitState_NoVirtual(long pNativeObject, long texUnitState);
	protected boolean isProcessingNeeded_NoVirtual(com.earthview.world.graphic.TextureUnitState texUnitState)
	{
		long texUnitStateParamValue = (texUnitState == null ? 0L : texUnitState.nativeObject.pointer);
		boolean returnValue = isProcessingNeeded_CTextureUnitState_NoVirtual(this.nativeObject.pointer, texUnitStateParamValue);
		return returnValue;
	}

	public Ffptexturing(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ffptexturing(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean createCpuSubPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		return super.createCpuSubPrograms_NoVirtual(programSet);
	}
	
	native protected void register_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int(long pNativeObject, String method);
	native protected void register_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(long pNativeObject, String method);
	native protected void register_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(long pNativeObject, String method);
	native protected void register_isProcessingNeeded_CTextureUnitState(long pNativeObject, String method);
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
			this.register_addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int(this.nativeObject.pointer, "addPSSampleTexelInvocation_TextureUnitParams_CFunction_ParameterPtr_int_int_callback");
			this.register_addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(this.nativeObject.pointer, "addPSArgumentInvocations_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_callback");
			this.register_addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(this.nativeObject.pointer, "addPSBlendInvocations_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_callback");
			this.register_isProcessingNeeded_CTextureUnitState(this.nativeObject.pointer, "isProcessingNeeded_CTextureUnitState_callback");
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
	
	public static Ffptexturing fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ffptexturing obj = null;
 		if(baseObj instanceof Ffptexturing)
		{
			obj = (Ffptexturing)baseObj;
		} else {
			obj = new Ffptexturing(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFFPTexturing");
			obj.increaseCast();
		}

		return obj;
	}
}
