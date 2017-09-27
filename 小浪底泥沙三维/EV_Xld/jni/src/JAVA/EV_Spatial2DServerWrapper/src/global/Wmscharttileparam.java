package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Wmscharttileparam extends RemoteNativeObject {

	public Wmscharttileparam(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Wmscharttileparam(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Wmscharttileparam() {
		super(new InstancePointer(Create()),false);
	}
	native private String get_srid_void(long pNativeObject);
	public String get_srid()
	{
		String jniValue = get_srid_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_srid_EVString (long pNativeObject, String value);
	public void set_srid(String srid)
	{
		String sridParamValue = srid;
		
		set_srid_EVString(this.nativeObject.pointer, sridParamValue);
	}
	
	native private String get_box_void(long pNativeObject);
	public String get_box()
	{
		String jniValue = get_box_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_box_EVString (long pNativeObject, String value);
	public void set_box(String box)
	{
		String boxParamValue = box;
		
		set_box_EVString(this.nativeObject.pointer, boxParamValue);
	}
	
	native private String get_displayMode_void(long pNativeObject);
	public String get_displayMode()
	{
		String jniValue = get_displayMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_displayMode_EVString (long pNativeObject, String value);
	public void set_displayMode(String displayMode)
	{
		String displayModeParamValue = displayMode;
		
		set_displayMode_EVString(this.nativeObject.pointer, displayModeParamValue);
	}
	
	native private String get_colorMode_void(long pNativeObject);
	public String get_colorMode()
	{
		String jniValue = get_colorMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_colorMode_EVString (long pNativeObject, String value);
	public void set_colorMode(String colorMode)
	{
		String colorModeParamValue = colorMode;
		
		set_colorMode_EVString(this.nativeObject.pointer, colorModeParamValue);
	}
	
	native private String get_symbolMode_void(long pNativeObject);
	public String get_symbolMode()
	{
		String jniValue = get_symbolMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_symbolMode_EVString (long pNativeObject, String value);
	public void set_symbolMode(String symbolMode)
	{
		String symbolModeParamValue = symbolMode;
		
		set_symbolMode_EVString(this.nativeObject.pointer, symbolModeParamValue);
	}
	
	native private String get_isoBath_void(long pNativeObject);
	public String get_isoBath()
	{
		String jniValue = get_isoBath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isoBath_EVString (long pNativeObject, String value);
	public void set_isoBath(String isoBath)
	{
		String isoBathParamValue = isoBath;
		
		set_isoBath_EVString(this.nativeObject.pointer, isoBathParamValue);
	}
	
	native private String get_annoMode_void(long pNativeObject);
	public String get_annoMode()
	{
		String jniValue = get_annoMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_annoMode_EVString (long pNativeObject, String value);
	public void set_annoMode(String annoMode)
	{
		String annoModeParamValue = annoMode;
		
		set_annoMode_EVString(this.nativeObject.pointer, annoModeParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
