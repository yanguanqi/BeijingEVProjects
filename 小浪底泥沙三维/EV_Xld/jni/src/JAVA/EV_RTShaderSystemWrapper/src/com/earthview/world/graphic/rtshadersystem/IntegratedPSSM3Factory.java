package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntegratedPSSM3Factory extends com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory", new IntegratedPSSM3FactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCIntegratedPSSM3FactoryProxy", new IntegratedPSSM3FactoryClassFactory());
	}

	public IntegratedPSSM3Factory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCIntegratedPSSM3FactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.IntegratedPSSM3Factory".equals(this.getClass().getName()))
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

	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(long pNativeObject, long compiler, long prop, long pass, long translator);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.nativeObject.pointer, compilerParamValue, propParamValue, passParamValue, translatorParamValue);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(long pNativeObject, long compiler, long prop, long pass, long translator);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(this.nativeObject.pointer, compilerParamValue, propParamValue, passParamValue, translatorParamValue);
		if(returnValue == 0L) {
			return null;
		}
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

	public IntegratedPSSM3Factory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntegratedPSSM3Factory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance()
	{
		return super.createInstance_NoVirtual();
	}
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.TextureUnitState texState, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		return super.createInstance_NoVirtual(compiler, prop, texState, translator);
	}
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createOrRetrieveInstance(com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		return super.createOrRetrieveInstance_NoVirtual(translator);
	}
	public void destroyInstance(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		super.destroyInstance_NoVirtual(subRenderState);
	}
	public void destroyAllInstances()
	{
		super.destroyAllInstances_NoVirtual();
	}
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		super.writeInstance_NoVirtual(ser, subRenderState, srcPass, dstPass);
	}
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.TextureUnitState srcTextureUnit, com.earthview.world.graphic.TextureUnitState dstTextureUnit)
	{
		super.writeInstance_NoVirtual(ser, subRenderState, srcTextureUnit, dstTextureUnit);
	}
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstanceImpl()
	{
		return super.createInstanceImpl_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_void(long pNativeObject, String method);
	native protected void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_createOrRetrieveInstance_CSGScriptTranslator(long pNativeObject, String method);
	native protected void register_destroyInstance_CSubRenderState(long pNativeObject, String method);
	native protected void register_destroyAllInstances_void(long pNativeObject, String method);
	native protected void register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(long pNativeObject, String method);
	native protected void register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(long pNativeObject, String method);
	native protected void register_createInstanceImpl_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_void(this.nativeObject.pointer, "createInstance_void_callback");
			this.register_createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(this.nativeObject.pointer, "createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback");
			this.register_createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.nativeObject.pointer, "createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback");
			this.register_createOrRetrieveInstance_CSGScriptTranslator(this.nativeObject.pointer, "createOrRetrieveInstance_CSGScriptTranslator_callback");
			this.register_destroyInstance_CSubRenderState(this.nativeObject.pointer, "destroyInstance_CSubRenderState_callback");
			this.register_destroyAllInstances_void(this.nativeObject.pointer, "destroyAllInstances_void_callback");
			this.register_writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(this.nativeObject.pointer, "writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback");
			this.register_writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.nativeObject.pointer, "writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback");
			this.register_createInstanceImpl_void(this.nativeObject.pointer, "createInstanceImpl_void_callback");
		}
	}
	
	public static IntegratedPSSM3Factory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntegratedPSSM3Factory obj = null;
 		if(baseObj instanceof IntegratedPSSM3Factory)
		{
			obj = (IntegratedPSSM3Factory)baseObj;
		} else {
			obj = new IntegratedPSSM3Factory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIntegratedPSSM3Factory");
			obj.increaseCast();
		}

		return obj;
	}
}
