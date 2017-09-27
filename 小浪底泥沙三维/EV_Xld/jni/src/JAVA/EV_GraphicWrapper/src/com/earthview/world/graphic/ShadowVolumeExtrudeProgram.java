package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowVolumeExtrudeProgram extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowVolumeExtrudeProgram", new ShadowVolumeExtrudeProgramClassFactory());
	}

	public enum Programs implements INativeEnum<Programs> {
		POINT_LIGHT(ProgramsHelper.ENUM_VALUES[0]),
		POINT_LIGHT_DEBUG(ProgramsHelper.ENUM_VALUES[1]),
		DIRECTIONAL_LIGHT(ProgramsHelper.ENUM_VALUES[2]),
		DIRECTIONAL_LIGHT_DEBUG(ProgramsHelper.ENUM_VALUES[3]),
		POINT_LIGHT_FINITE(ProgramsHelper.ENUM_VALUES[4]),
		POINT_LIGHT_FINITE_DEBUG(ProgramsHelper.ENUM_VALUES[5]),
		DIRECTIONAL_LIGHT_FINITE(ProgramsHelper.ENUM_VALUES[6]),
		DIRECTIONAL_LIGHT_FINITE_DEBUG(ProgramsHelper.ENUM_VALUES[7]);
		private int value;
		Programs(int i) {
			this.value = i;
		}
		public Programs getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Programs toEnum(int retval) {
			if(retval == POINT_LIGHT.value){
				return POINT_LIGHT;
			}
			else if(retval == POINT_LIGHT_DEBUG.value){
				return POINT_LIGHT_DEBUG;
			}
			else if(retval == DIRECTIONAL_LIGHT.value){
				return DIRECTIONAL_LIGHT;
			}
			else if(retval == DIRECTIONAL_LIGHT_DEBUG.value){
				return DIRECTIONAL_LIGHT_DEBUG;
			}
			else if(retval == POINT_LIGHT_FINITE.value){
				return POINT_LIGHT_FINITE;
			}
			else if(retval == POINT_LIGHT_FINITE_DEBUG.value){
				return POINT_LIGHT_FINITE_DEBUG;
			}
			else if(retval == DIRECTIONAL_LIGHT_FINITE.value){
				return DIRECTIONAL_LIGHT_FINITE;
			}
			else if(retval == DIRECTIONAL_LIGHT_FINITE_DEBUG.value){
				return DIRECTIONAL_LIGHT_FINITE_DEBUG;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ProgramsHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static String get_frgProgramName_void();
	public static String get_frgProgramName()
	{
		String jniValue = get_frgProgramName_void();
		
		return jniValue;
	}
	
	native private static void set_frgProgramName_EVString (String value);
	public static void set_frgProgramName(String frgProgramName)
	{
		String frgProgramNameParamValue = frgProgramName;
		
		set_frgProgramName_EVString(frgProgramNameParamValue);
	}
	
	native private static void initialise_void();
	//// Initialise the creation of these vertex programs
	public static void initialise()
	{
		initialise_void();
	}
	native private static void shutdown_void();
	//// Shutdown & destroy the vertex programs
	public static void shutdown()
	{
		shutdown_void();
	}
	native private static long getPointLightExtruderArbvp1_void();
	//// Get extruder program source for point lights, compatible with arbvp1
	public static StringPointer getPointLightExtruderArbvp1()
	{
		long returnValue = getPointLightExtruderArbvp1_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_1_1_void();
	//// Get extruder program source for point lights, compatible with vs_1_1
	public static StringPointer getPointLightExtruderVs_1_1()
	{
		long returnValue = getPointLightExtruderVs_1_1_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_4_0_void();
	//// Get extruder program source for point lights, compatible with vs_4_0
	public static StringPointer getPointLightExtruderVs_4_0()
	{
		long returnValue = getPointLightExtruderVs_4_0_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_glsles_void();
	//// Get extruder program source for point lights, compatible with glsles
	public static StringPointer getPointLightExtruderVs_glsles()
	{
		long returnValue = getPointLightExtruderVs_glsles_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderArbvp1_void();
	//// Get extruder program source for directional lights, compatible with arbvp1
	public static StringPointer getDirectionalLightExtruderArbvp1()
	{
		long returnValue = getDirectionalLightExtruderArbvp1_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_1_1_void();
	//// Get extruder program source for directional lights, compatible with vs_1_1
	public static StringPointer getDirectionalLightExtruderVs_1_1()
	{
		long returnValue = getDirectionalLightExtruderVs_1_1_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_4_0_void();
	//// Get extruder program source for directional lights, compatible with vs_4_0
	public static StringPointer getDirectionalLightExtruderVs_4_0()
	{
		long returnValue = getDirectionalLightExtruderVs_4_0_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_glsles_void();
	//// Get extruder program source for directional lights, compatible with glsles
	public static StringPointer getDirectionalLightExtruderVs_glsles()
	{
		long returnValue = getDirectionalLightExtruderVs_glsles_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderArbvp1Debug_void();
	//// Get extruder program source for debug point lights, compatible with arbvp1
	public static StringPointer getPointLightExtruderArbvp1Debug()
	{
		long returnValue = getPointLightExtruderArbvp1Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_1_1Debug_void();
	//// Get extruder program source for debug point lights, compatible with vs_1_1
	public static StringPointer getPointLightExtruderVs_1_1Debug()
	{
		long returnValue = getPointLightExtruderVs_1_1Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_4_0Debug_void();
	//// Get extruder program source for debug point lights, compatible with vs_4_0
	public static StringPointer getPointLightExtruderVs_4_0Debug()
	{
		long returnValue = getPointLightExtruderVs_4_0Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_glslesDebug_void();
	//// Get extruder program source for debug point lights, compatible with glsles
	public static StringPointer getPointLightExtruderVs_glslesDebug()
	{
		long returnValue = getPointLightExtruderVs_glslesDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderArbvp1Debug_void();
	//// Get extruder program source for debug directional lights, compatible with arbvp1
	public static StringPointer getDirectionalLightExtruderArbvp1Debug()
	{
		long returnValue = getDirectionalLightExtruderArbvp1Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_1_1Debug_void();
	//// Get extruder program source for debug directional lights, compatible with vs_1_1
	public static StringPointer getDirectionalLightExtruderVs_1_1Debug()
	{
		long returnValue = getDirectionalLightExtruderVs_1_1Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_4_0Debug_void();
	//// Get extruder program source for debug directional lights, compatible with vs_4_0
	public static StringPointer getDirectionalLightExtruderVs_4_0Debug()
	{
		long returnValue = getDirectionalLightExtruderVs_4_0Debug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_glslesDebug_void();
	//// Get extruder program source for debug directional lights, compatible with glsles
	public static StringPointer getDirectionalLightExtruderVs_glslesDebug()
	{
		long returnValue = getDirectionalLightExtruderVs_glslesDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getProgramSource_LightTypes_EVString_ev_bool_ev_bool(int lightType, String syntax, boolean finite, boolean debug);
	//// General purpose method to get any of the program sources
	public static StringPointer getProgramSource(com.earthview.world.graphic.Light.LightTypes lightType, String syntax, boolean finite, boolean debug)
	{
		int lightTypeParamValue = lightType.getValue();
		String syntaxParamValue = syntax;
		boolean finiteParamValue = finite;
		boolean debugParamValue = debug;
		long returnValue = getProgramSource_LightTypes_EVString_ev_bool_ev_bool(lightTypeParamValue, syntaxParamValue, finiteParamValue, debugParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getProgramName_LightTypes_ev_bool_ev_bool(int lightType, boolean finite, boolean debug);
	public static StringPointer getProgramName(com.earthview.world.graphic.Light.LightTypes lightType, boolean finite, boolean debug)
	{
		int lightTypeParamValue = lightType.getValue();
		boolean finiteParamValue = finite;
		boolean debugParamValue = debug;
		long returnValue = getProgramName_LightTypes_ev_bool_ev_bool(lightTypeParamValue, finiteParamValue, debugParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderArbvp1Finite_void();
	//// Get FINITE extruder program source for point lights, compatible with arbvp1
	public static StringPointer getPointLightExtruderArbvp1Finite()
	{
		long returnValue = getPointLightExtruderArbvp1Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_1_1Finite_void();
	//// Get FINITE extruder program source for point lights, compatible with vs_1_1
	public static StringPointer getPointLightExtruderVs_1_1Finite()
	{
		long returnValue = getPointLightExtruderVs_1_1Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_4_0Finite_void();
	//// Get FINITE extruder program source for point lights, compatible with vs_4_0
	public static StringPointer getPointLightExtruderVs_4_0Finite()
	{
		long returnValue = getPointLightExtruderVs_4_0Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_glslesFinite_void();
	//// Get FINITE extruder program source for point lights, compatible with glsles
	public static StringPointer getPointLightExtruderVs_glslesFinite()
	{
		long returnValue = getPointLightExtruderVs_glslesFinite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderArbvp1Finite_void();
	//// Get FINITE extruder program source for directional lights, compatible with arbvp1
	public static StringPointer getDirectionalLightExtruderArbvp1Finite()
	{
		long returnValue = getDirectionalLightExtruderArbvp1Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_1_1Finite_void();
	//// Get FINITE extruder program source for directional lights, compatible with vs_1_1
	public static StringPointer getDirectionalLightExtruderVs_1_1Finite()
	{
		long returnValue = getDirectionalLightExtruderVs_1_1Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_4_0Finite_void();
	//// Get FINITE extruder program source for directional lights, compatible with vs_4_0
	public static StringPointer getDirectionalLightExtruderVs_4_0Finite()
	{
		long returnValue = getDirectionalLightExtruderVs_4_0Finite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_glslesFinite_void();
	//// Get FINITE extruder program source for directional lights, compatible with glsles
	public static StringPointer getDirectionalLightExtruderVs_glslesFinite()
	{
		long returnValue = getDirectionalLightExtruderVs_glslesFinite_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderArbvp1FiniteDebug_void();
	//// Get FINITE extruder program source for debug point lights, compatible with arbvp1
	public static StringPointer getPointLightExtruderArbvp1FiniteDebug()
	{
		long returnValue = getPointLightExtruderArbvp1FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_1_1FiniteDebug_void();
	//// Get extruder program source for debug point lights, compatible with vs_1_1
	public static StringPointer getPointLightExtruderVs_1_1FiniteDebug()
	{
		long returnValue = getPointLightExtruderVs_1_1FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_4_0FiniteDebug_void();
	//// Get extruder program source for debug point lights, compatible with vs_4_0
	public static StringPointer getPointLightExtruderVs_4_0FiniteDebug()
	{
		long returnValue = getPointLightExtruderVs_4_0FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getPointLightExtruderVs_glslesFiniteDebug_void();
	//// Get extruder program source for debug point lights, compatible with glsles
	public static StringPointer getPointLightExtruderVs_glslesFiniteDebug()
	{
		long returnValue = getPointLightExtruderVs_glslesFiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderArbvp1FiniteDebug_void();
	//// Get FINITE extruder program source for debug directional lights, compatible with arbvp1
	public static StringPointer getDirectionalLightExtruderArbvp1FiniteDebug()
	{
		long returnValue = getDirectionalLightExtruderArbvp1FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_1_1FiniteDebug_void();
	//// Get FINITE extruder program source for debug directional lights, compatible with vs_1_1
	public static StringPointer getDirectionalLightExtruderVs_1_1FiniteDebug()
	{
		long returnValue = getDirectionalLightExtruderVs_1_1FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_4_0FiniteDebug_void();
	//// Get FINITE extruder program source for debug directional lights, compatible with vs_4_0
	public static StringPointer getDirectionalLightExtruderVs_4_0FiniteDebug()
	{
		long returnValue = getDirectionalLightExtruderVs_4_0FiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long getDirectionalLightExtruderVs_glslesFiniteDebug_void();
	//// Get FINITE extruder program source for debug directional lights, compatible with glsles
	public static StringPointer getDirectionalLightExtruderVs_glslesFiniteDebug()
	{
		long returnValue = getDirectionalLightExtruderVs_glslesFiniteDebug_void();
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public ShadowVolumeExtrudeProgram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowVolumeExtrudeProgram(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShadowVolumeExtrudeProgram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowVolumeExtrudeProgram obj = null;
 		if(baseObj instanceof ShadowVolumeExtrudeProgram)
		{
			obj = (ShadowVolumeExtrudeProgram)baseObj;
		} else {
			obj = new ShadowVolumeExtrudeProgram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadowVolumeExtrudeProgram");
			obj.increaseCast();
		}

		return obj;
	}
}
