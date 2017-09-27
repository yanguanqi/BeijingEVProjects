package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Pssmshadowcamerasetup extends com.earthview.world.graphic.LiSPSMShadowCameraSetup {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPSSMShadowCameraSetup", new PssmshadowcamerasetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPSSMShadowCameraSetupProxy", new PssmshadowcamerasetupClassFactory());
	}

	public static class Pssmshadowcamerasetupsplitpointlist extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPSSMShadowCameraSetup::CPSSMShadowCameraSetupSplitPointList", new PssmshadowcamerasetupsplitpointlistClassFactory());
		}

		public Pssmshadowcamerasetupsplitpointlist() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CPSSMShadowCameraSetupSplitPointList", null);
		}

		native private void push_back_Real(long pNativeObject, double t);
		public void push_back(double t)
		{
			double tParamValue = t;
			push_back_Real(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public DoublePointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public DoublePointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_Real(long pNativeObject, long pos, double t);
		public void insert(long pos, double t)
		{
			long posParamValue = pos;
			double tParamValue = t;
			insert_ev_uint32_Real(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public DoublePointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public DoublePointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public Pssmshadowcamerasetupsplitpointlist(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Pssmshadowcamerasetupsplitpointlist(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Pssmshadowcamerasetupsplitpointlist fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Pssmshadowcamerasetupsplitpointlist obj = null;
 			if(baseObj instanceof Pssmshadowcamerasetupsplitpointlist)
			{
				obj = (Pssmshadowcamerasetupsplitpointlist)baseObj;
			} else {
				obj = new Pssmshadowcamerasetupsplitpointlist(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CPSSMShadowCameraSetupSplitPointList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PssmshadowcamerasetupsplitpointlistClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Pssmshadowcamerasetupsplitpointlist emptyInstance = new Pssmshadowcamerasetupsplitpointlist(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class OptimalAdjustFactorList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CPSSMShadowCameraSetup::OptimalAdjustFactorList", new OptimalAdjustFactorListClassFactory());
		}

		public OptimalAdjustFactorList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OptimalAdjustFactorList", null);
		}

		native private void push_back_Real(long pNativeObject, double t);
		public void push_back(double t)
		{
			double tParamValue = t;
			push_back_Real(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public DoublePointer front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public DoublePointer back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_Real(long pNativeObject, long pos, double t);
		public void insert(long pos, double t)
		{
			long posParamValue = pos;
			double tParamValue = t;
			insert_ev_uint32_Real(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public DoublePointer OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public DoublePointer at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public OptimalAdjustFactorList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OptimalAdjustFactorList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OptimalAdjustFactorList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OptimalAdjustFactorList obj = null;
 			if(baseObj instanceof OptimalAdjustFactorList)
			{
				obj = (OptimalAdjustFactorList)baseObj;
			} else {
				obj = new OptimalAdjustFactorList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OptimalAdjustFactorList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OptimalAdjustFactorListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OptimalAdjustFactorList emptyInstance = new OptimalAdjustFactorList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Constructor, defaults to 3 splits
	public Pssmshadowcamerasetup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPSSMShadowCameraSetupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Pssmshadowcamerasetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void calculateSplitPoints_ev_size_t_Real_Real_Real(long pNativeObject, long splitCount, double nearDist, double farDist, double lambda);
	public void calculateSplitPoints(long splitCount, double nearDist, double farDist, double lambda)
	{
		long splitCountParamValue = splitCount;
		double nearDistParamValue = nearDist;
		double farDistParamValue = farDist;
		double lambdaParamValue = lambda;
		calculateSplitPoints_ev_size_t_Real_Real_Real(this.nativeObject.pointer, splitCountParamValue, nearDistParamValue, farDistParamValue, lambdaParamValue);
	}
	native private void calculateSplitPoints_ev_size_t_Real_Real(long pNativeObject, long splitCount, double nearDist, double farDist);
	public void calculateSplitPoints(long splitCount, double nearDist, double farDist)
	{
		long splitCountParamValue = splitCount;
		double nearDistParamValue = nearDist;
		double farDistParamValue = farDist;
		calculateSplitPoints_ev_size_t_Real_Real(this.nativeObject.pointer, splitCountParamValue, nearDistParamValue, farDistParamValue);
	}
	native private void setSplitPoints_CPSSMShadowCameraSetupSplitPointList(long pNativeObject, long newSplitPoints);
	public void setSplitPoints(com.earthview.world.graphic.Pssmshadowcamerasetup.Pssmshadowcamerasetupsplitpointlist newSplitPoints)
	{
		long newSplitPointsParamValue = newSplitPoints.nativeObject.pointer;
		setSplitPoints_CPSSMShadowCameraSetupSplitPointList(this.nativeObject.pointer, newSplitPointsParamValue);
	}
	protected  void setOptimalAdjustFactor_ev_size_t_Real_callback(long splitIndex, double factor)
	{
		long splitIndexParamValue = splitIndex;
		double factorParamValue = factor;
		setOptimalAdjustFactor(splitIndexParamValue, factorParamValue);
	}

	native private void setOptimalAdjustFactor_ev_size_t_Real(long pNativeObject, long splitIndex, double factor);
	public void setOptimalAdjustFactor(long splitIndex, double factor)
	{
		long splitIndexParamValue = splitIndex;
		double factorParamValue = factor;
		setOptimalAdjustFactor_ev_size_t_Real(this.nativeObject.pointer, splitIndexParamValue, factorParamValue);
	}
	native private void setOptimalAdjustFactor_ev_size_t_Real_NoVirtual(long pNativeObject, long splitIndex, double factor);
	protected void setOptimalAdjustFactor_NoVirtual(long splitIndex, double factor)
	{
		long splitIndexParamValue = splitIndex;
		double factorParamValue = factor;
		setOptimalAdjustFactor_ev_size_t_Real_NoVirtual(this.nativeObject.pointer, splitIndexParamValue, factorParamValue);
	}

	native private void setSplitPadding_Real(long pNativeObject, double pad);
	public void setSplitPadding(double pad)
	{
		double padParamValue = pad;
		setSplitPadding_Real(this.nativeObject.pointer, padParamValue);
	}
	native private double getSplitPadding_void(long pNativeObject);
	public double getSplitPadding()
	{
		double returnValue = getSplitPadding_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSplitCount_void(long pNativeObject);
	//// Get the number of splits.
	public long getSplitCount()
	{
		long returnValue = getSplitCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	//// Returns a LiSPSM shadow camera with PSSM splits base on iteration.
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

	native private long getSplitPoints_void(long pNativeObject);
	//// Returns the calculated split points.
	public com.earthview.world.graphic.Pssmshadowcamerasetup.Pssmshadowcamerasetupsplitpointlist getSplitPoints()
	{
		long returnValue = getSplitPoints_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Pssmshadowcamerasetup.Pssmshadowcamerasetupsplitpointlist __returnValue = new com.earthview.world.graphic.Pssmshadowcamerasetup.Pssmshadowcamerasetupsplitpointlist(CreatedWhenConstruct.CWC_NotToCreate, "CPSSMShadowCameraSetupSplitPointList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pssmshadowcamerasetup.Pssmshadowcamerasetupsplitpointlist)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPSSMShadowCameraSetupSplitPointList");
		}
		return __returnValue;
	}
	native private double getOptimalAdjustFactor_ev_size_t(long pNativeObject, long splitIndex);
	//// Returns the optimal adjust factor for a given split.
	public double getOptimalAdjustFactor(long splitIndex)
	{
		long splitIndexParamValue = splitIndex;
		double returnValue = getOptimalAdjustFactor_ev_size_t(this.nativeObject.pointer, splitIndexParamValue);
		return returnValue;
	}
	native private double getOptimalAdjustFactor_void(long pNativeObject);
	//// Overridden, recommended internal use only since depends on current iteration
	public double getOptimalAdjustFactor()
	{
		double returnValue = getOptimalAdjustFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOptimalAdjustFactor_void_NoVirtual(long pNativeObject);
	protected double getOptimalAdjustFactor_NoVirtual()
	{
		double returnValue = getOptimalAdjustFactor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Pssmshadowcamerasetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Pssmshadowcamerasetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void setOptimalAdjustFactor(double n)
	{
		super.setOptimalAdjustFactor_NoVirtual(n);
	}
	public void setUseSimpleOptimalAdjust(boolean s)
	{
		super.setUseSimpleOptimalAdjust_NoVirtual(s);
	}
	public boolean getUseSimpleOptimalAdjust()
	{
		return super.getUseSimpleOptimalAdjust_NoVirtual();
	}
	public void setCameraLightDirectionThreshold(com.earthview.world.spatial.math.Degree angle)
	{
		super.setCameraLightDirectionThreshold_NoVirtual(angle);
	}
	public com.earthview.world.spatial.math.Degree getCameraLightDirectionThreshold()
	{
		return super.getCameraLightDirectionThreshold_NoVirtual();
	}
	
	native protected void register_setOptimalAdjustFactor_ev_size_t_Real(long pNativeObject, String method);
	native protected void register_setOptimalAdjustFactor_Real(long pNativeObject, String method);
	native protected void register_getOptimalAdjustFactor_void(long pNativeObject, String method);
	native protected void register_setUseSimpleOptimalAdjust_ev_bool(long pNativeObject, String method);
	native protected void register_getUseSimpleOptimalAdjust_void(long pNativeObject, String method);
	native protected void register_setCameraLightDirectionThreshold_CDegree(long pNativeObject, String method);
	native protected void register_getCameraLightDirectionThreshold_void(long pNativeObject, String method);
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setOptimalAdjustFactor_ev_size_t_Real(this.nativeObject.pointer, "setOptimalAdjustFactor_ev_size_t_Real_callback");
			this.register_setOptimalAdjustFactor_Real(this.nativeObject.pointer, "setOptimalAdjustFactor_Real_callback");
			this.register_getOptimalAdjustFactor_void(this.nativeObject.pointer, "getOptimalAdjustFactor_void_callback");
			this.register_setUseSimpleOptimalAdjust_ev_bool(this.nativeObject.pointer, "setUseSimpleOptimalAdjust_ev_bool_callback");
			this.register_getUseSimpleOptimalAdjust_void(this.nativeObject.pointer, "getUseSimpleOptimalAdjust_void_callback");
			this.register_setCameraLightDirectionThreshold_CDegree(this.nativeObject.pointer, "setCameraLightDirectionThreshold_CDegree_callback");
			this.register_getCameraLightDirectionThreshold_void(this.nativeObject.pointer, "getCameraLightDirectionThreshold_void_callback");
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static Pssmshadowcamerasetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Pssmshadowcamerasetup obj = null;
 		if(baseObj instanceof Pssmshadowcamerasetup)
		{
			obj = (Pssmshadowcamerasetup)baseObj;
		} else {
			obj = new Pssmshadowcamerasetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPSSMShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
