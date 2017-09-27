package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialScriptContext extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::MaterialScriptContext", new MaterialScriptContextClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public MaterialScriptContext() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MaterialScriptContext", null);
	}

	native private int get_section_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialScriptSection get_section()
	{
		int jniValue = get_section_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.MaterialScriptSection.toEnum(jniValue);
	}
	
	native private void set_section_MaterialScriptSection (long pNativeObject, int value);
	public void set_section(com.earthview.world.graphic.MaterialScriptSection section)
	{
		int sectionParamValue = section.getValue();
		
		set_section_MaterialScriptSection(this.nativeObject.pointer, sectionParamValue);
	}
	
	native private String get_groupName_void(long pNativeObject);
	public String get_groupName()
	{
		String jniValue = get_groupName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_groupName_EVString (long pNativeObject, String value);
	public void set_groupName(String groupName)
	{
		String groupNameParamValue = groupName;
		
		set_groupName_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	
	native private long get_material_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialPtr get_material()
	{
		long jniValue = get_material_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	
	native private void set_material_CMaterialPtr (long pNativeObject, long value);
	public void set_material(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		
		set_material_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
	}
	
	native private long get_technique_void(long pNativeObject);
	public com.earthview.world.graphic.Technique get_technique()
	{
		long jniValue = get_technique_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	
	native private void set_technique_CTechnique (long pNativeObject, long value);
	public void set_technique(com.earthview.world.graphic.Technique technique)
	{
		long techniqueParamValue = (technique == null ? 0L : technique.nativeObject.pointer);
		
		set_technique_CTechnique(this.nativeObject.pointer, techniqueParamValue);
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
	
	native private long get_textureUnit_void(long pNativeObject);
	public com.earthview.world.graphic.TextureUnitState get_textureUnit()
	{
		long jniValue = get_textureUnit_void(this.nativeObject.pointer);
		
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
	
	native private void set_textureUnit_CTextureUnitState (long pNativeObject, long value);
	public void set_textureUnit(com.earthview.world.graphic.TextureUnitState textureUnit)
	{
		long textureUnitParamValue = (textureUnit == null ? 0L : textureUnit.nativeObject.pointer);
		
		set_textureUnit_CTextureUnitState(this.nativeObject.pointer, textureUnitParamValue);
	}
	
	native private long get_program_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramPtr get_program()
	{
		long jniValue = get_program_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.GpuProgramPtr __returnValue = new com.earthview.world.graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_program_CGpuProgramPtr (long pNativeObject, long value);
	public void set_program(com.earthview.world.graphic.GpuProgramPtr program)
	{
		long programParamValue = program.nativeObject.pointer;
		
		set_program_CGpuProgramPtr(this.nativeObject.pointer, programParamValue);
	}
	
	native private boolean get_isVertexProgramShadowCaster_void(long pNativeObject);
	public boolean get_isVertexProgramShadowCaster()
	{
		boolean jniValue = get_isVertexProgramShadowCaster_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isVertexProgramShadowCaster_ev_bool (long pNativeObject, boolean value);
	public void set_isVertexProgramShadowCaster(boolean isVertexProgramShadowCaster)
	{
		boolean isVertexProgramShadowCasterParamValue = isVertexProgramShadowCaster;
		
		set_isVertexProgramShadowCaster_ev_bool(this.nativeObject.pointer, isVertexProgramShadowCasterParamValue);
	}
	
	native private boolean get_isFragmentProgramShadowCaster_void(long pNativeObject);
	public boolean get_isFragmentProgramShadowCaster()
	{
		boolean jniValue = get_isFragmentProgramShadowCaster_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isFragmentProgramShadowCaster_ev_bool (long pNativeObject, boolean value);
	public void set_isFragmentProgramShadowCaster(boolean isFragmentProgramShadowCaster)
	{
		boolean isFragmentProgramShadowCasterParamValue = isFragmentProgramShadowCaster;
		
		set_isFragmentProgramShadowCaster_ev_bool(this.nativeObject.pointer, isFragmentProgramShadowCasterParamValue);
	}
	
	native private boolean get_isVertexProgramShadowReceiver_void(long pNativeObject);
	public boolean get_isVertexProgramShadowReceiver()
	{
		boolean jniValue = get_isVertexProgramShadowReceiver_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isVertexProgramShadowReceiver_ev_bool (long pNativeObject, boolean value);
	public void set_isVertexProgramShadowReceiver(boolean isVertexProgramShadowReceiver)
	{
		boolean isVertexProgramShadowReceiverParamValue = isVertexProgramShadowReceiver;
		
		set_isVertexProgramShadowReceiver_ev_bool(this.nativeObject.pointer, isVertexProgramShadowReceiverParamValue);
	}
	
	native private boolean get_isFragmentProgramShadowReceiver_void(long pNativeObject);
	public boolean get_isFragmentProgramShadowReceiver()
	{
		boolean jniValue = get_isFragmentProgramShadowReceiver_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isFragmentProgramShadowReceiver_ev_bool (long pNativeObject, boolean value);
	public void set_isFragmentProgramShadowReceiver(boolean isFragmentProgramShadowReceiver)
	{
		boolean isFragmentProgramShadowReceiverParamValue = isFragmentProgramShadowReceiver;
		
		set_isFragmentProgramShadowReceiver_ev_bool(this.nativeObject.pointer, isFragmentProgramShadowReceiverParamValue);
	}
	
	native private long get_programParams_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParametersSharedPtr get_programParams()
	{
		long jniValue = get_programParams_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.GpuProgramParametersSharedPtr __returnValue = new com.earthview.world.graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParametersSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuProgramParametersSharedPtr");
		}
		return __returnValue;
	}
	
	native private void set_programParams_GpuProgramParametersSharedPtr (long pNativeObject, long value);
	public void set_programParams(com.earthview.world.graphic.GpuProgramParametersSharedPtr programParams)
	{
		long programParamsParamValue = programParams.nativeObject.pointer;
		
		set_programParams_GpuProgramParametersSharedPtr(this.nativeObject.pointer, programParamsParamValue);
	}
	
	native private int get_numAnimationParametrics_void(long pNativeObject);
	public int get_numAnimationParametrics()
	{
		int jniValue = get_numAnimationParametrics_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_numAnimationParametrics_ev_uint16 (long pNativeObject, int value);
	public void set_numAnimationParametrics(int numAnimationParametrics)
	{
		int numAnimationParametricsParamValue = numAnimationParametrics;
		
		set_numAnimationParametrics_ev_uint16(this.nativeObject.pointer, numAnimationParametricsParamValue);
	}
	
	native private long get_programDef_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialScriptProgramDefinition get_programDef()
	{
		long jniValue = get_programDef_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MaterialScriptProgramDefinition __returnValue = new com.earthview.world.graphic.MaterialScriptProgramDefinition(CreatedWhenConstruct.CWC_NotToCreate, "MaterialScriptProgramDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialScriptProgramDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MaterialScriptProgramDefinition");
		}
		return __returnValue;
	}
	
	native private void set_programDef_MaterialScriptProgramDefinition (long pNativeObject, long value);
	public void set_programDef(com.earthview.world.graphic.MaterialScriptProgramDefinition programDef)
	{
		long programDefParamValue = (programDef == null ? 0L : programDef.nativeObject.pointer);
		
		set_programDef_MaterialScriptProgramDefinition(this.nativeObject.pointer, programDefParamValue);
	}
	
	native private int get_passLev_void(long pNativeObject);
	public int get_passLev()
	{
		int jniValue = get_passLev_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_passLev_ev_int32 (long pNativeObject, int value);
	public void set_passLev(int passLev)
	{
		int passLevParamValue = passLev;
		
		set_passLev_ev_int32(this.nativeObject.pointer, passLevParamValue);
	}
	
	native private int get_stateLev_void(long pNativeObject);
	public int get_stateLev()
	{
		int jniValue = get_stateLev_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_stateLev_ev_int32 (long pNativeObject, int value);
	public void set_stateLev(int stateLev)
	{
		int stateLevParamValue = stateLev;
		
		set_stateLev_ev_int32(this.nativeObject.pointer, stateLevParamValue);
	}
	
	native private int get_techLev_void(long pNativeObject);
	public int get_techLev()
	{
		int jniValue = get_techLev_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_techLev_ev_int32 (long pNativeObject, int value);
	public void set_techLev(int techLev)
	{
		int techLevParamValue = techLev;
		
		set_techLev_ev_int32(this.nativeObject.pointer, techLevParamValue);
	}
	
	native private long get_defaultParamLines_void(long pNativeObject);
	public com.earthview.world.core.StringVector get_defaultParamLines()
	{
		long jniValue = get_defaultParamLines_void(this.nativeObject.pointer);
		
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	
	native private void set_defaultParamLines_StringVector (long pNativeObject, long value);
	public void set_defaultParamLines(com.earthview.world.core.StringVector defaultParamLines)
	{
		long defaultParamLinesParamValue = defaultParamLines.nativeObject.pointer;
		
		set_defaultParamLines_StringVector(this.nativeObject.pointer, defaultParamLinesParamValue);
	}
	
	native private long get_lineNo_void(long pNativeObject);
	public long get_lineNo()
	{
		long jniValue = get_lineNo_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lineNo_ev_size_t (long pNativeObject, long value);
	public void set_lineNo(long lineNo)
	{
		long lineNoParamValue = lineNo;
		
		set_lineNo_ev_size_t(this.nativeObject.pointer, lineNoParamValue);
	}
	
	native private String get_filename_void(long pNativeObject);
	public String get_filename()
	{
		String jniValue = get_filename_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_filename_EVString (long pNativeObject, String value);
	public void set_filename(String filename)
	{
		String filenameParamValue = filename;
		
		set_filename_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	
	native private long get_textureAliases_void(long pNativeObject);
	public com.earthview.world.core.CommonStringPairList get_textureAliases()
	{
		long jniValue = get_textureAliases_void(this.nativeObject.pointer);
		
		com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		}
		return __returnValue;
	}
	
	native private void set_textureAliases_CommonStringPairList (long pNativeObject, long value);
	public void set_textureAliases(com.earthview.world.core.CommonStringPairList textureAliases)
	{
		long textureAliasesParamValue = textureAliases.nativeObject.pointer;
		
		set_textureAliases_CommonStringPairList(this.nativeObject.pointer, textureAliasesParamValue);
	}
	
	public MaterialScriptContext(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MaterialScriptContext(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MaterialScriptContext fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MaterialScriptContext obj = null;
 		if(baseObj instanceof MaterialScriptContext)
		{
			obj = (MaterialScriptContext)baseObj;
		} else {
			obj = new MaterialScriptContext(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MaterialScriptContext");
			obj.increaseCast();
		}

		return obj;
	}
}
