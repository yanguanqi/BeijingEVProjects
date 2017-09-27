package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS用户自定义符号信息类
 */
public final class Ogcwmsuserdefinedsymbolization extends RemoteNativeObject {

	public Ogcwmsuserdefinedsymbolization(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Ogcwmsuserdefinedsymbolization(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Ogcwmsuserdefinedsymbolization() {
		super(new InstancePointer(Create()),false);
	}
	native private boolean get_bSupportSLD_void(long pNativeObject);
	public boolean get_bSupportSLD()
	{
		boolean jniValue = get_bSupportSLD_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bSupportSLD_ev_bool (long pNativeObject, boolean value);
	public void set_bSupportSLD(boolean bSupportSLD)
	{
		boolean bSupportSLDParamValue = bSupportSLD;
		
		set_bSupportSLD_ev_bool(this.nativeObject.pointer, bSupportSLDParamValue);
	}
	
	native private boolean get_bUserLayer_void(long pNativeObject);
	public boolean get_bUserLayer()
	{
		boolean jniValue = get_bUserLayer_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bUserLayer_ev_bool (long pNativeObject, boolean value);
	public void set_bUserLayer(boolean bUserLayer)
	{
		boolean bUserLayerParamValue = bUserLayer;
		
		set_bUserLayer_ev_bool(this.nativeObject.pointer, bUserLayerParamValue);
	}
	
	native private boolean get_bUserStyle_void(long pNativeObject);
	public boolean get_bUserStyle()
	{
		boolean jniValue = get_bUserStyle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bUserStyle_ev_bool (long pNativeObject, boolean value);
	public void set_bUserStyle(boolean bUserStyle)
	{
		boolean bUserStyleParamValue = bUserStyle;
		
		set_bUserStyle_ev_bool(this.nativeObject.pointer, bUserStyleParamValue);
	}
	
	native private boolean get_bRemoteWFS_void(long pNativeObject);
	public boolean get_bRemoteWFS()
	{
		boolean jniValue = get_bRemoteWFS_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bRemoteWFS_ev_bool (long pNativeObject, boolean value);
	public void set_bRemoteWFS(boolean bRemoteWFS)
	{
		boolean bRemoteWFSParamValue = bRemoteWFS;
		
		set_bRemoteWFS_ev_bool(this.nativeObject.pointer, bRemoteWFSParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
