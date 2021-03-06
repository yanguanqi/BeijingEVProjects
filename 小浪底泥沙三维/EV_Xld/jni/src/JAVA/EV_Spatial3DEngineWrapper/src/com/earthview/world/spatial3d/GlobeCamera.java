package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字地球相机
 */
public class GlobeCamera extends com.earthview.world.graphic.OctreeCamera {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeCamera", new GlobeCameraClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCGlobeCameraProxy", new GlobeCameraClassFactory());
	}

	public static class GlobeCameraListener extends com.earthview.world.graphic.Camera.CameraListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener", new GlobeCameraListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeCamera::JCGlobeCameraListenerProxy", new GlobeCameraListenerClassFactory());
		}

		/**
		 * 构造函数
		 */
		public GlobeCameraListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCGlobeCameraListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.spatial3d.GlobeCamera$GlobeCameraListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void cameraParamChanged_CCamera_callback(long camera)
		{
			com.earthview.world.graphic.Camera cameraParamValue = (camera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(cameraParamValue != null)
			{
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
			IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
			if (cameraParamValueClassFactory != null)
			{
				cameraParamValue.setDelegate(true);
				cameraParamValue = (com.earthview.world.graphic.Camera)cameraParamValueClassFactory.create();
				cameraParamValue.setDelegate(true);
				cameraParamValue.setInstancePointer(new InstancePointer(camera));
			}
			}
			cameraParamChanged(cameraParamValue);
		}

		native private void cameraParamChanged_CCamera(long pNativeObject, long camera);
		/**
		 * 相机变化后通知接口
		 * @param camera 相机
		 */
		public void cameraParamChanged(com.earthview.world.graphic.Camera camera)
		{
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			cameraParamChanged_CCamera(this.nativeObject.pointer, cameraParamValue);
		}
		native private void cameraParamChanged_CCamera_NoVirtual(long pNativeObject, long camera);
		protected void cameraParamChanged_NoVirtual(com.earthview.world.graphic.Camera camera)
		{
			long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
			cameraParamChanged_CCamera_NoVirtual(this.nativeObject.pointer, cameraParamValue);
		}

		public GlobeCameraListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public GlobeCameraListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 渲染场景之前被访问
		 * @param cam 摄像机
		 */
		public void cameraPreRenderScene(com.earthview.world.graphic.Camera cam)
		{
			super.cameraPreRenderScene_NoVirtual(cam);
		}
		/**
		 * 渲染场景之后被访问
		 * @param cam 摄像机
		 */
		public void cameraPostRenderScene(com.earthview.world.graphic.Camera cam)
		{
			super.cameraPostRenderScene_NoVirtual(cam);
		}
		/**
		 * 摄像机被销毁
		 * @param cam 摄像机
		 */
		public void cameraDestroyed(com.earthview.world.graphic.Camera cam)
		{
			super.cameraDestroyed_NoVirtual(cam);
		}
		
		native protected void register_cameraParamChanged_CCamera(long pNativeObject, String method);
		native protected void register_cameraPreRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraPostRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraDestroyed_CCamera(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_cameraParamChanged_CCamera(this.nativeObject.pointer, "cameraParamChanged_CCamera_callback");
				this.register_cameraPreRenderScene_CCamera(this.nativeObject.pointer, "cameraPreRenderScene_CCamera_callback");
				this.register_cameraPostRenderScene_CCamera(this.nativeObject.pointer, "cameraPostRenderScene_CCamera_callback");
				this.register_cameraDestroyed_CCamera(this.nativeObject.pointer, "cameraDestroyed_CCamera_callback");
			}
		}
		
		public static GlobeCameraListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			GlobeCameraListener obj = null;
 			if(baseObj instanceof GlobeCameraListener)
			{
				obj = (GlobeCameraListener)baseObj;
			} else {
				obj = new GlobeCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CGlobeCameraListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GlobeCameraListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			GlobeCameraListener emptyInstance = new GlobeCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ProjectMatrixListener extends com.earthview.world.graphic.Camera.CameraListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener", new ProjectMatrixListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeCamera::JCProjectMatrixListenerProxy", new ProjectMatrixListenerClassFactory());
		}

		/**
		 * 构造函数
		 */
		public ProjectMatrixListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCProjectMatrixListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.spatial3d.GlobeCamera$ProjectMatrixListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void parameterChanging_CGlobeCamera_ev_real64_ev_real64_callback(long globeCamera, long nearDistance, long farDistance)
		{
			com.earthview.world.spatial3d.GlobeCamera globeCameraParamValue = (globeCamera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
			if(globeCameraParamValue != null)
			{
			globeCameraParamValue.setDelegate(true);
			globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
			IClassFactory globeCameraParamValueClassFactory = GlobalClassFactoryMap.get(globeCameraParamValue.getCppInstanceTypeName());
			if (globeCameraParamValueClassFactory != null)
			{
				globeCameraParamValue.setDelegate(true);
				globeCameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)globeCameraParamValueClassFactory.create();
				globeCameraParamValue.setDelegate(true);
				globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
			}
			}
			DoublePointer nearDistanceParamValue = new DoublePointer(new InstancePointer(nearDistance));
			DoublePointer farDistanceParamValue = new DoublePointer(new InstancePointer(farDistance));
			parameterChanging(globeCameraParamValue, nearDistanceParamValue, farDistanceParamValue);
		}

		native private void parameterChanging_CGlobeCamera_ev_real64_ev_real64(long pNativeObject, long globeCamera, long nearDistance, long farDistance);
		/**
		 * 设置投影变换矩阵参数
		 * @param camera 相机
		 */
		public void parameterChanging(com.earthview.world.spatial3d.GlobeCamera globeCamera, DoublePointer nearDistance, DoublePointer farDistance)
		{
			long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
			long nearDistanceParamValue = nearDistance.nativeObject.pointer;
			long farDistanceParamValue = farDistance.nativeObject.pointer;
			parameterChanging_CGlobeCamera_ev_real64_ev_real64(this.nativeObject.pointer, globeCameraParamValue, nearDistanceParamValue, farDistanceParamValue);
		}
		native private void parameterChanging_CGlobeCamera_ev_real64_ev_real64_NoVirtual(long pNativeObject, long globeCamera, long nearDistance, long farDistance);
		protected void parameterChanging_NoVirtual(com.earthview.world.spatial3d.GlobeCamera globeCamera, DoublePointer nearDistance, DoublePointer farDistance)
		{
			long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
			long nearDistanceParamValue = nearDistance.nativeObject.pointer;
			long farDistanceParamValue = farDistance.nativeObject.pointer;
			parameterChanging_CGlobeCamera_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, globeCameraParamValue, nearDistanceParamValue, farDistanceParamValue);
		}

		public ProjectMatrixListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ProjectMatrixListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 渲染场景之前被访问
		 * @param cam 摄像机
		 */
		public void cameraPreRenderScene(com.earthview.world.graphic.Camera cam)
		{
			super.cameraPreRenderScene_NoVirtual(cam);
		}
		/**
		 * 渲染场景之后被访问
		 * @param cam 摄像机
		 */
		public void cameraPostRenderScene(com.earthview.world.graphic.Camera cam)
		{
			super.cameraPostRenderScene_NoVirtual(cam);
		}
		/**
		 * 摄像机被销毁
		 * @param cam 摄像机
		 */
		public void cameraDestroyed(com.earthview.world.graphic.Camera cam)
		{
			super.cameraDestroyed_NoVirtual(cam);
		}
		
		native protected void register_parameterChanging_CGlobeCamera_ev_real64_ev_real64(long pNativeObject, String method);
		native protected void register_cameraPreRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraPostRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraDestroyed_CCamera(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_parameterChanging_CGlobeCamera_ev_real64_ev_real64(this.nativeObject.pointer, "parameterChanging_CGlobeCamera_ev_real64_ev_real64_callback");
				this.register_cameraPreRenderScene_CCamera(this.nativeObject.pointer, "cameraPreRenderScene_CCamera_callback");
				this.register_cameraPostRenderScene_CCamera(this.nativeObject.pointer, "cameraPostRenderScene_CCamera_callback");
				this.register_cameraDestroyed_CCamera(this.nativeObject.pointer, "cameraDestroyed_CCamera_callback");
			}
		}
		
		public static ProjectMatrixListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ProjectMatrixListener obj = null;
 			if(baseObj instanceof ProjectMatrixListener)
			{
				obj = (ProjectMatrixListener)baseObj;
			} else {
				obj = new ProjectMatrixListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CProjectMatrixListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ProjectMatrixListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ProjectMatrixListener emptyInstance = new ProjectMatrixListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private boolean hasChanged_void(long pNativeObject);
	/**
	 * 指示相机是否变化过
	 */
	public boolean hasChanged()
	{
		boolean returnValue = hasChanged_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasChanged_void_NoVirtual(long pNativeObject);
	protected boolean hasChanged_NoVirtual()
	{
		boolean returnValue = hasChanged_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param sm 场景管理器
	 */
	public GlobeCamera(String name, com.earthview.world.graphic.SceneManager ref_sm) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_smPtr = new BasePointer(ref_sm);
		list.add("ref_sm", ref_smPtr.get());
		Create("JCGlobeCameraProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.GlobeCamera".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean OperatorEquals_CGlobeCamera(long pNativeObject, long rhs);
	/**
	 * ==运算符
	 * @param rhs 右操作数
	 */
	public boolean OperatorEquals(com.earthview.world.spatial3d.GlobeCamera rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CGlobeCamera(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CGlobeCamera(long pNativeObject, long rhs);
	/**
	 * !=运算符
	 * @param rhs 右操作数
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial3d.GlobeCamera rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CGlobeCamera(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void OperatorAssign_CGlobeCamera(long pNativeObject, long rhs);
	/**
	 * 赋值运算符
	 * @param rhs 右操作数
	 */
	public void OperatorAssign(com.earthview.world.spatial3d.GlobeCamera rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CGlobeCamera(this.nativeObject.pointer, rhsParamValue);
	}
	native private long ev_clone_EVString(long pNativeObject, String newName);
	public com.earthview.world.graphic.Camera ev_clone(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString(this.nativeObject.pointer, newNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	native private long ev_clone_EVString_NoVirtual(long pNativeObject, String newName);
	protected com.earthview.world.graphic.Camera ev_clone_NoVirtual(String newName)
	{
		String newNameParamValue = newName;
		long returnValue = ev_clone_EVString_NoVirtual(this.nativeObject.pointer, newNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}

	native private void setProjectMatrixListener_CProjectMatrixListener(long pNativeObject, long pPorjectMatrixListener);
	/**
	 * 设置计算投影变换矩阵的监听
	 * @param pPorjectMatrixListener 监听
	 */
	public void setProjectMatrixListener(com.earthview.world.spatial3d.GlobeCamera.ProjectMatrixListener pPorjectMatrixListener)
	{
		long pPorjectMatrixListenerParamValue = (pPorjectMatrixListener == null ? 0L : pPorjectMatrixListener.nativeObject.pointer);
		setProjectMatrixListener_CProjectMatrixListener(this.nativeObject.pointer, pPorjectMatrixListenerParamValue);
	}
	native private long getProjectMatrixListener_void(long pNativeObject);
	/**
	 * 获取计算投影变换矩阵的监听
	 */
	public com.earthview.world.spatial3d.GlobeCamera.ProjectMatrixListener getProjectMatrixListener()
	{
		long returnValue = getProjectMatrixListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeCamera.ProjectMatrixListener __returnValue = new com.earthview.world.spatial3d.GlobeCamera.ProjectMatrixListener(CreatedWhenConstruct.CWC_NotToCreate, "CProjectMatrixListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeCamera.ProjectMatrixListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CProjectMatrixListener");
		}
		return __returnValue;
	}
	native private long screenToScene_ev_real32_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, float x, float y, double top, double left, double width, double height);
	/**
	 * 由屏幕上的点坐标得到射线
	 * @param x 屏幕点的x坐标
	 * @param y 屏幕点的y坐标
	 * @param top 视口左上角的Ｙ坐标
	 * @param left 视口左上角的X坐标
	 * @param width 视口的宽度
	 * @param height 视口的高度
	 */
	public com.earthview.world.spatial.math.Ray screenToScene(float x, float y, double top, double left, double width, double height)
	{
		float xParamValue = x;
		float yParamValue = y;
		double topParamValue = top;
		double leftParamValue = left;
		double widthParamValue = width;
		double heightParamValue = height;
		long returnValue = screenToScene_ev_real32_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, topParamValue, leftParamValue, widthParamValue, heightParamValue);
		com.earthview.world.spatial.math.Ray __returnValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRay");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Ray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRay");
		}
		return __returnValue;
	}
	native private boolean isVisible_CAxisAlignedBox_FrustumPlane(long pNativeObject, long bound, long culledBy);
	public boolean isVisible(com.earthview.world.spatial.math.AxisAlignedBox bound, EnumPointer culledBy)
	{
		long boundParamValue = bound.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CAxisAlignedBox_FrustumPlane(this.nativeObject.pointer, boundParamValue, culledByParamValue);
		return returnValue;
	}
	native private boolean isVisible_CAxisAlignedBox_FrustumPlane_NoVirtual(long pNativeObject, long bound, long culledBy);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox bound, EnumPointer culledBy)
	{
		long boundParamValue = bound.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CAxisAlignedBox_FrustumPlane_NoVirtual(this.nativeObject.pointer, boundParamValue, culledByParamValue);
		return returnValue;
	}

	native private boolean isVisible_CAxisAlignedBox(long pNativeObject, long bound);
	/**
	 * 判断包围盒是否可见
	 * @param bound 包围盒
	 */
	public boolean isVisible(com.earthview.world.spatial.math.AxisAlignedBox bound)
	{
		long boundParamValue = bound.nativeObject.pointer;
		boolean returnValue = isVisible_CAxisAlignedBox(this.nativeObject.pointer, boundParamValue);
		return returnValue;
	}
	native private boolean isVisible_CAxisAlignedBox_NoVirtual(long pNativeObject, long bound);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox bound)
	{
		long boundParamValue = bound.nativeObject.pointer;
		boolean returnValue = isVisible_CAxisAlignedBox_NoVirtual(this.nativeObject.pointer, boundParamValue);
		return returnValue;
	}

	native private long getLastViewMatrix_void(long pNativeObject);
	/**
	 * 返回相机上一帧的视图变换矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getLastViewMatrix()
	{
		long returnValue = getLastViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private boolean getIntersectPointWithPlane_CRay_CVector3_CVector3_CVector3(long pNativeObject, long ray, long normal, long point, long intersectPoint);
	public boolean getIntersectPointWithPlane(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 normal, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector3 intersectPoint)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long intersectPointParamValue = intersectPoint.nativeObject.pointer;
		boolean returnValue = getIntersectPointWithPlane_CRay_CVector3_CVector3_CVector3(this.nativeObject.pointer, rayParamValue, normalParamValue, pointParamValue, intersectPointParamValue);
		return returnValue;
	}
	native private void pan_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double preLatitude, double preLongitude, double latitude, double longitude);
	/**
	 * 转动相机
	 * @param preLatitude 第一个点的纬度
	 * @param preLongitude 第一个点的纬度
	 * @param latitude 当前点的纬度
	 * @param longitude 当前点的纬度
	 */
	public void pan(double preLatitude, double preLongitude, double latitude, double longitude)
	{
		double preLatitudeParamValue = preLatitude;
		double preLongitudeParamValue = preLongitude;
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		pan_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, preLatitudeParamValue, preLongitudeParamValue, latitudeParamValue, longitudeParamValue);
	}
	native private void pan_CDegree_CDegree_CDegree_CDegree(long pNativeObject, long preLatitude, long preLongitude, long latitude, long longitude);
	/**
	 * 转动相机
	 * @param preLatitude 第一个点的纬度
	 * @param preLongitude 第一个点的纬度
	 * @param latitude 当前点的纬度
	 * @param longitude 当前点的纬度
	 */
	public void pan(com.earthview.world.spatial.math.Degree preLatitude, com.earthview.world.spatial.math.Degree preLongitude, com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude)
	{
		long preLatitudeParamValue = preLatitude.nativeObject.pointer;
		long preLongitudeParamValue = preLongitude.nativeObject.pointer;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		pan_CDegree_CDegree_CDegree_CDegree(this.nativeObject.pointer, preLatitudeParamValue, preLongitudeParamValue, latitudeParamValue, longitudeParamValue);
	}
	native private void pan_ev_real64_ev_real64(long pNativeObject, double latitudeStep, double longitudeStep);
	/**
	 * 转动相机
	 * @param latitudeStep 纬度变化量
	 * @param longitudeStep 经度变化量
	 */
	public void pan(double latitudeStep, double longitudeStep)
	{
		double latitudeStepParamValue = latitudeStep;
		double longitudeStepParamValue = longitudeStep;
		pan_ev_real64_ev_real64(this.nativeObject.pointer, latitudeStepParamValue, longitudeStepParamValue);
	}
	native private void panTo_ev_real64_ev_real64(long pNativeObject, double targetLatitude, double targetLongitude);
	/**
	 * 转动相机到目标点
	 * @param targetLatitude 目标处的纬度
	 * @param targetLongitude 目标处的经度
	 */
	public void panTo(double targetLatitude, double targetLongitude)
	{
		double targetLatitudeParamValue = targetLatitude;
		double targetLongitudeParamValue = targetLongitude;
		panTo_ev_real64_ev_real64(this.nativeObject.pointer, targetLatitudeParamValue, targetLongitudeParamValue);
	}
	native private void panTo_CDegree_CDegree(long pNativeObject, long targetLatitude, long targetLongitude);
	/**
	 * 转动相机到目标点
	 * @param targetLatitude 目标处的纬度
	 * @param targetLongitude 目标处的经度
	 */
	public void panTo(com.earthview.world.spatial.math.Degree targetLatitude, com.earthview.world.spatial.math.Degree targetLongitude)
	{
		long targetLatitudeParamValue = targetLatitude.nativeObject.pointer;
		long targetLongitudeParamValue = targetLongitude.nativeObject.pointer;
		panTo_CDegree_CDegree(this.nativeObject.pointer, targetLatitudeParamValue, targetLongitudeParamValue);
	}
	native private long computeAxisMatrix_ev_real64_ev_real64(long pNativeObject, double latitude, double lonitude);
	/**
	 * 计算在目标点处的标准矩阵
	 * @param latitude 目标处的纬度
	 * @param lonitude 目标处的经度
	 */
	public com.earthview.world.spatial.math.Matrix3 computeAxisMatrix(double latitude, double lonitude)
	{
		double latitudeParamValue = latitude;
		double lonitudeParamValue = lonitude;
		long returnValue = computeAxisMatrix_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, lonitudeParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long computeAxisMatrix_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double lonitude, double radius);
	/**
	 * 计算在目标点处的标准矩阵
	 * @param latitude 目标处的纬度
	 * @param lonitude 目标处的经度
	 * @param radius 目标处的半径
	 */
	public com.earthview.world.spatial.math.Matrix3 computeAxisMatrix(double latitude, double lonitude, double radius)
	{
		double latitudeParamValue = latitude;
		double lonitudeParamValue = lonitude;
		double radiusParamValue = radius;
		long returnValue = computeAxisMatrix_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, lonitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long computeAxisMatrix_CDegree_CDegree(long pNativeObject, long latitude, long longitude);
	/**
	 * 计算在目标点处的标准矩阵
	 * @param latitude 目标处的纬度
	 * @param lonitude 目标处的经度
	 */
	public com.earthview.world.spatial.math.Matrix3 computeAxisMatrix(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long returnValue = computeAxisMatrix_CDegree_CDegree(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long computeAxisMatrix_CDegree_CDegree_ev_real64(long pNativeObject, long latitude, long longitude, double radius);
	/**
	 * 计算在目标点处的标准矩阵
	 * @param latitude 目标处的纬度
	 * @param lonitude 目标处的经度
	 * @param radius 目标处的半径
	 */
	public com.earthview.world.spatial.math.Matrix3 computeAxisMatrix(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = computeAxisMatrix_CDegree_CDegree_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private void setAutoCalculateProjectMatrix_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置允许自动计算投影变换矩阵
	 * @param enable 
	 */
	public void setAutoCalculateProjectMatrix(boolean enable)
	{
		boolean enableParamValue = enable;
		setAutoCalculateProjectMatrix_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getAutoCalculateProjectMatrix_void(long pNativeObject);
	/**
	 * 返回是否允许自动计算投影变换矩阵
	 */
	public boolean getAutoCalculateProjectMatrix()
	{
		boolean returnValue = getAutoCalculateProjectMatrix_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTilt_CDegree(long pNativeObject, long tilt);
	/**
	 * 设置相机的倾角
	 * @param enable 
	 */
	public void setTilt(com.earthview.world.spatial.math.Degree tilt)
	{
		long tiltParamValue = tilt.nativeObject.pointer;
		setTilt_CDegree(this.nativeObject.pointer, tiltParamValue);
	}
	native private void setPosition_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(long pNativeObject, long latitude, long longitude, long heading, long tilt, double altitude, double moditifAltitude);
	/**
	 * 设置相机的位置
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 海拔
	 * @param moditifAltitude 目标处的海拔
	 */
	public void setPosition(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude, double moditifAltitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double altitudeParamValue = altitude;
		double moditifAltitudeParamValue = moditifAltitude;
		setPosition_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue, moditifAltitudeParamValue);
	}
	native private void setPosition_CDegree_CDegree_CDegree_CDegree_ev_real64(long pNativeObject, long latitude, long longitude, long heading, long tilt, double altitude);
	/**
	 * 设置相机的位置
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 海拔
	 */
	public void setPosition(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double altitudeParamValue = altitude;
		setPosition_CDegree_CDegree_CDegree_CDegree_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue);
	}
	native private double computeCameraTilt_CVector3_CVector3_CVector3(long pNativeObject, long target, long observer, long upVector);
	/**
	 * 计算相机的倾角
	 * @param target 目标点
	 * @param observer 观察者
	 * @param upVector 相机的上方向
	 */
	public double computeCameraTilt(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 upVector)
	{
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upVectorParamValue = upVector.nativeObject.pointer;
		double returnValue = computeCameraTilt_CVector3_CVector3_CVector3(this.nativeObject.pointer, targetParamValue, observerParamValue, upVectorParamValue);
		return returnValue;
	}
	native private double computeCameraHeading_CVector3_CVector3_ev_real64_CVector3(long pNativeObject, long up, long look, double tiltRadious, long target);
	/**
	 * 计算相机的偏肮角
	 * @param up 相机的上方向
	 * @param look 观察方向
	 * @param tiltRadious 相机的倾角
	 * @param target 目标点
	 */
	public double computeCameraHeading(com.earthview.world.spatial.math.Vector3 up, com.earthview.world.spatial.math.Vector3 look, double tiltRadious, com.earthview.world.spatial.math.Vector3 target)
	{
		long upParamValue = up.nativeObject.pointer;
		long lookParamValue = look.nativeObject.pointer;
		double tiltRadiousParamValue = tiltRadious;
		long targetParamValue = target.nativeObject.pointer;
		double returnValue = computeCameraHeading_CVector3_CVector3_ev_real64_CVector3(this.nativeObject.pointer, upParamValue, lookParamValue, tiltRadiousParamValue, targetParamValue);
		return returnValue;
	}
	native private void lockToTarget_CSceneNode(long pNativeObject, long node);
	/**
	 * 锁定相机到某个节点
	 * @param node 目标点
	 */
	public void lockToTarget(com.earthview.world.graphic.SceneNode node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		lockToTarget_CSceneNode(this.nativeObject.pointer, nodeParamValue);
	}
	native private void setLockTilt_CDegree(long pNativeObject, long lockTarget);
	/**
	 * 设置相机锁定的倾角
	 * @param lockTarget 倾角
	 */
	public void setLockTilt(com.earthview.world.spatial.math.Degree lockTarget)
	{
		long lockTargetParamValue = lockTarget.nativeObject.pointer;
		setLockTilt_CDegree(this.nativeObject.pointer, lockTargetParamValue);
	}
	native private long getLockTilt_void(long pNativeObject);
	/**
	 * 返回相机锁定的倾角
	 */
	public com.earthview.world.spatial.math.Degree getLockTilt()
	{
		long returnValue = getLockTilt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setLockHeading_CDegree(long pNativeObject, long lockHeading);
	/**
	 * 设置相机锁定的偏航角
	 * @param lockHeading 偏航角
	 */
	public void setLockHeading(com.earthview.world.spatial.math.Degree lockHeading)
	{
		long lockHeadingParamValue = lockHeading.nativeObject.pointer;
		setLockHeading_CDegree(this.nativeObject.pointer, lockHeadingParamValue);
	}
	native private long getLockHeading_void(long pNativeObject);
	/**
	 * 返回相机锁定的偏航角
	 */
	public com.earthview.world.spatial.math.Degree getLockHeading()
	{
		long returnValue = getLockHeading_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setLockYaw_CDegree(long pNativeObject, long lockYaw);
	/**
	 * 设置相机锁定的偏角
	 * @param lockYaw 相机的偏角
	 */
	public void setLockYaw(com.earthview.world.spatial.math.Degree lockYaw)
	{
		long lockYawParamValue = lockYaw.nativeObject.pointer;
		setLockYaw_CDegree(this.nativeObject.pointer, lockYawParamValue);
	}
	native private long getLockYaw_void(long pNativeObject);
	/**
	 * 返回相机锁定的偏角
	 */
	public com.earthview.world.spatial.math.Degree getLockYaw()
	{
		long returnValue = getLockYaw_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setLockDistance_ev_real64(long pNativeObject, double lockDistance);
	/**
	 * 设置相机锁定的距离
	 * @param lockDistance 距离
	 */
	public void setLockDistance(double lockDistance)
	{
		double lockDistanceParamValue = lockDistance;
		setLockDistance_ev_real64(this.nativeObject.pointer, lockDistanceParamValue);
	}
	native private double getLockDistance_void(long pNativeObject);
	/**
	 * 返回相机锁定的距离
	 */
	public double getLockDistance()
	{
		double returnValue = getLockDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long computeLockTargetViewMatrix_void(long pNativeObject);
	/**
	 * 计算相机在锁定点处的观察矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 computeLockTargetViewMatrix()
	{
		long returnValue = computeLockTargetViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private double getCameraDistanceOfGround_void(long pNativeObject);
	/**
	 * 返回相机距地面的距离
	 */
	public double getCameraDistanceOfGround()
	{
		double returnValue = getCameraDistanceOfGround_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCameraDistanceOfGround_void_NoVirtual(long pNativeObject);
	protected double getCameraDistanceOfGround_NoVirtual()
	{
		double returnValue = getCameraDistanceOfGround_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getAltitudeUnderCamera_void(long pNativeObject);
	/**
	 * 返回相机正下方地面的高程
	 */
	public double getAltitudeUnderCamera()
	{
		double returnValue = getAltitudeUnderCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAltitudeUnderCamera_void_NoVirtual(long pNativeObject);
	protected double getAltitudeUnderCamera_NoVirtual()
	{
		double returnValue = getAltitudeUnderCamera_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void rotationYawPitchRoll_ev_real64_ev_real64_ev_real64(long pNativeObject, double yaw, double pitch, double roll);
	/**
	 * 根据欧拉角转动相机
	 * @param yaw 偏航角
	 * @param pitch 倾斜角
	 * @param roll 横磙角
	 */
	public void rotationYawPitchRoll(double yaw, double pitch, double roll)
	{
		double yawParamValue = yaw;
		double pitchParamValue = pitch;
		double rollParamValue = roll;
		rotationYawPitchRoll_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, yawParamValue, pitchParamValue, rollParamValue);
	}
	native private boolean getLastIntersected_void(long pNativeObject);
	/**
	 * 返回上一次观察方向与地面是否相交
	 */
	public boolean getLastIntersected()
	{
		boolean returnValue = getLastIntersected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLatitude_void(long pNativeObject);
	/**
	 * 返回纬度
	 */
	public com.earthview.world.spatial.math.Degree getLatitude()
	{
		long returnValue = getLatitude_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getLatitude_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getLatitude_NoVirtual()
	{
		long returnValue = getLatitude_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}

	native private void setLatitude_CDegree(long pNativeObject, long lat);
	/**
	 * 设置相机的纬度
	 * @param lat 纬度
	 */
	public void setLatitude(com.earthview.world.spatial.math.Degree lat)
	{
		long latParamValue = lat.nativeObject.pointer;
		setLatitude_CDegree(this.nativeObject.pointer, latParamValue);
	}
	native private long getLongitude_void(long pNativeObject);
	/**
	 * 返回相机的经度
	 */
	public com.earthview.world.spatial.math.Degree getLongitude()
	{
		long returnValue = getLongitude_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getLongitude_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getLongitude_NoVirtual()
	{
		long returnValue = getLongitude_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}

	native private long getHeading_void(long pNativeObject);
	/**
	 * 返回相机的偏航角
	 */
	public com.earthview.world.spatial.math.Degree getHeading()
	{
		long returnValue = getHeading_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getHeading_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getHeading_NoVirtual()
	{
		long returnValue = getHeading_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}

	native private void setHeading_CDegree(long pNativeObject, long heading);
	/**
	 * 设置相机的偏航角
	 * @param heading 偏航角
	 */
	public void setHeading(com.earthview.world.spatial.math.Degree heading)
	{
		long headingParamValue = heading.nativeObject.pointer;
		setHeading_CDegree(this.nativeObject.pointer, headingParamValue);
	}
	native private long getTilt_void(long pNativeObject);
	/**
	 * 返回相机的倾角
	 */
	public com.earthview.world.spatial.math.Degree getTilt()
	{
		long returnValue = getTilt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getTilt_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getTilt_NoVirtual()
	{
		long returnValue = getTilt_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}

	native private double getAltitude_void(long pNativeObject);
	/**
	 * 返回相机的海拔
	 */
	public double getAltitude()
	{
		double returnValue = getAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAltitude_void_NoVirtual(long pNativeObject);
	protected double getAltitude_NoVirtual()
	{
		double returnValue = getAltitude_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setAltitude_ev_real64(long pNativeObject, double altitude);
	/**
	 * 设置相机的海拔
	 * @param altitude 海拔
	 */
	public void setAltitude(double altitude)
	{
		double altitudeParamValue = altitude;
		setAltitude_ev_real64(this.nativeObject.pointer, altitudeParamValue);
	}
	native private void setMaxLimitAltitude_ev_real64(long pNativeObject, double maxAltitude);
	/**
	 * 设置相机海拔的最大值
	 * @param altitude 海拔
	 */
	public void setMaxLimitAltitude(double maxAltitude)
	{
		double maxAltitudeParamValue = maxAltitude;
		setMaxLimitAltitude_ev_real64(this.nativeObject.pointer, maxAltitudeParamValue);
	}
	native private double getMaxLimitAltitude_void(long pNativeObject);
	/**
	 * 获取相机海拔的最小值
	 */
	public double getMaxLimitAltitude()
	{
		double returnValue = getMaxLimitAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDistance_void(long pNativeObject);
	/**
	 * 返回相机的距离
	 */
	public double getDistance()
	{
		double returnValue = getDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTarget_CVector3(long pNativeObject, long target);
	/**
	 * 设置相机的目标点
	 * @param target 目标点
	 */
	public void setTarget(com.earthview.world.spatial.math.Vector3 target)
	{
		long targetParamValue = target.nativeObject.pointer;
		setTarget_CVector3(this.nativeObject.pointer, targetParamValue);
	}
	native private long getTarget_void(long pNativeObject);
	/**
	 * 返回相机的目标点
	 */
	public com.earthview.world.spatial.math.Vector3 getTarget()
	{
		long returnValue = getTarget_void(this.nativeObject.pointer);
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
	native private long getRealTarget_void(long pNativeObject);
	/**
	 * 返回相机真实的目标点
	 */
	public com.earthview.world.spatial.math.Vector3 getRealTarget()
	{
		long returnValue = getRealTarget_void(this.nativeObject.pointer);
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
	native private void setObserver_CVector3(long pNativeObject, long observer);
	/**
	 * 设置相机的观察点
	 * @param observer 观察点
	 */
	public void setObserver(com.earthview.world.spatial.math.Vector3 observer)
	{
		long observerParamValue = observer.nativeObject.pointer;
		setObserver_CVector3(this.nativeObject.pointer, observerParamValue);
	}
	native private long getObserver_void(long pNativeObject);
	/**
	 * 返回相机的观察点
	 */
	public com.earthview.world.spatial.math.Vector3 getObserver()
	{
		long returnValue = getObserver_void(this.nativeObject.pointer);
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
	native private void setUpVector_CVector3(long pNativeObject, long upVector);
	/**
	 * 设置相机的上方向
	 * @param upVector 上方向
	 */
	public void setUpVector(com.earthview.world.spatial.math.Vector3 upVector)
	{
		long upVectorParamValue = upVector.nativeObject.pointer;
		setUpVector_CVector3(this.nativeObject.pointer, upVectorParamValue);
	}
	native private double getTrueDistance_void(long pNativeObject);
	/**
	 * 返回相机距目标点的距离
	 */
	public double getTrueDistance()
	{
		double returnValue = getTrueDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrueDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置相机的真实距离
	 * @param distance 距离
	 */
	public void setTrueDistance(double distance)
	{
		double distanceParamValue = distance;
		setTrueDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private long getUpVector_void(long pNativeObject);
	/**
	 * 返回相机的上方向
	 */
	public com.earthview.world.spatial.math.Vector3 getUpVector()
	{
		long returnValue = getUpVector_void(this.nativeObject.pointer);
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
	native private void setLookVector_CVector3(long pNativeObject, long lookVector);
	/**
	 * 设置相机的观察方向
	 * @param lookVector 观察方向
	 */
	public void setLookVector(com.earthview.world.spatial.math.Vector3 lookVector)
	{
		long lookVectorParamValue = lookVector.nativeObject.pointer;
		setLookVector_CVector3(this.nativeObject.pointer, lookVectorParamValue);
	}
	native private long getLookVector_void(long pNativeObject);
	/**
	 * 返回相机的观察方向
	 */
	public com.earthview.world.spatial.math.Vector3 getLookVector()
	{
		long returnValue = getLookVector_void(this.nativeObject.pointer);
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
	native private long getRightVector_void(long pNativeObject);
	/**
	 * 返回相机的右方向
	 */
	public com.earthview.world.spatial.math.Vector3 getRightVector()
	{
		long returnValue = getRightVector_void(this.nativeObject.pointer);
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
	native private void setDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置相机的距离
	 * @param lookVector 距离
	 */
	public void setDistance(double distance)
	{
		double distanceParamValue = distance;
		setDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private long getViewRange_void(long pNativeObject);
	/**
	 * 返回相机的视域角
	 */
	public com.earthview.world.spatial.math.Degree getViewRange()
	{
		long returnValue = getViewRange_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getTrueViewRange_void(long pNativeObject);
	/**
	 * 返回相机真实的视域角
	 */
	public com.earthview.world.spatial.math.Degree getTrueViewRange()
	{
		long returnValue = getTrueViewRange_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private double getTargetAltitude_void(long pNativeObject);
	/**
	 * 返回相机目标点的高程
	 */
	public double getTargetAltitude()
	{
		double returnValue = getTargetAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLocalCenter_CVector3(long pNativeObject, long localCenter);
	/**
	 * 设置相机的局部原点
	 * @param localCenter 局部原点
	 */
	public void setLocalCenter(com.earthview.world.spatial.math.Vector3 localCenter)
	{
		long localCenterParamValue = localCenter.nativeObject.pointer;
		setLocalCenter_CVector3(this.nativeObject.pointer, localCenterParamValue);
	}
	native private long getLocalCenter_void(long pNativeObject);
	/**
	 * 返回相机的局部原点
	 */
	public com.earthview.world.spatial.math.Vector3 getLocalCenter()
	{
		long returnValue = getLocalCenter_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setRadius_ev_real64(long pNativeObject, double radius);
	/**
	 * 设置半径
	 * @param radius 半径
	 */
	public void setRadius(double radius)
	{
		double radiusParamValue = radius;
		setRadius_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private double getRadius_void(long pNativeObject);
	/**
	 * 返回半径
	 */
	public double getRadius()
	{
		double returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setViewMatrix_CVector3_CQuaternion(long pNativeObject, long cameraPostion, long q);
	/**
	 * 设置视图变换矩阵
	 * @param viewMatrix 视图变换短阵
	 * @param cameraPostion 相机的位置
	 * @param q 四元数
	 */
	public void setViewMatrix(com.earthview.world.spatial.math.Vector3 cameraPostion, com.earthview.world.spatial.math.Quaternion q)
	{
		long cameraPostionParamValue = cameraPostion.nativeObject.pointer;
		long qParamValue = q.nativeObject.pointer;
		setViewMatrix_CVector3_CQuaternion(this.nativeObject.pointer, cameraPostionParamValue, qParamValue);
	}
	native private void setViewMatrix_CVector3_CVector3_CVector3(long pNativeObject, long target, long observer, long upVector);
	/**
	 * 设置视图变换矩阵
	 * @param target 目标点
	 * @param observer 观察者
	 * @param upVector 上方向
	 */
	public void setViewMatrix(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 upVector)
	{
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upVectorParamValue = upVector.nativeObject.pointer;
		setViewMatrix_CVector3_CVector3_CVector3(this.nativeObject.pointer, targetParamValue, observerParamValue, upVectorParamValue);
	}
	native private void adjustTarget_CVector3_CVector3_CVector3_ev_real64(long pNativeObject, long oldTarget, long observer, long target, double worldradius);
	/**
	 * 校正相机的目标点
	 * @param oldTarget 原始目标点
	 * @param observer 观察者
	 * @param target 校正后的目标点
	 * @param worldradius 地球半径
	 */
	public void adjustTarget(com.earthview.world.spatial.math.Vector3 oldTarget, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 target, double worldradius)
	{
		long oldTargetParamValue = oldTarget.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long targetParamValue = target.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		adjustTarget_CVector3_CVector3_CVector3_ev_real64(this.nativeObject.pointer, oldTargetParamValue, observerParamValue, targetParamValue, worldradiusParamValue);
	}
	native private long computeViewMatrix_void(long pNativeObject);
	/**
	 * 计算视图变换矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 computeViewMatrix()
	{
		long returnValue = computeViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long computeNextViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 computeNextViewMatrix()
	{
		long returnValue = computeNextViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long computeProjectMatrix_void(long pNativeObject);
	/**
	 * 计算投影变换矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 computeProjectMatrix()
	{
		long returnValue = computeProjectMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setNearClipRate_ev_real64(long pNativeObject, double nearClipRate);
	/**
	 * 设置相机近裁剪面距离的比例系数
	 * @param nearPlaneDistanceQuotiety 比例系数
	 */
	public void setNearClipRate(double nearClipRate)
	{
		double nearClipRateParamValue = nearClipRate;
		setNearClipRate_ev_real64(this.nativeObject.pointer, nearClipRateParamValue);
	}
	native private double getNearClipRate_void(long pNativeObject);
	/**
	 * 获取相机近裁剪面距离的比例系数
	 */
	public double getNearClipRate()
	{
		double returnValue = getNearClipRate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxTilt_void(long pNativeObject);
	/**
	 * 返回相机最大的倾角
	 */
	public com.earthview.world.spatial.math.Degree getMaxTilt()
	{
		long returnValue = getMaxTilt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private boolean isSlaveCamera_void(long pNativeObject);
	/**
	 * 是否为从相机
	 */
	public boolean isSlaveCamera()
	{
		boolean returnValue = isSlaveCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSlaveCamera_void_NoVirtual(long pNativeObject);
	protected boolean isSlaveCamera_NoVirtual()
	{
		boolean returnValue = isSlaveCamera_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void copyMatrix_void(long pNativeObject);
	/**
	 * 挎贝矩阵
	 */
	public void copyMatrix()
	{
		copyMatrix_void(this.nativeObject.pointer);
	}
	native private long getLockTarget_void(long pNativeObject);
	/**
	 * 返回锁定点
	 */
	public com.earthview.world.graphic.SceneNode getLockTarget()
	{
		long returnValue = getLockTarget_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private long getLockTarget_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneNode getLockTarget_NoVirtual()
	{
		long returnValue = getLockTarget_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}

	native private void setMasterCamera_CGlobeCamera(long pNativeObject, long masterCamera);
	/**
	 * 设置为主相机
	 * @param masterCamera 主相机
	 */
	public void setMasterCamera(com.earthview.world.spatial3d.GlobeCamera masterCamera)
	{
		long masterCameraParamValue = (masterCamera == null ? 0L : masterCamera.nativeObject.pointer);
		setMasterCamera_CGlobeCamera(this.nativeObject.pointer, masterCameraParamValue);
	}
	native private void setNeedCopyMasterCameraTarget_ev_bool(long pNativeObject, boolean needCopyMasterCameraTarget);
	/**
	 * 设置子视口相机的目标点是否需与主相机一致
	 * @param needCopyMasterCamera 
	 */
	public void setNeedCopyMasterCameraTarget(boolean needCopyMasterCameraTarget)
	{
		boolean needCopyMasterCameraTargetParamValue = needCopyMasterCameraTarget;
		setNeedCopyMasterCameraTarget_ev_bool(this.nativeObject.pointer, needCopyMasterCameraTargetParamValue);
	}
	native private boolean getNeedCopyMasterCameraTarget_void(long pNativeObject);
	/**
	 * 获取子视口相机的目标点是否需与主相机一致
	 */
	public boolean getNeedCopyMasterCameraTarget()
	{
		boolean returnValue = getNeedCopyMasterCameraTarget_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsUnderGroundMode_void(long pNativeObject);
	/**
	 * 返回地下镜头的模式
	 */
	public boolean getIsUnderGroundMode()
	{
		boolean returnValue = getIsUnderGroundMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsUnderGroundMode_ev_bool(long pNativeObject, boolean isUnderGroundMode);
	/**
	 * 设置地下镜头的模式
	 * @param isUnderGroundMode 地下镜头模式
	 */
	public void setIsUnderGroundMode(boolean isUnderGroundMode)
	{
		boolean isUnderGroundModeParamValue = isUnderGroundMode;
		setIsUnderGroundMode_ev_bool(this.nativeObject.pointer, isUnderGroundModeParamValue);
	}
	native private double getModitifAltitude_void(long pNativeObject);
	/**
	 * 返回点处的高程
	 */
	public double getModitifAltitude()
	{
		double returnValue = getModitifAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUnderGround_void(long pNativeObject);
	/**
	 * 镜头当前是否在地下
	 */
	public boolean isUnderGround()
	{
		boolean returnValue = isUnderGround_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUnderGround_void_NoVirtual(long pNativeObject);
	protected boolean isUnderGround_NoVirtual()
	{
		boolean returnValue = isUnderGround_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCalculateIntersect_ev_bool(long pNativeObject, boolean calculateIntersect);
	/**
	 * /设置是否计算相交/
	 * @param calculateIntersect 是否相交
	 */
	public void setCalculateIntersect(boolean calculateIntersect)
	{
		boolean calculateIntersectParamValue = calculateIntersect;
		setCalculateIntersect_ev_bool(this.nativeObject.pointer, calculateIntersectParamValue);
	}
	native private void setIsPlaneBased_ev_bool(long pNativeObject, boolean planeBase);
	/**
	 * 设置是否基于平面的地下模式
	 * @param planeBase 
	 */
	public void setIsPlaneBased(boolean planeBase)
	{
		boolean planeBaseParamValue = planeBase;
		setIsPlaneBased_ev_bool(this.nativeObject.pointer, planeBaseParamValue);
	}
	native private boolean getIsPlaneBased_void(long pNativeObject);
	/**
	 * 返回是否基于平面的地下模式
	 */
	public boolean getIsPlaneBased()
	{
		boolean returnValue = getIsPlaneBased_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsModelBased_ev_bool(long pNativeObject, boolean modelBase);
	/**
	 * 设置是否基于模型的地下模式
	 * @param modelBase 
	 */
	public void setIsModelBased(boolean modelBase)
	{
		boolean modelBaseParamValue = modelBase;
		setIsModelBased_ev_bool(this.nativeObject.pointer, modelBaseParamValue);
	}
	native private boolean getIsModelBased_void(long pNativeObject);
	/**
	 * 返回是否基于模型的地下模式
	 */
	public boolean getIsModelBased()
	{
		boolean returnValue = getIsModelBased_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelBasedMoveCenter_CVector3(long pNativeObject, long center);
	/**
	 * 设置基于模型的地下模式的操作中心
	 * @param center 
	 */
	public void setModelBasedMoveCenter(com.earthview.world.spatial.math.Vector3 center)
	{
		long centerParamValue = center.nativeObject.pointer;
		setModelBasedMoveCenter_CVector3(this.nativeObject.pointer, centerParamValue);
	}
	native private long getModelBasedMoveCenter_void(long pNativeObject);
	/**
	 * 返回基于模型的地下模式的操作中心
	 */
	public com.earthview.world.spatial.math.Vector3 getModelBasedMoveCenter()
	{
		long returnValue = getModelBasedMoveCenter_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setCameraControlDepth_ev_real64(long pNativeObject, double cameraDepth);
	/**
	 * 设置地下镜头的基准深度
	 * @param cameraDepth 基准深度
	 */
	public void setCameraControlDepth(double cameraDepth)
	{
		double cameraDepthParamValue = cameraDepth;
		setCameraControlDepth_ev_real64(this.nativeObject.pointer, cameraDepthParamValue);
	}
	native private double getCameraControlDepth_void(long pNativeObject);
	/**
	 * 返回地下镜头的基准深度
	 */
	public double getCameraControlDepth()
	{
		double returnValue = getCameraControlDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUnderGroundWidth_void(long pNativeObject);
	/**
	 * 返回地下绘制物体的宽度
	 */
	public double getUnderGroundWidth()
	{
		double returnValue = getUnderGroundWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getUnderGroundDepth_void(long pNativeObject);
	/**
	 * 返回地下绘制物体的深度
	 */
	public double getUnderGroundDepth()
	{
		double returnValue = getUnderGroundDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void computeTrueDistance_void(long pNativeObject);
	/**
	 * 计算真实的矩离
	 */
	public void computeTrueDistance()
	{
		computeTrueDistance_void(this.nativeObject.pointer);
	}
	native private long getAbsoluteProjectMatrix_void(long pNativeObject);
	/// <summary>
	///返回绝对投影矩阵
	/// <returns></returns>
	public com.earthview.world.spatial.math.Matrix4 getAbsoluteProjectMatrix()
	{
		long returnValue = getAbsoluteProjectMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getAbsoluteProjectMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getAbsoluteProjectMatrix_NoVirtual()
	{
		long returnValue = getAbsoluteProjectMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	native private boolean isLockingToTarget_void(long pNativeObject);
	/// <summary>
	///返回返回相机是否锁定某个目标
	/// <returns></returns>
	public boolean isLockingToTarget()
	{
		boolean returnValue = isLockingToTarget_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLockingToTarget_void_NoVirtual(long pNativeObject);
	protected boolean isLockingToTarget_NoVirtual()
	{
		boolean returnValue = isLockingToTarget_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinFarDistance_void(long pNativeObject);
	/**
	 * 返回相机的最小远裁面值
	 */
	public double getMinFarDistance()
	{
		double returnValue = getMinFarDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinFarDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置相机的最小远裁面值
	 * @param distance 最小远裁面
	 */
	public void setMinFarDistance(double distance)
	{
		double distanceParamValue = distance;
		setMinFarDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private void computeDistance_ev_real64_CDegree(long pNativeObject, double altitude, long tilt);
	/**
	 * 设置矩离
	 * @param altitude 相机的海拔
	 * @param tilt 相机的倾角
	 */
	public void computeDistance(double altitude, com.earthview.world.spatial.math.Degree tilt)
	{
		double altitudeParamValue = altitude;
		long tiltParamValue = tilt.nativeObject.pointer;
		computeDistance_ev_real64_CDegree(this.nativeObject.pointer, altitudeParamValue, tiltParamValue);
	}
	native private void computeDistance_ev_real64_CDegree_ev_bool(long pNativeObject, double altitude, long tilt, boolean isNearToTarget);
	/**
	 * 设置矩离
	 * @param altitude 相机的海拔
	 * @param tilt 相机的倾角
	 * @param isNearToTarget 是否靠近目标点
	 */
	public void computeDistance(double altitude, com.earthview.world.spatial.math.Degree tilt, boolean isNearToTarget)
	{
		double altitudeParamValue = altitude;
		long tiltParamValue = tilt.nativeObject.pointer;
		boolean isNearToTargetParamValue = isNearToTarget;
		computeDistance_ev_real64_CDegree_ev_bool(this.nativeObject.pointer, altitudeParamValue, tiltParamValue, isNearToTargetParamValue);
	}
	native private void computeTrueDistance_ev_real64_CDegree(long pNativeObject, double altitude, long tilt);
	/**
	 * 设置矩离
	 * @param altitude 相机的海拔
	 * @param tilt 相机的倾角
	 */
	public void computeTrueDistance(double altitude, com.earthview.world.spatial.math.Degree tilt)
	{
		double altitudeParamValue = altitude;
		long tiltParamValue = tilt.nativeObject.pointer;
		computeTrueDistance_ev_real64_CDegree(this.nativeObject.pointer, altitudeParamValue, tiltParamValue);
	}
	native private void computeTrueDistance_ev_real64_CDegree_ev_bool(long pNativeObject, double altitude, long tilt, boolean isNearToTarget);
	/**
	 * 设置矩离
	 * @param altitude 相机的海拔
	 * @param tilt 相机的倾角
	 * @param isNearToTarget 是否靠近目标点
	 */
	public void computeTrueDistance(double altitude, com.earthview.world.spatial.math.Degree tilt, boolean isNearToTarget)
	{
		double altitudeParamValue = altitude;
		long tiltParamValue = tilt.nativeObject.pointer;
		boolean isNearToTargetParamValue = isNearToTarget;
		computeTrueDistance_ev_real64_CDegree_ev_bool(this.nativeObject.pointer, altitudeParamValue, tiltParamValue, isNearToTargetParamValue);
	}
	native private void computeAltitude_ev_real64_CDegree(long pNativeObject, double distance, long tilt);
	/**
	 * 设置相机的海拔
	 * @param distance 矩离
	 * @param tilt 相机的倾角
	 */
	public void computeAltitude(double distance, com.earthview.world.spatial.math.Degree tilt)
	{
		double distanceParamValue = distance;
		long tiltParamValue = tilt.nativeObject.pointer;
		computeAltitude_ev_real64_CDegree(this.nativeObject.pointer, distanceParamValue, tiltParamValue);
	}
	native private void computeAltitude_ev_real64_CDegree_ev_bool(long pNativeObject, double distance, long tilt, boolean isNearToTarget);
	/**
	 * 设置相机的海拔
	 * @param distance 矩离
	 * @param tilt 相机的倾角
	 * @param isNearToTarget 是否靠近目标点
	 */
	public void computeAltitude(double distance, com.earthview.world.spatial.math.Degree tilt, boolean isNearToTarget)
	{
		double distanceParamValue = distance;
		long tiltParamValue = tilt.nativeObject.pointer;
		boolean isNearToTargetParamValue = isNearToTarget;
		computeAltitude_ev_real64_CDegree_ev_bool(this.nativeObject.pointer, distanceParamValue, tiltParamValue, isNearToTargetParamValue);
	}
	native private void computeTrueAltitude_ev_real64_CDegree(long pNativeObject, double distance, long tilt);
	/**
	 * 设置相机真实的海拔
	 * @param distance 矩离
	 * @param tilt 相机的倾角
	 */
	public void computeTrueAltitude(double distance, com.earthview.world.spatial.math.Degree tilt)
	{
		double distanceParamValue = distance;
		long tiltParamValue = tilt.nativeObject.pointer;
		computeTrueAltitude_ev_real64_CDegree(this.nativeObject.pointer, distanceParamValue, tiltParamValue);
	}
	native private void computeTilt_ev_real64_ev_real64(long pNativeObject, double alt, double distance);
	/**
	 * 设置相机的距离
	 * @param alt 海拔
	 * @param distance 距离
	 */
	public void computeTilt(double alt, double distance)
	{
		double altParamValue = alt;
		double distanceParamValue = distance;
		computeTilt_ev_real64_ev_real64(this.nativeObject.pointer, altParamValue, distanceParamValue);
	}
	native private void calcProjectionParameter_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long left, long right, long bottom, long top);
	public void calcProjectionParameter(DoublePointer left, DoublePointer right, DoublePointer bottom, DoublePointer top)
	{
		long leftParamValue = left.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		calcProjectionParameter_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue);
	}
	native private void computeAbsoluteProjectMatrix_ev_real64_ev_real64(long pNativeObject, double trueDistance, double farDistance);
	/// <summary>
	///计算绝对投影矩阵
	/// <param name="trueDistance">相机的真实距离</param>
	/// <param name="farDistance">最远的距离</param>
	/// <returns></returns>
	public void computeAbsoluteProjectMatrix(double trueDistance, double farDistance)
	{
		double trueDistanceParamValue = trueDistance;
		double farDistanceParamValue = farDistance;
		computeAbsoluteProjectMatrix_ev_real64_ev_real64(this.nativeObject.pointer, trueDistanceParamValue, farDistanceParamValue);
	}
	native private void _notifyParamChanged_void(long pNativeObject);
	/**
	 * 通知相机的参数发生了变化
	 */
	public void _notifyParamChanged()
	{
		_notifyParamChanged_void(this.nativeObject.pointer);
	}
	native private long getGlobeViewport_void(long pNativeObject);
	/**
	 * 返回视口
	 */
	public com.earthview.world.graphic.Viewport getGlobeViewport()
	{
		long returnValue = getGlobeViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long getGlobeViewport_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Viewport getGlobeViewport_NoVirtual()
	{
		long returnValue = getGlobeViewport_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	native private long get_mlatitude_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlatitude()
	{
		long jniValue = get_mlatitude_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mlatitude_CDegree (long pNativeObject, long value);
	public void set_mlatitude(com.earthview.world.spatial.math.Degree mlatitude)
	{
		long mlatitudeParamValue = mlatitude.nativeObject.pointer;
		
		set_mlatitude_CDegree(this.nativeObject.pointer, mlatitudeParamValue);
	}
	
	native private long get_mlongitude_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlongitude()
	{
		long jniValue = get_mlongitude_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mlongitude_CDegree (long pNativeObject, long value);
	public void set_mlongitude(com.earthview.world.spatial.math.Degree mlongitude)
	{
		long mlongitudeParamValue = mlongitude.nativeObject.pointer;
		
		set_mlongitude_CDegree(this.nativeObject.pointer, mlongitudeParamValue);
	}
	
	native private long get_mheading_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mheading()
	{
		long jniValue = get_mheading_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mheading_CDegree (long pNativeObject, long value);
	public void set_mheading(com.earthview.world.spatial.math.Degree mheading)
	{
		long mheadingParamValue = mheading.nativeObject.pointer;
		
		set_mheading_CDegree(this.nativeObject.pointer, mheadingParamValue);
	}
	
	native private long get_mtilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mtilt()
	{
		long jniValue = get_mtilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mtilt_CDegree (long pNativeObject, long value);
	public void set_mtilt(com.earthview.world.spatial.math.Degree mtilt)
	{
		long mtiltParamValue = mtilt.nativeObject.pointer;
		
		set_mtilt_CDegree(this.nativeObject.pointer, mtiltParamValue);
	}
	
	native private long get_mminTilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mminTilt()
	{
		long jniValue = get_mminTilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mminTilt_CDegree (long pNativeObject, long value);
	public void set_mminTilt(com.earthview.world.spatial.math.Degree mminTilt)
	{
		long mminTiltParamValue = mminTilt.nativeObject.pointer;
		
		set_mminTilt_CDegree(this.nativeObject.pointer, mminTiltParamValue);
	}
	
	native private long get_mmaxTilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mmaxTilt()
	{
		long jniValue = get_mmaxTilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mmaxTilt_CDegree (long pNativeObject, long value);
	public void set_mmaxTilt(com.earthview.world.spatial.math.Degree mmaxTilt)
	{
		long mmaxTiltParamValue = mmaxTilt.nativeObject.pointer;
		
		set_mmaxTilt_CDegree(this.nativeObject.pointer, mmaxTiltParamValue);
	}
	
	native private double get_maltitude_void(long pNativeObject);
	public double get_maltitude()
	{
		double jniValue = get_maltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maltitude_ev_real64 (long pNativeObject, double value);
	public void set_maltitude(double maltitude)
	{
		double maltitudeParamValue = maltitude;
		
		set_maltitude_ev_real64(this.nativeObject.pointer, maltitudeParamValue);
	}
	
	native private double get_mminAltitude_void(long pNativeObject);
	public double get_mminAltitude()
	{
		double jniValue = get_mminAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mminAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mminAltitude(double mminAltitude)
	{
		double mminAltitudeParamValue = mminAltitude;
		
		set_mminAltitude_ev_real64(this.nativeObject.pointer, mminAltitudeParamValue);
	}
	
	native private double get_mmaxAltitude_void(long pNativeObject);
	public double get_mmaxAltitude()
	{
		double jniValue = get_mmaxAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmaxAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mmaxAltitude(double mmaxAltitude)
	{
		double mmaxAltitudeParamValue = mmaxAltitude;
		
		set_mmaxAltitude_ev_real64(this.nativeObject.pointer, mmaxAltitudeParamValue);
	}
	
	native private double get_mdistance_void(long pNativeObject);
	public double get_mdistance()
	{
		double jniValue = get_mdistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mdistance_ev_real64 (long pNativeObject, double value);
	public void set_mdistance(double mdistance)
	{
		double mdistanceParamValue = mdistance;
		
		set_mdistance_ev_real64(this.nativeObject.pointer, mdistanceParamValue);
	}
	
	native private double get_mTrueDistance_void(long pNativeObject);
	public double get_mTrueDistance()
	{
		double jniValue = get_mTrueDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTrueDistance_ev_real64 (long pNativeObject, double value);
	public void set_mTrueDistance(double mTrueDistance)
	{
		double mTrueDistanceParamValue = mTrueDistance;
		
		set_mTrueDistance_ev_real64(this.nativeObject.pointer, mTrueDistanceParamValue);
	}
	
	native private double get_mtargetAltiude_void(long pNativeObject);
	public double get_mtargetAltiude()
	{
		double jniValue = get_mtargetAltiude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtargetAltiude_ev_real64 (long pNativeObject, double value);
	public void set_mtargetAltiude(double mtargetAltiude)
	{
		double mtargetAltiudeParamValue = mtargetAltiude;
		
		set_mtargetAltiude_ev_real64(this.nativeObject.pointer, mtargetAltiudeParamValue);
	}
	
	native private double get_mAltitudeUnderCamera_void(long pNativeObject);
	public double get_mAltitudeUnderCamera()
	{
		double jniValue = get_mAltitudeUnderCamera_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitudeUnderCamera_ev_real64 (long pNativeObject, double value);
	public void set_mAltitudeUnderCamera(double mAltitudeUnderCamera)
	{
		double mAltitudeUnderCameraParamValue = mAltitudeUnderCamera;
		
		set_mAltitudeUnderCamera_ev_real64(this.nativeObject.pointer, mAltitudeUnderCameraParamValue);
	}
	
	native private long get_mtarget_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mtarget()
	{
		long jniValue = get_mtarget_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mtarget_CVector3 (long pNativeObject, long value);
	public void set_mtarget(com.earthview.world.spatial.math.Vector3 mtarget)
	{
		long mtargetParamValue = mtarget.nativeObject.pointer;
		
		set_mtarget_CVector3(this.nativeObject.pointer, mtargetParamValue);
	}
	
	native private long get_mobserver_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mobserver()
	{
		long jniValue = get_mobserver_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mobserver_CVector3 (long pNativeObject, long value);
	public void set_mobserver(com.earthview.world.spatial.math.Vector3 mobserver)
	{
		long mobserverParamValue = mobserver.nativeObject.pointer;
		
		set_mobserver_CVector3(this.nativeObject.pointer, mobserverParamValue);
	}
	
	native private long get_mupVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mupVector()
	{
		long jniValue = get_mupVector_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mupVector_CVector3 (long pNativeObject, long value);
	public void set_mupVector(com.earthview.world.spatial.math.Vector3 mupVector)
	{
		long mupVectorParamValue = mupVector.nativeObject.pointer;
		
		set_mupVector_CVector3(this.nativeObject.pointer, mupVectorParamValue);
	}
	
	native private long get_mlookVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mlookVector()
	{
		long jniValue = get_mlookVector_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mlookVector_CVector3 (long pNativeObject, long value);
	public void set_mlookVector(com.earthview.world.spatial.math.Vector3 mlookVector)
	{
		long mlookVectorParamValue = mlookVector.nativeObject.pointer;
		
		set_mlookVector_CVector3(this.nativeObject.pointer, mlookVectorParamValue);
	}
	
	native private long get_mrightVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mrightVector()
	{
		long jniValue = get_mrightVector_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mrightVector_CVector3 (long pNativeObject, long value);
	public void set_mrightVector(com.earthview.world.spatial.math.Vector3 mrightVector)
	{
		long mrightVectorParamValue = mrightVector.nativeObject.pointer;
		
		set_mrightVector_CVector3(this.nativeObject.pointer, mrightVectorParamValue);
	}
	
	native private long get_mViewRange_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mViewRange()
	{
		long jniValue = get_mViewRange_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mViewRange_CDegree (long pNativeObject, long value);
	public void set_mViewRange(com.earthview.world.spatial.math.Degree mViewRange)
	{
		long mViewRangeParamValue = mViewRange.nativeObject.pointer;
		
		set_mViewRange_CDegree(this.nativeObject.pointer, mViewRangeParamValue);
	}
	
	native private long get_mTrueViewRange_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mTrueViewRange()
	{
		long jniValue = get_mTrueViewRange_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mTrueViewRange_CDegree (long pNativeObject, long value);
	public void set_mTrueViewRange(com.earthview.world.spatial.math.Degree mTrueViewRange)
	{
		long mTrueViewRangeParamValue = mTrueViewRange.nativeObject.pointer;
		
		set_mTrueViewRange_CDegree(this.nativeObject.pointer, mTrueViewRangeParamValue);
	}
	
	native private long get_mGeoSceneManager_void(long pNativeObject);
	public com.earthview.world.spatial3d.GeoSceneManager get_mGeoSceneManager()
	{
		long jniValue = get_mGeoSceneManager_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GeoSceneManager __returnValue = new com.earthview.world.spatial3d.GeoSceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CGeoSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GeoSceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoSceneManager");
		}
		return __returnValue;
	}
	
	native private void set_mGeoSceneManager_CGeoSceneManager (long pNativeObject, long value);
	public void set_mGeoSceneManager(com.earthview.world.spatial3d.GeoSceneManager mGeoSceneManager)
	{
		long mGeoSceneManagerParamValue = (mGeoSceneManager == null ? 0L : mGeoSceneManager.nativeObject.pointer);
		
		set_mGeoSceneManager_CGeoSceneManager(this.nativeObject.pointer, mGeoSceneManagerParamValue);
	}
	
	native private long get_mmasterCamera_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeCamera get_mmasterCamera()
	{
		long jniValue = get_mmasterCamera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeCamera __returnValue = new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeCamera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeCamera");
		}
		return __returnValue;
	}
	
	native private void set_mmasterCamera_CGlobeCamera (long pNativeObject, long value);
	public void set_mmasterCamera(com.earthview.world.spatial3d.GlobeCamera mmasterCamera)
	{
		long mmasterCameraParamValue = (mmasterCamera == null ? 0L : mmasterCamera.nativeObject.pointer);
		
		set_mmasterCamera_CGlobeCamera(this.nativeObject.pointer, mmasterCameraParamValue);
	}
	
	native private boolean get_mIsSlaveCamera_void(long pNativeObject);
	public boolean get_mIsSlaveCamera()
	{
		boolean jniValue = get_mIsSlaveCamera_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsSlaveCamera_ev_bool (long pNativeObject, boolean value);
	public void set_mIsSlaveCamera(boolean mIsSlaveCamera)
	{
		boolean mIsSlaveCameraParamValue = mIsSlaveCamera;
		
		set_mIsSlaveCamera_ev_bool(this.nativeObject.pointer, mIsSlaveCameraParamValue);
	}
	
	native private boolean get_mNeedCopyMasterCameraTarget_void(long pNativeObject);
	public boolean get_mNeedCopyMasterCameraTarget()
	{
		boolean jniValue = get_mNeedCopyMasterCameraTarget_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNeedCopyMasterCameraTarget_ev_bool (long pNativeObject, boolean value);
	public void set_mNeedCopyMasterCameraTarget(boolean mNeedCopyMasterCameraTarget)
	{
		boolean mNeedCopyMasterCameraTargetParamValue = mNeedCopyMasterCameraTarget;
		
		set_mNeedCopyMasterCameraTarget_ev_bool(this.nativeObject.pointer, mNeedCopyMasterCameraTargetParamValue);
	}
	
	native private long get_mlockTarget_void(long pNativeObject);
	public com.earthview.world.graphic.SceneNode get_mlockTarget()
	{
		long jniValue = get_mlockTarget_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	
	native private void set_mlockTarget_CSceneNode (long pNativeObject, long value);
	public void set_mlockTarget(com.earthview.world.graphic.SceneNode mlockTarget)
	{
		long mlockTargetParamValue = (mlockTarget == null ? 0L : mlockTarget.nativeObject.pointer);
		
		set_mlockTarget_CSceneNode(this.nativeObject.pointer, mlockTargetParamValue);
	}
	
	native private long get_mlockTilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlockTilt()
	{
		long jniValue = get_mlockTilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mlockTilt_CDegree (long pNativeObject, long value);
	public void set_mlockTilt(com.earthview.world.spatial.math.Degree mlockTilt)
	{
		long mlockTiltParamValue = mlockTilt.nativeObject.pointer;
		
		set_mlockTilt_CDegree(this.nativeObject.pointer, mlockTiltParamValue);
	}
	
	native private long get_mlockHeading_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlockHeading()
	{
		long jniValue = get_mlockHeading_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mlockHeading_CDegree (long pNativeObject, long value);
	public void set_mlockHeading(com.earthview.world.spatial.math.Degree mlockHeading)
	{
		long mlockHeadingParamValue = mlockHeading.nativeObject.pointer;
		
		set_mlockHeading_CDegree(this.nativeObject.pointer, mlockHeadingParamValue);
	}
	
	native private long get_mlockYaw_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlockYaw()
	{
		long jniValue = get_mlockYaw_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mlockYaw_CDegree (long pNativeObject, long value);
	public void set_mlockYaw(com.earthview.world.spatial.math.Degree mlockYaw)
	{
		long mlockYawParamValue = mlockYaw.nativeObject.pointer;
		
		set_mlockYaw_CDegree(this.nativeObject.pointer, mlockYawParamValue);
	}
	
	native private double get_mlockDistance_void(long pNativeObject);
	public double get_mlockDistance()
	{
		double jniValue = get_mlockDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlockDistance_ev_real64 (long pNativeObject, double value);
	public void set_mlockDistance(double mlockDistance)
	{
		double mlockDistanceParamValue = mlockDistance;
		
		set_mlockDistance_ev_real64(this.nativeObject.pointer, mlockDistanceParamValue);
	}
	
	native private boolean get_misUnderGroundMode_void(long pNativeObject);
	public boolean get_misUnderGroundMode()
	{
		boolean jniValue = get_misUnderGroundMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misUnderGroundMode_ev_bool (long pNativeObject, boolean value);
	public void set_misUnderGroundMode(boolean misUnderGroundMode)
	{
		boolean misUnderGroundModeParamValue = misUnderGroundMode;
		
		set_misUnderGroundMode_ev_bool(this.nativeObject.pointer, misUnderGroundModeParamValue);
	}
	
	native private double get_mMinFarDistance_void(long pNativeObject);
	public double get_mMinFarDistance()
	{
		double jniValue = get_mMinFarDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinFarDistance_ev_real64 (long pNativeObject, double value);
	public void set_mMinFarDistance(double mMinFarDistance)
	{
		double mMinFarDistanceParamValue = mMinFarDistance;
		
		set_mMinFarDistance_ev_real64(this.nativeObject.pointer, mMinFarDistanceParamValue);
	}
	
	native private long get_mrealTarget_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mrealTarget()
	{
		long jniValue = get_mrealTarget_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mrealTarget_CVector3 (long pNativeObject, long value);
	public void set_mrealTarget(com.earthview.world.spatial.math.Vector3 mrealTarget)
	{
		long mrealTargetParamValue = mrealTarget.nativeObject.pointer;
		
		set_mrealTarget_CVector3(this.nativeObject.pointer, mrealTargetParamValue);
	}
	
	native private double get_mmoditifAltitude_void(long pNativeObject);
	public double get_mmoditifAltitude()
	{
		double jniValue = get_mmoditifAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmoditifAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mmoditifAltitude(double mmoditifAltitude)
	{
		double mmoditifAltitudeParamValue = mmoditifAltitude;
		
		set_mmoditifAltitude_ev_real64(this.nativeObject.pointer, mmoditifAltitudeParamValue);
	}
	
	native private double get_mcameraControlDepth_void(long pNativeObject);
	public double get_mcameraControlDepth()
	{
		double jniValue = get_mcameraControlDepth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mcameraControlDepth_ev_real64 (long pNativeObject, double value);
	public void set_mcameraControlDepth(double mcameraControlDepth)
	{
		double mcameraControlDepthParamValue = mcameraControlDepth;
		
		set_mcameraControlDepth_ev_real64(this.nativeObject.pointer, mcameraControlDepthParamValue);
	}
	
	native private double get_mUnderGroundDepth_void(long pNativeObject);
	public double get_mUnderGroundDepth()
	{
		double jniValue = get_mUnderGroundDepth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUnderGroundDepth_ev_real64 (long pNativeObject, double value);
	public void set_mUnderGroundDepth(double mUnderGroundDepth)
	{
		double mUnderGroundDepthParamValue = mUnderGroundDepth;
		
		set_mUnderGroundDepth_ev_real64(this.nativeObject.pointer, mUnderGroundDepthParamValue);
	}
	
	native private double get_mUnderGroundWidth_void(long pNativeObject);
	public double get_mUnderGroundWidth()
	{
		double jniValue = get_mUnderGroundWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mUnderGroundWidth_ev_real64 (long pNativeObject, double value);
	public void set_mUnderGroundWidth(double mUnderGroundWidth)
	{
		double mUnderGroundWidthParamValue = mUnderGroundWidth;
		
		set_mUnderGroundWidth_ev_real64(this.nativeObject.pointer, mUnderGroundWidthParamValue);
	}
	
	native private boolean get_misPlaneBased_void(long pNativeObject);
	public boolean get_misPlaneBased()
	{
		boolean jniValue = get_misPlaneBased_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misPlaneBased_ev_bool (long pNativeObject, boolean value);
	public void set_misPlaneBased(boolean misPlaneBased)
	{
		boolean misPlaneBasedParamValue = misPlaneBased;
		
		set_misPlaneBased_ev_bool(this.nativeObject.pointer, misPlaneBasedParamValue);
	}
	
	native private boolean get_mcalculateIntersect_void(long pNativeObject);
	public boolean get_mcalculateIntersect()
	{
		boolean jniValue = get_mcalculateIntersect_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mcalculateIntersect_bool (long pNativeObject, boolean value);
	public void set_mcalculateIntersect(boolean mcalculateIntersect)
	{
		boolean mcalculateIntersectParamValue = mcalculateIntersect;
		
		set_mcalculateIntersect_bool(this.nativeObject.pointer, mcalculateIntersectParamValue);
	}
	
	native private boolean get_mIsMoveAtModelMode_void(long pNativeObject);
	public boolean get_mIsMoveAtModelMode()
	{
		boolean jniValue = get_mIsMoveAtModelMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsMoveAtModelMode_ev_bool (long pNativeObject, boolean value);
	public void set_mIsMoveAtModelMode(boolean mIsMoveAtModelMode)
	{
		boolean mIsMoveAtModelModeParamValue = mIsMoveAtModelMode;
		
		set_mIsMoveAtModelMode_ev_bool(this.nativeObject.pointer, mIsMoveAtModelModeParamValue);
	}
	
	native private long get_mDefaultMoveCenter_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mDefaultMoveCenter()
	{
		long jniValue = get_mDefaultMoveCenter_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mDefaultMoveCenter_CVector3 (long pNativeObject, long value);
	public void set_mDefaultMoveCenter(com.earthview.world.spatial.math.Vector3 mDefaultMoveCenter)
	{
		long mDefaultMoveCenterParamValue = mDefaultMoveCenter.nativeObject.pointer;
		
		set_mDefaultMoveCenter_CVector3(this.nativeObject.pointer, mDefaultMoveCenterParamValue);
	}
	
	native private long get_mlocalCenter_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mlocalCenter()
	{
		long jniValue = get_mlocalCenter_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mlocalCenter_CVector3 (long pNativeObject, long value);
	public void set_mlocalCenter(com.earthview.world.spatial.math.Vector3 mlocalCenter)
	{
		long mlocalCenterParamValue = mlocalCenter.nativeObject.pointer;
		
		set_mlocalCenter_CVector3(this.nativeObject.pointer, mlocalCenterParamValue);
	}
	
	native private double get_mradius_void(long pNativeObject);
	public double get_mradius()
	{
		double jniValue = get_mradius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mradius_ev_real64 (long pNativeObject, double value);
	public void set_mradius(double mradius)
	{
		double mradiusParamValue = mradius;
		
		set_mradius_ev_real64(this.nativeObject.pointer, mradiusParamValue);
	}
	
	native private long get_mlastViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_mlastViewMatrix()
	{
		long jniValue = get_mlastViewMatrix_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_mlastViewMatrix_CMatrix4 (long pNativeObject, long value);
	public void set_mlastViewMatrix(com.earthview.world.spatial.math.Matrix4 mlastViewMatrix)
	{
		long mlastViewMatrixParamValue = mlastViewMatrix.nativeObject.pointer;
		
		set_mlastViewMatrix_CMatrix4(this.nativeObject.pointer, mlastViewMatrixParamValue);
	}
	
	native private boolean get_mlastIntersected_void(long pNativeObject);
	public boolean get_mlastIntersected()
	{
		boolean jniValue = get_mlastIntersected_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastIntersected_ev_bool (long pNativeObject, boolean value);
	public void set_mlastIntersected(boolean mlastIntersected)
	{
		boolean mlastIntersectedParamValue = mlastIntersected;
		
		set_mlastIntersected_ev_bool(this.nativeObject.pointer, mlastIntersectedParamValue);
	}
	
	native private boolean get_mviewMatrixChanged_void(long pNativeObject);
	public boolean get_mviewMatrixChanged()
	{
		boolean jniValue = get_mviewMatrixChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mviewMatrixChanged_bool (long pNativeObject, boolean value);
	public void set_mviewMatrixChanged(boolean mviewMatrixChanged)
	{
		boolean mviewMatrixChangedParamValue = mviewMatrixChanged;
		
		set_mviewMatrixChanged_bool(this.nativeObject.pointer, mviewMatrixChangedParamValue);
	}
	
	native private long get_mlastPanRotationAxis_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mlastPanRotationAxis()
	{
		long jniValue = get_mlastPanRotationAxis_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mlastPanRotationAxis_CVector3 (long pNativeObject, long value);
	public void set_mlastPanRotationAxis(com.earthview.world.spatial.math.Vector3 mlastPanRotationAxis)
	{
		long mlastPanRotationAxisParamValue = mlastPanRotationAxis.nativeObject.pointer;
		
		set_mlastPanRotationAxis_CVector3(this.nativeObject.pointer, mlastPanRotationAxisParamValue);
	}
	
	native private double get_mInertiaRotationRatian_void(long pNativeObject);
	public double get_mInertiaRotationRatian()
	{
		double jniValue = get_mInertiaRotationRatian_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mInertiaRotationRatian_ev_real64 (long pNativeObject, double value);
	public void set_mInertiaRotationRatian(double mInertiaRotationRatian)
	{
		double mInertiaRotationRatianParamValue = mInertiaRotationRatian;
		
		set_mInertiaRotationRatian_ev_real64(this.nativeObject.pointer, mInertiaRotationRatianParamValue);
	}
	
	native private double get_minertiaDecelerateRate_void(long pNativeObject);
	public double get_minertiaDecelerateRate()
	{
		double jniValue = get_minertiaDecelerateRate_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minertiaDecelerateRate_ev_real64 (long pNativeObject, double value);
	public void set_minertiaDecelerateRate(double minertiaDecelerateRate)
	{
		double minertiaDecelerateRateParamValue = minertiaDecelerateRate;
		
		set_minertiaDecelerateRate_ev_real64(this.nativeObject.pointer, minertiaDecelerateRateParamValue);
	}
	
	native private long get_mInertialObserver_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mInertialObserver()
	{
		long jniValue = get_mInertialObserver_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mInertialObserver_CVector3 (long pNativeObject, long value);
	public void set_mInertialObserver(com.earthview.world.spatial.math.Vector3 mInertialObserver)
	{
		long mInertialObserverParamValue = mInertialObserver.nativeObject.pointer;
		
		set_mInertialObserver_CVector3(this.nativeObject.pointer, mInertialObserverParamValue);
	}
	
	native private long get_mInertialUpVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mInertialUpVector()
	{
		long jniValue = get_mInertialUpVector_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mInertialUpVector_CVector3 (long pNativeObject, long value);
	public void set_mInertialUpVector(com.earthview.world.spatial.math.Vector3 mInertialUpVector)
	{
		long mInertialUpVectorParamValue = mInertialUpVector.nativeObject.pointer;
		
		set_mInertialUpVector_CVector3(this.nativeObject.pointer, mInertialUpVectorParamValue);
	}
	
	native private long get_mInertialLookVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mInertialLookVector()
	{
		long jniValue = get_mInertialLookVector_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mInertialLookVector_CVector3 (long pNativeObject, long value);
	public void set_mInertialLookVector(com.earthview.world.spatial.math.Vector3 mInertialLookVector)
	{
		long mInertialLookVectorParamValue = mInertialLookVector.nativeObject.pointer;
		
		set_mInertialLookVector_CVector3(this.nativeObject.pointer, mInertialLookVectorParamValue);
	}
	
	native private double get_mInertialAngleDistance_void(long pNativeObject);
	public double get_mInertialAngleDistance()
	{
		double jniValue = get_mInertialAngleDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mInertialAngleDistance_ev_real64 (long pNativeObject, double value);
	public void set_mInertialAngleDistance(double mInertialAngleDistance)
	{
		double mInertialAngleDistanceParamValue = mInertialAngleDistance;
		
		set_mInertialAngleDistance_ev_real64(this.nativeObject.pointer, mInertialAngleDistanceParamValue);
	}
	
	native private double get_mInertialDistance_void(long pNativeObject);
	public double get_mInertialDistance()
	{
		double jniValue = get_mInertialDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mInertialDistance_ev_real64 (long pNativeObject, double value);
	public void set_mInertialDistance(double mInertialDistance)
	{
		double mInertialDistanceParamValue = mInertialDistance;
		
		set_mInertialDistance_ev_real64(this.nativeObject.pointer, mInertialDistanceParamValue);
	}
	
	native private boolean get_mBeginInertialPan_void(long pNativeObject);
	public boolean get_mBeginInertialPan()
	{
		boolean jniValue = get_mBeginInertialPan_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mBeginInertialPan_ev_bool (long pNativeObject, boolean value);
	public void set_mBeginInertialPan(boolean mBeginInertialPan)
	{
		boolean mBeginInertialPanParamValue = mBeginInertialPan;
		
		set_mBeginInertialPan_ev_bool(this.nativeObject.pointer, mBeginInertialPanParamValue);
	}
	
	native private double get_mDeltaPan_void(long pNativeObject);
	public double get_mDeltaPan()
	{
		double jniValue = get_mDeltaPan_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDeltaPan_ev_real64 (long pNativeObject, double value);
	public void set_mDeltaPan(double mDeltaPan)
	{
		double mDeltaPanParamValue = mDeltaPan;
		
		set_mDeltaPan_ev_real64(this.nativeObject.pointer, mDeltaPanParamValue);
	}
	
	native private boolean get_mAutoCalculateProjectMatrix_void(long pNativeObject);
	public boolean get_mAutoCalculateProjectMatrix()
	{
		boolean jniValue = get_mAutoCalculateProjectMatrix_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAutoCalculateProjectMatrix_ev_bool (long pNativeObject, boolean value);
	public void set_mAutoCalculateProjectMatrix(boolean mAutoCalculateProjectMatrix)
	{
		boolean mAutoCalculateProjectMatrixParamValue = mAutoCalculateProjectMatrix;
		
		set_mAutoCalculateProjectMatrix_ev_bool(this.nativeObject.pointer, mAutoCalculateProjectMatrixParamValue);
	}
	
	native private long get_mAbsoluteProjectMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_mAbsoluteProjectMatrix()
	{
		long jniValue = get_mAbsoluteProjectMatrix_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_mAbsoluteProjectMatrix_CMatrix4 (long pNativeObject, long value);
	public void set_mAbsoluteProjectMatrix(com.earthview.world.spatial.math.Matrix4 mAbsoluteProjectMatrix)
	{
		long mAbsoluteProjectMatrixParamValue = mAbsoluteProjectMatrix.nativeObject.pointer;
		
		set_mAbsoluteProjectMatrix_CMatrix4(this.nativeObject.pointer, mAbsoluteProjectMatrixParamValue);
	}
	
	public GlobeCamera(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeCamera(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.Camera.CameraInternalRenderable getCameraRenderablePtr()
	{
		return super.getCameraRenderablePtr_NoVirtual();
	}
	/**
	 * 使用参数设置真实窗口这方法被需求访问
	 * @param  
	 */
	public void setWindowImpl()
	{
		super.setWindowImpl_NoVirtual();
	}
	public com.earthview.world.spatial.math.Vector4List getRayForwardIntersect(com.earthview.world.spatial.math.Vector3 anchor, com.earthview.world.spatial.math.Vector3 dir, double planeOffset)
	{
		return super.getRayForwardIntersect_NoVirtual(anchor, dir, planeOffset);
	}
	/**
	 * 为摄像机添加一个监视器
	 * @param 1 
	 */
	public void addListener(com.earthview.world.graphic.Camera.CameraListener ref_l)
	{
		super.addListener_NoVirtual(ref_l);
	}
	/**
	 * 为摄像机移除一个监视器
	 * @param 1 
	 */
	public void removeListener(com.earthview.world.graphic.Camera.CameraListener l)
	{
		super.removeListener_NoVirtual(l);
	}
	/**
	 * 设置一个摄像机指针，可以终止LOD设置
	 * @param lodCam 摄像机指针
	 */
	public void setLodCamera(com.earthview.world.graphic.Camera ref_lodCam)
	{
		super.setLodCamera_NoVirtual(ref_lodCam);
	}
	/**
	 * 获取一个摄像机指针，可以终止LOD设置
	 * @param  
	 * @return 摄像机指针
	 */
	public com.earthview.world.graphic.Camera getLodCamera()
	{
		return super.getLodCamera_NoVirtual();
	}
	/**
	 * 设置视口内的可视窗口
	 * @param Left 
	 * @param Top 
	 * @param Right 
	 * @param Bottom 
	 * @return 范围
	 */
	public void setWindow(double Left, double Top, double Right, double Bottom)
	{
		super.setWindow_NoVirtual(Left, Top, Right, Bottom);
	}
	/**
	 * 重置窗口
	 * @param  
	 */
	public void resetWindow()
	{
		super.resetWindow_NoVirtual();
	}
	/**
	 * 是否设置了窗口
	 * @param  
	 * @return 为真，被使用，否则没被使用
	 */
	public boolean isWindowSet()
	{
		return super.isWindowSet_NoVirtual();
	}
	/**
	 * 前交会向前投射也许会导致在无线距离远的地方产生交叉
	 * @param worldPlane 世界平面
	 * @param intersect3d 交叉的四维向量值
	 */
	public void forwardIntersect(com.earthview.world.spatial.math.Plane worldPlane, com.earthview.world.spatial.math.Vector4List intersect3d)
	{
		super.forwardIntersect_NoVirtual(worldPlane, intersect3d);
	}
	/**
	 * 设置用户渲染距离设置摄像机是否使用渲染距离在最终的图像中排除远处的对象系统默认使用此方法
	 * @param use true为使用，false不使用
	 */
	public void setUseRenderingDistance(boolean use)
	{
		super.setUseRenderingDistance_NoVirtual(use);
	}
	/**
	 * 获取用户渲染距离摄像机是否使用渲染距离在最终的图像中排除远处的对象
	 * @param  
	 */
	public boolean getUseRenderingDistance()
	{
		return super.getUseRenderingDistance_NoVirtual();
	}
	/**
	 * 同步摄像机中心从一个摄像机复制位置信息，投影类型，修建距离等信息给另一个摄像机
	 * @param cam 摄像机名称
	 */
	public void synchroniseBaseSettingsWith(com.earthview.world.graphic.Camera cam)
	{
		super.synchroniseBaseSettingsWith_NoVirtual(cam);
	}
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
	}
	public com.earthview.world.graphic.LightList getLights()
	{
		return super.getLights_NoVirtual();
	}
	public com.earthview.world.graphic.Frustum.FrustumInternalRenderable getFrustumRenderablePtr()
	{
		return super.getFrustumRenderablePtr_NoVirtual();
	}
	/// Internal functions for calcs
	public void calcProjectionParameters(DoublePointer left, DoublePointer right, DoublePointer bottom, DoublePointer top)
	{
		super.calcProjectionParameters_NoVirtual(left, right, bottom, top);
	}
	//// Update frustum if out of date
	public void updateFrustum()
	{
		super.updateFrustum_NoVirtual();
	}
	//// Update view if out of date
	public void updateView()
	{
		super.updateView_NoVirtual();
	}
	//// Implementation of updateFrustum (called if out of date)
	public void updateFrustumImpl()
	{
		super.updateFrustumImpl_NoVirtual();
	}
	//// Implementation of updateView (called if out of date)
	public void updateViewImpl()
	{
		super.updateViewImpl_NoVirtual();
	}
	public void updateFrustumPlanes()
	{
		super.updateFrustumPlanes_NoVirtual();
	}
	//// Implementation of updateFrustumPlanes (called if out of date)
	public void updateFrustumPlanesImpl()
	{
		super.updateFrustumPlanesImpl_NoVirtual();
	}
	public void updateWorldSpaceCorners()
	{
		super.updateWorldSpaceCorners_NoVirtual();
	}
	//// Implementation of updateWorldSpaceCorners (called if out of date)
	public void updateWorldSpaceCornersImpl()
	{
		super.updateWorldSpaceCornersImpl_NoVirtual();
	}
	public void updateVertexData()
	{
		super.updateVertexData_NoVirtual();
	}
	public boolean isViewOutOfDate()
	{
		return super.isViewOutOfDate_NoVirtual();
	}
	public boolean isFrustumOutOfDate()
	{
		return super.isFrustumOutOfDate_NoVirtual();
	}
	//// Signal to update frustum information.
	public void invalidateFrustum()
	{
		super.invalidateFrustum_NoVirtual();
	}
	//// Signal to update view information.
	public void invalidateView()
	{
		super.invalidateView_NoVirtual();
	}
	/**
	 * 设置Y方向的视域
	 * @param fovy 视野域
	 */
	public void setFOVy(com.earthview.world.spatial.math.Radian fovy)
	{
		super.setFOVy_NoVirtual(fovy);
	}
	/**
	 * 取得Y方向的视域
	 * @param  
	 */
	public com.earthview.world.spatial.math.Radian getFOVy()
	{
		return super.getFOVy_NoVirtual();
	}
	/**
	 * 设置近裁剪面的距离
	 * @param nearDist 
	 */
	public void setNearClipDistance(double nearDist)
	{
		super.setNearClipDistance_NoVirtual(nearDist);
	}
	/**
	 * 获取近裁剪面的距离
	 * @param  
	 * @return 距离值
	 */
	public double getNearClipDistance()
	{
		return super.getNearClipDistance_NoVirtual();
	}
	/**
	 * 设置远裁剪面的距离
	 * @param farDist 
	 */
	public void setFarClipDistance(double farDist)
	{
		super.setFarClipDistance_NoVirtual(farDist);
	}
	/**
	 * 获取远裁剪面的距离
	 * @param  
	 * @return 距离值
	 */
	public double getFarClipDistance()
	{
		return super.getFarClipDistance_NoVirtual();
	}
	/**
	 * 设定当前纵横比
	 * @param ratio 全屏下的系统默认值为1.3333
	 */
	public void setAspectRatio(double ratio)
	{
		super.setAspectRatio_NoVirtual(ratio);
	}
	/**
	 * 获取当前纵横比
	 * @param  
	 * @return 比例值
	 */
	public double getAspectRatio()
	{
		return super.getAspectRatio_NoVirtual();
	}
	/**
	 * 通过二维矢量设置视椎体偏移量在立体渲染中使用在世界坐标系中默认为(0,0)没有偏移
	 * @param offset 水平和垂直偏移量
	 */
	public void setFrustumOffset(com.earthview.world.spatial.math.Vector2 offset)
	{
		super.setFrustumOffset_NoVirtual(offset);
	}
	/**
	 * 通过水平偏移和垂直偏移设置视椎体偏移量在立体渲染中使用在世界坐标系中默认为(0,0)没有偏移
	 * @param horizontal 水平偏移量
	 * @param vertical 垂直偏移量
	 */
	public void setFrustumOffset(double horizontal, double vertical)
	{
		super.setFrustumOffset_NoVirtual(horizontal, vertical);
	}
	public void setFrustumOffset(double horizontal)
	{
		super.setFrustumOffset_NoVirtual(horizontal);
	}
	public void setFrustumOffset()
	{
		super.setFrustumOffset_NoVirtual();
	}
	/**
	 * 获取视椎体偏移量
	 * @param  
	 * @return 二维矢量值
	 */
	public com.earthview.world.spatial.math.Vector2 getFrustumOffset()
	{
		return super.getFrustumOffset_NoVirtual();
	}
	/**
	 * 设置视椎体焦距在立体渲染中使用
	 * @param focalLength 焦点到视椎体的距离，默认为1.0
	 */
	public void setFocalLength(double focalLength)
	{
		super.setFocalLength_NoVirtual(focalLength);
	}
	public void setFocalLength()
	{
		super.setFocalLength_NoVirtual();
	}
	/**
	 * 获取视椎体焦距在立体渲染中使用
	 * @param  
	 * @return 焦距值
	 */
	public double getFocalLength()
	{
		return super.getFocalLength_NoVirtual();
	}
	/**
	 * 手动设置可视范围侧面与近裁剪面的交界边
	 * @param left 左边
	 * @param right 右边
	 * @param top 上边
	 * @param bottom 底边
	 */
	public void setFrustumExtents(double left, double right, double top, double bottom)
	{
		super.setFrustumExtents_NoVirtual(left, right, top, bottom);
	}
	/**
	 * 利用其它参数自动获取可视范围
	 * @param  
	 */
	public void resetFrustumExtents()
	{
		super.resetFrustumExtents_NoVirtual();
	}
	/**
	 * 获取可视范围
	 * @param outleft 左边长度值
	 * @param outright 右边长度值
	 * @param outtop 上边长度值
	 * @param outbottom 底边长度值
	 */
	public void getFrustumExtents(DoublePointer outleft, DoublePointer outright, DoublePointer outtop, DoublePointer outbottom)
	{
		super.getFrustumExtents_NoVirtual(outleft, outright, outtop, outbottom);
	}
	/**
	 * 获取当前渲染系统的投影矩阵可能使用左手坐标系或右手坐标系，深度值可能发生改变此方法渲染接口版本取决于投影矩阵，如果想使用典型的投影矩阵使用函数getProjectionMatrix
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrixRS()
	{
		return super.getProjectionMatrixRS_NoVirtual();
	}
	/**
	 * 根据深度值获取当前渲染系统的投影矩阵遵循右手坐标系规则
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrixWithRSDepth()
	{
		return super.getProjectionMatrixWithRSDepth_NoVirtual();
	}
	/**
	 * 获取该摄像机投影矩阵遵循右手坐标系规则，使用深度值[-1,+1]
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrix()
	{
		return super.getProjectionMatrix_NoVirtual();
	}
	/**
	 * 获取该摄像机观察矩阵内部使用
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewMatrix()
	{
		return super.getViewMatrix_NoVirtual();
	}
	/**
	 * 根据动态点缩放关系，计算当前观察矩阵内部使用
	 * @param relPos 平移的三维向量
	 * @param matToUpdate 缩放的四维矩阵
	 */
	public void calcViewMatrixRelative(com.earthview.world.spatial.math.Vector3 relPos, com.earthview.world.spatial.math.Matrix4 matToUpdate)
	{
		super.calcViewMatrixRelative_NoVirtual(relPos, matToUpdate);
	}
	/**
	 * 是否使用自定义观察矩阵
	 * @param enable 如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值
	 * @param viewMatrix 使用自定义矩阵，则矩阵为相似矩阵
	 */
	public void setCustomViewMatrix(boolean enable, com.earthview.world.spatial.math.Matrix4 viewMatrix)
	{
		super.setCustomViewMatrix_NoVirtual(enable, viewMatrix);
	}
	public void setCustomViewMatrix(boolean enable)
	{
		super.setCustomViewMatrix_NoVirtual(enable);
	}
	/**
	 * 自定义观察矩阵是否正在使用
	 * @param  
	 */
	public boolean isCustomViewMatrixEnabled()
	{
		return super.isCustomViewMatrixEnabled_NoVirtual();
	}
	/**
	 * 是否使用用户自定义投射矩阵
	 * @param enable 如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值
	 * @param projectionMatrix 
	 */
	public void setCustomProjectionMatrix(boolean enable, com.earthview.world.spatial.math.Matrix4 projectionMatrix)
	{
		super.setCustomProjectionMatrix_NoVirtual(enable, projectionMatrix);
	}
	public void setCustomProjectionMatrix(boolean enable)
	{
		super.setCustomProjectionMatrix_NoVirtual(enable);
	}
	/**
	 * 自定义观察矩阵是否正在使用
	 * @param  
	 */
	public boolean isCustomProjectionMatrixEnabled()
	{
		return super.isCustomProjectionMatrixEnabled_NoVirtual();
	}
	/**
	 * 获取裁剪面裁剪面顺序定义在枚举EarthView::World::Graphic::FrustumPlane中。
	 * @param  
	 */
	public com.earthview.world.spatial.math.Plane getFrustumPlanes()
	{
		return super.getFrustumPlanes_NoVirtual();
	}
	/**
	 * 获取视椎体的特定面
	 * @param plane 
	 */
	public com.earthview.world.spatial.math.Plane getFrustumPlane(int plane)
	{
		return super.getFrustumPlane_NoVirtual(plane);
	}
	/**
	 * 测试给定的球体是否在视椎体中
	 * @param bound 封闭球体
	 * @param culledBy 锥体面指针
	 * @return 如果成功，可见
	 */
	public boolean isVisible(com.earthview.world.spatial.math.Sphere bound, EnumPointer culledBy)
	{
		return super.isVisible_NoVirtual(bound, culledBy);
	}
	public boolean isVisible(com.earthview.world.spatial.math.Sphere bound)
	{
		return super.isVisible_NoVirtual(bound);
	}
	/**
	 * 测试给定的顶点是否在视椎体中
	 * @param vert 顶点
	 * @param culledBy 锥体面指针
	 * @return 如果成功，可见
	 */
	public boolean isVisible(com.earthview.world.spatial.math.Vector3 vert, EnumPointer culledBy)
	{
		return super.isVisible_NoVirtual(vert, culledBy);
	}
	public boolean isVisible(com.earthview.world.spatial.math.Vector3 vert)
	{
		return super.isVisible_NoVirtual(vert);
	}
	/**
	 * 设置投影类型默认为透视投影
	 * @param pt 投影类型
	 */
	public void setProjectionType(com.earthview.world.graphic.ProjectionType pt)
	{
		super.setProjectionType_NoVirtual(pt);
	}
	/**
	 * 获取当前使用投影类型正射投影或者透视投影
	 * @param  
	 */
	public com.earthview.world.graphic.ProjectionType getProjectionType()
	{
		return super.getProjectionType_NoVirtual();
	}
	/**
	 * 设置平行投影窗口设置只有在正交渲染的时候使用
	 * @param w 窗口宽
	 * @param h 窗口高
	 */
	public void setOrthoWindow(double w, double h)
	{
		super.setOrthoWindow_NoVirtual(w, h);
	}
	/**
	 * 设置平行投影窗口高度值设置只有在正交渲染的时候使用窗口宽度由窗口比例计算出
	 * @param h 在世界单位下视图窗口的高度值
	 */
	public void setOrthoWindowHeight(double h)
	{
		super.setOrthoWindowHeight_NoVirtual(h);
	}
	/**
	 * 设置平行投影窗口宽度设置只有在正交渲染的时候使用窗口高度由窗口比例计算出
	 * @param w 窗口宽度
	 */
	public void setOrthoWindowWidth(double w)
	{
		super.setOrthoWindowWidth_NoVirtual(w);
	}
	/**
	 * 得到平行投影窗口高度值
	 * @param  
	 */
	public double getOrthoWindowHeight()
	{
		return super.getOrthoWindowHeight_NoVirtual();
	}
	/**
	 * 得到平行投影窗口宽度值
	 * @param  
	 */
	public double getOrthoWindowWidth()
	{
		return super.getOrthoWindowWidth_NoVirtual();
	}
	/**
	 * 设置反射的镜面平面,并启用镜面反射
	 * @param p 作为镜面的平面
	 */
	public void enableReflection(com.earthview.world.spatial.math.Plane p)
	{
		super.enableReflection_NoVirtual(p);
	}
	/**
	 * 设置反射的镜面平面,并启用镜面反射
	 * @param p 作为镜面的可移动平面
	 */
	public void enableReflection(com.earthview.world.graphic.MovablePlane p)
	{
		super.enableReflection_NoVirtual(p);
	}
	/**
	 * 禁用镜面平面
	 * @param  
	 */
	public void disableReflection()
	{
		super.disableReflection_NoVirtual();
	}
	/**
	 * 判断是否启用了镜面反射
	 * @param  
	 */
	public boolean isReflected()
	{
		return super.isReflected_NoVirtual();
	}
	/**
	 * 获取视椎体的反射矩阵
	 * @param  
	 * @return 反射矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getReflectionMatrix()
	{
		return super.getReflectionMatrix_NoVirtual();
	}
	/**
	 * 获取视椎体的反射平面
	 * @param  
	 * @return 反射平面
	 */
	public com.earthview.world.spatial.math.Plane getReflectionPlane()
	{
		return super.getReflectionPlane_NoVirtual();
	}
	/**
	 * 进行球体投影
	 * @param sphere 球体
	 * @param left 
	 * @param top 
	 * @param right 
	 * @param bottom 
	 */
	public boolean projectSphere(com.earthview.world.spatial.math.Sphere sphere, DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		return super.projectSphere_NoVirtual(sphere, left, top, right, bottom);
	}
	/**
	 * 启用自定义近裁剪面
	 * @param plane 裁剪面，当摄像机关联此面时，它必须存在，不能在视椎体之前销毁它
	 */
	public void enableCustomNearClipPlane(com.earthview.world.graphic.MovablePlane plane)
	{
		super.enableCustomNearClipPlane_NoVirtual(plane);
	}
	public void enableCustomNearClipPlane(com.earthview.world.spatial.math.Plane plane)
	{
		super.enableCustomNearClipPlane_NoVirtual(plane);
	}
	/**
	 * 禁用自定义近裁剪面
	 * @param  
	 */
	public void disableCustomNearClipPlane()
	{
		super.disableCustomNearClipPlane_NoVirtual();
	}
	/**
	 * 自定义近裁剪面是否被使用
	 * @param  
	 */
	public boolean isCustomNearClipPlaneEnabled()
	{
		return super.isCustomNearClipPlaneEnabled_NoVirtual();
	}
	/**
	 * 获取视椎体派生位置
	 * @param  
	 * @return 三维矢量
	 */
	public com.earthview.world.spatial.math.Vector3 getPositionForViewUpdate()
	{
		return super.getPositionForViewUpdate_NoVirtual();
	}
	/**
	 * 获取视椎体派生四元数
	 * @param  
	 * @return 四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientationForViewUpdate()
	{
		return super.getOrientationForViewUpdate_NoVirtual();
	}
	public com.earthview.world.graphic.MovableObject.MovableObjectInternalAnimableObject getAnimableObjectPtr()
	{
		return super.getAnimableObjectPtr_NoVirtual();
	}
	/**
	 * 获取渲染队列ID
	 * @param  
	 */
	public short getRenderQueueId()
	{
		return super.getRenderQueueId_NoVirtual();
	}
	/**
	 * 通报创建者只能内部使用
	 * @param fact 实例
	 */
	public void _notifyCreator(com.earthview.world.graphic.MovableObjectFactory ref_fact)
	{
		super._notifyCreator_NoVirtual(ref_fact);
	}
	/**
	 * 获取创建者如果有的话，获取，只能在内部使用
	 * @param  
	 * @return 移动对象工厂类
	 */
	public com.earthview.world.graphic.MovableObjectFactory _getCreator()
	{
		return super._getCreator_NoVirtual();
	}
	/**
	 * 通报场景管理器只能内部使用
	 * @param man 场景管理者
	 */
	public void _notifyManager(com.earthview.world.graphic.SceneManager ref_mgr)
	{
		super._notifyManager_NoVirtual(ref_mgr);
	}
	/**
	 * 获取场景管理器
	 * @param  
	 * @return 管理者
	 */
	public com.earthview.world.graphic.SceneManager _getManager()
	{
		return super._getManager_NoVirtual();
	}
	/**
	 * 获取对象的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
	 */
	public String getMovableType()
	{
		return super.getMovableType_NoVirtual();
	}
	/**
	 * 获取父节点一个移动对象可以附属在一个场景节点或者骨骼节点上
	 * @param  
	 * @return 节点名称
	 */
	public com.earthview.world.graphic.Node getParentNode()
	{
		return super.getParentNode_NoVirtual();
	}
	/**
	 * 获取对象的场景父节点
	 * @param  
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode getParentSceneNode()
	{
		return super.getParentSceneNode_NoVirtual();
	}
	/**
	 * 判断父节点是否是骨骼节点
	 * @param  
	 * @return 成功，返回标签点，否则为场景节点
	 */
	public boolean isParentTagPoint()
	{
		return super.isParentTagPoint_NoVirtual();
	}
	/**
	 * 通报被挂接内部方法
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		super._notifyAttached_NoVirtual(ref_parent, isTagPoint);
	}
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		super._notifyAttached_NoVirtual(ref_parent);
	}
	/**
	 * 是否已挂接
	 * @param  
	 * @return 为真，挂接
	 */
	public boolean isAttached()
	{
		return super.isAttached_NoVirtual();
	}
	/**
	 * 将指定对象从父节点分离
	 * @param  
	 */
	public void detachFromParent()
	{
		super.detachFromParent_NoVirtual();
	}
	/**
	 * 指定节点是否是场景图中动态部分指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
	 * @param  
	 */
	public boolean isInScene()
	{
		return super.isInScene_NoVirtual();
	}
	/**
	 * 通报被移动内部方法
	 * @param  
	 */
	public void _notifyMoved()
	{
		super._notifyMoved_NoVirtual();
	}
	/**
	 * 通报光源查询结束内部方法
	 * @param  
	 */
	public void _notifyLightsQueried(com.earthview.world.graphic.LightList lightList)
	{
		super._notifyLightsQueried_NoVirtual(lightList);
	}
	public void setLightQueriedListener(com.earthview.world.graphic.MovableObject.LightQueriedListener listener)
	{
		super.setLightQueriedListener_NoVirtual(listener);
	}
	public com.earthview.world.graphic.MovableObject.LightQueriedListener getLightQueriedListener()
	{
		return super.getLightQueriedListener_NoVirtual();
	}
	public long getLightListUpdated()
	{
		return super.getLightListUpdated_NoVirtual();
	}
	public void setLightListUpdated(long frame)
	{
		super.setLightListUpdated_NoVirtual(frame);
	}
	/**
	 * 通报当前相机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	/**
	 * 获取模型坐标系下的包围盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		return super.getBoundingBox_NoVirtual();
	}
	/**
	 * 获取当前对象的球体限定半径
	 * @param  
	 * @return 边框盒
	 */
	public double getBoundingRadius()
	{
		return super.getBoundingRadius_NoVirtual();
	}
	/**
	 * 在世界空间中获取当前对象的边框球体
	 * @param derive 是否检索
	 */
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere(boolean derive)
	{
		return super.getWorldBoundingSphere_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.Sphere getWorldBoundingSphere()
	{
		return super.getWorldBoundingSphere_NoVirtual();
	}
	/**
	 * 更新渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		super._updateRenderQueue_NoVirtual(queue);
	}
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 获取是否可见,与setVisible对应
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 获取是否可见,严格的判断(裁剪判断、可视距离判断)
	 * @param  
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离上限
	 * @param dist 默认为0
	 */
	public void setRenderingMaxDistance(double dist)
	{
		super.setRenderingMaxDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离下限
	 * @param  
	 */
	public double getRenderingMaxDistance()
	{
		return super.getRenderingMaxDistance_NoVirtual();
	}
	/**
	 * 设置该对象可渲染的距离下限
	 * @param dist 默认为0
	 */
	public void setRenderingMinDistance(double dist)
	{
		super.setRenderingMinDistance_NoVirtual(dist);
	}
	/**
	 * 获取该对象可渲染的距离上限
	 * @param  
	 */
	public double getRenderingMinDistance()
	{
		return super.getRenderingMinDistance_NoVirtual();
	}
	/**
	 * 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)必须先调用setUseMinPixelSize才能开启此功能
	 * @param pixelSize 像素大小
	 */
	public void setRenderingMinPixelSize(double pixelSize)
	{
		super.setRenderingMinPixelSize_NoVirtual(pixelSize);
	}
	/**
	 * 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
	 * @param  
	 * @return 像素大小
	 */
	public double getRenderingMinPixelSize()
	{
		return super.getRenderingMinPixelSize_NoVirtual();
	}
	/// <summary>
	/// 设置选中时的高亮颜色				
	/// <param name=""></param>				
	/// <returns></returns>
	public void setSelectionColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setSelectionColour_NoVirtual(colour);
	}
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		return super.setSelected_NoVirtual(objIndics);
	}
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		return super.getSelected_NoVirtual();
	}
	/**
	 * 射线选择
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 选中的对象序号
	 * @param point 交点
	 * @return true:与射线相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, point);
	}
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(aabb, prepareToRenderSelection, indexVec);
	}
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		return super.selectBy_NoVirtual(sphere, prepareToRenderSelection, indexVec);
	}
	/**
	 * 选择组件
	 * @param ray 射线对象
	 * @param EarthView::World::Graphic::CViewport 所在视口
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param objIndex 物体序号
	 * @param submeshIndex submesh序号
	 * @param instanceIndex instance序号
	 * @param segmentIndex 索引分段序号
	 * @param point 交点
	 * @return true:组件与射线相交;false:不相交
	 */
	public boolean selectComponentBy(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		return super.selectComponentBy_NoVirtual(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
	}
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		super.renderSelection_NoVirtual();
	}
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	/**
	 * 开始编辑
	 * @param  
	 */
	public boolean startEditing(long objectIndex)
	{
		return super.startEditing_NoVirtual(objectIndex);
	}
	/**
	 * 结束编辑
	 * @param  
	 */
	public void endEditing()
	{
		super.endEditing_NoVirtual();
	}
	/**
	 * 获得编辑包围盒
	 * @param  
	 */
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		return super.getEditBoundingBox_NoVirtual();
	}
	/**
	 * 获得选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置选中对象的世界变换矩阵
	 * @param objectIndex 选中对象在EarthView::World::Graphic::CMovableObject中的序号
	 * @param matrix 世界变换矩阵
	 */
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取父节点的全部变化信息
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getParentNodeFullTransform()
	{
		return super._getParentNodeFullTransform_NoVirtual();
	}
	/**
	 * 设置该对象的询问标识
	 * @param flags 
	 */
	public void setQueryFlags(long flags)
	{
		super.setQueryFlags_NoVirtual(flags);
	}
	/**
	 * 添加询问标识
	 * @param flags 
	 */
	public void addQueryFlags(long flags)
	{
		super.addQueryFlags_NoVirtual(flags);
	}
	/**
	 * 移除询问标识
	 * @param flags 
	 */
	public void removeQueryFlags(long flags)
	{
		super.removeQueryFlags_NoVirtual(flags);
	}
	/**
	 * 获取询问标识
	 * @param  
	 */
	public long getQueryFlags()
	{
		return super.getQueryFlags_NoVirtual();
	}
	/**
	 * 设置对象可见标识
	 * @param flags 
	 */
	public void setVisibilityFlags(long flags)
	{
		super.setVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 添加对象可见标识
	 * @param flags 
	 */
	public void addVisibilityFlags(long flags)
	{
		super.addVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 移除对象可见标识
	 * @param flags 
	 */
	public void removeVisibilityFlags(long flags)
	{
		super.removeVisibilityFlags_NoVirtual(flags);
	}
	/**
	 * 获取对象可见标识
	 * @param flags 
	 */
	public long getVisibilityFlags()
	{
		return super.getVisibilityFlags_NoVirtual();
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.MovableObject.MovableObjectListener ref_listener)
	{
		super.addListener_NoVirtual(ref_listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.MovableObject.MovableObjectListener listener)
	{
		return super.existListener_NoVirtual(listener);
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		return super.getListenerCount_NoVirtual();
	}
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.MovableObject.MovableObjectListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取光源列表以距离可移动物体由近到远顺序排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList queryLights()
	{
		return super.queryLights_NoVirtual();
	}
	/**
	 * 获取光线掩码默认所有光源影响对象
	 * @param  
	 */
	public long getLightMask()
	{
		return super.getLightMask_NoVirtual();
	}
	/**
	 * 设置光线掩码
	 * @param lightMask 
	 */
	public void setLightMask(long lightMask)
	{
		super.setLightMask_NoVirtual(lightMask);
	}
	/**
	 * 获取指向该对象当前光列表
	 * @param  
	 */
	public com.earthview.world.graphic.LightList _getLightList()
	{
		return super._getLightList_NoVirtual();
	}
	/**
	 * 设置投射阴影
	 * @param enabled 
	 */
	public void setCastShadows(boolean enabled)
	{
		super.setCastShadows_NoVirtual(enabled);
	}
	/**
	 * 是否接收阴影
	 * @param  
	 */
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
	}
	/**
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		return super.getTypeFlags_NoVirtual();
	}
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
	}
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		super.visitRenderables_NoVirtual(visitor);
	}
	/**
	 * 设置调试该对象是否启用
	 * @param  
	 */
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 是否调试该对象是否启用
	 * @param  
	 */
	public boolean isDebugDisplayEnabled()
	{
		return super.isDebugDisplayEnabled_NoVirtual();
	}
	public boolean getCastShadows()
	{
		return super.getCastShadows_NoVirtual();
	}
	public com.earthview.world.graphic.EdgeData getEdgeList()
	{
		return super.getEdgeList_NoVirtual();
	}
	public boolean hasEdgeList()
	{
		return super.hasEdgeList_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox(boolean derive)
	{
		return super.getWorldBoundingBox_NoVirtual(derive);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getWorldBoundingBox()
	{
		return super.getWorldBoundingBox_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getLightCapBounds()
	{
		return super.getLightCapBounds_NoVirtual();
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getDarkCapBounds(com.earthview.world.graphic.Light light, double dirLightExtrusionDist)
	{
		return super.getDarkCapBounds_NoVirtual(light, dirLightExtrusionDist);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance, long flags)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
	}
	public com.earthview.world.graphic.ShadowCaster.ShadowRenderableListIterator getShadowVolumeRenderableIterator(com.earthview.world.graphic.ShadowTechnique shadowTechnique, com.earthview.world.graphic.Light light, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, boolean extrudeVertices, double extrusionDistance)
	{
		return super.getShadowVolumeRenderableIterator_NoVirtual(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
	}
	public double getPointExtrusionDistance(com.earthview.world.graphic.Light l)
	{
		return super.getPointExtrusionDistance_NoVirtual(l);
	}
	public void updateEdgeListLightFacing(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.spatial.math.Vector4 lightPos)
	{
		super.updateEdgeListLightFacing_NoVirtual(edgeData, lightPos);
	}
	public void generateShadowVolume(com.earthview.world.graphic.EdgeData edgeData, com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer, com.earthview.world.graphic.Light light, com.earthview.world.graphic.ShadowCaster.ShadowRenderableList shadowRenderables, long flags)
	{
		super.generateShadowVolume_NoVirtual(edgeData, indexBuffer, light, shadowRenderables, flags);
	}
	public void extrudeBounds(com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatial.math.Vector4 lightPos, double extrudeDist)
	{
		super.extrudeBounds_NoVirtual(box, lightPos, extrudeDist);
	}
	
	native protected void register_getCameraRenderablePtr_void(long pNativeObject, String method);
	native protected void register_setWindowImpl_void(long pNativeObject, String method);
	native protected void register_getRayForwardIntersect_CVector3_CVector3_Real(long pNativeObject, String method);
	native protected void register_addListener_CCameraListener(long pNativeObject, String method);
	native protected void register_removeListener_CCameraListener(long pNativeObject, String method);
	native protected void register_getAbsoluteProjectMatrix_void(long pNativeObject, String method);
	native protected void register_isLockingToTarget_void(long pNativeObject, String method);
	native protected void register_getLockTarget_void(long pNativeObject, String method);
	native protected void register_isSlaveCamera_void(long pNativeObject, String method);
	native protected void register_setLodCamera_CCamera(long pNativeObject, String method);
	native protected void register_getLodCamera_void(long pNativeObject, String method);
	native protected void register_setWindow_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_resetWindow_void(long pNativeObject, String method);
	native protected void register_isWindowSet_void(long pNativeObject, String method);
	native protected void register_forwardIntersect_CPlane_Vector4List(long pNativeObject, String method);
	native protected void register_setUseRenderingDistance_ev_bool(long pNativeObject, String method);
	native protected void register_getUseRenderingDistance_void(long pNativeObject, String method);
	native protected void register_synchroniseBaseSettingsWith_CCamera(long pNativeObject, String method);
	native protected void register_ev_clone_EVString(long pNativeObject, String method);
	native protected void register_getHeading_void(long pNativeObject, String method);
	native protected void register_getTilt_void(long pNativeObject, String method);
	native protected void register_getLatitude_void(long pNativeObject, String method);
	native protected void register_getLongitude_void(long pNativeObject, String method);
	native protected void register_getAltitude_void(long pNativeObject, String method);
	native protected void register_isUnderGround_void(long pNativeObject, String method);
	native protected void register_getCameraDistanceOfGround_void(long pNativeObject, String method);
	native protected void register_getAltitudeUnderCamera_void(long pNativeObject, String method);
	native protected void register_getGlobeViewport_void(long pNativeObject, String method);
	native protected void register_hasChanged_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getFrustumRenderablePtr_void(long pNativeObject, String method);
	native protected void register_calcProjectionParameters_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_updateFrustum_void(long pNativeObject, String method);
	native protected void register_updateView_void(long pNativeObject, String method);
	native protected void register_updateFrustumImpl_void(long pNativeObject, String method);
	native protected void register_updateViewImpl_void(long pNativeObject, String method);
	native protected void register_updateFrustumPlanes_void(long pNativeObject, String method);
	native protected void register_updateFrustumPlanesImpl_void(long pNativeObject, String method);
	native protected void register_updateWorldSpaceCorners_void(long pNativeObject, String method);
	native protected void register_updateWorldSpaceCornersImpl_void(long pNativeObject, String method);
	native protected void register_updateVertexData_void(long pNativeObject, String method);
	native protected void register_isViewOutOfDate_void(long pNativeObject, String method);
	native protected void register_isFrustumOutOfDate_void(long pNativeObject, String method);
	native protected void register_invalidateFrustum_void(long pNativeObject, String method);
	native protected void register_invalidateView_void(long pNativeObject, String method);
	native protected void register_setFOVy_CRadian(long pNativeObject, String method);
	native protected void register_getFOVy_void(long pNativeObject, String method);
	native protected void register_setNearClipDistance_Real(long pNativeObject, String method);
	native protected void register_getNearClipDistance_void(long pNativeObject, String method);
	native protected void register_setFarClipDistance_Real(long pNativeObject, String method);
	native protected void register_getFarClipDistance_void(long pNativeObject, String method);
	native protected void register_setAspectRatio_Real(long pNativeObject, String method);
	native protected void register_getAspectRatio_void(long pNativeObject, String method);
	native protected void register_setFrustumOffset_CVector2(long pNativeObject, String method);
	native protected void register_setFrustumOffset_Real_Real(long pNativeObject, String method);
	native protected void register_setFrustumOffset_Real(long pNativeObject, String method);
	native protected void register_setFrustumOffset_void(long pNativeObject, String method);
	native protected void register_getFrustumOffset_void(long pNativeObject, String method);
	native protected void register_setFocalLength_Real(long pNativeObject, String method);
	native protected void register_setFocalLength_void(long pNativeObject, String method);
	native protected void register_getFocalLength_void(long pNativeObject, String method);
	native protected void register_setFrustumExtents_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_resetFrustumExtents_void(long pNativeObject, String method);
	native protected void register_getFrustumExtents_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_getProjectionMatrixRS_void(long pNativeObject, String method);
	native protected void register_getProjectionMatrixWithRSDepth_void(long pNativeObject, String method);
	native protected void register_getProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getViewMatrix_void(long pNativeObject, String method);
	native protected void register_calcViewMatrixRelative_CVector3_CMatrix4(long pNativeObject, String method);
	native protected void register_setCustomViewMatrix_ev_bool_CMatrix4(long pNativeObject, String method);
	native protected void register_setCustomViewMatrix_ev_bool(long pNativeObject, String method);
	native protected void register_isCustomViewMatrixEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomProjectionMatrix_ev_bool_CMatrix4(long pNativeObject, String method);
	native protected void register_setCustomProjectionMatrix_ev_bool(long pNativeObject, String method);
	native protected void register_isCustomProjectionMatrixEnabled_void(long pNativeObject, String method);
	native protected void register_getFrustumPlanes_void(long pNativeObject, String method);
	native protected void register_getFrustumPlane_ev_uint16(long pNativeObject, String method);
	native protected void register_isVisible_CAxisAlignedBox_FrustumPlane(long pNativeObject, String method);
	native protected void register_isVisible_CAxisAlignedBox(long pNativeObject, String method);
	native protected void register_isVisible_CSphere_FrustumPlane(long pNativeObject, String method);
	native protected void register_isVisible_CSphere(long pNativeObject, String method);
	native protected void register_isVisible_CVector3_FrustumPlane(long pNativeObject, String method);
	native protected void register_isVisible_CVector3(long pNativeObject, String method);
	native protected void register_setProjectionType_ProjectionType(long pNativeObject, String method);
	native protected void register_getProjectionType_void(long pNativeObject, String method);
	native protected void register_setOrthoWindow_Real_Real(long pNativeObject, String method);
	native protected void register_setOrthoWindowHeight_Real(long pNativeObject, String method);
	native protected void register_setOrthoWindowWidth_Real(long pNativeObject, String method);
	native protected void register_getOrthoWindowHeight_void(long pNativeObject, String method);
	native protected void register_getOrthoWindowWidth_void(long pNativeObject, String method);
	native protected void register_enableReflection_CPlane(long pNativeObject, String method);
	native protected void register_enableReflection_CMovablePlane(long pNativeObject, String method);
	native protected void register_disableReflection_void(long pNativeObject, String method);
	native protected void register_isReflected_void(long pNativeObject, String method);
	native protected void register_getReflectionMatrix_void(long pNativeObject, String method);
	native protected void register_getReflectionPlane_void(long pNativeObject, String method);
	native protected void register_projectSphere_CSphere_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_enableCustomNearClipPlane_CMovablePlane(long pNativeObject, String method);
	native protected void register_enableCustomNearClipPlane_CPlane(long pNativeObject, String method);
	native protected void register_disableCustomNearClipPlane_void(long pNativeObject, String method);
	native protected void register_isCustomNearClipPlaneEnabled_void(long pNativeObject, String method);
	native protected void register_getPositionForViewUpdate_void(long pNativeObject, String method);
	native protected void register_getOrientationForViewUpdate_void(long pNativeObject, String method);
	native protected void register_getAnimableObjectPtr_void(long pNativeObject, String method);
	native protected void register_getRenderQueueId_void(long pNativeObject, String method);
	native protected void register__notifyCreator_CMovableObjectFactory(long pNativeObject, String method);
	native protected void register__getCreator_void(long pNativeObject, String method);
	native protected void register__notifyManager_CSceneManager(long pNativeObject, String method);
	native protected void register__getManager_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register_getParentNode_void(long pNativeObject, String method);
	native protected void register_getParentSceneNode_void(long pNativeObject, String method);
	native protected void register_isParentTagPoint_void(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register_isAttached_void(long pNativeObject, String method);
	native protected void register_detachFromParent_void(long pNativeObject, String method);
	native protected void register_isInScene_void(long pNativeObject, String method);
	native protected void register__notifyMoved_void(long pNativeObject, String method);
	native protected void register__notifyLightsQueried_LightList(long pNativeObject, String method);
	native protected void register_setLightQueriedListener_CLightQueriedListener(long pNativeObject, String method);
	native protected void register_getLightQueriedListener_void(long pNativeObject, String method);
	native protected void register_getLightListUpdated_void(long pNativeObject, String method);
	native protected void register_setLightListUpdated_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingSphere_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setRenderingMaxDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMaxDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinDistance_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinDistance_void(long pNativeObject, String method);
	native protected void register_setRenderingMinPixelSize_Real(long pNativeObject, String method);
	native protected void register_getRenderingMinPixelSize_void(long pNativeObject, String method);
	native protected void register_setSelectionColour_CColourValue(long pNativeObject, String method);
	native protected void register_setSelected_IntVector(long pNativeObject, String method);
	native protected void register_getSelected_void(long pNativeObject, String method);
	native protected void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectBy_CSphere_ev_bool_IntVector(long pNativeObject, String method);
	native protected void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, String method);
	native protected void register_renderSelection_void(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_uint32(long pNativeObject, String method);
	native protected void register_endEditing_void(long pNativeObject, String method);
	native protected void register_getEditBoundingBox_void(long pNativeObject, String method);
	native protected void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register__getParentNodeFullTransform_void(long pNativeObject, String method);
	native protected void register_setQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeQueryFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryFlags_void(long pNativeObject, String method);
	native protected void register_setVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_addVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVisibilityFlags_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityFlags_void(long pNativeObject, String method);
	native protected void register_addListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_removeListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_existListener_CMovableObjectListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_queryLights_void(long pNativeObject, String method);
	native protected void register_getLightMask_void(long pNativeObject, String method);
	native protected void register_setLightMask_ev_uint32(long pNativeObject, String method);
	native protected void register__getLightList_void(long pNativeObject, String method);
	native protected void register_setCastShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
	native protected void register_getTypeFlags_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isDebugDisplayEnabled_void(long pNativeObject, String method);
	native protected void register_getCastShadows_void(long pNativeObject, String method);
	native protected void register_getEdgeList_void(long pNativeObject, String method);
	native protected void register_hasEdgeList_void(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_getWorldBoundingBox_void(long pNativeObject, String method);
	native protected void register_getLightCapBounds_void(long pNativeObject, String method);
	native protected void register_getDarkCapBounds_CLight_Real(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(long pNativeObject, String method);
	native protected void register_getPointExtrusionDistance_CLight(long pNativeObject, String method);
	native protected void register_updateEdgeListLightFacing_CEdgeData_CVector4(long pNativeObject, String method);
	native protected void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(long pNativeObject, String method);
	native protected void register_extrudeBounds_CAxisAlignedBox_CVector4_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCameraRenderablePtr_void(this.nativeObject.pointer, "getCameraRenderablePtr_void_callback");
			this.register_setWindowImpl_void(this.nativeObject.pointer, "setWindowImpl_void_callback");
			this.register_getRayForwardIntersect_CVector3_CVector3_Real(this.nativeObject.pointer, "getRayForwardIntersect_CVector3_CVector3_Real_callback");
			this.register_addListener_CCameraListener(this.nativeObject.pointer, "addListener_CCameraListener_callback");
			this.register_removeListener_CCameraListener(this.nativeObject.pointer, "removeListener_CCameraListener_callback");
			this.register_getAbsoluteProjectMatrix_void(this.nativeObject.pointer, "getAbsoluteProjectMatrix_void_callback");
			this.register_isLockingToTarget_void(this.nativeObject.pointer, "isLockingToTarget_void_callback");
			this.register_getLockTarget_void(this.nativeObject.pointer, "getLockTarget_void_callback");
			this.register_isSlaveCamera_void(this.nativeObject.pointer, "isSlaveCamera_void_callback");
			this.register_setLodCamera_CCamera(this.nativeObject.pointer, "setLodCamera_CCamera_callback");
			this.register_getLodCamera_void(this.nativeObject.pointer, "getLodCamera_void_callback");
			this.register_setWindow_Real_Real_Real_Real(this.nativeObject.pointer, "setWindow_Real_Real_Real_Real_callback");
			this.register_resetWindow_void(this.nativeObject.pointer, "resetWindow_void_callback");
			this.register_isWindowSet_void(this.nativeObject.pointer, "isWindowSet_void_callback");
			this.register_forwardIntersect_CPlane_Vector4List(this.nativeObject.pointer, "forwardIntersect_CPlane_Vector4List_callback");
			this.register_setUseRenderingDistance_ev_bool(this.nativeObject.pointer, "setUseRenderingDistance_ev_bool_callback");
			this.register_getUseRenderingDistance_void(this.nativeObject.pointer, "getUseRenderingDistance_void_callback");
			this.register_synchroniseBaseSettingsWith_CCamera(this.nativeObject.pointer, "synchroniseBaseSettingsWith_CCamera_callback");
			this.register_ev_clone_EVString(this.nativeObject.pointer, "ev_clone_EVString_callback");
			this.register_getHeading_void(this.nativeObject.pointer, "getHeading_void_callback");
			this.register_getTilt_void(this.nativeObject.pointer, "getTilt_void_callback");
			this.register_getLatitude_void(this.nativeObject.pointer, "getLatitude_void_callback");
			this.register_getLongitude_void(this.nativeObject.pointer, "getLongitude_void_callback");
			this.register_getAltitude_void(this.nativeObject.pointer, "getAltitude_void_callback");
			this.register_isUnderGround_void(this.nativeObject.pointer, "isUnderGround_void_callback");
			this.register_getCameraDistanceOfGround_void(this.nativeObject.pointer, "getCameraDistanceOfGround_void_callback");
			this.register_getAltitudeUnderCamera_void(this.nativeObject.pointer, "getAltitudeUnderCamera_void_callback");
			this.register_getGlobeViewport_void(this.nativeObject.pointer, "getGlobeViewport_void_callback");
			this.register_hasChanged_void(this.nativeObject.pointer, "hasChanged_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getFrustumRenderablePtr_void(this.nativeObject.pointer, "getFrustumRenderablePtr_void_callback");
			this.register_calcProjectionParameters_Real_Real_Real_Real(this.nativeObject.pointer, "calcProjectionParameters_Real_Real_Real_Real_callback");
			this.register_updateFrustum_void(this.nativeObject.pointer, "updateFrustum_void_callback");
			this.register_updateView_void(this.nativeObject.pointer, "updateView_void_callback");
			this.register_updateFrustumImpl_void(this.nativeObject.pointer, "updateFrustumImpl_void_callback");
			this.register_updateViewImpl_void(this.nativeObject.pointer, "updateViewImpl_void_callback");
			this.register_updateFrustumPlanes_void(this.nativeObject.pointer, "updateFrustumPlanes_void_callback");
			this.register_updateFrustumPlanesImpl_void(this.nativeObject.pointer, "updateFrustumPlanesImpl_void_callback");
			this.register_updateWorldSpaceCorners_void(this.nativeObject.pointer, "updateWorldSpaceCorners_void_callback");
			this.register_updateWorldSpaceCornersImpl_void(this.nativeObject.pointer, "updateWorldSpaceCornersImpl_void_callback");
			this.register_updateVertexData_void(this.nativeObject.pointer, "updateVertexData_void_callback");
			this.register_isViewOutOfDate_void(this.nativeObject.pointer, "isViewOutOfDate_void_callback");
			this.register_isFrustumOutOfDate_void(this.nativeObject.pointer, "isFrustumOutOfDate_void_callback");
			this.register_invalidateFrustum_void(this.nativeObject.pointer, "invalidateFrustum_void_callback");
			this.register_invalidateView_void(this.nativeObject.pointer, "invalidateView_void_callback");
			this.register_setFOVy_CRadian(this.nativeObject.pointer, "setFOVy_CRadian_callback");
			this.register_getFOVy_void(this.nativeObject.pointer, "getFOVy_void_callback");
			this.register_setNearClipDistance_Real(this.nativeObject.pointer, "setNearClipDistance_Real_callback");
			this.register_getNearClipDistance_void(this.nativeObject.pointer, "getNearClipDistance_void_callback");
			this.register_setFarClipDistance_Real(this.nativeObject.pointer, "setFarClipDistance_Real_callback");
			this.register_getFarClipDistance_void(this.nativeObject.pointer, "getFarClipDistance_void_callback");
			this.register_setAspectRatio_Real(this.nativeObject.pointer, "setAspectRatio_Real_callback");
			this.register_getAspectRatio_void(this.nativeObject.pointer, "getAspectRatio_void_callback");
			this.register_setFrustumOffset_CVector2(this.nativeObject.pointer, "setFrustumOffset_CVector2_callback");
			this.register_setFrustumOffset_Real_Real(this.nativeObject.pointer, "setFrustumOffset_Real_Real_callback");
			this.register_setFrustumOffset_Real(this.nativeObject.pointer, "setFrustumOffset_Real_callback");
			this.register_setFrustumOffset_void(this.nativeObject.pointer, "setFrustumOffset_void_callback");
			this.register_getFrustumOffset_void(this.nativeObject.pointer, "getFrustumOffset_void_callback");
			this.register_setFocalLength_Real(this.nativeObject.pointer, "setFocalLength_Real_callback");
			this.register_setFocalLength_void(this.nativeObject.pointer, "setFocalLength_void_callback");
			this.register_getFocalLength_void(this.nativeObject.pointer, "getFocalLength_void_callback");
			this.register_setFrustumExtents_Real_Real_Real_Real(this.nativeObject.pointer, "setFrustumExtents_Real_Real_Real_Real_callback");
			this.register_resetFrustumExtents_void(this.nativeObject.pointer, "resetFrustumExtents_void_callback");
			this.register_getFrustumExtents_Real_Real_Real_Real(this.nativeObject.pointer, "getFrustumExtents_Real_Real_Real_Real_callback");
			this.register_getProjectionMatrixRS_void(this.nativeObject.pointer, "getProjectionMatrixRS_void_callback");
			this.register_getProjectionMatrixWithRSDepth_void(this.nativeObject.pointer, "getProjectionMatrixWithRSDepth_void_callback");
			this.register_getProjectionMatrix_void(this.nativeObject.pointer, "getProjectionMatrix_void_callback");
			this.register_getViewMatrix_void(this.nativeObject.pointer, "getViewMatrix_void_callback");
			this.register_calcViewMatrixRelative_CVector3_CMatrix4(this.nativeObject.pointer, "calcViewMatrixRelative_CVector3_CMatrix4_callback");
			this.register_setCustomViewMatrix_ev_bool_CMatrix4(this.nativeObject.pointer, "setCustomViewMatrix_ev_bool_CMatrix4_callback");
			this.register_setCustomViewMatrix_ev_bool(this.nativeObject.pointer, "setCustomViewMatrix_ev_bool_callback");
			this.register_isCustomViewMatrixEnabled_void(this.nativeObject.pointer, "isCustomViewMatrixEnabled_void_callback");
			this.register_setCustomProjectionMatrix_ev_bool_CMatrix4(this.nativeObject.pointer, "setCustomProjectionMatrix_ev_bool_CMatrix4_callback");
			this.register_setCustomProjectionMatrix_ev_bool(this.nativeObject.pointer, "setCustomProjectionMatrix_ev_bool_callback");
			this.register_isCustomProjectionMatrixEnabled_void(this.nativeObject.pointer, "isCustomProjectionMatrixEnabled_void_callback");
			this.register_getFrustumPlanes_void(this.nativeObject.pointer, "getFrustumPlanes_void_callback");
			this.register_getFrustumPlane_ev_uint16(this.nativeObject.pointer, "getFrustumPlane_ev_uint16_callback");
			this.register_isVisible_CAxisAlignedBox_FrustumPlane(this.nativeObject.pointer, "isVisible_CAxisAlignedBox_FrustumPlane_callback");
			this.register_isVisible_CAxisAlignedBox(this.nativeObject.pointer, "isVisible_CAxisAlignedBox_callback");
			this.register_isVisible_CSphere_FrustumPlane(this.nativeObject.pointer, "isVisible_CSphere_FrustumPlane_callback");
			this.register_isVisible_CSphere(this.nativeObject.pointer, "isVisible_CSphere_callback");
			this.register_isVisible_CVector3_FrustumPlane(this.nativeObject.pointer, "isVisible_CVector3_FrustumPlane_callback");
			this.register_isVisible_CVector3(this.nativeObject.pointer, "isVisible_CVector3_callback");
			this.register_setProjectionType_ProjectionType(this.nativeObject.pointer, "setProjectionType_ProjectionType_callback");
			this.register_getProjectionType_void(this.nativeObject.pointer, "getProjectionType_void_callback");
			this.register_setOrthoWindow_Real_Real(this.nativeObject.pointer, "setOrthoWindow_Real_Real_callback");
			this.register_setOrthoWindowHeight_Real(this.nativeObject.pointer, "setOrthoWindowHeight_Real_callback");
			this.register_setOrthoWindowWidth_Real(this.nativeObject.pointer, "setOrthoWindowWidth_Real_callback");
			this.register_getOrthoWindowHeight_void(this.nativeObject.pointer, "getOrthoWindowHeight_void_callback");
			this.register_getOrthoWindowWidth_void(this.nativeObject.pointer, "getOrthoWindowWidth_void_callback");
			this.register_enableReflection_CPlane(this.nativeObject.pointer, "enableReflection_CPlane_callback");
			this.register_enableReflection_CMovablePlane(this.nativeObject.pointer, "enableReflection_CMovablePlane_callback");
			this.register_disableReflection_void(this.nativeObject.pointer, "disableReflection_void_callback");
			this.register_isReflected_void(this.nativeObject.pointer, "isReflected_void_callback");
			this.register_getReflectionMatrix_void(this.nativeObject.pointer, "getReflectionMatrix_void_callback");
			this.register_getReflectionPlane_void(this.nativeObject.pointer, "getReflectionPlane_void_callback");
			this.register_projectSphere_CSphere_Real_Real_Real_Real(this.nativeObject.pointer, "projectSphere_CSphere_Real_Real_Real_Real_callback");
			this.register_enableCustomNearClipPlane_CMovablePlane(this.nativeObject.pointer, "enableCustomNearClipPlane_CMovablePlane_callback");
			this.register_enableCustomNearClipPlane_CPlane(this.nativeObject.pointer, "enableCustomNearClipPlane_CPlane_callback");
			this.register_disableCustomNearClipPlane_void(this.nativeObject.pointer, "disableCustomNearClipPlane_void_callback");
			this.register_isCustomNearClipPlaneEnabled_void(this.nativeObject.pointer, "isCustomNearClipPlaneEnabled_void_callback");
			this.register_getPositionForViewUpdate_void(this.nativeObject.pointer, "getPositionForViewUpdate_void_callback");
			this.register_getOrientationForViewUpdate_void(this.nativeObject.pointer, "getOrientationForViewUpdate_void_callback");
			this.register_getAnimableObjectPtr_void(this.nativeObject.pointer, "getAnimableObjectPtr_void_callback");
			this.register_getRenderQueueId_void(this.nativeObject.pointer, "getRenderQueueId_void_callback");
			this.register__notifyCreator_CMovableObjectFactory(this.nativeObject.pointer, "_notifyCreator_CMovableObjectFactory_callback");
			this.register__getCreator_void(this.nativeObject.pointer, "_getCreator_void_callback");
			this.register__notifyManager_CSceneManager(this.nativeObject.pointer, "_notifyManager_CSceneManager_callback");
			this.register__getManager_void(this.nativeObject.pointer, "_getManager_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register_getParentNode_void(this.nativeObject.pointer, "getParentNode_void_callback");
			this.register_getParentSceneNode_void(this.nativeObject.pointer, "getParentSceneNode_void_callback");
			this.register_isParentTagPoint_void(this.nativeObject.pointer, "isParentTagPoint_void_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register_isAttached_void(this.nativeObject.pointer, "isAttached_void_callback");
			this.register_detachFromParent_void(this.nativeObject.pointer, "detachFromParent_void_callback");
			this.register_isInScene_void(this.nativeObject.pointer, "isInScene_void_callback");
			this.register__notifyMoved_void(this.nativeObject.pointer, "_notifyMoved_void_callback");
			this.register__notifyLightsQueried_LightList(this.nativeObject.pointer, "_notifyLightsQueried_LightList_callback");
			this.register_setLightQueriedListener_CLightQueriedListener(this.nativeObject.pointer, "setLightQueriedListener_CLightQueriedListener_callback");
			this.register_getLightQueriedListener_void(this.nativeObject.pointer, "getLightQueriedListener_void_callback");
			this.register_getLightListUpdated_void(this.nativeObject.pointer, "getLightListUpdated_void_callback");
			this.register_setLightListUpdated_ev_uint32(this.nativeObject.pointer, "setLightListUpdated_ev_uint32_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register_getWorldBoundingSphere_ev_bool(this.nativeObject.pointer, "getWorldBoundingSphere_ev_bool_callback");
			this.register_getWorldBoundingSphere_void(this.nativeObject.pointer, "getWorldBoundingSphere_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setRenderingMaxDistance_Real(this.nativeObject.pointer, "setRenderingMaxDistance_Real_callback");
			this.register_getRenderingMaxDistance_void(this.nativeObject.pointer, "getRenderingMaxDistance_void_callback");
			this.register_setRenderingMinDistance_Real(this.nativeObject.pointer, "setRenderingMinDistance_Real_callback");
			this.register_getRenderingMinDistance_void(this.nativeObject.pointer, "getRenderingMinDistance_void_callback");
			this.register_setRenderingMinPixelSize_Real(this.nativeObject.pointer, "setRenderingMinPixelSize_Real_callback");
			this.register_getRenderingMinPixelSize_void(this.nativeObject.pointer, "getRenderingMinPixelSize_void_callback");
			this.register_setSelectionColour_CColourValue(this.nativeObject.pointer, "setSelectionColour_CColourValue_callback");
			this.register_setSelected_IntVector(this.nativeObject.pointer, "setSelected_IntVector_callback");
			this.register_getSelected_void(this.nativeObject.pointer, "getSelected_void_callback");
			this.register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, "selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
			this.register_selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
			this.register_selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, "selectBy_CSphere_ev_bool_IntVector_callback");
			this.register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, "selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
			this.register_renderSelection_void(this.nativeObject.pointer, "renderSelection_void_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_startEditing_ev_uint32(this.nativeObject.pointer, "startEditing_ev_uint32_callback");
			this.register_endEditing_void(this.nativeObject.pointer, "endEditing_void_callback");
			this.register_getEditBoundingBox_void(this.nativeObject.pointer, "getEditBoundingBox_void_callback");
			this.register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4(this.nativeObject.pointer, "setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register__getParentNodeFullTransform_void(this.nativeObject.pointer, "_getParentNodeFullTransform_void_callback");
			this.register_setQueryFlags_ev_uint32(this.nativeObject.pointer, "setQueryFlags_ev_uint32_callback");
			this.register_addQueryFlags_ev_uint32(this.nativeObject.pointer, "addQueryFlags_ev_uint32_callback");
			this.register_removeQueryFlags_ev_uint32(this.nativeObject.pointer, "removeQueryFlags_ev_uint32_callback");
			this.register_getQueryFlags_void(this.nativeObject.pointer, "getQueryFlags_void_callback");
			this.register_setVisibilityFlags_ev_uint32(this.nativeObject.pointer, "setVisibilityFlags_ev_uint32_callback");
			this.register_addVisibilityFlags_ev_uint32(this.nativeObject.pointer, "addVisibilityFlags_ev_uint32_callback");
			this.register_removeVisibilityFlags_ev_uint32(this.nativeObject.pointer, "removeVisibilityFlags_ev_uint32_callback");
			this.register_getVisibilityFlags_void(this.nativeObject.pointer, "getVisibilityFlags_void_callback");
			this.register_addListener_CMovableObjectListener(this.nativeObject.pointer, "addListener_CMovableObjectListener_callback");
			this.register_removeListener_CMovableObjectListener(this.nativeObject.pointer, "removeListener_CMovableObjectListener_callback");
			this.register_existListener_CMovableObjectListener(this.nativeObject.pointer, "existListener_CMovableObjectListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_queryLights_void(this.nativeObject.pointer, "queryLights_void_callback");
			this.register_getLightMask_void(this.nativeObject.pointer, "getLightMask_void_callback");
			this.register_setLightMask_ev_uint32(this.nativeObject.pointer, "setLightMask_ev_uint32_callback");
			this.register__getLightList_void(this.nativeObject.pointer, "_getLightList_void_callback");
			this.register_setCastShadows_ev_bool(this.nativeObject.pointer, "setCastShadows_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
			this.register_getTypeFlags_void(this.nativeObject.pointer, "getTypeFlags_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_isDebugDisplayEnabled_void(this.nativeObject.pointer, "isDebugDisplayEnabled_void_callback");
			this.register_getCastShadows_void(this.nativeObject.pointer, "getCastShadows_void_callback");
			this.register_getEdgeList_void(this.nativeObject.pointer, "getEdgeList_void_callback");
			this.register_hasEdgeList_void(this.nativeObject.pointer, "hasEdgeList_void_callback");
			this.register_getWorldBoundingBox_ev_bool(this.nativeObject.pointer, "getWorldBoundingBox_ev_bool_callback");
			this.register_getWorldBoundingBox_void(this.nativeObject.pointer, "getWorldBoundingBox_void_callback");
			this.register_getLightCapBounds_void(this.nativeObject.pointer, "getLightCapBounds_void_callback");
			this.register_getDarkCapBounds_CLight_Real(this.nativeObject.pointer, "getDarkCapBounds_CLight_Real_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
			this.register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(this.nativeObject.pointer, "getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
			this.register_getPointExtrusionDistance_CLight(this.nativeObject.pointer, "getPointExtrusionDistance_CLight_callback");
			this.register_updateEdgeListLightFacing_CEdgeData_CVector4(this.nativeObject.pointer, "updateEdgeListLightFacing_CEdgeData_CVector4_callback");
			this.register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(this.nativeObject.pointer, "generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
			this.register_extrudeBounds_CAxisAlignedBox_CVector4_Real(this.nativeObject.pointer, "extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
		}
	}
	
	public static GlobeCamera fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeCamera obj = null;
 		if(baseObj instanceof GlobeCamera)
		{
			obj = (GlobeCamera)baseObj;
		} else {
			obj = new GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeCamera");
			obj.increaseCast();
		}

		return obj;
	}
}
