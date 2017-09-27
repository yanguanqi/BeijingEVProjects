package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Tagstatisticsdisplay extends RemoteNativeObject {

	public Tagstatisticsdisplay(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Tagstatisticsdisplay(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Tagstatisticsdisplay() {
		super(new InstancePointer(Create()),false);
	}
	native private long get_pSymbol_void(long pNativeObject);
	public com.earthview.world.spatial.display.Isymbol get_pSymbol()
	{
		long jniValue = get_pSymbol_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	
	native private void set_pSymbol_ISymbol (long pNativeObject, long value);
	public void set_pSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		
		set_pSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	
	native private double get_dValue_void(long pNativeObject);
	public double get_dValue()
	{
		double jniValue = get_dValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dValue_ev_real64 (long pNativeObject, double value);
	public void set_dValue(double dValue)
	{
		double dValueParamValue = dValue;
		
		set_dValue_ev_real64(this.nativeObject.pointer, dValueParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
