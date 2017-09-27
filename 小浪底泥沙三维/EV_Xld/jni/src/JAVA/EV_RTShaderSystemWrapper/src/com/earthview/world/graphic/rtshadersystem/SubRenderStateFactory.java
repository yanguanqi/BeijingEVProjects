package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory", new SubRenderStateFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCSubRenderStateFactoryProxy", new SubRenderStateFactoryClassFactory());
	}

	public SubRenderStateFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSubRenderStateFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory".equals(this.getClass().getName()))
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

	protected  long createInstance_void_callback()
	{
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = createInstance();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
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
	native private long createInstance_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance_NoVirtual()
	{
		long returnValue = createInstance_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long createInstance_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_callback(long compiler, long prop, long pass, long translator)
	{
		com.earthview.world.graphic.ScriptCompiler compilerParamValue = (compiler == 0L ? null : new com.earthview.world.graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate));
		if(compilerParamValue != null)
		{
		compilerParamValue.setDelegate(true);
		compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		IClassFactory compilerParamValueClassFactory = GlobalClassFactoryMap.get(compilerParamValue.getCppInstanceTypeName());
		if (compilerParamValueClassFactory != null)
		{
			compilerParamValue.setDelegate(true);
			compilerParamValue = (com.earthview.world.graphic.ScriptCompiler)compilerParamValueClassFactory.create();
			compilerParamValue.setDelegate(true);
			compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		}
		}
		com.earthview.world.graphic.PropertyAbstractNode propParamValue = (prop == 0L ? null : new com.earthview.world.graphic.PropertyAbstractNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(propParamValue != null)
		{
		propParamValue.setDelegate(true);
		propParamValue.setInstancePointer(new InstancePointer(prop));
		IClassFactory propParamValueClassFactory = GlobalClassFactoryMap.get(propParamValue.getCppInstanceTypeName());
		if (propParamValueClassFactory != null)
		{
			propParamValue.setDelegate(true);
			propParamValue = (com.earthview.world.graphic.PropertyAbstractNode)propParamValueClassFactory.create();
			propParamValue.setDelegate(true);
			propParamValue.setInstancePointer(new InstancePointer(prop));
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
		com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translatorParamValue = (translator == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate));
		if(translatorParamValue != null)
		{
		translatorParamValue.setDelegate(true);
		translatorParamValue.setInstancePointer(new InstancePointer(translator));
		IClassFactory translatorParamValueClassFactory = GlobalClassFactoryMap.get(translatorParamValue.getCppInstanceTypeName());
		if (translatorParamValueClassFactory != null)
		{
			translatorParamValue.setDelegate(true);
			translatorParamValue = (com.earthview.world.graphic.rtshadersystem.Sgscripttranslator)translatorParamValueClassFactory.create();
			translatorParamValue.setDelegate(true);
			translatorParamValue.setInstancePointer(new InstancePointer(translator));
		}
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = createInstance(compilerParamValue, propParamValue, passParamValue, translatorParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_callback(long compiler, long prop, long texState, long translator)
	{
		com.earthview.world.graphic.ScriptCompiler compilerParamValue = (compiler == 0L ? null : new com.earthview.world.graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate));
		if(compilerParamValue != null)
		{
		compilerParamValue.setDelegate(true);
		compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		IClassFactory compilerParamValueClassFactory = GlobalClassFactoryMap.get(compilerParamValue.getCppInstanceTypeName());
		if (compilerParamValueClassFactory != null)
		{
			compilerParamValue.setDelegate(true);
			compilerParamValue = (com.earthview.world.graphic.ScriptCompiler)compilerParamValueClassFactory.create();
			compilerParamValue.setDelegate(true);
			compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		}
		}
		com.earthview.world.graphic.PropertyAbstractNode propParamValue = (prop == 0L ? null : new com.earthview.world.graphic.PropertyAbstractNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(propParamValue != null)
		{
		propParamValue.setDelegate(true);
		propParamValue.setInstancePointer(new InstancePointer(prop));
		IClassFactory propParamValueClassFactory = GlobalClassFactoryMap.get(propParamValue.getCppInstanceTypeName());
		if (propParamValueClassFactory != null)
		{
			propParamValue.setDelegate(true);
			propParamValue = (com.earthview.world.graphic.PropertyAbstractNode)propParamValueClassFactory.create();
			propParamValue.setDelegate(true);
			propParamValue.setInstancePointer(new InstancePointer(prop));
		}
		}
		com.earthview.world.graphic.TextureUnitState texStateParamValue = (texState == 0L ? null : new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate));
		if(texStateParamValue != null)
		{
		texStateParamValue.setDelegate(true);
		texStateParamValue.setInstancePointer(new InstancePointer(texState));
		IClassFactory texStateParamValueClassFactory = GlobalClassFactoryMap.get(texStateParamValue.getCppInstanceTypeName());
		if (texStateParamValueClassFactory != null)
		{
			texStateParamValue.setDelegate(true);
			texStateParamValue = (com.earthview.world.graphic.TextureUnitState)texStateParamValueClassFactory.create();
			texStateParamValue.setDelegate(true);
			texStateParamValue.setInstancePointer(new InstancePointer(texState));
		}
		}
		com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translatorParamValue = (translator == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate));
		if(translatorParamValue != null)
		{
		translatorParamValue.setDelegate(true);
		translatorParamValue.setInstancePointer(new InstancePointer(translator));
		IClassFactory translatorParamValueClassFactory = GlobalClassFactoryMap.get(translatorParamValue.getCppInstanceTypeName());
		if (translatorParamValueClassFactory != null)
		{
			translatorParamValue.setDelegate(true);
			translatorParamValue = (com.earthview.world.graphic.rtshadersystem.Sgscripttranslator)translatorParamValueClassFactory.create();
			translatorParamValue.setDelegate(true);
			translatorParamValue.setInstancePointer(new InstancePointer(translator));
		}
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = createInstance(compilerParamValue, propParamValue, texStateParamValue, translatorParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(long pNativeObject, long compiler, long prop, long texState, long translator);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.TextureUnitState texState, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long texStateParamValue = (texState == null ? 0L : texState.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(this.nativeObject.pointer, compilerParamValue, propParamValue, texStateParamValue, translatorParamValue);
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
	native private long createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_NoVirtual(long pNativeObject, long compiler, long prop, long texState, long translator);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstance_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.PropertyAbstractNode prop, com.earthview.world.graphic.TextureUnitState texState, com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long propParamValue = (prop == null ? 0L : prop.nativeObject.pointer);
		long texStateParamValue = (texState == null ? 0L : texState.nativeObject.pointer);
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createInstance_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_NoVirtual(this.nativeObject.pointer, compilerParamValue, propParamValue, texStateParamValue, translatorParamValue);
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

	protected  long createOrRetrieveInstance_CSGScriptTranslator_callback(long translator)
	{
		com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translatorParamValue = (translator == 0L ? null : new com.earthview.world.graphic.rtshadersystem.Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate));
		if(translatorParamValue != null)
		{
		translatorParamValue.setDelegate(true);
		translatorParamValue.setInstancePointer(new InstancePointer(translator));
		IClassFactory translatorParamValueClassFactory = GlobalClassFactoryMap.get(translatorParamValue.getCppInstanceTypeName());
		if (translatorParamValueClassFactory != null)
		{
			translatorParamValue.setDelegate(true);
			translatorParamValue = (com.earthview.world.graphic.rtshadersystem.Sgscripttranslator)translatorParamValueClassFactory.create();
			translatorParamValue.setDelegate(true);
			translatorParamValue.setInstancePointer(new InstancePointer(translator));
		}
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = createOrRetrieveInstance(translatorParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createOrRetrieveInstance_CSGScriptTranslator(long pNativeObject, long translator);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createOrRetrieveInstance(com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createOrRetrieveInstance_CSGScriptTranslator(this.nativeObject.pointer, translatorParamValue);
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
	native private long createOrRetrieveInstance_CSGScriptTranslator_NoVirtual(long pNativeObject, long translator);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createOrRetrieveInstance_NoVirtual(com.earthview.world.graphic.rtshadersystem.Sgscripttranslator translator)
	{
		long translatorParamValue = (translator == null ? 0L : translator.nativeObject.pointer);
		long returnValue = createOrRetrieveInstance_CSGScriptTranslator_NoVirtual(this.nativeObject.pointer, translatorParamValue);
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

	protected  void destroyInstance_CSubRenderState_callback(long subRenderState)
	{
		com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderStateParamValue = (subRenderState == 0L ? null : new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate));
		if(subRenderStateParamValue != null)
		{
		subRenderStateParamValue.setDelegate(true);
		subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
		IClassFactory subRenderStateParamValueClassFactory = GlobalClassFactoryMap.get(subRenderStateParamValue.getCppInstanceTypeName());
		if (subRenderStateParamValueClassFactory != null)
		{
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)subRenderStateParamValueClassFactory.create();
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
		}
		}
		destroyInstance(subRenderStateParamValue);
	}

	native private void destroyInstance_CSubRenderState(long pNativeObject, long subRenderState);
	public void destroyInstance(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		destroyInstance_CSubRenderState(this.nativeObject.pointer, subRenderStateParamValue);
	}
	native private void destroyInstance_CSubRenderState_NoVirtual(long pNativeObject, long subRenderState);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState)
	{
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		destroyInstance_CSubRenderState_NoVirtual(this.nativeObject.pointer, subRenderStateParamValue);
	}

	protected  void destroyAllInstances_void_callback()
	{
		destroyAllInstances();
	}

	native private void destroyAllInstances_void(long pNativeObject);
	public void destroyAllInstances()
	{
		destroyAllInstances_void(this.nativeObject.pointer);
	}
	native private void destroyAllInstances_void_NoVirtual(long pNativeObject);
	protected void destroyAllInstances_NoVirtual()
	{
		destroyAllInstances_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_callback(long ser, long subRenderState, long srcPass, long dstPass)
	{
		com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
		if(serParamValue != null)
		{
		serParamValue.setDelegate(true);
		serParamValue.setInstancePointer(new InstancePointer(ser));
		IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
		if (serParamValueClassFactory != null)
		{
			serParamValue.setDelegate(true);
			serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
		}
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderStateParamValue = (subRenderState == 0L ? null : new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate));
		if(subRenderStateParamValue != null)
		{
		subRenderStateParamValue.setDelegate(true);
		subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
		IClassFactory subRenderStateParamValueClassFactory = GlobalClassFactoryMap.get(subRenderStateParamValue.getCppInstanceTypeName());
		if (subRenderStateParamValueClassFactory != null)
		{
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)subRenderStateParamValueClassFactory.create();
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
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
		writeInstance(serParamValue, subRenderStateParamValue, srcPassParamValue, dstPassParamValue);
	}

	native private void writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(long pNativeObject, long ser, long subRenderState, long srcPass, long dstPass);
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcPassParamValue, dstPassParamValue);
	}
	native private void writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(long pNativeObject, long ser, long subRenderState, long srcPass, long dstPass);
	protected void writeInstance_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcPassParamValue = (srcPass == null ? 0L : srcPass.nativeObject.pointer);
		long dstPassParamValue = (dstPass == null ? 0L : dstPass.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcPassParamValue, dstPassParamValue);
	}

	protected  void writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_callback(long ser, long subRenderState, long srcTextureUnit, long dstTextureUnit)
	{
		com.earthview.world.graphic.MaterialSerializer serParamValue = (ser == 0L ? null : new com.earthview.world.graphic.MaterialSerializer(CreatedWhenConstruct.CWC_NotToCreate));
		if(serParamValue != null)
		{
		serParamValue.setDelegate(true);
		serParamValue.setInstancePointer(new InstancePointer(ser));
		IClassFactory serParamValueClassFactory = GlobalClassFactoryMap.get(serParamValue.getCppInstanceTypeName());
		if (serParamValueClassFactory != null)
		{
			serParamValue.setDelegate(true);
			serParamValue = (com.earthview.world.graphic.MaterialSerializer)serParamValueClassFactory.create();
			serParamValue.setDelegate(true);
			serParamValue.setInstancePointer(new InstancePointer(ser));
		}
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderStateParamValue = (subRenderState == 0L ? null : new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate));
		if(subRenderStateParamValue != null)
		{
		subRenderStateParamValue.setDelegate(true);
		subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
		IClassFactory subRenderStateParamValueClassFactory = GlobalClassFactoryMap.get(subRenderStateParamValue.getCppInstanceTypeName());
		if (subRenderStateParamValueClassFactory != null)
		{
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)subRenderStateParamValueClassFactory.create();
			subRenderStateParamValue.setDelegate(true);
			subRenderStateParamValue.setInstancePointer(new InstancePointer(subRenderState));
		}
		}
		com.earthview.world.graphic.TextureUnitState srcTextureUnitParamValue = (srcTextureUnit == 0L ? null : new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcTextureUnitParamValue != null)
		{
		srcTextureUnitParamValue.setDelegate(true);
		srcTextureUnitParamValue.setInstancePointer(new InstancePointer(srcTextureUnit));
		IClassFactory srcTextureUnitParamValueClassFactory = GlobalClassFactoryMap.get(srcTextureUnitParamValue.getCppInstanceTypeName());
		if (srcTextureUnitParamValueClassFactory != null)
		{
			srcTextureUnitParamValue.setDelegate(true);
			srcTextureUnitParamValue = (com.earthview.world.graphic.TextureUnitState)srcTextureUnitParamValueClassFactory.create();
			srcTextureUnitParamValue.setDelegate(true);
			srcTextureUnitParamValue.setInstancePointer(new InstancePointer(srcTextureUnit));
		}
		}
		com.earthview.world.graphic.TextureUnitState dstTextureUnitParamValue = (dstTextureUnit == 0L ? null : new com.earthview.world.graphic.TextureUnitState(CreatedWhenConstruct.CWC_NotToCreate));
		if(dstTextureUnitParamValue != null)
		{
		dstTextureUnitParamValue.setDelegate(true);
		dstTextureUnitParamValue.setInstancePointer(new InstancePointer(dstTextureUnit));
		IClassFactory dstTextureUnitParamValueClassFactory = GlobalClassFactoryMap.get(dstTextureUnitParamValue.getCppInstanceTypeName());
		if (dstTextureUnitParamValueClassFactory != null)
		{
			dstTextureUnitParamValue.setDelegate(true);
			dstTextureUnitParamValue = (com.earthview.world.graphic.TextureUnitState)dstTextureUnitParamValueClassFactory.create();
			dstTextureUnitParamValue.setDelegate(true);
			dstTextureUnitParamValue.setInstancePointer(new InstancePointer(dstTextureUnit));
		}
		}
		writeInstance(serParamValue, subRenderStateParamValue, srcTextureUnitParamValue, dstTextureUnitParamValue);
	}

	native private void writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(long pNativeObject, long ser, long subRenderState, long srcTextureUnit, long dstTextureUnit);
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.TextureUnitState srcTextureUnit, com.earthview.world.graphic.TextureUnitState dstTextureUnit)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcTextureUnitParamValue = (srcTextureUnit == null ? 0L : srcTextureUnit.nativeObject.pointer);
		long dstTextureUnitParamValue = (dstTextureUnit == null ? 0L : dstTextureUnit.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcTextureUnitParamValue, dstTextureUnitParamValue);
	}
	native private void writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_NoVirtual(long pNativeObject, long ser, long subRenderState, long srcTextureUnit, long dstTextureUnit);
	protected void writeInstance_NoVirtual(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.TextureUnitState srcTextureUnit, com.earthview.world.graphic.TextureUnitState dstTextureUnit)
	{
		long serParamValue = (ser == null ? 0L : ser.nativeObject.pointer);
		long subRenderStateParamValue = (subRenderState == null ? 0L : subRenderState.nativeObject.pointer);
		long srcTextureUnitParamValue = (srcTextureUnit == null ? 0L : srcTextureUnit.nativeObject.pointer);
		long dstTextureUnitParamValue = (dstTextureUnit == null ? 0L : dstTextureUnit.nativeObject.pointer);
		writeInstance_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_NoVirtual(this.nativeObject.pointer, serParamValue, subRenderStateParamValue, srcTextureUnitParamValue, dstTextureUnitParamValue);
	}

	protected  long createInstanceImpl_void_callback()
	{
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = createInstanceImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstanceImpl_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState createInstanceImpl()
	{
		long returnValue = createInstanceImpl_void(this.nativeObject.pointer);
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
	native private long createInstanceImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState createInstanceImpl_NoVirtual()
	{
		long returnValue = createInstanceImpl_void_NoVirtual(this.nativeObject.pointer);
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

	public SubRenderStateFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubRenderStateFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static SubRenderStateFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubRenderStateFactory obj = null;
 		if(baseObj instanceof SubRenderStateFactory)
		{
			obj = (SubRenderStateFactory)baseObj;
		} else {
			obj = new SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubRenderStateFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
