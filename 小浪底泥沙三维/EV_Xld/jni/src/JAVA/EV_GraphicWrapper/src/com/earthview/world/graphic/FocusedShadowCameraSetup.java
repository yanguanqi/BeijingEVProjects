package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 焦点摄像机阴影类在焦点模式下实现一致的阴影图算法
 */
public class FocusedShadowCameraSetup extends com.earthview.world.graphic.ShadowCameraSetup {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFocusedShadowCameraSetup", new FocusedShadowCameraSetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFocusedShadowCameraSetupProxy", new FocusedShadowCameraSetupClassFactory());
	}

	public static class PointListBody extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody", new PointListBodyClassFactory());
		}

		public PointListBody() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CPointListBody", null);
		}

		public PointListBody(com.earthview.world.graphic.ConvexBody body) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer bodyPtr = new BasePointer(body);
			list.add("body", bodyPtr.get());
			Create("CPointListBody", list);
		}

		native private void merge_CPointListBody(long pNativeObject, long plb);
		public void merge(com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody plb)
		{
			long plbParamValue = plb.nativeObject.pointer;
			merge_CPointListBody(this.nativeObject.pointer, plbParamValue);
		}
		native private void build_CConvexBody_ev_bool(long pNativeObject, long body, boolean filterDuplicates);
		public void build(com.earthview.world.graphic.ConvexBody body, boolean filterDuplicates)
		{
			long bodyParamValue = body.nativeObject.pointer;
			boolean filterDuplicatesParamValue = filterDuplicates;
			build_CConvexBody_ev_bool(this.nativeObject.pointer, bodyParamValue, filterDuplicatesParamValue);
		}
		native private void buildAndIncludeDirection_CConvexBody_Real_CVector3(long pNativeObject, long body, double extrudeDist, long dir);
		public void buildAndIncludeDirection(com.earthview.world.graphic.ConvexBody body, double extrudeDist, com.earthview.world.spatial.math.Vector3 dir)
		{
			long bodyParamValue = body.nativeObject.pointer;
			double extrudeDistParamValue = extrudeDist;
			long dirParamValue = dir.nativeObject.pointer;
			buildAndIncludeDirection_CConvexBody_Real_CVector3(this.nativeObject.pointer, bodyParamValue, extrudeDistParamValue, dirParamValue);
		}
		native private long getAAB_void(long pNativeObject);
		public com.earthview.world.spatial.math.AxisAlignedBox getAAB()
		{
			long returnValue = getAAB_void(this.nativeObject.pointer);
			com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate, "CAxisAlignedBox");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
			}
			return __returnValue;
		}
		native private void addPoint_CVector3(long pNativeObject, long point);
		public void addPoint(com.earthview.world.spatial.math.Vector3 point)
		{
			long pointParamValue = point.nativeObject.pointer;
			addPoint_CVector3(this.nativeObject.pointer, pointParamValue);
		}
		native private void addAAB_CAxisAlignedBox(long pNativeObject, long aab);
		public void addAAB(com.earthview.world.spatial.math.AxisAlignedBox aab)
		{
			long aabParamValue = aab.nativeObject.pointer;
			addAAB_CAxisAlignedBox(this.nativeObject.pointer, aabParamValue);
		}
		native private long getPoint_ev_size_t(long pNativeObject, long cnt);
		public com.earthview.world.spatial.math.Vector3 getPoint(long cnt)
		{
			long cntParamValue = cnt;
			long returnValue = getPoint_ev_size_t(this.nativeObject.pointer, cntParamValue);
			com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector3");
			}
			return __returnValue;
		}
		native private long getPointCount_void(long pNativeObject);
		public long getPointCount()
		{
			long returnValue = getPointCount_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void reset_void(long pNativeObject);
		public void reset()
		{
			reset_void(this.nativeObject.pointer);
		}
		public PointListBody(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PointListBody(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PointListBody fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PointListBody obj = null;
 			if(baseObj instanceof PointListBody)
			{
				obj = (PointListBody)baseObj;
			} else {
				obj = new PointListBody(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CPointListBody");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PointListBodyClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PointListBody emptyInstance = new PointListBody(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_mBodyB_void(long pNativeObject);
	public com.earthview.world.graphic.ConvexBody get_mBodyB()
	{
		long jniValue = get_mBodyB_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ConvexBody __returnValue = new com.earthview.world.graphic.ConvexBody(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CConvexBody");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConvexBody)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CConvexBody");
		}
		return __returnValue;
	}
	
	native private void set_mBodyB_CConvexBody (long pNativeObject, long value);
	public void set_mBodyB(com.earthview.world.graphic.ConvexBody mBodyB)
	{
		long mBodyBParamValue = mBodyB.nativeObject.pointer;
		
		set_mBodyB_CConvexBody(this.nativeObject.pointer, mBodyBParamValue);
	}
	
	native private long get_mPointListBodyB_void(long pNativeObject);
	public com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody get_mPointListBodyB()
	{
		long jniValue = get_mPointListBodyB_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody __returnValue = new com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CPointListBody");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPointListBody");
		}
		return __returnValue;
	}
	
	native private void set_mPointListBodyB_CPointListBody (long pNativeObject, long value);
	public void set_mPointListBodyB(com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody mPointListBodyB)
	{
		long mPointListBodyBParamValue = mPointListBodyB.nativeObject.pointer;
		
		set_mPointListBodyB_CPointListBody(this.nativeObject.pointer, mPointListBodyBParamValue);
	}
	
	native private long get_mPointListBodyLVS_void(long pNativeObject);
	public com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody get_mPointListBodyLVS()
	{
		long jniValue = get_mPointListBodyLVS_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody __returnValue = new com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CPointListBody");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPointListBody");
		}
		return __returnValue;
	}
	
	native private void set_mPointListBodyLVS_CPointListBody (long pNativeObject, long value);
	public void set_mPointListBodyLVS(com.earthview.world.graphic.FocusedShadowCameraSetup.PointListBody mPointListBodyLVS)
	{
		long mPointListBodyLVSParamValue = mPointListBodyLVS.nativeObject.pointer;
		
		set_mPointListBodyLVS_CPointListBody(this.nativeObject.pointer, mPointListBodyLVSParamValue);
	}
	
	/**
	 * 默认构造函数在这里设置摄像机和临时的椎体
	 * @param  
	 */
	public FocusedShadowCameraSetup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFocusedShadowCameraSetupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FocusedShadowCameraSetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	public void getShadowCamera(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp, com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera texCam, long iteration)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long texCamParamValue = (texCam == null ? 0L : texCam.nativeObject.pointer);
		long iterationParamValue = iteration;
		getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, smParamValue, camParamValue, vpParamValue, lightParamValue, texCamParamValue, iterationParamValue);
	}
	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	protected void getShadowCamera_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp, com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera texCam, long iteration)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long texCamParamValue = (texCam == null ? 0L : texCam.nativeObject.pointer);
		long iterationParamValue = iteration;
		getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.nativeObject.pointer, smParamValue, camParamValue, vpParamValue, lightParamValue, texCamParamValue, iterationParamValue);
	}

	native private void setUseAggressiveFocusRegion_ev_bool(long pNativeObject, boolean aggressive);
	/**
	 * 设置是否对焦点区域使用更有效地方法
	 * @param aggressive 更有效的方法
	 */
	public void setUseAggressiveFocusRegion(boolean aggressive)
	{
		boolean aggressiveParamValue = aggressive;
		setUseAggressiveFocusRegion_ev_bool(this.nativeObject.pointer, aggressiveParamValue);
	}
	native private boolean getUseAggressiveFocusRegion_void(long pNativeObject);
	/**
	 * 获取是否对焦点区域使用更有效地方法
	 * @param  
	 * @return 为空返回true，否则返回false
	 */
	public boolean getUseAggressiveFocusRegion()
	{
		boolean returnValue = getUseAggressiveFocusRegion_void(this.nativeObject.pointer);
		return returnValue;
	}
	public FocusedShadowCameraSetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FocusedShadowCameraSetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static FocusedShadowCameraSetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FocusedShadowCameraSetup obj = null;
 		if(baseObj instanceof FocusedShadowCameraSetup)
		{
			obj = (FocusedShadowCameraSetup)baseObj;
		} else {
			obj = new FocusedShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFocusedShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
