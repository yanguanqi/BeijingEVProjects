package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimplelineManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CSimplelineManager", new SimplelineManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCSimplelineManagerProxy", new SimplelineManagerClassFactory());
	}

	public SimplelineManager(com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGlobeControlPtr = new BasePointer(ref_pGlobeControl);
		list.add("ref_pGlobeControl", ref_pGlobeControlPtr.get());
		Create("JCSimplelineManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.SimplelineManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long addSimpleline_void_callback()
	{
		com.earthview.industryengine.industrygraphic.Simpleline returnValue = addSimpleline();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addSimpleline_void(long pNativeObject);
	public com.earthview.industryengine.industrygraphic.Simpleline addSimpleline()
	{
		long returnValue = addSimpleline_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}
	native private long addSimpleline_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.industrygraphic.Simpleline addSimpleline_NoVirtual()
	{
		long returnValue = addSimpleline_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}

	protected  void getIdVector_IntVector_callback(long ids)
	{
		com.earthview.world.core.IntVector idsParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		idsParamValue.setDelegate(true);
		idsParamValue.setInstancePointer(new InstancePointer(ids));
		IClassFactory idsParamValueClassFactory = GlobalClassFactoryMap.get(idsParamValue.getCppInstanceTypeName());
		if (idsParamValueClassFactory != null)
		{
			idsParamValue.setDelegate(true);
			idsParamValue = (com.earthview.world.core.IntVector)idsParamValueClassFactory.create();
			idsParamValue.setDelegate(true);
			idsParamValue.setInstancePointer(new InstancePointer(ids));
		}
		getIdVector(idsParamValue);
	}

	native private void getIdVector_IntVector(long pNativeObject, long ids);
	public void getIdVector(com.earthview.world.core.IntVector ids)
	{
		long idsParamValue = ids.nativeObject.pointer;
		getIdVector_IntVector(this.nativeObject.pointer, idsParamValue);
	}
	native private void getIdVector_IntVector_NoVirtual(long pNativeObject, long ids);
	protected void getIdVector_NoVirtual(com.earthview.world.core.IntVector ids)
	{
		long idsParamValue = ids.nativeObject.pointer;
		getIdVector_IntVector_NoVirtual(this.nativeObject.pointer, idsParamValue);
	}

	protected  long getSimpleline_ev_int32_callback(int id)
	{
		int idParamValue = id;
		com.earthview.industryengine.industrygraphic.Simpleline returnValue = getSimpleline(idParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSimpleline_ev_int32(long pNativeObject, int id);
	public com.earthview.industryengine.industrygraphic.Simpleline getSimpleline(int id)
	{
		int idParamValue = id;
		long returnValue = getSimpleline_ev_int32(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}
	native private long getSimpleline_ev_int32_NoVirtual(long pNativeObject, int id);
	protected com.earthview.industryengine.industrygraphic.Simpleline getSimpleline_NoVirtual(int id)
	{
		int idParamValue = id;
		long returnValue = getSimpleline_ev_int32_NoVirtual(this.nativeObject.pointer, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}

	protected  void buildRenderData_void_callback()
	{
		buildRenderData();
	}

	native private void buildRenderData_void(long pNativeObject);
	public void buildRenderData()
	{
		buildRenderData_void(this.nativeObject.pointer);
	}
	native private void buildRenderData_void_NoVirtual(long pNativeObject);
	protected void buildRenderData_NoVirtual()
	{
		buildRenderData_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void renderToScene_void_callback()
	{
		renderToScene();
	}

	native private void renderToScene_void(long pNativeObject);
	public void renderToScene()
	{
		renderToScene_void(this.nativeObject.pointer);
	}
	native private void renderToScene_void_NoVirtual(long pNativeObject);
	protected void renderToScene_NoVirtual()
	{
		renderToScene_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void derenderFromScene_void_callback()
	{
		derenderFromScene();
	}

	native private void derenderFromScene_void(long pNativeObject);
	public void derenderFromScene()
	{
		derenderFromScene_void(this.nativeObject.pointer);
	}
	native private void derenderFromScene_void_NoVirtual(long pNativeObject);
	protected void derenderFromScene_NoVirtual()
	{
		derenderFromScene_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void removeAllPoints_void_callback()
	{
		removeAllPoints();
	}

	native private void removeAllPoints_void(long pNativeObject);
	public void removeAllPoints()
	{
		removeAllPoints_void(this.nativeObject.pointer);
	}
	native private void removeAllPoints_void_NoVirtual(long pNativeObject);
	protected void removeAllPoints_NoVirtual()
	{
		removeAllPoints_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getHightlightColor_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getHightlightColor();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getHightlightColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getHightlightColor()
	{
		long returnValue = getHightlightColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getHightlightColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getHightlightColor_NoVirtual()
	{
		long returnValue = getHightlightColor_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  void setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32_callback(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setHightlightColor(redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	native private void setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, float red, float green, float blue, float alpha);
	public void setHightlightColor(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, float red, float green, float blue, float alpha);
	protected void setHightlightColor_NoVirtual(float red, float green, float blue, float alpha)
	{
		float redParamValue = red;
		float greenParamValue = green;
		float blueParamValue = blue;
		float alphaParamValue = alpha;
		setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}

	protected  void setHightlightLineWidth_ev_uint32_callback(long hightlightLineWidth)
	{
		long hightlightLineWidthParamValue = hightlightLineWidth;
		setHightlightLineWidth(hightlightLineWidthParamValue);
	}

	native private void setHightlightLineWidth_ev_uint32(long pNativeObject, long hightlightLineWidth);
	public void setHightlightLineWidth(long hightlightLineWidth)
	{
		long hightlightLineWidthParamValue = hightlightLineWidth;
		setHightlightLineWidth_ev_uint32(this.nativeObject.pointer, hightlightLineWidthParamValue);
	}
	native private void setHightlightLineWidth_ev_uint32_NoVirtual(long pNativeObject, long hightlightLineWidth);
	protected void setHightlightLineWidth_NoVirtual(long hightlightLineWidth)
	{
		long hightlightLineWidthParamValue = hightlightLineWidth;
		setHightlightLineWidth_ev_uint32_NoVirtual(this.nativeObject.pointer, hightlightLineWidthParamValue);
	}

	protected  long getHightlightLineWidth_void_callback()
	{
		long returnValue = getHightlightLineWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHightlightLineWidth_void(long pNativeObject);
	public long getHightlightLineWidth()
	{
		long returnValue = getHightlightLineWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHightlightLineWidth_void_NoVirtual(long pNativeObject);
	protected long getHightlightLineWidth_NoVirtual()
	{
		long returnValue = getHightlightLineWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSelectedSimpleline_void_callback()
	{
		com.earthview.industryengine.industrygraphic.Simpleline returnValue = getSelectedSimpleline();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSelectedSimpleline_void(long pNativeObject);
	public com.earthview.industryengine.industrygraphic.Simpleline getSelectedSimpleline()
	{
		long returnValue = getSelectedSimpleline_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}
	native private long getSelectedSimpleline_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.industrygraphic.Simpleline getSelectedSimpleline_NoVirtual()
	{
		long returnValue = getSelectedSimpleline_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.Simpleline __returnValue = new com.earthview.industryengine.industrygraphic.Simpleline(CreatedWhenConstruct.CWC_NotToCreate, "CSimpleline");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.Simpleline)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSimpleline");
		}
		return __returnValue;
	}

	protected  void refresh_void_callback()
	{
		refresh();
	}

	native private void refresh_void(long pNativeObject);
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void refresh_void_NoVirtual(long pNativeObject);
	protected void refresh_NoVirtual()
	{
		refresh_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void clearHightlightState_void_callback()
	{
		clearHightlightState();
	}

	native private void clearHightlightState_void(long pNativeObject);
	public void clearHightlightState()
	{
		clearHightlightState_void(this.nativeObject.pointer);
	}
	native private void clearHightlightState_void_NoVirtual(long pNativeObject);
	protected void clearHightlightState_NoVirtual()
	{
		clearHightlightState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void renderAsHightlightState_void_callback()
	{
		renderAsHightlightState();
	}

	native private void renderAsHightlightState_void(long pNativeObject);
	public void renderAsHightlightState()
	{
		renderAsHightlightState_void(this.nativeObject.pointer);
	}
	native private void renderAsHightlightState_void_NoVirtual(long pNativeObject);
	protected void renderAsHightlightState_NoVirtual()
	{
		renderAsHightlightState_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addRaySelectedListener_CRaySelectedListener_callback(long ref_pListener)
	{
		com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListenerParamValue = (ref_pListener == 0L ? null : new com.earthview.industryengine.industrygraphic.RaySelectedListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pListenerParamValue != null)
		{
		ref_pListenerParamValue.setDelegate(true);
		ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		IClassFactory ref_pListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_pListenerParamValue.getCppInstanceTypeName());
		if (ref_pListenerParamValueClassFactory != null)
		{
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue = (com.earthview.industryengine.industrygraphic.RaySelectedListener)ref_pListenerParamValueClassFactory.create();
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		}
		}
		addRaySelectedListener(ref_pListenerParamValue);
	}

	native private void addRaySelectedListener_CRaySelectedListener(long pNativeObject, long ref_pListener);
	public void addRaySelectedListener(com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		addRaySelectedListener_CRaySelectedListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private void addRaySelectedListener_CRaySelectedListener_NoVirtual(long pNativeObject, long ref_pListener);
	protected void addRaySelectedListener_NoVirtual(com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		addRaySelectedListener_CRaySelectedListener_NoVirtual(this.nativeObject.pointer, ref_pListenerParamValue);
	}

	protected  void removeRaySelectedListener_CRaySelectedListener_callback(long ref_pListener)
	{
		com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListenerParamValue = (ref_pListener == 0L ? null : new com.earthview.industryengine.industrygraphic.RaySelectedListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pListenerParamValue != null)
		{
		ref_pListenerParamValue.setDelegate(true);
		ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		IClassFactory ref_pListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_pListenerParamValue.getCppInstanceTypeName());
		if (ref_pListenerParamValueClassFactory != null)
		{
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue = (com.earthview.industryengine.industrygraphic.RaySelectedListener)ref_pListenerParamValueClassFactory.create();
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		}
		}
		removeRaySelectedListener(ref_pListenerParamValue);
	}

	native private void removeRaySelectedListener_CRaySelectedListener(long pNativeObject, long ref_pListener);
	public void removeRaySelectedListener(com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		removeRaySelectedListener_CRaySelectedListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private void removeRaySelectedListener_CRaySelectedListener_NoVirtual(long pNativeObject, long ref_pListener);
	protected void removeRaySelectedListener_NoVirtual(com.earthview.industryengine.industrygraphic.RaySelectedListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		removeRaySelectedListener_CRaySelectedListener_NoVirtual(this.nativeObject.pointer, ref_pListenerParamValue);
	}

	public SimplelineManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SimplelineManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addSimpleline_void(long pNativeObject, String method);
	native protected void register_getIdVector_IntVector(long pNativeObject, String method);
	native protected void register_getSimpleline_ev_int32(long pNativeObject, String method);
	native protected void register_buildRenderData_void(long pNativeObject, String method);
	native protected void register_renderToScene_void(long pNativeObject, String method);
	native protected void register_derenderFromScene_void(long pNativeObject, String method);
	native protected void register_removeAllPoints_void(long pNativeObject, String method);
	native protected void register_getHightlightColor_void(long pNativeObject, String method);
	native protected void register_setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_setHightlightLineWidth_ev_uint32(long pNativeObject, String method);
	native protected void register_getHightlightLineWidth_void(long pNativeObject, String method);
	native protected void register_getSelectedSimpleline_void(long pNativeObject, String method);
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_clearHightlightState_void(long pNativeObject, String method);
	native protected void register_renderAsHightlightState_void(long pNativeObject, String method);
	native protected void register_addRaySelectedListener_CRaySelectedListener(long pNativeObject, String method);
	native protected void register_removeRaySelectedListener_CRaySelectedListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addSimpleline_void(this.nativeObject.pointer, "addSimpleline_void_callback");
			this.register_getIdVector_IntVector(this.nativeObject.pointer, "getIdVector_IntVector_callback");
			this.register_getSimpleline_ev_int32(this.nativeObject.pointer, "getSimpleline_ev_int32_callback");
			this.register_buildRenderData_void(this.nativeObject.pointer, "buildRenderData_void_callback");
			this.register_renderToScene_void(this.nativeObject.pointer, "renderToScene_void_callback");
			this.register_derenderFromScene_void(this.nativeObject.pointer, "derenderFromScene_void_callback");
			this.register_removeAllPoints_void(this.nativeObject.pointer, "removeAllPoints_void_callback");
			this.register_getHightlightColor_void(this.nativeObject.pointer, "getHightlightColor_void_callback");
			this.register_setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "setHightlightColor_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_setHightlightLineWidth_ev_uint32(this.nativeObject.pointer, "setHightlightLineWidth_ev_uint32_callback");
			this.register_getHightlightLineWidth_void(this.nativeObject.pointer, "getHightlightLineWidth_void_callback");
			this.register_getSelectedSimpleline_void(this.nativeObject.pointer, "getSelectedSimpleline_void_callback");
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_clearHightlightState_void(this.nativeObject.pointer, "clearHightlightState_void_callback");
			this.register_renderAsHightlightState_void(this.nativeObject.pointer, "renderAsHightlightState_void_callback");
			this.register_addRaySelectedListener_CRaySelectedListener(this.nativeObject.pointer, "addRaySelectedListener_CRaySelectedListener_callback");
			this.register_removeRaySelectedListener_CRaySelectedListener(this.nativeObject.pointer, "removeRaySelectedListener_CRaySelectedListener_callback");
		}
	}
	
	public static SimplelineManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SimplelineManager obj = null;
 		if(baseObj instanceof SimplelineManager)
		{
			obj = (SimplelineManager)baseObj;
		} else {
			obj = new SimplelineManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimplelineManager");
			obj.increaseCast();
		}

		return obj;
	}
}
