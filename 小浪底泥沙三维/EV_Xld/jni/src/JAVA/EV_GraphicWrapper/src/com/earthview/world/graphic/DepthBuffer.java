package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DepthBuffer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDepthBuffer", new DepthBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDepthBufferProxy", new DepthBufferClassFactory());
	}

	public enum PoolId implements INativeEnum<PoolId> {
		POOL_NO_DEPTH(PoolIdHelper.ENUM_VALUES[0]),
		POOL_MANUAL_USAGE(PoolIdHelper.ENUM_VALUES[1]),
		POOL_DEFAULT(PoolIdHelper.ENUM_VALUES[2]);
		private int value;
		PoolId(int i) {
			this.value = i;
		}
		public PoolId getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final PoolId toEnum(int retval) {
			if(retval == POOL_NO_DEPTH.value){
				return POOL_NO_DEPTH;
			}
			else if(retval == POOL_MANUAL_USAGE.value){
				return POOL_MANUAL_USAGE;
			}
			else if(retval == POOL_DEFAULT.value){
				return POOL_DEFAULT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class PoolIdHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public DepthBuffer(int poolId, int bitDepth, long width, long height, long fsaa, String fsaaHint, boolean manual) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer poolIdPtr = new BasePointer(poolId);
		list.add("poolId", poolIdPtr.get());
		BasePointer bitDepthPtr = new BasePointer(bitDepth);
		list.add("bitDepth", bitDepthPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer fsaaPtr = new BasePointer(fsaa);
		list.add("fsaa", fsaaPtr.get());
		BasePointer fsaaHintPtr = new BasePointer(fsaaHint);
		list.add("fsaaHint", fsaaHintPtr.get());
		BasePointer manualPtr = new BasePointer(manual);
		list.add("manual", manualPtr.get());
		Create("JCDepthBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DepthBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _setPoolId_ev_uint16(long pNativeObject, int poolId);
	////Sets the pool id in which this DepthBuffer lives
	////Note this will detach any render target from this depth buffer
	public void _setPoolId(int poolId)
	{
		int poolIdParamValue = poolId;
		_setPoolId_ev_uint16(this.nativeObject.pointer, poolIdParamValue);
	}
	protected  int getPoolId_void_callback()
	{
		int returnValue = getPoolId();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPoolId_void(long pNativeObject);
	////Gets the pool id in which this DepthBuffer lives
	public int getPoolId()
	{
		int returnValue = getPoolId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPoolId_void_NoVirtual(long pNativeObject);
	protected int getPoolId_NoVirtual()
	{
		int returnValue = getPoolId_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getBitDepth_void_callback()
	{
		int returnValue = getBitDepth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getBitDepth_void(long pNativeObject);
	public int getBitDepth()
	{
		int returnValue = getBitDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBitDepth_void_NoVirtual(long pNativeObject);
	protected int getBitDepth_NoVirtual()
	{
		int returnValue = getBitDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getWidth_void_callback()
	{
		long returnValue = getWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWidth_void(long pNativeObject);
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWidth_void_NoVirtual(long pNativeObject);
	protected long getWidth_NoVirtual()
	{
		long returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getHeight_void_callback()
	{
		long returnValue = getHeight();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHeight_void(long pNativeObject);
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void_NoVirtual(long pNativeObject);
	protected long getHeight_NoVirtual()
	{
		long returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFsaa_void_callback()
	{
		long returnValue = getFsaa();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFsaa_void(long pNativeObject);
	public long getFsaa()
	{
		long returnValue = getFsaa_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFsaa_void_NoVirtual(long pNativeObject);
	protected long getFsaa_NoVirtual()
	{
		long returnValue = getFsaa_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFsaaHint_void_callback()
	{
		String returnValue = getFsaaHint();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFsaaHint_void(long pNativeObject);
	public String getFsaaHint()
	{
		String returnValue = getFsaaHint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFsaaHint_void_NoVirtual(long pNativeObject);
	protected String getFsaaHint_NoVirtual()
	{
		String returnValue = getFsaaHint_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isManual_void(long pNativeObject);
	////Manual DepthBuffers are cleared in RenderSystem's destructor. Non-manual ones are released
	////with it's render target (aka, a backbuffer or similar)
	public boolean isManual()
	{
		boolean returnValue = isManual_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean isCompatible_CRenderTarget_callback(long renderTarget)
	{
		com.earthview.world.graphic.RenderTarget renderTargetParamValue = (renderTarget == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(renderTargetParamValue != null)
		{
		renderTargetParamValue.setDelegate(true);
		renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		IClassFactory renderTargetParamValueClassFactory = GlobalClassFactoryMap.get(renderTargetParamValue.getCppInstanceTypeName());
		if (renderTargetParamValueClassFactory != null)
		{
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue = (com.earthview.world.graphic.RenderTarget)renderTargetParamValueClassFactory.create();
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		}
		}
		boolean returnValue = isCompatible(renderTargetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCompatible_CRenderTarget(long pNativeObject, long renderTarget);
	public boolean isCompatible(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		boolean returnValue = isCompatible_CRenderTarget(this.nativeObject.pointer, renderTargetParamValue);
		return returnValue;
	}
	native private boolean isCompatible_CRenderTarget_NoVirtual(long pNativeObject, long renderTarget);
	protected boolean isCompatible_NoVirtual(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		boolean returnValue = isCompatible_CRenderTarget_NoVirtual(this.nativeObject.pointer, renderTargetParamValue);
		return returnValue;
	}

	protected  void _notifyRenderTargetAttached_CRenderTarget_callback(long ref_renderTarget)
	{
		com.earthview.world.graphic.RenderTarget ref_renderTargetParamValue = (ref_renderTarget == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_renderTargetParamValue != null)
		{
		ref_renderTargetParamValue.setDelegate(true);
		ref_renderTargetParamValue.setInstancePointer(new InstancePointer(ref_renderTarget));
		IClassFactory ref_renderTargetParamValueClassFactory = GlobalClassFactoryMap.get(ref_renderTargetParamValue.getCppInstanceTypeName());
		if (ref_renderTargetParamValueClassFactory != null)
		{
			ref_renderTargetParamValue.setDelegate(true);
			ref_renderTargetParamValue = (com.earthview.world.graphic.RenderTarget)ref_renderTargetParamValueClassFactory.create();
			ref_renderTargetParamValue.setDelegate(true);
			ref_renderTargetParamValue.setInstancePointer(new InstancePointer(ref_renderTarget));
		}
		}
		_notifyRenderTargetAttached(ref_renderTargetParamValue);
	}

	native private void _notifyRenderTargetAttached_CRenderTarget(long pNativeObject, long ref_renderTarget);
	public void _notifyRenderTargetAttached(com.earthview.world.graphic.RenderTarget ref_renderTarget)
	{
		long ref_renderTargetParamValue = (ref_renderTarget == null ? 0L : ref_renderTarget.nativeObject.pointer);
		_notifyRenderTargetAttached_CRenderTarget(this.nativeObject.pointer, ref_renderTargetParamValue);
	}
	native private void _notifyRenderTargetAttached_CRenderTarget_NoVirtual(long pNativeObject, long ref_renderTarget);
	protected void _notifyRenderTargetAttached_NoVirtual(com.earthview.world.graphic.RenderTarget ref_renderTarget)
	{
		long ref_renderTargetParamValue = (ref_renderTarget == null ? 0L : ref_renderTarget.nativeObject.pointer);
		_notifyRenderTargetAttached_CRenderTarget_NoVirtual(this.nativeObject.pointer, ref_renderTargetParamValue);
	}

	protected  void _notifyRenderTargetDetached_CRenderTarget_callback(long renderTarget)
	{
		com.earthview.world.graphic.RenderTarget renderTargetParamValue = (renderTarget == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(renderTargetParamValue != null)
		{
		renderTargetParamValue.setDelegate(true);
		renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		IClassFactory renderTargetParamValueClassFactory = GlobalClassFactoryMap.get(renderTargetParamValue.getCppInstanceTypeName());
		if (renderTargetParamValueClassFactory != null)
		{
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue = (com.earthview.world.graphic.RenderTarget)renderTargetParamValueClassFactory.create();
			renderTargetParamValue.setDelegate(true);
			renderTargetParamValue.setInstancePointer(new InstancePointer(renderTarget));
		}
		}
		_notifyRenderTargetDetached(renderTargetParamValue);
	}

	native private void _notifyRenderTargetDetached_CRenderTarget(long pNativeObject, long renderTarget);
	public void _notifyRenderTargetDetached(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		_notifyRenderTargetDetached_CRenderTarget(this.nativeObject.pointer, renderTargetParamValue);
	}
	native private void _notifyRenderTargetDetached_CRenderTarget_NoVirtual(long pNativeObject, long renderTarget);
	protected void _notifyRenderTargetDetached_NoVirtual(com.earthview.world.graphic.RenderTarget renderTarget)
	{
		long renderTargetParamValue = (renderTarget == null ? 0L : renderTarget.nativeObject.pointer);
		_notifyRenderTargetDetached_CRenderTarget_NoVirtual(this.nativeObject.pointer, renderTargetParamValue);
	}

	public DepthBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DepthBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getPoolId_void(long pNativeObject, String method);
	native protected void register_getBitDepth_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getFsaa_void(long pNativeObject, String method);
	native protected void register_getFsaaHint_void(long pNativeObject, String method);
	native protected void register_isCompatible_CRenderTarget(long pNativeObject, String method);
	native protected void register__notifyRenderTargetAttached_CRenderTarget(long pNativeObject, String method);
	native protected void register__notifyRenderTargetDetached_CRenderTarget(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getPoolId_void(this.nativeObject.pointer, "getPoolId_void_callback");
			this.register_getBitDepth_void(this.nativeObject.pointer, "getBitDepth_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getFsaa_void(this.nativeObject.pointer, "getFsaa_void_callback");
			this.register_getFsaaHint_void(this.nativeObject.pointer, "getFsaaHint_void_callback");
			this.register_isCompatible_CRenderTarget(this.nativeObject.pointer, "isCompatible_CRenderTarget_callback");
			this.register__notifyRenderTargetAttached_CRenderTarget(this.nativeObject.pointer, "_notifyRenderTargetAttached_CRenderTarget_callback");
			this.register__notifyRenderTargetDetached_CRenderTarget(this.nativeObject.pointer, "_notifyRenderTargetDetached_CRenderTarget_callback");
		}
	}
	
	public static DepthBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DepthBuffer obj = null;
 		if(baseObj instanceof DepthBuffer)
		{
			obj = (DepthBuffer)baseObj;
		} else {
			obj = new DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDepthBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
