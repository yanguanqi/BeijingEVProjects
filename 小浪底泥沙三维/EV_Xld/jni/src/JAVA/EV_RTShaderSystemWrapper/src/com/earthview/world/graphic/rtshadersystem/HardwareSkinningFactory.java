package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareSkinningFactory extends com.earthview.world.graphic.rtshadersystem.SubRenderStateFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory", new HardwareSkinningFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCHardwareSkinningFactoryProxy", new HardwareSkinningFactoryClassFactory());
	}

	public HardwareSkinningFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareSkinningFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory".equals(this.getClass().getName()))
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

	protected  void setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(int skinningType, long caster1Weight, long caster2Weight, long caster3Weight, long caster4Weight)
	{
		com.earthview.world.graphic.rtshadersystem.SkinningType skinningTypeParamValue = com.earthview.world.graphic.rtshadersystem.SkinningType.toEnum(skinningType);
		com.earthview.world.graphic.MaterialPtr caster1WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		caster1WeightParamValue.setDelegate(true);
		caster1WeightParamValue.setInstancePointer(new InstancePointer(caster1Weight));
		IClassFactory caster1WeightParamValueClassFactory = GlobalClassFactoryMap.get(caster1WeightParamValue.getCppInstanceTypeName());
		if (caster1WeightParamValueClassFactory != null)
		{
			caster1WeightParamValue.setDelegate(true);
			caster1WeightParamValue = (com.earthview.world.graphic.MaterialPtr)caster1WeightParamValueClassFactory.create();
			caster1WeightParamValue.setDelegate(true);
			caster1WeightParamValue.setInstancePointer(new InstancePointer(caster1Weight));
		}
		com.earthview.world.graphic.MaterialPtr caster2WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		caster2WeightParamValue.setDelegate(true);
		caster2WeightParamValue.setInstancePointer(new InstancePointer(caster2Weight));
		IClassFactory caster2WeightParamValueClassFactory = GlobalClassFactoryMap.get(caster2WeightParamValue.getCppInstanceTypeName());
		if (caster2WeightParamValueClassFactory != null)
		{
			caster2WeightParamValue.setDelegate(true);
			caster2WeightParamValue = (com.earthview.world.graphic.MaterialPtr)caster2WeightParamValueClassFactory.create();
			caster2WeightParamValue.setDelegate(true);
			caster2WeightParamValue.setInstancePointer(new InstancePointer(caster2Weight));
		}
		com.earthview.world.graphic.MaterialPtr caster3WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		caster3WeightParamValue.setDelegate(true);
		caster3WeightParamValue.setInstancePointer(new InstancePointer(caster3Weight));
		IClassFactory caster3WeightParamValueClassFactory = GlobalClassFactoryMap.get(caster3WeightParamValue.getCppInstanceTypeName());
		if (caster3WeightParamValueClassFactory != null)
		{
			caster3WeightParamValue.setDelegate(true);
			caster3WeightParamValue = (com.earthview.world.graphic.MaterialPtr)caster3WeightParamValueClassFactory.create();
			caster3WeightParamValue.setDelegate(true);
			caster3WeightParamValue.setInstancePointer(new InstancePointer(caster3Weight));
		}
		com.earthview.world.graphic.MaterialPtr caster4WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		caster4WeightParamValue.setDelegate(true);
		caster4WeightParamValue.setInstancePointer(new InstancePointer(caster4Weight));
		IClassFactory caster4WeightParamValueClassFactory = GlobalClassFactoryMap.get(caster4WeightParamValue.getCppInstanceTypeName());
		if (caster4WeightParamValueClassFactory != null)
		{
			caster4WeightParamValue.setDelegate(true);
			caster4WeightParamValue = (com.earthview.world.graphic.MaterialPtr)caster4WeightParamValueClassFactory.create();
			caster4WeightParamValue.setDelegate(true);
			caster4WeightParamValue.setInstancePointer(new InstancePointer(caster4Weight));
		}
		setCustomShadowCasterMaterials(skinningTypeParamValue, caster1WeightParamValue, caster2WeightParamValue, caster3WeightParamValue, caster4WeightParamValue);
	}

	native private void setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(long pNativeObject, int skinningType, long caster1Weight, long caster2Weight, long caster3Weight, long caster4Weight);
	public void setCustomShadowCasterMaterials(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, com.earthview.world.graphic.MaterialPtr caster1Weight, com.earthview.world.graphic.MaterialPtr caster2Weight, com.earthview.world.graphic.MaterialPtr caster3Weight, com.earthview.world.graphic.MaterialPtr caster4Weight)
	{
		int skinningTypeParamValue = skinningType.getValue();
		long caster1WeightParamValue = caster1Weight.nativeObject.pointer;
		long caster2WeightParamValue = caster2Weight.nativeObject.pointer;
		long caster3WeightParamValue = caster3Weight.nativeObject.pointer;
		long caster4WeightParamValue = caster4Weight.nativeObject.pointer;
		setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(this.nativeObject.pointer, skinningTypeParamValue, caster1WeightParamValue, caster2WeightParamValue, caster3WeightParamValue, caster4WeightParamValue);
	}
	native private void setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(long pNativeObject, int skinningType, long caster1Weight, long caster2Weight, long caster3Weight, long caster4Weight);
	protected void setCustomShadowCasterMaterials_NoVirtual(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, com.earthview.world.graphic.MaterialPtr caster1Weight, com.earthview.world.graphic.MaterialPtr caster2Weight, com.earthview.world.graphic.MaterialPtr caster3Weight, com.earthview.world.graphic.MaterialPtr caster4Weight)
	{
		int skinningTypeParamValue = skinningType.getValue();
		long caster1WeightParamValue = caster1Weight.nativeObject.pointer;
		long caster2WeightParamValue = caster2Weight.nativeObject.pointer;
		long caster3WeightParamValue = caster3Weight.nativeObject.pointer;
		long caster4WeightParamValue = caster4Weight.nativeObject.pointer;
		setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(this.nativeObject.pointer, skinningTypeParamValue, caster1WeightParamValue, caster2WeightParamValue, caster3WeightParamValue, caster4WeightParamValue);
	}

	protected  void setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback(int skinningType, long receiver1Weight, long receiver2Weight, long receiver3Weight, long receiver4Weight)
	{
		com.earthview.world.graphic.rtshadersystem.SkinningType skinningTypeParamValue = com.earthview.world.graphic.rtshadersystem.SkinningType.toEnum(skinningType);
		com.earthview.world.graphic.MaterialPtr receiver1WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		receiver1WeightParamValue.setDelegate(true);
		receiver1WeightParamValue.setInstancePointer(new InstancePointer(receiver1Weight));
		IClassFactory receiver1WeightParamValueClassFactory = GlobalClassFactoryMap.get(receiver1WeightParamValue.getCppInstanceTypeName());
		if (receiver1WeightParamValueClassFactory != null)
		{
			receiver1WeightParamValue.setDelegate(true);
			receiver1WeightParamValue = (com.earthview.world.graphic.MaterialPtr)receiver1WeightParamValueClassFactory.create();
			receiver1WeightParamValue.setDelegate(true);
			receiver1WeightParamValue.setInstancePointer(new InstancePointer(receiver1Weight));
		}
		com.earthview.world.graphic.MaterialPtr receiver2WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		receiver2WeightParamValue.setDelegate(true);
		receiver2WeightParamValue.setInstancePointer(new InstancePointer(receiver2Weight));
		IClassFactory receiver2WeightParamValueClassFactory = GlobalClassFactoryMap.get(receiver2WeightParamValue.getCppInstanceTypeName());
		if (receiver2WeightParamValueClassFactory != null)
		{
			receiver2WeightParamValue.setDelegate(true);
			receiver2WeightParamValue = (com.earthview.world.graphic.MaterialPtr)receiver2WeightParamValueClassFactory.create();
			receiver2WeightParamValue.setDelegate(true);
			receiver2WeightParamValue.setInstancePointer(new InstancePointer(receiver2Weight));
		}
		com.earthview.world.graphic.MaterialPtr receiver3WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		receiver3WeightParamValue.setDelegate(true);
		receiver3WeightParamValue.setInstancePointer(new InstancePointer(receiver3Weight));
		IClassFactory receiver3WeightParamValueClassFactory = GlobalClassFactoryMap.get(receiver3WeightParamValue.getCppInstanceTypeName());
		if (receiver3WeightParamValueClassFactory != null)
		{
			receiver3WeightParamValue.setDelegate(true);
			receiver3WeightParamValue = (com.earthview.world.graphic.MaterialPtr)receiver3WeightParamValueClassFactory.create();
			receiver3WeightParamValue.setDelegate(true);
			receiver3WeightParamValue.setInstancePointer(new InstancePointer(receiver3Weight));
		}
		com.earthview.world.graphic.MaterialPtr receiver4WeightParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		receiver4WeightParamValue.setDelegate(true);
		receiver4WeightParamValue.setInstancePointer(new InstancePointer(receiver4Weight));
		IClassFactory receiver4WeightParamValueClassFactory = GlobalClassFactoryMap.get(receiver4WeightParamValue.getCppInstanceTypeName());
		if (receiver4WeightParamValueClassFactory != null)
		{
			receiver4WeightParamValue.setDelegate(true);
			receiver4WeightParamValue = (com.earthview.world.graphic.MaterialPtr)receiver4WeightParamValueClassFactory.create();
			receiver4WeightParamValue.setDelegate(true);
			receiver4WeightParamValue.setInstancePointer(new InstancePointer(receiver4Weight));
		}
		setCustomShadowReceiverMaterials(skinningTypeParamValue, receiver1WeightParamValue, receiver2WeightParamValue, receiver3WeightParamValue, receiver4WeightParamValue);
	}

	native private void setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(long pNativeObject, int skinningType, long receiver1Weight, long receiver2Weight, long receiver3Weight, long receiver4Weight);
	public void setCustomShadowReceiverMaterials(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, com.earthview.world.graphic.MaterialPtr receiver1Weight, com.earthview.world.graphic.MaterialPtr receiver2Weight, com.earthview.world.graphic.MaterialPtr receiver3Weight, com.earthview.world.graphic.MaterialPtr receiver4Weight)
	{
		int skinningTypeParamValue = skinningType.getValue();
		long receiver1WeightParamValue = receiver1Weight.nativeObject.pointer;
		long receiver2WeightParamValue = receiver2Weight.nativeObject.pointer;
		long receiver3WeightParamValue = receiver3Weight.nativeObject.pointer;
		long receiver4WeightParamValue = receiver4Weight.nativeObject.pointer;
		setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(this.nativeObject.pointer, skinningTypeParamValue, receiver1WeightParamValue, receiver2WeightParamValue, receiver3WeightParamValue, receiver4WeightParamValue);
	}
	native private void setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(long pNativeObject, int skinningType, long receiver1Weight, long receiver2Weight, long receiver3Weight, long receiver4Weight);
	protected void setCustomShadowReceiverMaterials_NoVirtual(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, com.earthview.world.graphic.MaterialPtr receiver1Weight, com.earthview.world.graphic.MaterialPtr receiver2Weight, com.earthview.world.graphic.MaterialPtr receiver3Weight, com.earthview.world.graphic.MaterialPtr receiver4Weight)
	{
		int skinningTypeParamValue = skinningType.getValue();
		long receiver1WeightParamValue = receiver1Weight.nativeObject.pointer;
		long receiver2WeightParamValue = receiver2Weight.nativeObject.pointer;
		long receiver3WeightParamValue = receiver3Weight.nativeObject.pointer;
		long receiver4WeightParamValue = receiver4Weight.nativeObject.pointer;
		setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(this.nativeObject.pointer, skinningTypeParamValue, receiver1WeightParamValue, receiver2WeightParamValue, receiver3WeightParamValue, receiver4WeightParamValue);
	}

	native private long getCustomShadowCasterMaterial_SkinningType_ev_uint16(long pNativeObject, int skinningType, int index);
	public com.earthview.world.graphic.MaterialPtr getCustomShadowCasterMaterial(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, int index)
	{
		int skinningTypeParamValue = skinningType.getValue();
		int indexParamValue = index;
		long returnValue = getCustomShadowCasterMaterial_SkinningType_ev_uint16(this.nativeObject.pointer, skinningTypeParamValue, indexParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getCustomShadowReceiverMaterial_SkinningType_ev_uint16(long pNativeObject, int skinningType, int index);
	public com.earthview.world.graphic.MaterialPtr getCustomShadowReceiverMaterial(com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, int index)
	{
		int skinningTypeParamValue = skinningType.getValue();
		int indexParamValue = index;
		long returnValue = getCustomShadowReceiverMaterial_SkinningType_ev_uint16(this.nativeObject.pointer, skinningTypeParamValue, indexParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void prepareEntityForSkinning_CEntity_SkinningType_bool_bool(long pNativeObject, long pEntity, int skinningType, boolean correctAntidpodalityHandling, boolean shearScale);
	public void prepareEntityForSkinning(com.earthview.world.graphic.Entity pEntity, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, boolean correctAntidpodalityHandling, boolean shearScale)
	{
		long pEntityParamValue = (pEntity == null ? 0L : pEntity.nativeObject.pointer);
		int skinningTypeParamValue = skinningType.getValue();
		boolean correctAntidpodalityHandlingParamValue = correctAntidpodalityHandling;
		boolean shearScaleParamValue = shearScale;
		prepareEntityForSkinning_CEntity_SkinningType_bool_bool(this.nativeObject.pointer, pEntityParamValue, skinningTypeParamValue, correctAntidpodalityHandlingParamValue, shearScaleParamValue);
	}
	native private void prepareEntityForSkinning_CEntity_SkinningType_bool(long pNativeObject, long pEntity, int skinningType, boolean correctAntidpodalityHandling);
	public void prepareEntityForSkinning(com.earthview.world.graphic.Entity pEntity, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType, boolean correctAntidpodalityHandling)
	{
		long pEntityParamValue = (pEntity == null ? 0L : pEntity.nativeObject.pointer);
		int skinningTypeParamValue = skinningType.getValue();
		boolean correctAntidpodalityHandlingParamValue = correctAntidpodalityHandling;
		prepareEntityForSkinning_CEntity_SkinningType_bool(this.nativeObject.pointer, pEntityParamValue, skinningTypeParamValue, correctAntidpodalityHandlingParamValue);
	}
	native private void prepareEntityForSkinning_CEntity_SkinningType(long pNativeObject, long pEntity, int skinningType);
	public void prepareEntityForSkinning(com.earthview.world.graphic.Entity pEntity, com.earthview.world.graphic.rtshadersystem.SkinningType skinningType)
	{
		long pEntityParamValue = (pEntity == null ? 0L : pEntity.nativeObject.pointer);
		int skinningTypeParamValue = skinningType.getValue();
		prepareEntityForSkinning_CEntity_SkinningType(this.nativeObject.pointer, pEntityParamValue, skinningTypeParamValue);
	}
	native private void prepareEntityForSkinning_CEntity(long pNativeObject, long pEntity);
	public void prepareEntityForSkinning(com.earthview.world.graphic.Entity pEntity)
	{
		long pEntityParamValue = (pEntity == null ? 0L : pEntity.nativeObject.pointer);
		prepareEntityForSkinning_CEntity(this.nativeObject.pointer, pEntityParamValue);
	}
	native private int getMaxCalculableBoneCount_void(long pNativeObject);
	public int getMaxCalculableBoneCount()
	{
		int returnValue = getMaxCalculableBoneCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxCalculableBoneCount_ev_uint16(long pNativeObject, int count);
	public void setMaxCalculableBoneCount(int count)
	{
		int countParamValue = count;
		setMaxCalculableBoneCount_ev_uint16(this.nativeObject.pointer, countParamValue);
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareSkinningFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareSkinningFactory");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory __returnValue = new com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareSkinningFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.HardwareSkinningFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareSkinningFactory");
		}
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

	public HardwareSkinningFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareSkinningFactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	public void writeInstance(com.earthview.world.graphic.MaterialSerializer ser, com.earthview.world.graphic.rtshadersystem.SubRenderState subRenderState, com.earthview.world.graphic.TextureUnitState srcTextureUnit, com.earthview.world.graphic.TextureUnitState dstTextureUnit)
	{
		super.writeInstance_NoVirtual(ser, subRenderState, srcTextureUnit, dstTextureUnit);
	}
	
	native protected void register_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(long pNativeObject, String method);
	native protected void register_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(long pNativeObject, String method);
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
			this.register_setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(this.nativeObject.pointer, "setCustomShadowCasterMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback");
			this.register_setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(this.nativeObject.pointer, "setCustomShadowReceiverMaterials_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_callback");
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
	
	public static HardwareSkinningFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareSkinningFactory obj = null;
 		if(baseObj instanceof HardwareSkinningFactory)
		{
			obj = (HardwareSkinningFactory)baseObj;
		} else {
			obj = new HardwareSkinningFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareSkinningFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
