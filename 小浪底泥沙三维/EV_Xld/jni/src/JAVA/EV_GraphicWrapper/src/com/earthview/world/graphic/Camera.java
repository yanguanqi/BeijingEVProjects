package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 摄像机类此类支持透视投影、正射投影，支持线画模式等渲染模式，能实现画中画，分屏等功能。
 */
public class Camera extends com.earthview.world.graphic.Frustum {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCamera", new CameraClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCameraProxy", new CameraClassFactory());
	}

	/**
	 * 摄像机监听器类此类通过接口响应，监听摄像机事件。
	 */
	public static class CameraListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCamera::CCameraListener", new CameraListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCamera::JCCameraListenerProxy", new CameraListenerClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CameraListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCCameraListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Camera$CameraListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void cameraPreRenderScene_CCamera_callback(long cam)
		{
			com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(camParamValue != null)
			{
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
			IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
			if (camParamValueClassFactory != null)
			{
				camParamValue.setDelegate(true);
				camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
				camParamValue.setDelegate(true);
				camParamValue.setInstancePointer(new InstancePointer(cam));
			}
			}
			cameraPreRenderScene(camParamValue);
		}

		native private void cameraPreRenderScene_CCamera(long pNativeObject, long cam);
		/**
		 * 渲染场景之前被访问
		 * @param cam 摄像机
		 */
		public void cameraPreRenderScene(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraPreRenderScene_CCamera(this.nativeObject.pointer, camParamValue);
		}
		native private void cameraPreRenderScene_CCamera_NoVirtual(long pNativeObject, long cam);
		protected void cameraPreRenderScene_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraPreRenderScene_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		}

		protected  void cameraPostRenderScene_CCamera_callback(long cam)
		{
			com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(camParamValue != null)
			{
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
			IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
			if (camParamValueClassFactory != null)
			{
				camParamValue.setDelegate(true);
				camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
				camParamValue.setDelegate(true);
				camParamValue.setInstancePointer(new InstancePointer(cam));
			}
			}
			cameraPostRenderScene(camParamValue);
		}

		native private void cameraPostRenderScene_CCamera(long pNativeObject, long cam);
		/**
		 * 渲染场景之后被访问
		 * @param cam 摄像机
		 */
		public void cameraPostRenderScene(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraPostRenderScene_CCamera(this.nativeObject.pointer, camParamValue);
		}
		native private void cameraPostRenderScene_CCamera_NoVirtual(long pNativeObject, long cam);
		protected void cameraPostRenderScene_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraPostRenderScene_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		}

		protected  void cameraDestroyed_CCamera_callback(long cam)
		{
			com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
			if(camParamValue != null)
			{
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
			IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
			if (camParamValueClassFactory != null)
			{
				camParamValue.setDelegate(true);
				camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
				camParamValue.setDelegate(true);
				camParamValue.setInstancePointer(new InstancePointer(cam));
			}
			}
			cameraDestroyed(camParamValue);
		}

		native private void cameraDestroyed_CCamera(long pNativeObject, long cam);
		/**
		 * 摄像机被销毁
		 * @param cam 摄像机
		 */
		public void cameraDestroyed(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraDestroyed_CCamera(this.nativeObject.pointer, camParamValue);
		}
		native private void cameraDestroyed_CCamera_NoVirtual(long pNativeObject, long cam);
		protected void cameraDestroyed_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			cameraDestroyed_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		}

		public CameraListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CameraListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_cameraPreRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraPostRenderScene_CCamera(long pNativeObject, String method);
		native protected void register_cameraDestroyed_CCamera(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_cameraPreRenderScene_CCamera(this.nativeObject.pointer, "cameraPreRenderScene_CCamera_callback");
				this.register_cameraPostRenderScene_CCamera(this.nativeObject.pointer, "cameraPostRenderScene_CCamera_callback");
				this.register_cameraDestroyed_CCamera(this.nativeObject.pointer, "cameraDestroyed_CCamera_callback");
			}
		}
		
		public static CameraListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CameraListener obj = null;
 			if(baseObj instanceof CameraListener)
			{
				obj = (CameraListener)baseObj;
			} else {
				obj = new CameraListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCameraListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CameraListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CameraListener emptyInstance = new CameraListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class CameraInternalRenderable extends com.earthview.world.graphic.Frustum.FrustumInternalRenderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCamera::CCameraInternalRenderable", new CameraInternalRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CCamera::JCCameraInternalRenderableProxy", new CameraInternalRenderableClassFactory());
		}

		public CameraInternalRenderable(com.earthview.world.graphic.Camera ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCCameraInternalRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Camera$CameraInternalRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得世界坐标转换矩阵
		 * @param xform 四维矩阵
		 */
		public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
		}
		native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
		protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
		{
			long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
			getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
		}

		public CameraInternalRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CameraInternalRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 获得材质
		 * @param  
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			return super.getMaterial_NoVirtual();
		}
		/**
		 * 获得技术
		 * @param  
		 */
		public com.earthview.world.graphic.Technique getTechnique()
		{
			return super.getTechnique_NoVirtual();
		}
		/**
		 * 获得渲染操作
		 * @param op 
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			super.getRenderOperation_NoVirtual(op);
		}
		/**
		 * 渲染开始时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 * @return 如果自动执行渲染过程返回true,手动执行返回false
		 */
		public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			return super.preRender_NoVirtual(sm, rsys);
		}
		/**
		 * 渲染完成时向外通知的事件
		 * @param sm 渲染场景
		 * @param rsys 渲染系统
		 */
		public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
		{
			super.postRender_NoVirtual(sm, rsys);
		}
		/**
		 * 获得渲染对象的世界变换矩阵的数量
		 * @param  
		 */
		public int getNumWorldTransforms()
		{
			return super.getNumWorldTransforms_NoVirtual();
		}
		/// <summary>
		/// 返回渲染实体相对虚拟相机的观察深度的平方
		/// </summary>
		/// <param name="cam"></param>
		/// <returns</returns>
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			return super.getSquaredViewDepth_NoVirtual(cam);
		}
		/**
		 * 获得光照的列表，按照相对于渲染实体的远近排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			return super.getLights_NoVirtual();
		}
		/**
		 * 是否投射投影
		 * @param  
		 */
		public boolean getCastsShadows()
		{
			return super.getCastsShadows_NoVirtual();
		}
		/**
		 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
		 * @param constantEntry CAutoConstantEntry的别名
		 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
		 */
		public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
		{
			super._updateCustomGpuParameter_NoVirtual(constantEntry, params);
		}
		/**
		 * 设置多边形渲染方式是否可重写
		 * @param override 设置参数
		 * @return true可以超越，false不可以
		 */
		public void setPolygonModeOverrideable(boolean override)
		{
			super.setPolygonModeOverrideable_NoVirtual(override);
		}
		/**
		 * 获得多边形渲染方式是否可重写
		 * @param  
		 */
		public boolean getPolygonModeOverrideable()
		{
			return super.getPolygonModeOverrideable_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数
		 * @param  
		 */
		public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
		{
			super.setCustomAmbient_NoVirtual(ambient);
		}
		/**
		 * 获取自定义环境光系数
		 * @param  
		 */
		public com.earthview.world.graphic.ColourValue getCustomAmbient()
		{
			return super.getCustomAmbient_NoVirtual();
		}
		/**
		 * 获取自定义环境光系数是否启用
		 * @param  
		 */
		public boolean getCustomAmbientEnabled()
		{
			return super.getCustomAmbientEnabled_NoVirtual();
		}
		/**
		 * 设置自定义环境光系数是否启用
		 * @param  
		 */
		public void setCustomAmbientEnabled(boolean enabled)
		{
			super.setCustomAmbientEnabled_NoVirtual(enabled);
		}
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			return super.getMovableObject_NoVirtual();
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
		{
			super.addListener_NoVirtual(ref_listener);
		}
		/**
		 * 移除监听器
		 * @param listener 
		 */
		public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
		{
			super.removeListener_NoVirtual(listener);
		}
		/**
		 * 添加监听器
		 * @param listener 
		 */
		public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
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
		public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
		{
			return super.getListener_NoVirtual(index);
		}
		/**
		 * 设置渲染系统的私有数据
		 * @param  
		 */
		public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
		{
			return super.getRenderSystemData_NoVirtual();
		}
		/**
		 * 获得渲染系统的私有数据
		 * @param  
		 */
		public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
		{
			super.setRenderSystemData_NoVirtual(ref_val);
		}
		
		native protected void register_getMaterial_void(long pNativeObject, String method);
		native protected void register_getTechnique_void(long pNativeObject, String method);
		native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
		native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
		native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
		native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
		native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
		native protected void register_getLights_void(long pNativeObject, String method);
		native protected void register_getCastsShadows_void(long pNativeObject, String method);
		native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
		native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
		native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
		native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
		native protected void register_getCustomAmbient_void(long pNativeObject, String method);
		native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
		native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
		native protected void register_getMovableObject_void(long pNativeObject, String method);
		native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
		native protected void register_getListenerCount_void(long pNativeObject, String method);
		native protected void register_getListener_ev_uint32(long pNativeObject, String method);
		native protected void register_getRenderSystemData_void(long pNativeObject, String method);
		native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
				this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
				this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
				this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
				this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
				this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
				this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
				this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
				this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
				this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
				this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
				this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
				this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
				this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
				this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
				this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
				this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
				this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
				this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
				this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
				this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
				this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
				this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
				this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
				this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
			}
		}
		
		public static CameraInternalRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CameraInternalRenderable obj = null;
 			if(baseObj instanceof CameraInternalRenderable)
			{
				obj = (CameraInternalRenderable)baseObj;
			} else {
				obj = new CameraInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CCameraInternalRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CameraInternalRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CameraInternalRenderable emptyInstance = new CameraInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	protected  long getCameraRenderablePtr_void_callback()
	{
		com.earthview.world.graphic.Camera.CameraInternalRenderable returnValue = getCameraRenderablePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCameraRenderablePtr_void(long pNativeObject);
	public com.earthview.world.graphic.Camera.CameraInternalRenderable getCameraRenderablePtr()
	{
		long returnValue = getCameraRenderablePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera.CameraInternalRenderable __returnValue = new com.earthview.world.graphic.Camera.CameraInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CCameraInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera.CameraInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCameraInternalRenderable");
		}
		return __returnValue;
	}
	native private long getCameraRenderablePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Camera.CameraInternalRenderable getCameraRenderablePtr_NoVirtual()
	{
		long returnValue = getCameraRenderablePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera.CameraInternalRenderable __returnValue = new com.earthview.world.graphic.Camera.CameraInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CCameraInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera.CameraInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCameraInternalRenderable");
		}
		return __returnValue;
	}

	native private void OperatorAssign_CCamera(long pNativeObject, long rhs);
	///virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable& getCameraRenderable(){EV_ASSERT(mpRenderable != NULL); return *mpRenderable;}
	public void OperatorAssign(com.earthview.world.graphic.Camera rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CCamera(this.nativeObject.pointer, rhsParamValue);
	}
	native private boolean shouldChangeProjectMatrix_CNode_CNode_CMatrix4(long pNativeObject, long rootNode, long lockTarget, long projectMatrixRS);
	public boolean shouldChangeProjectMatrix(com.earthview.world.graphic.Node rootNode, com.earthview.world.graphic.Node lockTarget, com.earthview.world.spatial.math.Matrix4 projectMatrixRS)
	{
		long rootNodeParamValue = (rootNode == null ? 0L : rootNode.nativeObject.pointer);
		long lockTargetParamValue = (lockTarget == null ? 0L : lockTarget.nativeObject.pointer);
		long projectMatrixRSParamValue = projectMatrixRS.nativeObject.pointer;
		boolean returnValue = shouldChangeProjectMatrix_CNode_CNode_CMatrix4(this.nativeObject.pointer, rootNodeParamValue, lockTargetParamValue, projectMatrixRSParamValue);
		return returnValue;
	}
	native private boolean isViewOutOfDate_void(long pNativeObject);
	/// Internal functions for calcs
	public boolean isViewOutOfDate()
	{
		boolean returnValue = isViewOutOfDate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isViewOutOfDate_void_NoVirtual(long pNativeObject);
	protected boolean isViewOutOfDate_NoVirtual()
	{
		boolean returnValue = isViewOutOfDate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void invalidateFrustum_void(long pNativeObject);
	//// Signal to update frustum information.
	public void invalidateFrustum()
	{
		invalidateFrustum_void(this.nativeObject.pointer);
	}
	native private void invalidateFrustum_void_NoVirtual(long pNativeObject);
	protected void invalidateFrustum_NoVirtual()
	{
		invalidateFrustum_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void invalidateView_void(long pNativeObject);
	//// Signal to update view information.
	public void invalidateView()
	{
		invalidateView_void(this.nativeObject.pointer);
	}
	native private void invalidateView_void_NoVirtual(long pNativeObject);
	protected void invalidateView_NoVirtual()
	{
		invalidateView_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setWindowImpl_void_callback()
	{
		setWindowImpl();
	}

	native private void setWindowImpl_void(long pNativeObject);
	/**
	 * 使用参数设置真实窗口这方法被需求访问
	 * @param  
	 */
	public void setWindowImpl()
	{
		setWindowImpl_void(this.nativeObject.pointer);
	}
	native private void setWindowImpl_void_NoVirtual(long pNativeObject);
	protected void setWindowImpl_NoVirtual()
	{
		setWindowImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getRayForwardIntersect_CVector3_CVector3_Real_callback(long anchor, long dir, double planeOffset)
	{
		com.earthview.world.spatial.math.Vector3 anchorParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		anchorParamValue.setDelegate(true);
		anchorParamValue.setInstancePointer(new InstancePointer(anchor));
		IClassFactory anchorParamValueClassFactory = GlobalClassFactoryMap.get(anchorParamValue.getCppInstanceTypeName());
		if (anchorParamValueClassFactory != null)
		{
			anchorParamValue.setDelegate(true);
			anchorParamValue = (com.earthview.world.spatial.math.Vector3)anchorParamValueClassFactory.create();
			anchorParamValue.setDelegate(true);
			anchorParamValue.setInstancePointer(new InstancePointer(anchor));
		}
		com.earthview.world.spatial.math.Vector3 dirParamValue = (dir == 0L ? null : new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate));
		if(dirParamValue != null)
		{
		dirParamValue.setDelegate(true);
		dirParamValue.setInstancePointer(new InstancePointer(dir));
		IClassFactory dirParamValueClassFactory = GlobalClassFactoryMap.get(dirParamValue.getCppInstanceTypeName());
		if (dirParamValueClassFactory != null)
		{
			dirParamValue.setDelegate(true);
			dirParamValue = (com.earthview.world.spatial.math.Vector3)dirParamValueClassFactory.create();
			dirParamValue.setDelegate(true);
			dirParamValue.setInstancePointer(new InstancePointer(dir));
		}
		}
		double planeOffsetParamValue = planeOffset;
		com.earthview.world.spatial.math.Vector4List returnValue = getRayForwardIntersect(anchorParamValue, dirParamValue, planeOffsetParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRayForwardIntersect_CVector3_CVector3_Real(long pNativeObject, long anchor, long dir, double planeOffset);
	public com.earthview.world.spatial.math.Vector4List getRayForwardIntersect(com.earthview.world.spatial.math.Vector3 anchor, com.earthview.world.spatial.math.Vector3 dir, double planeOffset)
	{
		long anchorParamValue = anchor.nativeObject.pointer;
		long dirParamValue = (dir == null ? 0L : dir.nativeObject.pointer);
		double planeOffsetParamValue = planeOffset;
		long returnValue = getRayForwardIntersect_CVector3_CVector3_Real(this.nativeObject.pointer, anchorParamValue, dirParamValue, planeOffsetParamValue);
		com.earthview.world.spatial.math.Vector4List __returnValue = new com.earthview.world.spatial.math.Vector4List(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Vector4List");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4List)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Vector4List");
		}
		return __returnValue;
	}
	native private long getRayForwardIntersect_CVector3_CVector3_Real_NoVirtual(long pNativeObject, long anchor, long dir, double planeOffset);
	protected com.earthview.world.spatial.math.Vector4List getRayForwardIntersect_NoVirtual(com.earthview.world.spatial.math.Vector3 anchor, com.earthview.world.spatial.math.Vector3 dir, double planeOffset)
	{
		long anchorParamValue = anchor.nativeObject.pointer;
		long dirParamValue = (dir == null ? 0L : dir.nativeObject.pointer);
		double planeOffsetParamValue = planeOffset;
		long returnValue = getRayForwardIntersect_CVector3_CVector3_Real_NoVirtual(this.nativeObject.pointer, anchorParamValue, dirParamValue, planeOffsetParamValue);
		com.earthview.world.spatial.math.Vector4List __returnValue = new com.earthview.world.spatial.math.Vector4List(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Vector4List");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4List)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Vector4List");
		}
		return __returnValue;
	}

	/**
	 * 构造函数
	 * @param name 
	 * @param sm 
	 */
	public Camera(String name, com.earthview.world.graphic.SceneManager ref_sm) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_smPtr = new BasePointer(ref_sm);
		list.add("ref_sm", ref_smPtr.get());
		Create("JCCameraProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Camera".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addListener_CCameraListener_callback(long ref_l)
	{
		com.earthview.world.graphic.Camera.CameraListener ref_lParamValue = (ref_l == 0L ? null : new com.earthview.world.graphic.Camera.CameraListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lParamValue != null)
		{
		ref_lParamValue.setDelegate(true);
		ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		IClassFactory ref_lParamValueClassFactory = GlobalClassFactoryMap.get(ref_lParamValue.getCppInstanceTypeName());
		if (ref_lParamValueClassFactory != null)
		{
			ref_lParamValue.setDelegate(true);
			ref_lParamValue = (com.earthview.world.graphic.Camera.CameraListener)ref_lParamValueClassFactory.create();
			ref_lParamValue.setDelegate(true);
			ref_lParamValue.setInstancePointer(new InstancePointer(ref_l));
		}
		}
		addListener(ref_lParamValue);
	}

	native private void addListener_CCameraListener(long pNativeObject, long ref_l);
	/**
	 * 为摄像机添加一个监视器
	 * @param 1 
	 */
	public void addListener(com.earthview.world.graphic.Camera.CameraListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CCameraListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void addListener_CCameraListener_NoVirtual(long pNativeObject, long ref_l);
	protected void addListener_NoVirtual(com.earthview.world.graphic.Camera.CameraListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CCameraListener_NoVirtual(this.nativeObject.pointer, ref_lParamValue);
	}

	protected  void removeListener_CCameraListener_callback(long l)
	{
		com.earthview.world.graphic.Camera.CameraListener lParamValue = (l == 0L ? null : new com.earthview.world.graphic.Camera.CameraListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(lParamValue != null)
		{
		lParamValue.setDelegate(true);
		lParamValue.setInstancePointer(new InstancePointer(l));
		IClassFactory lParamValueClassFactory = GlobalClassFactoryMap.get(lParamValue.getCppInstanceTypeName());
		if (lParamValueClassFactory != null)
		{
			lParamValue.setDelegate(true);
			lParamValue = (com.earthview.world.graphic.Camera.CameraListener)lParamValueClassFactory.create();
			lParamValue.setDelegate(true);
			lParamValue.setInstancePointer(new InstancePointer(l));
		}
		}
		removeListener(lParamValue);
	}

	native private void removeListener_CCameraListener(long pNativeObject, long l);
	/**
	 * 为摄像机移除一个监视器
	 * @param 1 
	 */
	public void removeListener(com.earthview.world.graphic.Camera.CameraListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CCameraListener(this.nativeObject.pointer, lParamValue);
	}
	native private void removeListener_CCameraListener_NoVirtual(long pNativeObject, long l);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.Camera.CameraListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CCameraListener_NoVirtual(this.nativeObject.pointer, lParamValue);
	}

	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 返回渲染该摄像机的场景管理的指针
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void setPolygonMode_PolygonMode(long pNativeObject, int sd);
	/**
	 * 设置多边形渲染模式共三种模型
	 * @param sd 
	 */
	public void setPolygonMode(com.earthview.world.graphic.PolygonMode sd)
	{
		int sdParamValue = sd.getValue();
		setPolygonMode_PolygonMode(this.nativeObject.pointer, sdParamValue);
	}
	native private int getPolygonMode_void(long pNativeObject);
	/**
	 * 获取多边形渲染模式共三种模型
	 * @param sd 
	 */
	public com.earthview.world.graphic.PolygonMode getPolygonMode()
	{
		int returnValue = getPolygonMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PolygonMode.toEnum(returnValue);
	}
	native private void setPosition_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置摄像机的位置
	 * @param x 
	 * @param y 
	 * @param z 
	 */
	public void setPosition(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPosition_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setPosition_CVector3(long pNativeObject, long vec);
	/**
	 * 设置摄像机的位置
	 * @param vec 
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setPosition_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private long getPosition_void(long pNativeObject);
	/**
	 * 获取摄像机的位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
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
	native private void move_CVector3(long pNativeObject, long vec);
	/**
	 * 在世界坐标系下移动摄像机
	 * @param vec 位置增量
	 */
	public void move(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		move_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void moveRelative_CVector3(long pNativeObject, long vec);
	/**
	 * 在相机自身坐标系下移动摄像机
	 * @param vec 位置增量
	 */
	public void moveRelative(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		moveRelative_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setDirection_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置相机朝向
	 * @param x 
	 * @param y 
	 * @param z 
	 */
	public void setDirection(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setDirection_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setDirection_CVector3(long pNativeObject, long vec);
	/**
	 * 设置相机朝向
	 * @param vec 
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setDirection_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private long getDirection_void(long pNativeObject);
	/**
	 * 获得相机朝向
	 * @param  
	 * @return 方向向量
	 */
	public com.earthview.world.spatial.math.Vector3 getDirection()
	{
		long returnValue = getDirection_void(this.nativeObject.pointer);
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
	native private long getUp_void(long pNativeObject);
	/**
	 * 获得上方向
	 * @param  
	 * @return 方向向量
	 */
	public com.earthview.world.spatial.math.Vector3 getUp()
	{
		long returnValue = getUp_void(this.nativeObject.pointer);
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
	native private long getRight_void(long pNativeObject);
	/**
	 * 获得右方向
	 * @param  
	 * @return 方向向量
	 */
	public com.earthview.world.spatial.math.Vector3 getRight()
	{
		long returnValue = getRight_void(this.nativeObject.pointer);
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
	native private void lookAt_CVector3(long pNativeObject, long targetPoint);
	/**
	 * 设置朝向目标点
	 * @param targetPoint 目标点
	 */
	public void lookAt(com.earthview.world.spatial.math.Vector3 targetPoint)
	{
		long targetPointParamValue = targetPoint.nativeObject.pointer;
		lookAt_CVector3(this.nativeObject.pointer, targetPointParamValue);
	}
	native private void lookAt_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 设置朝向目标点
	 * @param x 
	 * @param y 
	 * @param z 
	 */
	public void lookAt(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		lookAt_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void roll_CRadian(long pNativeObject, long angle);
	/**
	 * 将摄像机绕Z轴逆时针旋转指定角度
	 * @param angle 角度
	 */
	public void roll(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		roll_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void yaw_CRadian(long pNativeObject, long angle);
	/**
	 * 将摄像机绕Y轴逆时针旋转指定角度
	 * @param angle 角度
	 */
	public void yaw(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		yaw_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void pitch_CRadian(long pNativeObject, long angle);
	/**
	 * 将摄像机绕X轴上下旋转指定角度
	 * @param angle 角度
	 */
	public void pitch(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		pitch_CRadian(this.nativeObject.pointer, angleParamValue);
	}
	native private void rotate_CVector3_CRadian(long pNativeObject, long axis, long angle);
	/**
	 * 绕任意轴旋转角度
	 * @param axis 三维向量
	 * @param angle 角度
	 */
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		long axisParamValue = axis.nativeObject.pointer;
		long angleParamValue = angle.nativeObject.pointer;
		rotate_CVector3_CRadian(this.nativeObject.pointer, axisParamValue, angleParamValue);
	}
	native private void rotate_CQuaternion(long pNativeObject, long q);
	/**
	 * 使用四元数进行旋转
	 * @param q 四元数
	 */
	public void rotate(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		rotate_CQuaternion(this.nativeObject.pointer, qParamValue);
	}
	protected  long getAbsoluteProjectMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getAbsoluteProjectMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  boolean isLockingToTarget_void_callback()
	{
		boolean returnValue = isLockingToTarget();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isLockingToTarget_void(long pNativeObject);
	/// <summary>
	///返回相机是否锁定某个目标
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

	protected  long getLockTarget_void_callback()
	{
		com.earthview.world.graphic.SceneNode returnValue = getLockTarget();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  boolean isSlaveCamera_void_callback()
	{
		boolean returnValue = isSlaveCamera();
		boolean __returnValue = returnValue;
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

	native private void setFixedYawAxis_ev_bool_CVector3(long pNativeObject, boolean useFixed, long fixedAxis);
	/**
	 * 指定摄像机绕本地Y轴还是指定的固定轴旋转
	 * @param useFixed false，使用本地Y周；true，使用指定固定轴
	 * @param fixedAxis 
	 */
	public void setFixedYawAxis(boolean useFixed, com.earthview.world.spatial.math.Vector3 fixedAxis)
	{
		boolean useFixedParamValue = useFixed;
		long fixedAxisParamValue = fixedAxis.nativeObject.pointer;
		setFixedYawAxis_ev_bool_CVector3(this.nativeObject.pointer, useFixedParamValue, fixedAxisParamValue);
	}
	native private void setFixedYawAxis_ev_bool(long pNativeObject, boolean useFixed);
	public void setFixedYawAxis(boolean useFixed)
	{
		boolean useFixedParamValue = useFixed;
		setFixedYawAxis_ev_bool(this.nativeObject.pointer, useFixedParamValue);
	}
	native private long getOrientation_void(long pNativeObject);
	/**
	 * 获取摄像机当前旋转四元数
	 * @param  
	 * @return 四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		long returnValue = getOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setOrientation_CQuaternion(long pNativeObject, long q);
	/**
	 * 设置摄像机当前旋转四元数
	 * @param q 四元数
	 */
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		long qParamValue = q.nativeObject.pointer;
		setOrientation_CQuaternion(this.nativeObject.pointer, qParamValue);
	}
	native private void _renderScene_CViewport_ev_bool(long pNativeObject, long ref_vp, boolean includeOverlays);
	/**
	 * 渲染场景将渲染场景与摄像机联系到一起，从视口开始渲染
	 * @param vp 
	 * @param includeOverlays 
	 */
	public void _renderScene(com.earthview.world.graphic.Viewport ref_vp, boolean includeOverlays)
	{
		long ref_vpParamValue = (ref_vp == null ? 0L : ref_vp.nativeObject.pointer);
		boolean includeOverlaysParamValue = includeOverlays;
		_renderScene_CViewport_ev_bool(this.nativeObject.pointer, ref_vpParamValue, includeOverlaysParamValue);
	}
	native private void _notifyRenderedFaces_ev_uint32(long pNativeObject, long numfaces);
	/**
	 * 通知渲染的三角面数量内部方法
	 * @param numfaces 
	 */
	public void _notifyRenderedFaces(long numfaces)
	{
		long numfacesParamValue = numfaces;
		_notifyRenderedFaces_ev_uint32(this.nativeObject.pointer, numfacesParamValue);
	}
	native private void _notifyRenderedBatches_ev_uint32(long pNativeObject, long numbatches);
	/**
	 * 通知渲染的批次内部方法
	 * @param numbatches 
	 */
	public void _notifyRenderedBatches(long numbatches)
	{
		long numbatchesParamValue = numbatches;
		_notifyRenderedBatches_ev_uint32(this.nativeObject.pointer, numbatchesParamValue);
	}
	native private void _notifyRenderedVertices_ev_uint32(long pNativeObject, long numvertices);
	/**
	 * 通知渲染的顶点数量内部方法
	 * @param numvertices 
	 */
	public void _notifyRenderedVertices(long numvertices)
	{
		long numverticesParamValue = numvertices;
		_notifyRenderedVertices_ev_uint32(this.nativeObject.pointer, numverticesParamValue);
	}
	native private long _getNumRenderedFaces_void(long pNativeObject);
	/**
	 * 获取渲染的三角面数量内部方法
	 * @param  
	 */
	public long _getNumRenderedFaces()
	{
		long returnValue = _getNumRenderedFaces_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getNumRenderedBatches_void(long pNativeObject);
	/**
	 * 获取渲染的批次内部方法
	 * @param  
	 */
	public long _getNumRenderedBatches()
	{
		long returnValue = _getNumRenderedBatches_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getNumRenderedVertices_void(long pNativeObject);
	/**
	 * 获取渲染的顶点数量内部方法
	 * @param  
	 */
	public long _getNumRenderedVertices()
	{
		long returnValue = _getNumRenderedVertices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDerivedOrientation_void(long pNativeObject);
	/**
	 * 取得摄像机累积的方向，包括从节点累积的旋转
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getDerivedOrientation()
	{
		long returnValue = getDerivedOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getDerivedPosition_void(long pNativeObject);
	/**
	 * 取得摄像机累积的位置，包括从节点累积的平移
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedPosition()
	{
		long returnValue = getDerivedPosition_void(this.nativeObject.pointer);
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
	native private long getDerivedDirection_void(long pNativeObject);
	/**
	 * 取得摄像机累积的方向向量，包括从节点累积的矩阵变换
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedDirection()
	{
		long returnValue = getDerivedDirection_void(this.nativeObject.pointer);
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
	native private long getDerivedUp_void(long pNativeObject);
	/**
	 * 取得摄像机累积的上方向，包括从节点累积的变换
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedUp()
	{
		long returnValue = getDerivedUp_void(this.nativeObject.pointer);
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
	native private long getDerivedRight_void(long pNativeObject);
	/**
	 * 取得摄像机累积的右方向，包括从节点累积的变换
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getDerivedRight()
	{
		long returnValue = getDerivedRight_void(this.nativeObject.pointer);
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
	native private long getRealOrientation_void(long pNativeObject);
	/**
	 * 获取摄像机真实世界的旋转四元数包括从节点累积的旋转
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getRealOrientation()
	{
		long returnValue = getRealOrientation_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getRealPosition_void(long pNativeObject);
	/**
	 * 获取摄像机真实世界位置坐标包括从节点累积的旋转
	 * @param  
	 * @return 三维矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getRealPosition()
	{
		long returnValue = getRealPosition_void(this.nativeObject.pointer);
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
	native private long getRealDirection_void(long pNativeObject);
	/**
	 * 获取摄像机真实世界方向包括从节点累积的旋转
	 * @param  
	 * @return 三维矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getRealDirection()
	{
		long returnValue = getRealDirection_void(this.nativeObject.pointer);
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
	native private long getRealUp_void(long pNativeObject);
	/**
	 * 获取摄像机真实世界向上矢量包括从节点累积的旋转
	 * @param  
	 * @return 三维矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getRealUp()
	{
		long returnValue = getRealUp_void(this.nativeObject.pointer);
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
	native private long getRealRight_void(long pNativeObject);
	/**
	 * 获取摄像机真实世界向右矢量包括从节点累积的旋转
	 * @param  
	 * @return 三维矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getRealRight()
	{
		long returnValue = getRealRight_void(this.nativeObject.pointer);
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
	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获得可移动的类型
	 * @param  
	 * @return 可移动的类型
	 */
	public String getMovableType()
	{
		String returnValue = getMovableType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMovableType_void_NoVirtual(long pNativeObject);
	protected String getMovableType_NoVirtual()
	{
		String returnValue = getMovableType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setAutoTracking_ev_bool_CSceneNode_CVector3(long pNativeObject, boolean enabled, long ref_target, long offset);
	/**
	 * 设置是否启用自动跟踪场景节点
	 * @param enabled true：摄像机将追踪场景节点作为下个参数；false：停止跟踪
	 * @param target 摄像机追踪场景点，追踪结束之前不要删除此场景节点
	 * @param offset 
	 */
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 offset)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		long offsetParamValue = offset.nativeObject.pointer;
		setAutoTracking_ev_bool_CSceneNode_CVector3(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue, offsetParamValue);
	}
	native private void setAutoTracking_ev_bool_CSceneNode(long pNativeObject, boolean enabled, long ref_target);
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target)
	{
		boolean enabledParamValue = enabled;
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		setAutoTracking_ev_bool_CSceneNode(this.nativeObject.pointer, enabledParamValue, ref_targetParamValue);
	}
	native private void setAutoTracking_ev_bool(long pNativeObject, boolean enabled);
	public void setAutoTracking(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setAutoTracking_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setLodBias_Real(long pNativeObject, double factor);
	/**
	 * 设置摄像机LOD偏移值
	 * @param factor 默认为1.0
	 */
	public void setLodBias(double factor)
	{
		double factorParamValue = factor;
		setLodBias_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private void setLodBias_void(long pNativeObject);
	public void setLodBias()
	{
		setLodBias_void(this.nativeObject.pointer);
	}
	native private double getLodBias_void(long pNativeObject);
	/**
	 * 获取当前摄像机LOD偏移值
	 * @param  
	 */
	public double getLodBias()
	{
		double returnValue = getLodBias_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setLodCamera_CCamera_callback(long ref_lodCam)
	{
		com.earthview.world.graphic.Camera ref_lodCamParamValue = (ref_lodCam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_lodCamParamValue != null)
		{
		ref_lodCamParamValue.setDelegate(true);
		ref_lodCamParamValue.setInstancePointer(new InstancePointer(ref_lodCam));
		IClassFactory ref_lodCamParamValueClassFactory = GlobalClassFactoryMap.get(ref_lodCamParamValue.getCppInstanceTypeName());
		if (ref_lodCamParamValueClassFactory != null)
		{
			ref_lodCamParamValue.setDelegate(true);
			ref_lodCamParamValue = (com.earthview.world.graphic.Camera)ref_lodCamParamValueClassFactory.create();
			ref_lodCamParamValue.setDelegate(true);
			ref_lodCamParamValue.setInstancePointer(new InstancePointer(ref_lodCam));
		}
		}
		setLodCamera(ref_lodCamParamValue);
	}

	native private void setLodCamera_CCamera(long pNativeObject, long ref_lodCam);
	/**
	 * 设置一个摄像机指针，可以终止LOD设置
	 * @param lodCam 摄像机指针
	 */
	public void setLodCamera(com.earthview.world.graphic.Camera ref_lodCam)
	{
		long ref_lodCamParamValue = (ref_lodCam == null ? 0L : ref_lodCam.nativeObject.pointer);
		setLodCamera_CCamera(this.nativeObject.pointer, ref_lodCamParamValue);
	}
	native private void setLodCamera_CCamera_NoVirtual(long pNativeObject, long ref_lodCam);
	protected void setLodCamera_NoVirtual(com.earthview.world.graphic.Camera ref_lodCam)
	{
		long ref_lodCamParamValue = (ref_lodCam == null ? 0L : ref_lodCam.nativeObject.pointer);
		setLodCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_lodCamParamValue);
	}

	protected  long getLodCamera_void_callback()
	{
		com.earthview.world.graphic.Camera returnValue = getLodCamera();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLodCamera_void(long pNativeObject);
	/**
	 * 获取一个摄像机指针，可以终止LOD设置
	 * @param  
	 * @return 摄像机指针
	 */
	public com.earthview.world.graphic.Camera getLodCamera()
	{
		long returnValue = getLodCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	native private long getLodCamera_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Camera getLodCamera_NoVirtual()
	{
		long returnValue = getLodCamera_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}

	native private long getCameraToViewportRay_Real_Real(long pNativeObject, double screenx, double screeny);
	/**
	 * 通过一个视口位置从摄像机获取一个世界空间射线作为投射
	 * @param screenx 射线与视口的相交
	 * @param screeny 射线与视口的相交
	 */
	public com.earthview.world.spatial.math.Ray getCameraToViewportRay(double screenx, double screeny)
	{
		double screenxParamValue = screenx;
		double screenyParamValue = screeny;
		long returnValue = getCameraToViewportRay_Real_Real(this.nativeObject.pointer, screenxParamValue, screenyParamValue);
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
	native private void getCameraToViewportRay_Real_Real_CRay(long pNativeObject, double screenx, double screeny, long outRay);
	/**
	 * 通过一个视口位置从摄像机获取一个世界空间射线作为投射
	 * @param screenx 射线与视口的相交
	 * @param screeny 射线与视口的相交
	 * @param outRay 射线实例的填充结果
	 */
	public void getCameraToViewportRay(double screenx, double screeny, com.earthview.world.spatial.math.Ray outRay)
	{
		double screenxParamValue = screenx;
		double screenyParamValue = screeny;
		long outRayParamValue = (outRay == null ? 0L : outRay.nativeObject.pointer);
		getCameraToViewportRay_Real_Real_CRay(this.nativeObject.pointer, screenxParamValue, screenyParamValue, outRayParamValue);
	}
	native private long getCameraToViewportBoxVolume_Real_Real_Real_Real_ev_bool(long pNativeObject, double screenLeft, double screenTop, double screenRight, double screenBottom, boolean includeFarPlane);
	/**
	 * 根据视口矩形，获取一个封闭世界空间容器体积
	 * @param screenLeft 屏幕矩形的边界
	 * @param screenTop 屏幕矩形的边界
	 * @param screenRight 屏幕矩形的边界
	 * @param screenBottom 屏幕矩形的边界
	 * @param includeFarPlane 为真，体积被离摄像机远的面截断
	 */
	public com.earthview.world.spatial.math.PlaneBoundedVolume getCameraToViewportBoxVolume(double screenLeft, double screenTop, double screenRight, double screenBottom, boolean includeFarPlane)
	{
		double screenLeftParamValue = screenLeft;
		double screenTopParamValue = screenTop;
		double screenRightParamValue = screenRight;
		double screenBottomParamValue = screenBottom;
		boolean includeFarPlaneParamValue = includeFarPlane;
		long returnValue = getCameraToViewportBoxVolume_Real_Real_Real_Real_ev_bool(this.nativeObject.pointer, screenLeftParamValue, screenTopParamValue, screenRightParamValue, screenBottomParamValue, includeFarPlaneParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolume __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolume)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		}
		return __returnValue;
	}
	native private long getCameraToViewportBoxVolume_Real_Real_Real_Real(long pNativeObject, double screenLeft, double screenTop, double screenRight, double screenBottom);
	public com.earthview.world.spatial.math.PlaneBoundedVolume getCameraToViewportBoxVolume(double screenLeft, double screenTop, double screenRight, double screenBottom)
	{
		double screenLeftParamValue = screenLeft;
		double screenTopParamValue = screenTop;
		double screenRightParamValue = screenRight;
		double screenBottomParamValue = screenBottom;
		long returnValue = getCameraToViewportBoxVolume_Real_Real_Real_Real(this.nativeObject.pointer, screenLeftParamValue, screenTopParamValue, screenRightParamValue, screenBottomParamValue);
		com.earthview.world.spatial.math.PlaneBoundedVolume __returnValue = new com.earthview.world.spatial.math.PlaneBoundedVolume(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneBoundedVolume)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPlaneBoundedVolume");
		}
		return __returnValue;
	}
	native private void getCameraToViewportBoxVolume_Real_Real_Real_Real_CPlaneBoundedVolume_ev_bool(long pNativeObject, double screenLeft, double screenTop, double screenRight, double screenBottom, long outVolume, boolean includeFarPlane);
	/**
	 * 根据视口矩形，获取一个封闭世界空间容器体积
	 * @param screenLeft 屏幕矩形的边界
	 * @param screenTop 屏幕矩形的边界
	 * @param screenRight 屏幕矩形的边界
	 * @param screenBottom 屏幕矩形的边界
	 * @param outVolume 平面容器的填充结果
	 * @param includeFarPlane 为真，体积被离摄像机远的面截断
	 */
	public void getCameraToViewportBoxVolume(double screenLeft, double screenTop, double screenRight, double screenBottom, com.earthview.world.spatial.math.PlaneBoundedVolume outVolume, boolean includeFarPlane)
	{
		double screenLeftParamValue = screenLeft;
		double screenTopParamValue = screenTop;
		double screenRightParamValue = screenRight;
		double screenBottomParamValue = screenBottom;
		long outVolumeParamValue = (outVolume == null ? 0L : outVolume.nativeObject.pointer);
		boolean includeFarPlaneParamValue = includeFarPlane;
		getCameraToViewportBoxVolume_Real_Real_Real_Real_CPlaneBoundedVolume_ev_bool(this.nativeObject.pointer, screenLeftParamValue, screenTopParamValue, screenRightParamValue, screenBottomParamValue, outVolumeParamValue, includeFarPlaneParamValue);
	}
	native private void getCameraToViewportBoxVolume_Real_Real_Real_Real_CPlaneBoundedVolume(long pNativeObject, double screenLeft, double screenTop, double screenRight, double screenBottom, long outVolume);
	public void getCameraToViewportBoxVolume(double screenLeft, double screenTop, double screenRight, double screenBottom, com.earthview.world.spatial.math.PlaneBoundedVolume outVolume)
	{
		double screenLeftParamValue = screenLeft;
		double screenTopParamValue = screenTop;
		double screenRightParamValue = screenRight;
		double screenBottomParamValue = screenBottom;
		long outVolumeParamValue = (outVolume == null ? 0L : outVolume.nativeObject.pointer);
		getCameraToViewportBoxVolume_Real_Real_Real_Real_CPlaneBoundedVolume(this.nativeObject.pointer, screenLeftParamValue, screenTopParamValue, screenRightParamValue, screenBottomParamValue, outVolumeParamValue);
	}
	native private double _getLodBiasInverse_void(long pNativeObject);
	/**
	 * 获取LOD估算值内部方法
	 * @param  
	 */
	public double _getLodBiasInverse()
	{
		double returnValue = _getLodBiasInverse_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _autoTrack_void(long pNativeObject);
	/**
	 * 自动追踪内部方法
	 * @param  
	 */
	public void _autoTrack()
	{
		_autoTrack_void(this.nativeObject.pointer);
	}
	protected  void setWindow_Real_Real_Real_Real_callback(double Left, double Top, double Right, double Bottom)
	{
		double LeftParamValue = Left;
		double TopParamValue = Top;
		double RightParamValue = Right;
		double BottomParamValue = Bottom;
		setWindow(LeftParamValue, TopParamValue, RightParamValue, BottomParamValue);
	}

	native private void setWindow_Real_Real_Real_Real(long pNativeObject, double Left, double Top, double Right, double Bottom);
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
		double LeftParamValue = Left;
		double TopParamValue = Top;
		double RightParamValue = Right;
		double BottomParamValue = Bottom;
		setWindow_Real_Real_Real_Real(this.nativeObject.pointer, LeftParamValue, TopParamValue, RightParamValue, BottomParamValue);
	}
	native private void setWindow_Real_Real_Real_Real_NoVirtual(long pNativeObject, double Left, double Top, double Right, double Bottom);
	protected void setWindow_NoVirtual(double Left, double Top, double Right, double Bottom)
	{
		double LeftParamValue = Left;
		double TopParamValue = Top;
		double RightParamValue = Right;
		double BottomParamValue = Bottom;
		setWindow_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, LeftParamValue, TopParamValue, RightParamValue, BottomParamValue);
	}

	protected  void resetWindow_void_callback()
	{
		resetWindow();
	}

	native private void resetWindow_void(long pNativeObject);
	/**
	 * 重置窗口
	 * @param  
	 */
	public void resetWindow()
	{
		resetWindow_void(this.nativeObject.pointer);
	}
	native private void resetWindow_void_NoVirtual(long pNativeObject);
	protected void resetWindow_NoVirtual()
	{
		resetWindow_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isWindowSet_void_callback()
	{
		boolean returnValue = isWindowSet();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isWindowSet_void(long pNativeObject);
	/**
	 * 是否设置了窗口
	 * @param  
	 * @return 为真，被使用，否则没被使用
	 */
	public boolean isWindowSet()
	{
		boolean returnValue = isWindowSet_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isWindowSet_void_NoVirtual(long pNativeObject);
	protected boolean isWindowSet_NoVirtual()
	{
		boolean returnValue = isWindowSet_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getWindowPlanes_void(long pNativeObject);
	/**
	 * 获取可视窗口裁剪面只有isWindowSet被设置为真的时候有效
	 * @param  
	 */
	public com.earthview.world.spatial.math.PlaneList getWindowPlanes()
	{
		long returnValue = getWindowPlanes_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.PlaneList __returnValue = new com.earthview.world.spatial.math.PlaneList(CreatedWhenConstruct.CWC_NotToCreate, "PlaneList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.PlaneList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "PlaneList");
		}
		return __returnValue;
	}
	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获得包围盒半径
	 * @param  
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBoundingRadius_void_NoVirtual(long pNativeObject);
	protected double getBoundingRadius_NoVirtual()
	{
		double returnValue = getBoundingRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getAutoTrackTarget_void(long pNativeObject);
	/**
	 * 获取摄像机的自动追踪目标
	 * @param  
	 * @return 节点
	 */
	public com.earthview.world.graphic.SceneNode getAutoTrackTarget()
	{
		long returnValue = getAutoTrackTarget_void(this.nativeObject.pointer);
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
	native private long getAutoTrackOffset_void(long pNativeObject);
	/**
	 * 如果自动追踪，获取摄像机当前偏移量
	 * @param  
	 * @return 矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getAutoTrackOffset()
	{
		long returnValue = getAutoTrackOffset_void(this.nativeObject.pointer);
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
	native private long getViewport_void(long pNativeObject);
	/**
	 * 获取摄像机挂接的最后一个视口
	 * @param  
	 * @return 视口
	 */
	public com.earthview.world.graphic.Viewport getViewport()
	{
		long returnValue = getViewport_void(this.nativeObject.pointer);
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
	native private long getCurrentViewport_void(long pNativeObject);
	/**
	 * 获取当前渲染过程中使用的相机,有可能返回空指针。
	 * @return 视口
	 */
	public com.earthview.world.graphic.Viewport getCurrentViewport()
	{
		long returnValue = getCurrentViewport_void(this.nativeObject.pointer);
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
	native private void _notifyViewport_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * 通知摄像机它正被一个视口使用
	 * @param viewport 视口名称
	 */
	public void _notifyViewport(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		_notifyViewport_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
	}
	native private void setAutoAspectRatio_ev_bool(long pNativeObject, boolean autoratio);
	/**
	 * 设置自动图像纵横比当平截头体大小改变，会重新计算图像纵横比如果同一时间，摄像机或者平头截图被一个视口使用，可以设置为真。
	 * @param autoratio 是否自动计算
	 */
	public void setAutoAspectRatio(boolean autoratio)
	{
		boolean autoratioParamValue = autoratio;
		setAutoAspectRatio_ev_bool(this.nativeObject.pointer, autoratioParamValue);
	}
	native private boolean getAutoAspectRatio_void(long pNativeObject);
	/**
	 * 是否获取当前自动图像纵横比
	 * @param  
	 * @return 为真，获取，否则不获取
	 */
	public boolean getAutoAspectRatio()
	{
		boolean returnValue = getAutoAspectRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCullingFrustum_CFrustum(long pNativeObject, long ref_frustum);
	/**
	 * 设置摄像机使用的视椎体
	 * @param frustum 平截头体名称
	 */
	public void setCullingFrustum(com.earthview.world.graphic.Frustum ref_frustum)
	{
		long ref_frustumParamValue = (ref_frustum == null ? 0L : ref_frustum.nativeObject.pointer);
		setCullingFrustum_CFrustum(this.nativeObject.pointer, ref_frustumParamValue);
	}
	native private long getCullingFrustum_void(long pNativeObject);
	/**
	 * 返回使用中的视椎体
	 * @param  
	 * @return 平截头体
	 */
	public com.earthview.world.graphic.Frustum getCullingFrustum()
	{
		long returnValue = getCullingFrustum_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Frustum __returnValue = new com.earthview.world.graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate, "CFrustum");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Frustum)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFrustum");
		}
		return __returnValue;
	}
	protected  void forwardIntersect_CPlane_Vector4List_callback(long worldPlane, long intersect3d)
	{
		com.earthview.world.spatial.math.Plane worldPlaneParamValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		worldPlaneParamValue.setDelegate(true);
		worldPlaneParamValue.setInstancePointer(new InstancePointer(worldPlane));
		IClassFactory worldPlaneParamValueClassFactory = GlobalClassFactoryMap.get(worldPlaneParamValue.getCppInstanceTypeName());
		if (worldPlaneParamValueClassFactory != null)
		{
			worldPlaneParamValue.setDelegate(true);
			worldPlaneParamValue = (com.earthview.world.spatial.math.Plane)worldPlaneParamValueClassFactory.create();
			worldPlaneParamValue.setDelegate(true);
			worldPlaneParamValue.setInstancePointer(new InstancePointer(worldPlane));
		}
		com.earthview.world.spatial.math.Vector4List intersect3dParamValue = (intersect3d == 0L ? null : new com.earthview.world.spatial.math.Vector4List(CreatedWhenConstruct.CWC_NotToCreate));
		if(intersect3dParamValue != null)
		{
		intersect3dParamValue.setDelegate(true);
		intersect3dParamValue.setInstancePointer(new InstancePointer(intersect3d));
		IClassFactory intersect3dParamValueClassFactory = GlobalClassFactoryMap.get(intersect3dParamValue.getCppInstanceTypeName());
		if (intersect3dParamValueClassFactory != null)
		{
			intersect3dParamValue.setDelegate(true);
			intersect3dParamValue = (com.earthview.world.spatial.math.Vector4List)intersect3dParamValueClassFactory.create();
			intersect3dParamValue.setDelegate(true);
			intersect3dParamValue.setInstancePointer(new InstancePointer(intersect3d));
		}
		}
		forwardIntersect(worldPlaneParamValue, intersect3dParamValue);
	}

	native private void forwardIntersect_CPlane_Vector4List(long pNativeObject, long worldPlane, long intersect3d);
	/**
	 * 前交会向前投射也许会导致在无线距离远的地方产生交叉
	 * @param worldPlane 世界平面
	 * @param intersect3d 交叉的四维向量值
	 */
	public void forwardIntersect(com.earthview.world.spatial.math.Plane worldPlane, com.earthview.world.spatial.math.Vector4List intersect3d)
	{
		long worldPlaneParamValue = worldPlane.nativeObject.pointer;
		long intersect3dParamValue = (intersect3d == null ? 0L : intersect3d.nativeObject.pointer);
		forwardIntersect_CPlane_Vector4List(this.nativeObject.pointer, worldPlaneParamValue, intersect3dParamValue);
	}
	native private void forwardIntersect_CPlane_Vector4List_NoVirtual(long pNativeObject, long worldPlane, long intersect3d);
	protected void forwardIntersect_NoVirtual(com.earthview.world.spatial.math.Plane worldPlane, com.earthview.world.spatial.math.Vector4List intersect3d)
	{
		long worldPlaneParamValue = worldPlane.nativeObject.pointer;
		long intersect3dParamValue = (intersect3d == null ? 0L : intersect3d.nativeObject.pointer);
		forwardIntersect_CPlane_Vector4List_NoVirtual(this.nativeObject.pointer, worldPlaneParamValue, intersect3dParamValue);
	}

	native private boolean isVisible_CAxisAlignedBox_FrustumPlane(long pNativeObject, long bound, long culledBy);
	/**
	 * 测试给定的包围盒是否在视椎体中
	 * @param bound 检查封装盒
	 * @param culledBy 锥体面指针
	 * @return 如果成功，包围盒可见
	 */
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

	native private boolean isVisible_CSphere_FrustumPlane(long pNativeObject, long bound, long culledBy);
	/**
	 * 测试给定的球体是否在视椎体中
	 * @param bound 球体
	 * @param culledBy 锥体面指针
	 * @return 如果成功，球体可见
	 */
	public boolean isVisible(com.earthview.world.spatial.math.Sphere bound, EnumPointer culledBy)
	{
		long boundParamValue = bound.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CSphere_FrustumPlane(this.nativeObject.pointer, boundParamValue, culledByParamValue);
		return returnValue;
	}
	native private boolean isVisible_CSphere_FrustumPlane_NoVirtual(long pNativeObject, long bound, long culledBy);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.Sphere bound, EnumPointer culledBy)
	{
		long boundParamValue = bound.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CSphere_FrustumPlane_NoVirtual(this.nativeObject.pointer, boundParamValue, culledByParamValue);
		return returnValue;
	}

	native private boolean isVisible_CSphere(long pNativeObject, long bound);
	public boolean isVisible(com.earthview.world.spatial.math.Sphere bound)
	{
		long boundParamValue = bound.nativeObject.pointer;
		boolean returnValue = isVisible_CSphere(this.nativeObject.pointer, boundParamValue);
		return returnValue;
	}
	native private boolean isVisible_CSphere_NoVirtual(long pNativeObject, long bound);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.Sphere bound)
	{
		long boundParamValue = bound.nativeObject.pointer;
		boolean returnValue = isVisible_CSphere_NoVirtual(this.nativeObject.pointer, boundParamValue);
		return returnValue;
	}

	native private boolean isVisible_CVector3_FrustumPlane(long pNativeObject, long vert, long culledBy);
	/**
	 * 测试给定的顶点是否在视椎体中
	 * @param vert 顶点
	 * @param culledBy 锥体面指针
	 * @return 如果成功，点可见
	 */
	public boolean isVisible(com.earthview.world.spatial.math.Vector3 vert, EnumPointer culledBy)
	{
		long vertParamValue = vert.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CVector3_FrustumPlane(this.nativeObject.pointer, vertParamValue, culledByParamValue);
		return returnValue;
	}
	native private boolean isVisible_CVector3_FrustumPlane_NoVirtual(long pNativeObject, long vert, long culledBy);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.Vector3 vert, EnumPointer culledBy)
	{
		long vertParamValue = vert.nativeObject.pointer;
		long culledByParamValue = (culledBy == null ? 0L : culledBy.nativeObject.pointer);
		boolean returnValue = isVisible_CVector3_FrustumPlane_NoVirtual(this.nativeObject.pointer, vertParamValue, culledByParamValue);
		return returnValue;
	}

	native private boolean isVisible_CVector3(long pNativeObject, long vert);
	public boolean isVisible(com.earthview.world.spatial.math.Vector3 vert)
	{
		long vertParamValue = vert.nativeObject.pointer;
		boolean returnValue = isVisible_CVector3(this.nativeObject.pointer, vertParamValue);
		return returnValue;
	}
	native private boolean isVisible_CVector3_NoVirtual(long pNativeObject, long vert);
	protected boolean isVisible_NoVirtual(com.earthview.world.spatial.math.Vector3 vert)
	{
		long vertParamValue = vert.nativeObject.pointer;
		boolean returnValue = isVisible_CVector3_NoVirtual(this.nativeObject.pointer, vertParamValue);
		return returnValue;
	}

	native private long getFrustumPlane_ev_uint16(long pNativeObject, int plane);
	/**
	 * 获取平截头体的特定面
	 * @param plane 
	 */
	public com.earthview.world.spatial.math.Plane getFrustumPlane(int plane)
	{
		int planeParamValue = plane;
		long returnValue = getFrustumPlane_ev_uint16(this.nativeObject.pointer, planeParamValue);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate, "CPlane");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}
	native private long getFrustumPlane_ev_uint16_NoVirtual(long pNativeObject, int plane);
	protected com.earthview.world.spatial.math.Plane getFrustumPlane_NoVirtual(int plane)
	{
		int planeParamValue = plane;
		long returnValue = getFrustumPlane_ev_uint16_NoVirtual(this.nativeObject.pointer, planeParamValue);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate, "CPlane");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}

	native private boolean projectSphere_CSphere_Real_Real_Real_Real(long pNativeObject, long sphere, long left, long top, long right, long bottom);
	/**
	 * 投影球体到最近的平面，获取封闭盒
	 * @param sphere 球体的映射
	 * @param left 
	 * @param top 
	 * @param right 
	 * @param bottom 
	 */
	public boolean projectSphere(com.earthview.world.spatial.math.Sphere sphere, DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		long leftParamValue = (left == null ? 0L : left.nativeObject.pointer);
		long topParamValue = (top == null ? 0L : top.nativeObject.pointer);
		long rightParamValue = (right == null ? 0L : right.nativeObject.pointer);
		long bottomParamValue = (bottom == null ? 0L : bottom.nativeObject.pointer);
		boolean returnValue = projectSphere_CSphere_Real_Real_Real_Real(this.nativeObject.pointer, sphereParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
		return returnValue;
	}
	native private boolean projectSphere_CSphere_Real_Real_Real_Real_NoVirtual(long pNativeObject, long sphere, long left, long top, long right, long bottom);
	protected boolean projectSphere_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, DoublePointer left, DoublePointer top, DoublePointer right, DoublePointer bottom)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		long leftParamValue = (left == null ? 0L : left.nativeObject.pointer);
		long topParamValue = (top == null ? 0L : top.nativeObject.pointer);
		long rightParamValue = (right == null ? 0L : right.nativeObject.pointer);
		long bottomParamValue = (bottom == null ? 0L : bottom.nativeObject.pointer);
		boolean returnValue = projectSphere_CSphere_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, sphereParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
		return returnValue;
	}

	native private double getNearClipDistance_void(long pNativeObject);
	/**
	 * 获取到近裁剪面的距离
	 * @param  
	 * @return 距离值
	 */
	public double getNearClipDistance()
	{
		double returnValue = getNearClipDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getNearClipDistance_void_NoVirtual(long pNativeObject);
	protected double getNearClipDistance_NoVirtual()
	{
		double returnValue = getNearClipDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getFarClipDistance_void(long pNativeObject);
	/**
	 * 获取到远裁剪面的距离
	 * @param  
	 * @return 距离值
	 */
	public double getFarClipDistance()
	{
		double returnValue = getFarClipDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFarClipDistance_void_NoVirtual(long pNativeObject);
	protected double getFarClipDistance_NoVirtual()
	{
		double returnValue = getFarClipDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getViewMatrix_void(long pNativeObject);
	/**
	 * 取得该摄像机的观察矩阵只能内部使用
	 * @param  
	 * @return 四维矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewMatrix()
	{
		long returnValue = getViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long getViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getViewMatrix_NoVirtual()
	{
		long returnValue = getViewMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	native private long getViewMatrix_ev_bool(long pNativeObject, boolean ownFrustumOnly);
	/**
	 * 获取该摄像机观察矩阵特殊情况下允许访问者决定是否使用自定义选择平截头体
	 * @param ownFrustumOnly 
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewMatrix(boolean ownFrustumOnly)
	{
		boolean ownFrustumOnlyParamValue = ownFrustumOnly;
		long returnValue = getViewMatrix_ev_bool(this.nativeObject.pointer, ownFrustumOnlyParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	protected  void setUseRenderingDistance_ev_bool_callback(boolean use)
	{
		boolean useParamValue = use;
		setUseRenderingDistance(useParamValue);
	}

	native private void setUseRenderingDistance_ev_bool(long pNativeObject, boolean use);
	/**
	 * 设置用户渲染距离设置摄像机是否使用渲染距离在最终的图像中排除远处的对象系统默认使用此方法
	 * @param use true为使用，false不使用
	 */
	public void setUseRenderingDistance(boolean use)
	{
		boolean useParamValue = use;
		setUseRenderingDistance_ev_bool(this.nativeObject.pointer, useParamValue);
	}
	native private void setUseRenderingDistance_ev_bool_NoVirtual(long pNativeObject, boolean use);
	protected void setUseRenderingDistance_NoVirtual(boolean use)
	{
		boolean useParamValue = use;
		setUseRenderingDistance_ev_bool_NoVirtual(this.nativeObject.pointer, useParamValue);
	}

	protected  boolean getUseRenderingDistance_void_callback()
	{
		boolean returnValue = getUseRenderingDistance();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseRenderingDistance_void(long pNativeObject);
	/**
	 * 获取用户渲染距离摄像机是否使用渲染距离在最终的图像中排除远处的对象
	 * @param  
	 */
	public boolean getUseRenderingDistance()
	{
		boolean returnValue = getUseRenderingDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseRenderingDistance_void_NoVirtual(long pNativeObject);
	protected boolean getUseRenderingDistance_NoVirtual()
	{
		boolean returnValue = getUseRenderingDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void synchroniseBaseSettingsWith_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		synchroniseBaseSettingsWith(camParamValue);
	}

	native private void synchroniseBaseSettingsWith_CCamera(long pNativeObject, long cam);
	/**
	 * 同步摄像机中心从一个摄像机复制位置信息，投影类型，修建距离等信息给另一个摄像机
	 * @param cam 摄像机名称
	 */
	public void synchroniseBaseSettingsWith(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		synchroniseBaseSettingsWith_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void synchroniseBaseSettingsWith_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void synchroniseBaseSettingsWith_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		synchroniseBaseSettingsWith_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	native private long getPositionForViewUpdate_void(long pNativeObject);
	/**
	 * 获取视椎体位置坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPositionForViewUpdate()
	{
		long returnValue = getPositionForViewUpdate_void(this.nativeObject.pointer);
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
	native private long getPositionForViewUpdate_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getPositionForViewUpdate_NoVirtual()
	{
		long returnValue = getPositionForViewUpdate_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getOrientationForViewUpdate_void(long pNativeObject);
	/**
	 * 获取视椎体方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientationForViewUpdate()
	{
		long returnValue = getOrientationForViewUpdate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getOrientationForViewUpdate_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getOrientationForViewUpdate_NoVirtual()
	{
		long returnValue = getOrientationForViewUpdate_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	native private void setUseMinPixelSize_ev_bool(long pNativeObject, boolean enable);
	public void setUseMinPixelSize(boolean enable)
	{
		boolean enableParamValue = enable;
		setUseMinPixelSize_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getUseMinPixelSize_void(long pNativeObject);
	public boolean getUseMinPixelSize()
	{
		boolean returnValue = getUseMinPixelSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPixelDisplayRatio_void(long pNativeObject);
	public double getPixelDisplayRatio()
	{
		double returnValue = getPixelDisplayRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long ev_clone_EVString_callback(String newName)
	{
		String newNameParamValue = newName;
		com.earthview.world.graphic.Camera returnValue = ev_clone(newNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_EVString(long pNativeObject, String newName);
	/**
	 * 相机拷贝
	 * @param  
	 */
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

	protected  long getHeading_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getHeading();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getHeading_void(long pNativeObject);
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

	protected  long getTilt_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getTilt();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTilt_void(long pNativeObject);
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

	protected  long getLatitude_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getLatitude();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLatitude_void(long pNativeObject);
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

	protected  long getLongitude_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getLongitude();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLongitude_void(long pNativeObject);
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

	protected  double getAltitude_void_callback()
	{
		double returnValue = getAltitude();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitude_void(long pNativeObject);
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

	protected  boolean isUnderGround_void_callback()
	{
		boolean returnValue = isUnderGround();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isUnderGround_void(long pNativeObject);
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

	protected  double getCameraDistanceOfGround_void_callback()
	{
		double returnValue = getCameraDistanceOfGround();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCameraDistanceOfGround_void(long pNativeObject);
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

	protected  double getAltitudeUnderCamera_void_callback()
	{
		double returnValue = getAltitudeUnderCamera();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitudeUnderCamera_void(long pNativeObject);
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

	protected  long getGlobeViewport_void_callback()
	{
		com.earthview.world.graphic.Viewport returnValue = getGlobeViewport();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGlobeViewport_void(long pNativeObject);
	/**
	 * 返回Globe视口
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

	protected  boolean hasChanged_void_callback()
	{
		boolean returnValue = hasChanged();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasChanged_void(long pNativeObject);
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

	public Camera(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Camera(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	public boolean isFrustumOutOfDate()
	{
		return super.isFrustumOutOfDate_NoVirtual();
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
	 * 设置远裁剪面的距离
	 * @param farDist 
	 */
	public void setFarClipDistance(double farDist)
	{
		super.setFarClipDistance_NoVirtual(farDist);
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
	
	public static Camera fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Camera obj = null;
 		if(baseObj instanceof Camera)
		{
			obj = (Camera)baseObj;
		} else {
			obj = new Camera(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCamera");
			obj.increaseCast();
		}

		return obj;
	}
}
