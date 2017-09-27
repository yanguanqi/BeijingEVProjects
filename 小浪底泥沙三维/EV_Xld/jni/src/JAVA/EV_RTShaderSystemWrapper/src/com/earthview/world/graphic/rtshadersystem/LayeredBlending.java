package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayeredBlending extends com.earthview.world.graphic.rtshadersystem.Ffptexturing {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CLayeredBlending", new LayeredBlendingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCLayeredBlendingProxy", new LayeredBlendingClassFactory());
	}

	public enum BlendMode implements INativeEnum<BlendMode> {
		LB_Invalid(BlendModeHelper.ENUM_VALUES[0]),
		LB_FFPBlend(BlendModeHelper.ENUM_VALUES[1]),
		LB_BlendNormal(BlendModeHelper.ENUM_VALUES[2]),
		LB_BlendLighten(BlendModeHelper.ENUM_VALUES[3]),
		LB_BlendDarken(BlendModeHelper.ENUM_VALUES[4]),
		LB_BlendMultiply(BlendModeHelper.ENUM_VALUES[5]),
		LB_BlendAverage(BlendModeHelper.ENUM_VALUES[6]),
		LB_BlendAdd(BlendModeHelper.ENUM_VALUES[7]),
		LB_BlendSubtract(BlendModeHelper.ENUM_VALUES[8]),
		LB_BlendDifference(BlendModeHelper.ENUM_VALUES[9]),
		LB_BlendNegation(BlendModeHelper.ENUM_VALUES[10]),
		LB_BlendExclusion(BlendModeHelper.ENUM_VALUES[11]),
		LB_BlendScreen(BlendModeHelper.ENUM_VALUES[12]),
		LB_BlendOverlay(BlendModeHelper.ENUM_VALUES[13]),
		LB_BlendSoftLight(BlendModeHelper.ENUM_VALUES[14]),
		LB_BlendHardLight(BlendModeHelper.ENUM_VALUES[15]),
		LB_BlendColorDodge(BlendModeHelper.ENUM_VALUES[16]),
		LB_BlendColorBurn(BlendModeHelper.ENUM_VALUES[17]),
		LB_BlendLinearDodge(BlendModeHelper.ENUM_VALUES[18]),
		LB_BlendLinearBurn(BlendModeHelper.ENUM_VALUES[19]),
		LB_BlendLinearLight(BlendModeHelper.ENUM_VALUES[20]),
		LB_BlendVividLight(BlendModeHelper.ENUM_VALUES[21]),
		LB_BlendPinLight(BlendModeHelper.ENUM_VALUES[22]),
		LB_BlendHardMix(BlendModeHelper.ENUM_VALUES[23]),
		LB_BlendReflect(BlendModeHelper.ENUM_VALUES[24]),
		LB_BlendGlow(BlendModeHelper.ENUM_VALUES[25]),
		LB_BlendPhoenix(BlendModeHelper.ENUM_VALUES[26]),
		LB_BlendSaturation(BlendModeHelper.ENUM_VALUES[27]),
		LB_BlendColor(BlendModeHelper.ENUM_VALUES[28]),
		LB_BlendLuminosity(BlendModeHelper.ENUM_VALUES[29]),
		LB_MaxBlendModes(BlendModeHelper.ENUM_VALUES[30]);
		private int value;
		BlendMode(int i) {
			this.value = i;
		}
		public BlendMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final BlendMode toEnum(int retval) {
			if(retval == LB_Invalid.value){
				return LB_Invalid;
			}
			else if(retval == LB_FFPBlend.value){
				return LB_FFPBlend;
			}
			else if(retval == LB_BlendNormal.value){
				return LB_BlendNormal;
			}
			else if(retval == LB_BlendLighten.value){
				return LB_BlendLighten;
			}
			else if(retval == LB_BlendDarken.value){
				return LB_BlendDarken;
			}
			else if(retval == LB_BlendMultiply.value){
				return LB_BlendMultiply;
			}
			else if(retval == LB_BlendAverage.value){
				return LB_BlendAverage;
			}
			else if(retval == LB_BlendAdd.value){
				return LB_BlendAdd;
			}
			else if(retval == LB_BlendSubtract.value){
				return LB_BlendSubtract;
			}
			else if(retval == LB_BlendDifference.value){
				return LB_BlendDifference;
			}
			else if(retval == LB_BlendNegation.value){
				return LB_BlendNegation;
			}
			else if(retval == LB_BlendExclusion.value){
				return LB_BlendExclusion;
			}
			else if(retval == LB_BlendScreen.value){
				return LB_BlendScreen;
			}
			else if(retval == LB_BlendOverlay.value){
				return LB_BlendOverlay;
			}
			else if(retval == LB_BlendSoftLight.value){
				return LB_BlendSoftLight;
			}
			else if(retval == LB_BlendHardLight.value){
				return LB_BlendHardLight;
			}
			else if(retval == LB_BlendColorDodge.value){
				return LB_BlendColorDodge;
			}
			else if(retval == LB_BlendColorBurn.value){
				return LB_BlendColorBurn;
			}
			else if(retval == LB_BlendLinearDodge.value){
				return LB_BlendLinearDodge;
			}
			else if(retval == LB_BlendLinearBurn.value){
				return LB_BlendLinearBurn;
			}
			else if(retval == LB_BlendLinearLight.value){
				return LB_BlendLinearLight;
			}
			else if(retval == LB_BlendVividLight.value){
				return LB_BlendVividLight;
			}
			else if(retval == LB_BlendPinLight.value){
				return LB_BlendPinLight;
			}
			else if(retval == LB_BlendHardMix.value){
				return LB_BlendHardMix;
			}
			else if(retval == LB_BlendReflect.value){
				return LB_BlendReflect;
			}
			else if(retval == LB_BlendGlow.value){
				return LB_BlendGlow;
			}
			else if(retval == LB_BlendPhoenix.value){
				return LB_BlendPhoenix;
			}
			else if(retval == LB_BlendSaturation.value){
				return LB_BlendSaturation;
			}
			else if(retval == LB_BlendColor.value){
				return LB_BlendColor;
			}
			else if(retval == LB_BlendLuminosity.value){
				return LB_BlendLuminosity;
			}
			else if(retval == LB_MaxBlendModes.value){
				return LB_MaxBlendModes;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class BlendModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum SourceModifier implements INativeEnum<SourceModifier> {
		SM_Invalid(SourceModifierHelper.ENUM_VALUES[0]),
		SM_None(SourceModifierHelper.ENUM_VALUES[1]),
		SM_Source1Modulate(SourceModifierHelper.ENUM_VALUES[2]),
		SM_Source2Modulate(SourceModifierHelper.ENUM_VALUES[3]),
		SM_Source1InvModulate(SourceModifierHelper.ENUM_VALUES[4]),
		SM_Source2InvModulate(SourceModifierHelper.ENUM_VALUES[5]),
		SM_MaxSourceModifiers(SourceModifierHelper.ENUM_VALUES[6]);
		private int value;
		SourceModifier(int i) {
			this.value = i;
		}
		public SourceModifier getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final SourceModifier toEnum(int retval) {
			if(retval == SM_Invalid.value){
				return SM_Invalid;
			}
			else if(retval == SM_None.value){
				return SM_None;
			}
			else if(retval == SM_Source1Modulate.value){
				return SM_Source1Modulate;
			}
			else if(retval == SM_Source2Modulate.value){
				return SM_Source2Modulate;
			}
			else if(retval == SM_Source1InvModulate.value){
				return SM_Source1InvModulate;
			}
			else if(retval == SM_Source2InvModulate.value){
				return SM_Source2InvModulate;
			}
			else if(retval == SM_MaxSourceModifiers.value){
				return SM_MaxSourceModifiers;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SourceModifierHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static class TextureBlend extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend", new TextureBlendClassFactory());
		}

		public TextureBlend() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TextureBlend", null);
		}

		native private int get_blendMode_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode get_blendMode()
		{
			int jniValue = get_blendMode_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode.toEnum(jniValue);
		}
		
		native private void set_blendMode_BlendMode (long pNativeObject, int value);
		public void set_blendMode(com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode blendMode)
		{
			int blendModeParamValue = blendMode.getValue();
			
			set_blendMode_BlendMode(this.nativeObject.pointer, blendModeParamValue);
		}
		
		native private int get_sourceModifier_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.LayeredBlending.SourceModifier get_sourceModifier()
		{
			int jniValue = get_sourceModifier_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.rtshadersystem.LayeredBlending.SourceModifier.toEnum(jniValue);
		}
		
		native private void set_sourceModifier_SourceModifier (long pNativeObject, int value);
		public void set_sourceModifier(com.earthview.world.graphic.rtshadersystem.LayeredBlending.SourceModifier sourceModifier)
		{
			int sourceModifierParamValue = sourceModifier.getValue();
			
			set_sourceModifier_SourceModifier(this.nativeObject.pointer, sourceModifierParamValue);
		}
		
		native private int get_customNum_void(long pNativeObject);
		public int get_customNum()
		{
			int jniValue = get_customNum_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_customNum_int (long pNativeObject, int value);
		public void set_customNum(int customNum)
		{
			int customNumParamValue = customNum;
			
			set_customNum_int(this.nativeObject.pointer, customNumParamValue);
		}
		
		native private long get_modControlParam_void(long pNativeObject);
		public com.earthview.world.graphic.rtshadersystem.ParameterPtr get_modControlParam()
		{
			long jniValue = get_modControlParam_void(this.nativeObject.pointer);
			
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
		
		native private void set_modControlParam_ParameterPtr (long pNativeObject, long value);
		public void set_modControlParam(com.earthview.world.graphic.rtshadersystem.ParameterPtr modControlParam)
		{
			long modControlParamParamValue = modControlParam.nativeObject.pointer;
			
			set_modControlParam_ParameterPtr(this.nativeObject.pointer, modControlParamParamValue);
		}
		
		public TextureBlend(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TextureBlend(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TextureBlend fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TextureBlend obj = null;
 			if(baseObj instanceof TextureBlend)
			{
				obj = (TextureBlend)baseObj;
			} else {
				obj = new TextureBlend(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TextureBlend");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TextureBlendClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TextureBlend emptyInstance = new TextureBlend(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///The parameter controlling the source modification
	public LayeredBlending() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayeredBlendingProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.LayeredBlending".equals(this.getClass().getName()))
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

	native private void setBlendMode_ev_uint16_BlendMode(long pNativeObject, int index, int mode);
	public void setBlendMode(int index, com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode mode)
	{
		int indexParamValue = index;
		int modeParamValue = mode.getValue();
		setBlendMode_ev_uint16_BlendMode(this.nativeObject.pointer, indexParamValue, modeParamValue);
	}
	native private int getBlendMode_ev_uint16(long pNativeObject, int index);
	public com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode getBlendMode(int index)
	{
		int indexParamValue = index;
		int returnValue = getBlendMode_ev_uint16(this.nativeObject.pointer, indexParamValue);
		return com.earthview.world.graphic.rtshadersystem.LayeredBlending.BlendMode.toEnum(returnValue);
	}
	native private void setSourceModifier_ev_uint16_SourceModifier_int(long pNativeObject, int index, int modType, int customNum);
	public void setSourceModifier(int index, com.earthview.world.graphic.rtshadersystem.LayeredBlending.SourceModifier modType, int customNum)
	{
		int indexParamValue = index;
		int modTypeParamValue = modType.getValue();
		int customNumParamValue = customNum;
		setSourceModifier_ev_uint16_SourceModifier_int(this.nativeObject.pointer, indexParamValue, modTypeParamValue, customNumParamValue);
	}
	native private boolean getSourceModifier_ev_uint16_SourceModifier_int(long pNativeObject, int index, long modType, long customNum);
	public boolean getSourceModifier(int index, EnumPointer modType, IntegerPointer customNum)
	{
		int indexParamValue = index;
		long modTypeParamValue = modType.nativeObject.pointer;
		long customNumParamValue = customNum.nativeObject.pointer;
		boolean returnValue = getSourceModifier_ev_uint16_SourceModifier_int(this.nativeObject.pointer, indexParamValue, modTypeParamValue, customNumParamValue);
		return returnValue;
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

	public LayeredBlending(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayeredBlending(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void addPSSampleTexelInvocation(com.earthview.world.graphic.rtshadersystem.Ffptexturing.TextureUnitParams textureUnitParams, com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int groupOrder, IntegerPointer internalCounter)
	{
		super.addPSSampleTexelInvocation_NoVirtual(textureUnitParams, psMain, texel, groupOrder, internalCounter);
	}
	public void addPSArgumentInvocations(com.earthview.world.graphic.rtshadersystem.Function psMain, com.earthview.world.graphic.rtshadersystem.ParameterPtr arg, com.earthview.world.graphic.rtshadersystem.ParameterPtr texel, int samplerIndex, com.earthview.world.graphic.LayerBlendSource blendSrc, com.earthview.world.graphic.ColourValue colourValue, double alphaValue, boolean isAlphaArgument, int groupOrder, IntegerPointer internalCounter)
	{
		super.addPSArgumentInvocations_NoVirtual(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
	}
	public boolean isProcessingNeeded(com.earthview.world.graphic.TextureUnitState texUnitState)
	{
		return super.isProcessingNeeded_NoVirtual(texUnitState);
	}
	public int getExecutionOrder()
	{
		return super.getExecutionOrder_NoVirtual();
	}
	public boolean createCpuSubPrograms(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		return super.createCpuSubPrograms_NoVirtual(programSet);
	}
	public void updateGpuProgramsParams(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList)
	{
		super.updateGpuProgramsParams_NoVirtual(rend, pass, source, pLightList);
	}
	public boolean preAddToRenderState(com.earthview.world.graphic.rtshadersystem.RenderState renderState, com.earthview.world.graphic.Pass srcPass, com.earthview.world.graphic.Pass dstPass)
	{
		return super.preAddToRenderState_NoVirtual(renderState, srcPass, dstPass);
	}
	public boolean addFunctionInvocations(com.earthview.world.graphic.rtshadersystem.ProgramSet programSet)
	{
		return super.addFunctionInvocations_NoVirtual(programSet);
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
	
	public static LayeredBlending fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayeredBlending obj = null;
 		if(baseObj instanceof LayeredBlending)
		{
			obj = (LayeredBlending)baseObj;
		} else {
			obj = new LayeredBlending(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayeredBlending");
			obj.increaseCast();
		}

		return obj;
	}
}
