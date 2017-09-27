package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WakeGeneratorParameters extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::WakeGeneratorParameters", new WakeGeneratorParametersClassFactory());
	}

	public WakeGeneratorParameters() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("WakeGeneratorParameters", null);
	}

	native private boolean get_sprayEffects_void(long pNativeObject);
	public boolean get_sprayEffects()
	{
		boolean jniValue = get_sprayEffects_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sprayEffects_bool (long pNativeObject, boolean value);
	public void set_sprayEffects(boolean sprayEffects)
	{
		boolean sprayEffectsParamValue = sprayEffects;
		
		set_sprayEffects_bool(this.nativeObject.pointer, sprayEffectsParamValue);
	}
	
	native private double get_bowSprayOffset_void(long pNativeObject);
	public double get_bowSprayOffset()
	{
		double jniValue = get_bowSprayOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bowSprayOffset_double (long pNativeObject, double value);
	public void set_bowSprayOffset(double bowSprayOffset)
	{
		double bowSprayOffsetParamValue = bowSprayOffset;
		
		set_bowSprayOffset_double(this.nativeObject.pointer, bowSprayOffsetParamValue);
	}
	
	native private double get_sprayVelocityScale_void(long pNativeObject);
	public double get_sprayVelocityScale()
	{
		double jniValue = get_sprayVelocityScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sprayVelocityScale_double (long pNativeObject, double value);
	public void set_sprayVelocityScale(double sprayVelocityScale)
	{
		double sprayVelocityScaleParamValue = sprayVelocityScale;
		
		set_sprayVelocityScale_double(this.nativeObject.pointer, sprayVelocityScaleParamValue);
	}
	
	native private double get_spraySizeScale_void(long pNativeObject);
	public double get_spraySizeScale()
	{
		double jniValue = get_spraySizeScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_spraySizeScale_double (long pNativeObject, double value);
	public void set_spraySizeScale(double spraySizeScale)
	{
		double spraySizeScaleParamValue = spraySizeScale;
		
		set_spraySizeScale_double(this.nativeObject.pointer, spraySizeScaleParamValue);
	}
	
	native private double get_bowWaveOffset_void(long pNativeObject);
	public double get_bowWaveOffset()
	{
		double jniValue = get_bowWaveOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bowWaveOffset_double (long pNativeObject, double value);
	public void set_bowWaveOffset(double bowWaveOffset)
	{
		double bowWaveOffsetParamValue = bowWaveOffset;
		
		set_bowWaveOffset_double(this.nativeObject.pointer, bowWaveOffsetParamValue);
	}
	
	native private double get_bowWaveScale_void(long pNativeObject);
	public double get_bowWaveScale()
	{
		double jniValue = get_bowWaveScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bowWaveScale_double (long pNativeObject, double value);
	public void set_bowWaveScale(double bowWaveScale)
	{
		double bowWaveScaleParamValue = bowWaveScale;
		
		set_bowWaveScale_double(this.nativeObject.pointer, bowWaveScaleParamValue);
	}
	
	native private double get_bowWaveMax_void(long pNativeObject);
	public double get_bowWaveMax()
	{
		double jniValue = get_bowWaveMax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bowWaveMax_double (long pNativeObject, double value);
	public void set_bowWaveMax(double bowWaveMax)
	{
		double bowWaveMaxParamValue = bowWaveMax;
		
		set_bowWaveMax_double(this.nativeObject.pointer, bowWaveMaxParamValue);
	}
	
	native private double get_bowSize_void(long pNativeObject);
	public double get_bowSize()
	{
		double jniValue = get_bowSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bowSize_double (long pNativeObject, double value);
	public void set_bowSize(double bowSize)
	{
		double bowSizeParamValue = bowSize;
		
		set_bowSize_double(this.nativeObject.pointer, bowSizeParamValue);
	}
	
	native private double get_sternWaveOffset_void(long pNativeObject);
	public double get_sternWaveOffset()
	{
		double jniValue = get_sternWaveOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sternWaveOffset_double (long pNativeObject, double value);
	public void set_sternWaveOffset(double sternWaveOffset)
	{
		double sternWaveOffsetParamValue = sternWaveOffset;
		
		set_sternWaveOffset_double(this.nativeObject.pointer, sternWaveOffsetParamValue);
	}
	
	native private double get_length_void(long pNativeObject);
	public double get_length()
	{
		double jniValue = get_length_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_length_double (long pNativeObject, double value);
	public void set_length(double length)
	{
		double lengthParamValue = length;
		
		set_length_double(this.nativeObject.pointer, lengthParamValue);
	}
	
	native private double get_beamWidth_void(long pNativeObject);
	public double get_beamWidth()
	{
		double jniValue = get_beamWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_beamWidth_double (long pNativeObject, double value);
	public void set_beamWidth(double beamWidth)
	{
		double beamWidthParamValue = beamWidth;
		
		set_beamWidth_double(this.nativeObject.pointer, beamWidthParamValue);
	}
	
	native private double get_draft_void(long pNativeObject);
	public double get_draft()
	{
		double jniValue = get_draft_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_draft_double (long pNativeObject, double value);
	public void set_draft(double draft)
	{
		double draftParamValue = draft;
		
		set_draft_double(this.nativeObject.pointer, draftParamValue);
	}
	
	native private boolean get_propWash_void(long pNativeObject);
	public boolean get_propWash()
	{
		boolean jniValue = get_propWash_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_propWash_bool (long pNativeObject, boolean value);
	public void set_propWash(boolean propWash)
	{
		boolean propWashParamValue = propWash;
		
		set_propWash_bool(this.nativeObject.pointer, propWashParamValue);
	}
	
	native private double get_propWashOffset_void(long pNativeObject);
	public double get_propWashOffset()
	{
		double jniValue = get_propWashOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_propWashOffset_double (long pNativeObject, double value);
	public void set_propWashOffset(double propWashOffset)
	{
		double propWashOffsetParamValue = propWashOffset;
		
		set_propWashOffset_double(this.nativeObject.pointer, propWashOffsetParamValue);
	}
	
	native private double get_propWashWidthMultiplier_void(long pNativeObject);
	public double get_propWashWidthMultiplier()
	{
		double jniValue = get_propWashWidthMultiplier_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_propWashWidthMultiplier_double (long pNativeObject, double value);
	public void set_propWashWidthMultiplier(double propWashWidthMultiplier)
	{
		double propWashWidthMultiplierParamValue = propWashWidthMultiplier;
		
		set_propWashWidthMultiplier_double(this.nativeObject.pointer, propWashWidthMultiplierParamValue);
	}
	
	native private int get_numHullSprays_void(long pNativeObject);
	public int get_numHullSprays()
	{
		int jniValue = get_numHullSprays_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_numHullSprays_int (long pNativeObject, int value);
	public void set_numHullSprays(int numHullSprays)
	{
		int numHullSpraysParamValue = numHullSprays;
		
		set_numHullSprays_int(this.nativeObject.pointer, numHullSpraysParamValue);
	}
	
	native private double get_hullSprayStartOffset_void(long pNativeObject);
	public double get_hullSprayStartOffset()
	{
		double jniValue = get_hullSprayStartOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hullSprayStartOffset_double (long pNativeObject, double value);
	public void set_hullSprayStartOffset(double hullSprayStartOffset)
	{
		double hullSprayStartOffsetParamValue = hullSprayStartOffset;
		
		set_hullSprayStartOffset_double(this.nativeObject.pointer, hullSprayStartOffsetParamValue);
	}
	
	native private double get_hullSprayEndOffset_void(long pNativeObject);
	public double get_hullSprayEndOffset()
	{
		double jniValue = get_hullSprayEndOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hullSprayEndOffset_double (long pNativeObject, double value);
	public void set_hullSprayEndOffset(double hullSprayEndOffset)
	{
		double hullSprayEndOffsetParamValue = hullSprayEndOffset;
		
		set_hullSprayEndOffset_double(this.nativeObject.pointer, hullSprayEndOffsetParamValue);
	}
	
	native private double get_hullSprayScale_void(long pNativeObject);
	public double get_hullSprayScale()
	{
		double jniValue = get_hullSprayScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hullSprayScale_double (long pNativeObject, double value);
	public void set_hullSprayScale(double hullSprayScale)
	{
		double hullSprayScaleParamValue = hullSprayScale;
		
		set_hullSprayScale_double(this.nativeObject.pointer, hullSprayScaleParamValue);
	}
	
	native private double get_hullSpraySizeScale_void(long pNativeObject);
	public double get_hullSpraySizeScale()
	{
		double jniValue = get_hullSpraySizeScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hullSpraySizeScale_double (long pNativeObject, double value);
	public void set_hullSpraySizeScale(double hullSpraySizeScale)
	{
		double hullSpraySizeScaleParamValue = hullSpraySizeScale;
		
		set_hullSpraySizeScale_double(this.nativeObject.pointer, hullSpraySizeScaleParamValue);
	}
	
	native private double get_hullSprayVerticalOffset_void(long pNativeObject);
	public double get_hullSprayVerticalOffset()
	{
		double jniValue = get_hullSprayVerticalOffset_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hullSprayVerticalOffset_double (long pNativeObject, double value);
	public void set_hullSprayVerticalOffset(double hullSprayVerticalOffset)
	{
		double hullSprayVerticalOffsetParamValue = hullSprayVerticalOffset;
		
		set_hullSprayVerticalOffset_double(this.nativeObject.pointer, hullSprayVerticalOffsetParamValue);
	}
	
	public WakeGeneratorParameters(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WakeGeneratorParameters(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WakeGeneratorParameters fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WakeGeneratorParameters obj = null;
 		if(baseObj instanceof WakeGeneratorParameters)
		{
			obj = (WakeGeneratorParameters)baseObj;
		} else {
			obj = new WakeGeneratorParameters(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "WakeGeneratorParameters");
			obj.increaseCast();
		}

		return obj;
	}
}
