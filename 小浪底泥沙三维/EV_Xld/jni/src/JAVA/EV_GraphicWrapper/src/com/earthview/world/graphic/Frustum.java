package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 视椎体类此类模拟人眼的视觉效果，可以改变显示物体的位置，角度以及裁剪。
 */
public class Frustum extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrustum", new FrustumClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFrustumProxy", new FrustumClassFactory());
	}

	/**
	 * 视椎体内部渲染类
	 */
	public static class FrustumInternalRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable", new FrustumInternalRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrustum::JCFrustumInternalRenderableProxy", new FrustumInternalRenderableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 父类
		 */
		public FrustumInternalRenderable(com.earthview.world.graphic.Frustum ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCFrustumInternalRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Frustum$FrustumInternalRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获取材质，纹理对象
		 * @return 本对象
		 */
		public com.earthview.world.graphic.MaterialPtr getMaterial()
		{
			long returnValue = getMaterial_void(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}
		native private long getMaterial_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
		{
			long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
			}
			return __returnValue;
		}

		native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
		/**
		 * 获取渲染操作对象(基本渲染单元)
		 * @param op 渲染操作对象
		 */
		public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
		}
		native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
		protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
		{
			long opParamValue = op.nativeObject.pointer;
			getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
		}

		native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
		/**
		 * 获得世界变换矩阵
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

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/// <summary>
		/// 返回渲染实体相对虚拟相机的直角深度
		/// </summary>
		/// <param name="cam"></param>
		/// <returns</returns>
		public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}
		native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
		protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
		{
			long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
			double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
			return returnValue;
		}

		native private long getLights_void(long pNativeObject);
		/**
		 * 获得光照的列表，按照相对于渲染实体的远近排列
		 * @param  
		 */
		public com.earthview.world.graphic.LightList getLights()
		{
			long returnValue = getLights_void(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}
		native private long getLights_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.LightList getLights_NoVirtual()
		{
			long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
			com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "LightList");
			}
			return __returnValue;
		}

		public FrustumInternalRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public FrustumInternalRenderable(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
		
		public static FrustumInternalRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			FrustumInternalRenderable obj = null;
 			if(baseObj instanceof FrustumInternalRenderable)
			{
				obj = (FrustumInternalRenderable)baseObj;
			} else {
				obj = new FrustumInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CFrustumInternalRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class FrustumInternalRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			FrustumInternalRenderable emptyInstance = new FrustumInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  double getSquaredViewDepth_CCamera_callback(long cam)
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
		double returnValue = getSquaredViewDepth(camParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	protected  long getMaterial_void_callback()
	{
		com.earthview.world.graphic.MaterialPtr returnValue = getMaterial();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMaterial_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	protected  void getRenderOperation_CRenderOperation_callback(long op)
	{
		com.earthview.world.graphic.RenderOperation opParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		opParamValue.setDelegate(true);
		opParamValue.setInstancePointer(new InstancePointer(op));
		IClassFactory opParamValueClassFactory = GlobalClassFactoryMap.get(opParamValue.getCppInstanceTypeName());
		if (opParamValueClassFactory != null)
		{
			opParamValue.setDelegate(true);
			opParamValue = (com.earthview.world.graphic.RenderOperation)opParamValueClassFactory.create();
			opParamValue.setDelegate(true);
			opParamValue.setInstancePointer(new InstancePointer(op));
		}
		getRenderOperation(opParamValue);
	}

	native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	protected  void getWorldTransforms_CMatrix4_callback(long xform)
	{
		com.earthview.world.spatial.math.Matrix4 xformParamValue = (xform == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(xformParamValue != null)
		{
		xformParamValue.setDelegate(true);
		xformParamValue.setInstancePointer(new InstancePointer(xform));
		IClassFactory xformParamValueClassFactory = GlobalClassFactoryMap.get(xformParamValue.getCppInstanceTypeName());
		if (xformParamValueClassFactory != null)
		{
			xformParamValue.setDelegate(true);
			xformParamValue = (com.earthview.world.spatial.math.Matrix4)xformParamValueClassFactory.create();
			xformParamValue.setDelegate(true);
			xformParamValue.setInstancePointer(new InstancePointer(xform));
		}
		}
		getWorldTransforms(xformParamValue);
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

	protected  long getLights_void_callback()
	{
		com.earthview.world.graphic.LightList returnValue = getLights();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLights_void(long pNativeObject);
	public com.earthview.world.graphic.LightList getLights()
	{
		long returnValue = getLights_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}
	native private long getLights_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.LightList getLights_NoVirtual()
	{
		long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}

	protected  long getFrustumRenderablePtr_void_callback()
	{
		com.earthview.world.graphic.Frustum.FrustumInternalRenderable returnValue = getFrustumRenderablePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrustumRenderablePtr_void(long pNativeObject);
	public com.earthview.world.graphic.Frustum.FrustumInternalRenderable getFrustumRenderablePtr()
	{
		long returnValue = getFrustumRenderablePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Frustum.FrustumInternalRenderable __returnValue = new com.earthview.world.graphic.Frustum.FrustumInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CFrustumInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Frustum.FrustumInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFrustumInternalRenderable");
		}
		return __returnValue;
	}
	native private long getFrustumRenderablePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Frustum.FrustumInternalRenderable getFrustumRenderablePtr_NoVirtual()
	{
		long returnValue = getFrustumRenderablePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Frustum.FrustumInternalRenderable __returnValue = new com.earthview.world.graphic.Frustum.FrustumInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CFrustumInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Frustum.FrustumInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFrustumInternalRenderable");
		}
		return __returnValue;
	}

	protected  void calcProjectionParameters_Real_Real_Real_Real_callback(long left, long right, long bottom, long top)
	{
		DoublePointer leftParamValue = new DoublePointer(new InstancePointer(left));
		DoublePointer rightParamValue = new DoublePointer(new InstancePointer(right));
		DoublePointer bottomParamValue = new DoublePointer(new InstancePointer(bottom));
		DoublePointer topParamValue = new DoublePointer(new InstancePointer(top));
		calcProjectionParameters(leftParamValue, rightParamValue, bottomParamValue, topParamValue);
	}

	native private void calcProjectionParameters_Real_Real_Real_Real(long pNativeObject, long left, long right, long bottom, long top);
	/// Internal functions for calcs
	public void calcProjectionParameters(DoublePointer left, DoublePointer right, DoublePointer bottom, DoublePointer top)
	{
		long leftParamValue = left.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		calcProjectionParameters_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue);
	}
	native private void calcProjectionParameters_Real_Real_Real_Real_NoVirtual(long pNativeObject, long left, long right, long bottom, long top);
	protected void calcProjectionParameters_NoVirtual(DoublePointer left, DoublePointer right, DoublePointer bottom, DoublePointer top)
	{
		long leftParamValue = left.nativeObject.pointer;
		long rightParamValue = right.nativeObject.pointer;
		long bottomParamValue = bottom.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		calcProjectionParameters_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, leftParamValue, rightParamValue, bottomParamValue, topParamValue);
	}

	protected  void updateFrustum_void_callback()
	{
		updateFrustum();
	}

	native private void updateFrustum_void(long pNativeObject);
	//// Update frustum if out of date
	public void updateFrustum()
	{
		updateFrustum_void(this.nativeObject.pointer);
	}
	native private void updateFrustum_void_NoVirtual(long pNativeObject);
	protected void updateFrustum_NoVirtual()
	{
		updateFrustum_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateView_void_callback()
	{
		updateView();
	}

	native private void updateView_void(long pNativeObject);
	//// Update view if out of date
	public void updateView()
	{
		updateView_void(this.nativeObject.pointer);
	}
	native private void updateView_void_NoVirtual(long pNativeObject);
	protected void updateView_NoVirtual()
	{
		updateView_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateFrustumImpl_void_callback()
	{
		updateFrustumImpl();
	}

	native private void updateFrustumImpl_void(long pNativeObject);
	//// Implementation of updateFrustum (called if out of date)
	public void updateFrustumImpl()
	{
		updateFrustumImpl_void(this.nativeObject.pointer);
	}
	native private void updateFrustumImpl_void_NoVirtual(long pNativeObject);
	protected void updateFrustumImpl_NoVirtual()
	{
		updateFrustumImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateViewImpl_void_callback()
	{
		updateViewImpl();
	}

	native private void updateViewImpl_void(long pNativeObject);
	//// Implementation of updateView (called if out of date)
	public void updateViewImpl()
	{
		updateViewImpl_void(this.nativeObject.pointer);
	}
	native private void updateViewImpl_void_NoVirtual(long pNativeObject);
	protected void updateViewImpl_NoVirtual()
	{
		updateViewImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateFrustumPlanes_void_callback()
	{
		updateFrustumPlanes();
	}

	native private void updateFrustumPlanes_void(long pNativeObject);
	public void updateFrustumPlanes()
	{
		updateFrustumPlanes_void(this.nativeObject.pointer);
	}
	native private void updateFrustumPlanes_void_NoVirtual(long pNativeObject);
	protected void updateFrustumPlanes_NoVirtual()
	{
		updateFrustumPlanes_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateFrustumPlanesImpl_void_callback()
	{
		updateFrustumPlanesImpl();
	}

	native private void updateFrustumPlanesImpl_void(long pNativeObject);
	//// Implementation of updateFrustumPlanes (called if out of date)
	public void updateFrustumPlanesImpl()
	{
		updateFrustumPlanesImpl_void(this.nativeObject.pointer);
	}
	native private void updateFrustumPlanesImpl_void_NoVirtual(long pNativeObject);
	protected void updateFrustumPlanesImpl_NoVirtual()
	{
		updateFrustumPlanesImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateWorldSpaceCorners_void_callback()
	{
		updateWorldSpaceCorners();
	}

	native private void updateWorldSpaceCorners_void(long pNativeObject);
	public void updateWorldSpaceCorners()
	{
		updateWorldSpaceCorners_void(this.nativeObject.pointer);
	}
	native private void updateWorldSpaceCorners_void_NoVirtual(long pNativeObject);
	protected void updateWorldSpaceCorners_NoVirtual()
	{
		updateWorldSpaceCorners_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateWorldSpaceCornersImpl_void_callback()
	{
		updateWorldSpaceCornersImpl();
	}

	native private void updateWorldSpaceCornersImpl_void(long pNativeObject);
	//// Implementation of updateWorldSpaceCorners (called if out of date)
	public void updateWorldSpaceCornersImpl()
	{
		updateWorldSpaceCornersImpl_void(this.nativeObject.pointer);
	}
	native private void updateWorldSpaceCornersImpl_void_NoVirtual(long pNativeObject);
	protected void updateWorldSpaceCornersImpl_NoVirtual()
	{
		updateWorldSpaceCornersImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateVertexData_void_callback()
	{
		updateVertexData();
	}

	native private void updateVertexData_void(long pNativeObject);
	public void updateVertexData()
	{
		updateVertexData_void(this.nativeObject.pointer);
	}
	native private void updateVertexData_void_NoVirtual(long pNativeObject);
	protected void updateVertexData_NoVirtual()
	{
		updateVertexData_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isViewOutOfDate_void_callback()
	{
		boolean returnValue = isViewOutOfDate();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isViewOutOfDate_void(long pNativeObject);
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

	protected  boolean isFrustumOutOfDate_void_callback()
	{
		boolean returnValue = isFrustumOutOfDate();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isFrustumOutOfDate_void(long pNativeObject);
	public boolean isFrustumOutOfDate()
	{
		boolean returnValue = isFrustumOutOfDate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFrustumOutOfDate_void_NoVirtual(long pNativeObject);
	protected boolean isFrustumOutOfDate_NoVirtual()
	{
		boolean returnValue = isFrustumOutOfDate_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void invalidateFrustum_void_callback()
	{
		invalidateFrustum();
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

	protected  void invalidateView_void_callback()
	{
		invalidateView();
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

	/**
	 * 构造函数
	 * @param name 名称，默认为CStringUtil::BLANK
	 */
	public Frustum(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCFrustumProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Frustum".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Frustum() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFrustumProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Frustum".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setFOVy_CRadian_callback(long fovy)
	{
		com.earthview.world.spatial.math.Radian fovyParamValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		fovyParamValue.setDelegate(true);
		fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		IClassFactory fovyParamValueClassFactory = GlobalClassFactoryMap.get(fovyParamValue.getCppInstanceTypeName());
		if (fovyParamValueClassFactory != null)
		{
			fovyParamValue.setDelegate(true);
			fovyParamValue = (com.earthview.world.spatial.math.Radian)fovyParamValueClassFactory.create();
			fovyParamValue.setDelegate(true);
			fovyParamValue.setInstancePointer(new InstancePointer(fovy));
		}
		setFOVy(fovyParamValue);
	}

	native private void setFOVy_CRadian(long pNativeObject, long fovy);
	/**
	 * 设置Y方向的视域
	 * @param fovy 视野域
	 */
	public void setFOVy(com.earthview.world.spatial.math.Radian fovy)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		setFOVy_CRadian(this.nativeObject.pointer, fovyParamValue);
	}
	native private void setFOVy_CRadian_NoVirtual(long pNativeObject, long fovy);
	protected void setFOVy_NoVirtual(com.earthview.world.spatial.math.Radian fovy)
	{
		long fovyParamValue = fovy.nativeObject.pointer;
		setFOVy_CRadian_NoVirtual(this.nativeObject.pointer, fovyParamValue);
	}

	protected  long getFOVy_void_callback()
	{
		com.earthview.world.spatial.math.Radian returnValue = getFOVy();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFOVy_void(long pNativeObject);
	/**
	 * 取得Y方向的视域
	 * @param  
	 */
	public com.earthview.world.spatial.math.Radian getFOVy()
	{
		long returnValue = getFOVy_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long getFOVy_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Radian getFOVy_NoVirtual()
	{
		long returnValue = getFOVy_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}

	protected  void setNearClipDistance_Real_callback(double nearDist)
	{
		double nearDistParamValue = nearDist;
		setNearClipDistance(nearDistParamValue);
	}

	native private void setNearClipDistance_Real(long pNativeObject, double nearDist);
	/**
	 * 设置近裁剪面的距离
	 * @param nearDist 
	 */
	public void setNearClipDistance(double nearDist)
	{
		double nearDistParamValue = nearDist;
		setNearClipDistance_Real(this.nativeObject.pointer, nearDistParamValue);
	}
	native private void setNearClipDistance_Real_NoVirtual(long pNativeObject, double nearDist);
	protected void setNearClipDistance_NoVirtual(double nearDist)
	{
		double nearDistParamValue = nearDist;
		setNearClipDistance_Real_NoVirtual(this.nativeObject.pointer, nearDistParamValue);
	}

	protected  double getNearClipDistance_void_callback()
	{
		double returnValue = getNearClipDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getNearClipDistance_void(long pNativeObject);
	/**
	 * 获取近裁剪面的距离
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

	protected  void setFarClipDistance_Real_callback(double farDist)
	{
		double farDistParamValue = farDist;
		setFarClipDistance(farDistParamValue);
	}

	native private void setFarClipDistance_Real(long pNativeObject, double farDist);
	/**
	 * 设置远裁剪面的距离
	 * @param farDist 
	 */
	public void setFarClipDistance(double farDist)
	{
		double farDistParamValue = farDist;
		setFarClipDistance_Real(this.nativeObject.pointer, farDistParamValue);
	}
	native private void setFarClipDistance_Real_NoVirtual(long pNativeObject, double farDist);
	protected void setFarClipDistance_NoVirtual(double farDist)
	{
		double farDistParamValue = farDist;
		setFarClipDistance_Real_NoVirtual(this.nativeObject.pointer, farDistParamValue);
	}

	protected  double getFarClipDistance_void_callback()
	{
		double returnValue = getFarClipDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFarClipDistance_void(long pNativeObject);
	/**
	 * 获取远裁剪面的距离
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

	protected  void setAspectRatio_Real_callback(double ratio)
	{
		double ratioParamValue = ratio;
		setAspectRatio(ratioParamValue);
	}

	native private void setAspectRatio_Real(long pNativeObject, double ratio);
	/**
	 * 设定当前纵横比
	 * @param ratio 全屏下的系统默认值为1.3333
	 */
	public void setAspectRatio(double ratio)
	{
		double ratioParamValue = ratio;
		setAspectRatio_Real(this.nativeObject.pointer, ratioParamValue);
	}
	native private void setAspectRatio_Real_NoVirtual(long pNativeObject, double ratio);
	protected void setAspectRatio_NoVirtual(double ratio)
	{
		double ratioParamValue = ratio;
		setAspectRatio_Real_NoVirtual(this.nativeObject.pointer, ratioParamValue);
	}

	protected  double getAspectRatio_void_callback()
	{
		double returnValue = getAspectRatio();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAspectRatio_void(long pNativeObject);
	/**
	 * 获取当前纵横比
	 * @param  
	 * @return 比例值
	 */
	public double getAspectRatio()
	{
		double returnValue = getAspectRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAspectRatio_void_NoVirtual(long pNativeObject);
	protected double getAspectRatio_NoVirtual()
	{
		double returnValue = getAspectRatio_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setFrustumOffset_CVector2_callback(long offset)
	{
		com.earthview.world.spatial.math.Vector2 offsetParamValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		offsetParamValue.setDelegate(true);
		offsetParamValue.setInstancePointer(new InstancePointer(offset));
		IClassFactory offsetParamValueClassFactory = GlobalClassFactoryMap.get(offsetParamValue.getCppInstanceTypeName());
		if (offsetParamValueClassFactory != null)
		{
			offsetParamValue.setDelegate(true);
			offsetParamValue = (com.earthview.world.spatial.math.Vector2)offsetParamValueClassFactory.create();
			offsetParamValue.setDelegate(true);
			offsetParamValue.setInstancePointer(new InstancePointer(offset));
		}
		setFrustumOffset(offsetParamValue);
	}

	native private void setFrustumOffset_CVector2(long pNativeObject, long offset);
	/**
	 * 通过二维矢量设置视椎体偏移量在立体渲染中使用在世界坐标系中默认为(0,0)没有偏移
	 * @param offset 水平和垂直偏移量
	 */
	public void setFrustumOffset(com.earthview.world.spatial.math.Vector2 offset)
	{
		long offsetParamValue = offset.nativeObject.pointer;
		setFrustumOffset_CVector2(this.nativeObject.pointer, offsetParamValue);
	}
	native private void setFrustumOffset_CVector2_NoVirtual(long pNativeObject, long offset);
	protected void setFrustumOffset_NoVirtual(com.earthview.world.spatial.math.Vector2 offset)
	{
		long offsetParamValue = offset.nativeObject.pointer;
		setFrustumOffset_CVector2_NoVirtual(this.nativeObject.pointer, offsetParamValue);
	}

	protected  void setFrustumOffset_Real_Real_callback(double horizontal, double vertical)
	{
		double horizontalParamValue = horizontal;
		double verticalParamValue = vertical;
		setFrustumOffset(horizontalParamValue, verticalParamValue);
	}

	native private void setFrustumOffset_Real_Real(long pNativeObject, double horizontal, double vertical);
	/**
	 * 通过水平偏移和垂直偏移设置视椎体偏移量在立体渲染中使用在世界坐标系中默认为(0,0)没有偏移
	 * @param horizontal 水平偏移量
	 * @param vertical 垂直偏移量
	 */
	public void setFrustumOffset(double horizontal, double vertical)
	{
		double horizontalParamValue = horizontal;
		double verticalParamValue = vertical;
		setFrustumOffset_Real_Real(this.nativeObject.pointer, horizontalParamValue, verticalParamValue);
	}
	native private void setFrustumOffset_Real_Real_NoVirtual(long pNativeObject, double horizontal, double vertical);
	protected void setFrustumOffset_NoVirtual(double horizontal, double vertical)
	{
		double horizontalParamValue = horizontal;
		double verticalParamValue = vertical;
		setFrustumOffset_Real_Real_NoVirtual(this.nativeObject.pointer, horizontalParamValue, verticalParamValue);
	}

	protected  void setFrustumOffset_Real_callback(double horizontal)
	{
		double horizontalParamValue = horizontal;
		setFrustumOffset(horizontalParamValue);
	}

	native private void setFrustumOffset_Real(long pNativeObject, double horizontal);
	public void setFrustumOffset(double horizontal)
	{
		double horizontalParamValue = horizontal;
		setFrustumOffset_Real(this.nativeObject.pointer, horizontalParamValue);
	}
	native private void setFrustumOffset_Real_NoVirtual(long pNativeObject, double horizontal);
	protected void setFrustumOffset_NoVirtual(double horizontal)
	{
		double horizontalParamValue = horizontal;
		setFrustumOffset_Real_NoVirtual(this.nativeObject.pointer, horizontalParamValue);
	}

	protected  void setFrustumOffset_void_callback()
	{
		setFrustumOffset();
	}

	native private void setFrustumOffset_void(long pNativeObject);
	public void setFrustumOffset()
	{
		setFrustumOffset_void(this.nativeObject.pointer);
	}
	native private void setFrustumOffset_void_NoVirtual(long pNativeObject);
	protected void setFrustumOffset_NoVirtual()
	{
		setFrustumOffset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getFrustumOffset_void_callback()
	{
		com.earthview.world.spatial.math.Vector2 returnValue = getFrustumOffset();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrustumOffset_void(long pNativeObject);
	/**
	 * 获取视椎体偏移量
	 * @param  
	 * @return 二维矢量值
	 */
	public com.earthview.world.spatial.math.Vector2 getFrustumOffset()
	{
		long returnValue = getFrustumOffset_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate, "CVector2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long getFrustumOffset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector2 getFrustumOffset_NoVirtual()
	{
		long returnValue = getFrustumOffset_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate, "CVector2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}

	protected  void setFocalLength_Real_callback(double focalLength)
	{
		double focalLengthParamValue = focalLength;
		setFocalLength(focalLengthParamValue);
	}

	native private void setFocalLength_Real(long pNativeObject, double focalLength);
	/**
	 * 设置视椎体焦距在立体渲染中使用
	 * @param focalLength 焦点到视椎体的距离，默认为1.0
	 */
	public void setFocalLength(double focalLength)
	{
		double focalLengthParamValue = focalLength;
		setFocalLength_Real(this.nativeObject.pointer, focalLengthParamValue);
	}
	native private void setFocalLength_Real_NoVirtual(long pNativeObject, double focalLength);
	protected void setFocalLength_NoVirtual(double focalLength)
	{
		double focalLengthParamValue = focalLength;
		setFocalLength_Real_NoVirtual(this.nativeObject.pointer, focalLengthParamValue);
	}

	protected  void setFocalLength_void_callback()
	{
		setFocalLength();
	}

	native private void setFocalLength_void(long pNativeObject);
	public void setFocalLength()
	{
		setFocalLength_void(this.nativeObject.pointer);
	}
	native private void setFocalLength_void_NoVirtual(long pNativeObject);
	protected void setFocalLength_NoVirtual()
	{
		setFocalLength_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  double getFocalLength_void_callback()
	{
		double returnValue = getFocalLength();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFocalLength_void(long pNativeObject);
	/**
	 * 获取视椎体焦距在立体渲染中使用
	 * @param  
	 * @return 焦距值
	 */
	public double getFocalLength()
	{
		double returnValue = getFocalLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFocalLength_void_NoVirtual(long pNativeObject);
	protected double getFocalLength_NoVirtual()
	{
		double returnValue = getFocalLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setFrustumExtents_Real_Real_Real_Real_callback(double left, double right, double top, double bottom)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double topParamValue = top;
		double bottomParamValue = bottom;
		setFrustumExtents(leftParamValue, rightParamValue, topParamValue, bottomParamValue);
	}

	native private void setFrustumExtents_Real_Real_Real_Real(long pNativeObject, double left, double right, double top, double bottom);
	/**
	 * 手动设置可视范围侧面与近裁剪面的交界边
	 * @param left 左边
	 * @param right 右边
	 * @param top 上边
	 * @param bottom 底边
	 */
	public void setFrustumExtents(double left, double right, double top, double bottom)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double topParamValue = top;
		double bottomParamValue = bottom;
		setFrustumExtents_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, rightParamValue, topParamValue, bottomParamValue);
	}
	native private void setFrustumExtents_Real_Real_Real_Real_NoVirtual(long pNativeObject, double left, double right, double top, double bottom);
	protected void setFrustumExtents_NoVirtual(double left, double right, double top, double bottom)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double topParamValue = top;
		double bottomParamValue = bottom;
		setFrustumExtents_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, leftParamValue, rightParamValue, topParamValue, bottomParamValue);
	}

	protected  void resetFrustumExtents_void_callback()
	{
		resetFrustumExtents();
	}

	native private void resetFrustumExtents_void(long pNativeObject);
	/**
	 * 利用其它参数自动获取可视范围
	 * @param  
	 */
	public void resetFrustumExtents()
	{
		resetFrustumExtents_void(this.nativeObject.pointer);
	}
	native private void resetFrustumExtents_void_NoVirtual(long pNativeObject);
	protected void resetFrustumExtents_NoVirtual()
	{
		resetFrustumExtents_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void getFrustumExtents_Real_Real_Real_Real_callback(long outleft, long outright, long outtop, long outbottom)
	{
		DoublePointer outleftParamValue = new DoublePointer(new InstancePointer(outleft));
		DoublePointer outrightParamValue = new DoublePointer(new InstancePointer(outright));
		DoublePointer outtopParamValue = new DoublePointer(new InstancePointer(outtop));
		DoublePointer outbottomParamValue = new DoublePointer(new InstancePointer(outbottom));
		getFrustumExtents(outleftParamValue, outrightParamValue, outtopParamValue, outbottomParamValue);
	}

	native private void getFrustumExtents_Real_Real_Real_Real(long pNativeObject, long outleft, long outright, long outtop, long outbottom);
	/**
	 * 获取可视范围
	 * @param outleft 左边长度值
	 * @param outright 右边长度值
	 * @param outtop 上边长度值
	 * @param outbottom 底边长度值
	 */
	public void getFrustumExtents(DoublePointer outleft, DoublePointer outright, DoublePointer outtop, DoublePointer outbottom)
	{
		long outleftParamValue = outleft.nativeObject.pointer;
		long outrightParamValue = outright.nativeObject.pointer;
		long outtopParamValue = outtop.nativeObject.pointer;
		long outbottomParamValue = outbottom.nativeObject.pointer;
		getFrustumExtents_Real_Real_Real_Real(this.nativeObject.pointer, outleftParamValue, outrightParamValue, outtopParamValue, outbottomParamValue);
	}
	native private void getFrustumExtents_Real_Real_Real_Real_NoVirtual(long pNativeObject, long outleft, long outright, long outtop, long outbottom);
	protected void getFrustumExtents_NoVirtual(DoublePointer outleft, DoublePointer outright, DoublePointer outtop, DoublePointer outbottom)
	{
		long outleftParamValue = outleft.nativeObject.pointer;
		long outrightParamValue = outright.nativeObject.pointer;
		long outtopParamValue = outtop.nativeObject.pointer;
		long outbottomParamValue = outbottom.nativeObject.pointer;
		getFrustumExtents_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, outleftParamValue, outrightParamValue, outtopParamValue, outbottomParamValue);
	}

	protected  long getProjectionMatrixRS_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getProjectionMatrixRS();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getProjectionMatrixRS_void(long pNativeObject);
	/**
	 * 获取当前渲染系统的投影矩阵可能使用左手坐标系或右手坐标系，深度值可能发生改变此方法渲染接口版本取决于投影矩阵，如果想使用典型的投影矩阵使用函数getProjectionMatrix
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrixRS()
	{
		long returnValue = getProjectionMatrixRS_void(this.nativeObject.pointer);
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
	native private long getProjectionMatrixRS_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getProjectionMatrixRS_NoVirtual()
	{
		long returnValue = getProjectionMatrixRS_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getProjectionMatrixWithRSDepth_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getProjectionMatrixWithRSDepth();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getProjectionMatrixWithRSDepth_void(long pNativeObject);
	/**
	 * 根据深度值获取当前渲染系统的投影矩阵遵循右手坐标系规则
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrixWithRSDepth()
	{
		long returnValue = getProjectionMatrixWithRSDepth_void(this.nativeObject.pointer);
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
	native private long getProjectionMatrixWithRSDepth_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getProjectionMatrixWithRSDepth_NoVirtual()
	{
		long returnValue = getProjectionMatrixWithRSDepth_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getProjectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getProjectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getProjectionMatrix_void(long pNativeObject);
	/**
	 * 获取该摄像机投影矩阵遵循右手坐标系规则，使用深度值[-1,+1]
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getProjectionMatrix()
	{
		long returnValue = getProjectionMatrix_void(this.nativeObject.pointer);
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
	native private long getProjectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getProjectionMatrix_NoVirtual()
	{
		long returnValue = getProjectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewMatrix_void(long pNativeObject);
	/**
	 * 获取该摄像机观察矩阵内部使用
	 * @param  
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

	protected  void calcViewMatrixRelative_CVector3_CMatrix4_callback(long relPos, long matToUpdate)
	{
		com.earthview.world.spatial.math.Vector3 relPosParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		relPosParamValue.setDelegate(true);
		relPosParamValue.setInstancePointer(new InstancePointer(relPos));
		IClassFactory relPosParamValueClassFactory = GlobalClassFactoryMap.get(relPosParamValue.getCppInstanceTypeName());
		if (relPosParamValueClassFactory != null)
		{
			relPosParamValue.setDelegate(true);
			relPosParamValue = (com.earthview.world.spatial.math.Vector3)relPosParamValueClassFactory.create();
			relPosParamValue.setDelegate(true);
			relPosParamValue.setInstancePointer(new InstancePointer(relPos));
		}
		com.earthview.world.spatial.math.Matrix4 matToUpdateParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		matToUpdateParamValue.setDelegate(true);
		matToUpdateParamValue.setInstancePointer(new InstancePointer(matToUpdate));
		IClassFactory matToUpdateParamValueClassFactory = GlobalClassFactoryMap.get(matToUpdateParamValue.getCppInstanceTypeName());
		if (matToUpdateParamValueClassFactory != null)
		{
			matToUpdateParamValue.setDelegate(true);
			matToUpdateParamValue = (com.earthview.world.spatial.math.Matrix4)matToUpdateParamValueClassFactory.create();
			matToUpdateParamValue.setDelegate(true);
			matToUpdateParamValue.setInstancePointer(new InstancePointer(matToUpdate));
		}
		calcViewMatrixRelative(relPosParamValue, matToUpdateParamValue);
	}

	native private void calcViewMatrixRelative_CVector3_CMatrix4(long pNativeObject, long relPos, long matToUpdate);
	/**
	 * 根据动态点缩放关系，计算当前观察矩阵内部使用
	 * @param relPos 平移的三维向量
	 * @param matToUpdate 缩放的四维矩阵
	 */
	public void calcViewMatrixRelative(com.earthview.world.spatial.math.Vector3 relPos, com.earthview.world.spatial.math.Matrix4 matToUpdate)
	{
		long relPosParamValue = relPos.nativeObject.pointer;
		long matToUpdateParamValue = matToUpdate.nativeObject.pointer;
		calcViewMatrixRelative_CVector3_CMatrix4(this.nativeObject.pointer, relPosParamValue, matToUpdateParamValue);
	}
	native private void calcViewMatrixRelative_CVector3_CMatrix4_NoVirtual(long pNativeObject, long relPos, long matToUpdate);
	protected void calcViewMatrixRelative_NoVirtual(com.earthview.world.spatial.math.Vector3 relPos, com.earthview.world.spatial.math.Matrix4 matToUpdate)
	{
		long relPosParamValue = relPos.nativeObject.pointer;
		long matToUpdateParamValue = matToUpdate.nativeObject.pointer;
		calcViewMatrixRelative_CVector3_CMatrix4_NoVirtual(this.nativeObject.pointer, relPosParamValue, matToUpdateParamValue);
	}

	protected  void setCustomViewMatrix_ev_bool_CMatrix4_callback(boolean enable, long viewMatrix)
	{
		boolean enableParamValue = enable;
		com.earthview.world.spatial.math.Matrix4 viewMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		viewMatrixParamValue.setDelegate(true);
		viewMatrixParamValue.setInstancePointer(new InstancePointer(viewMatrix));
		IClassFactory viewMatrixParamValueClassFactory = GlobalClassFactoryMap.get(viewMatrixParamValue.getCppInstanceTypeName());
		if (viewMatrixParamValueClassFactory != null)
		{
			viewMatrixParamValue.setDelegate(true);
			viewMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)viewMatrixParamValueClassFactory.create();
			viewMatrixParamValue.setDelegate(true);
			viewMatrixParamValue.setInstancePointer(new InstancePointer(viewMatrix));
		}
		setCustomViewMatrix(enableParamValue, viewMatrixParamValue);
	}

	native private void setCustomViewMatrix_ev_bool_CMatrix4(long pNativeObject, boolean enable, long viewMatrix);
	/**
	 * 是否使用自定义观察矩阵
	 * @param enable 如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值
	 * @param viewMatrix 使用自定义矩阵，则矩阵为相似矩阵
	 */
	public void setCustomViewMatrix(boolean enable, com.earthview.world.spatial.math.Matrix4 viewMatrix)
	{
		boolean enableParamValue = enable;
		long viewMatrixParamValue = viewMatrix.nativeObject.pointer;
		setCustomViewMatrix_ev_bool_CMatrix4(this.nativeObject.pointer, enableParamValue, viewMatrixParamValue);
	}
	native private void setCustomViewMatrix_ev_bool_CMatrix4_NoVirtual(long pNativeObject, boolean enable, long viewMatrix);
	protected void setCustomViewMatrix_NoVirtual(boolean enable, com.earthview.world.spatial.math.Matrix4 viewMatrix)
	{
		boolean enableParamValue = enable;
		long viewMatrixParamValue = viewMatrix.nativeObject.pointer;
		setCustomViewMatrix_ev_bool_CMatrix4_NoVirtual(this.nativeObject.pointer, enableParamValue, viewMatrixParamValue);
	}

	protected  void setCustomViewMatrix_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomViewMatrix(enableParamValue);
	}

	native private void setCustomViewMatrix_ev_bool(long pNativeObject, boolean enable);
	public void setCustomViewMatrix(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomViewMatrix_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setCustomViewMatrix_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setCustomViewMatrix_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomViewMatrix_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean isCustomViewMatrixEnabled_void_callback()
	{
		boolean returnValue = isCustomViewMatrixEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCustomViewMatrixEnabled_void(long pNativeObject);
	/**
	 * 自定义观察矩阵是否正在使用
	 * @param  
	 */
	public boolean isCustomViewMatrixEnabled()
	{
		boolean returnValue = isCustomViewMatrixEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCustomViewMatrixEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isCustomViewMatrixEnabled_NoVirtual()
	{
		boolean returnValue = isCustomViewMatrixEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCustomProjectionMatrix_ev_bool_CMatrix4_callback(boolean enable, long projectionMatrix)
	{
		boolean enableParamValue = enable;
		com.earthview.world.spatial.math.Matrix4 projectionMatrixParamValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		projectionMatrixParamValue.setDelegate(true);
		projectionMatrixParamValue.setInstancePointer(new InstancePointer(projectionMatrix));
		IClassFactory projectionMatrixParamValueClassFactory = GlobalClassFactoryMap.get(projectionMatrixParamValue.getCppInstanceTypeName());
		if (projectionMatrixParamValueClassFactory != null)
		{
			projectionMatrixParamValue.setDelegate(true);
			projectionMatrixParamValue = (com.earthview.world.spatial.math.Matrix4)projectionMatrixParamValueClassFactory.create();
			projectionMatrixParamValue.setDelegate(true);
			projectionMatrixParamValue.setInstancePointer(new InstancePointer(projectionMatrix));
		}
		setCustomProjectionMatrix(enableParamValue, projectionMatrixParamValue);
	}

	native private void setCustomProjectionMatrix_ev_bool_CMatrix4(long pNativeObject, boolean enable, long projectionMatrix);
	/**
	 * 是否使用用户自定义投射矩阵
	 * @param enable 如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值
	 * @param projectionMatrix 
	 */
	public void setCustomProjectionMatrix(boolean enable, com.earthview.world.spatial.math.Matrix4 projectionMatrix)
	{
		boolean enableParamValue = enable;
		long projectionMatrixParamValue = projectionMatrix.nativeObject.pointer;
		setCustomProjectionMatrix_ev_bool_CMatrix4(this.nativeObject.pointer, enableParamValue, projectionMatrixParamValue);
	}
	native private void setCustomProjectionMatrix_ev_bool_CMatrix4_NoVirtual(long pNativeObject, boolean enable, long projectionMatrix);
	protected void setCustomProjectionMatrix_NoVirtual(boolean enable, com.earthview.world.spatial.math.Matrix4 projectionMatrix)
	{
		boolean enableParamValue = enable;
		long projectionMatrixParamValue = projectionMatrix.nativeObject.pointer;
		setCustomProjectionMatrix_ev_bool_CMatrix4_NoVirtual(this.nativeObject.pointer, enableParamValue, projectionMatrixParamValue);
	}

	protected  void setCustomProjectionMatrix_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomProjectionMatrix(enableParamValue);
	}

	native private void setCustomProjectionMatrix_ev_bool(long pNativeObject, boolean enable);
	public void setCustomProjectionMatrix(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomProjectionMatrix_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setCustomProjectionMatrix_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setCustomProjectionMatrix_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setCustomProjectionMatrix_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean isCustomProjectionMatrixEnabled_void_callback()
	{
		boolean returnValue = isCustomProjectionMatrixEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCustomProjectionMatrixEnabled_void(long pNativeObject);
	/**
	 * 自定义观察矩阵是否正在使用
	 * @param  
	 */
	public boolean isCustomProjectionMatrixEnabled()
	{
		boolean returnValue = isCustomProjectionMatrixEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCustomProjectionMatrixEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isCustomProjectionMatrixEnabled_NoVirtual()
	{
		boolean returnValue = isCustomProjectionMatrixEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFrustumPlanes_void_callback()
	{
		com.earthview.world.spatial.math.Plane returnValue = getFrustumPlanes();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrustumPlanes_void(long pNativeObject);
	/**
	 * 获取裁剪面裁剪面顺序定义在枚举EarthView::World::Graphic::FrustumPlane中。
	 * @param  
	 */
	public com.earthview.world.spatial.math.Plane getFrustumPlanes()
	{
		long returnValue = getFrustumPlanes_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long getFrustumPlanes_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Plane getFrustumPlanes_NoVirtual()
	{
		long returnValue = getFrustumPlanes_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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

	protected  long getFrustumPlane_ev_uint16_callback(int plane)
	{
		int planeParamValue = plane;
		com.earthview.world.spatial.math.Plane returnValue = getFrustumPlane(planeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrustumPlane_ev_uint16(long pNativeObject, int plane);
	/**
	 * 获取视椎体的特定面
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

	protected  boolean isVisible_CAxisAlignedBox_FrustumPlane_callback(long bound, long culledBy)
	{
		com.earthview.world.spatial.math.AxisAlignedBox boundParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		boundParamValue.setDelegate(true);
		boundParamValue.setInstancePointer(new InstancePointer(bound));
		IClassFactory boundParamValueClassFactory = GlobalClassFactoryMap.get(boundParamValue.getCppInstanceTypeName());
		if (boundParamValueClassFactory != null)
		{
			boundParamValue.setDelegate(true);
			boundParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)boundParamValueClassFactory.create();
			boundParamValue.setDelegate(true);
			boundParamValue.setInstancePointer(new InstancePointer(bound));
		}
		EnumPointer culledByParamValue = (culledBy == 0L ? null : new EnumPointer(new InstancePointer(culledBy)));
		boolean returnValue = isVisible(boundParamValue, culledByParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_CAxisAlignedBox_FrustumPlane(long pNativeObject, long bound, long culledBy);
	/**
	 * 测试给定的边框盒是否在视椎体中
	 * @param bound 包围盒
	 * @param culledBy 锥体面指针
	 * @return 如果成功，可见
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

	protected  boolean isVisible_CAxisAlignedBox_callback(long bound)
	{
		com.earthview.world.spatial.math.AxisAlignedBox boundParamValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		boundParamValue.setDelegate(true);
		boundParamValue.setInstancePointer(new InstancePointer(bound));
		IClassFactory boundParamValueClassFactory = GlobalClassFactoryMap.get(boundParamValue.getCppInstanceTypeName());
		if (boundParamValueClassFactory != null)
		{
			boundParamValue.setDelegate(true);
			boundParamValue = (com.earthview.world.spatial.math.AxisAlignedBox)boundParamValueClassFactory.create();
			boundParamValue.setDelegate(true);
			boundParamValue.setInstancePointer(new InstancePointer(bound));
		}
		boolean returnValue = isVisible(boundParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isVisible_CSphere_FrustumPlane_callback(long bound, long culledBy)
	{
		com.earthview.world.spatial.math.Sphere boundParamValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate);
		boundParamValue.setDelegate(true);
		boundParamValue.setInstancePointer(new InstancePointer(bound));
		IClassFactory boundParamValueClassFactory = GlobalClassFactoryMap.get(boundParamValue.getCppInstanceTypeName());
		if (boundParamValueClassFactory != null)
		{
			boundParamValue.setDelegate(true);
			boundParamValue = (com.earthview.world.spatial.math.Sphere)boundParamValueClassFactory.create();
			boundParamValue.setDelegate(true);
			boundParamValue.setInstancePointer(new InstancePointer(bound));
		}
		EnumPointer culledByParamValue = (culledBy == 0L ? null : new EnumPointer(new InstancePointer(culledBy)));
		boolean returnValue = isVisible(boundParamValue, culledByParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_CSphere_FrustumPlane(long pNativeObject, long bound, long culledBy);
	/**
	 * 测试给定的球体是否在视椎体中
	 * @param bound 封闭球体
	 * @param culledBy 锥体面指针
	 * @return 如果成功，可见
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

	protected  boolean isVisible_CSphere_callback(long bound)
	{
		com.earthview.world.spatial.math.Sphere boundParamValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate);
		boundParamValue.setDelegate(true);
		boundParamValue.setInstancePointer(new InstancePointer(bound));
		IClassFactory boundParamValueClassFactory = GlobalClassFactoryMap.get(boundParamValue.getCppInstanceTypeName());
		if (boundParamValueClassFactory != null)
		{
			boundParamValue.setDelegate(true);
			boundParamValue = (com.earthview.world.spatial.math.Sphere)boundParamValueClassFactory.create();
			boundParamValue.setDelegate(true);
			boundParamValue.setInstancePointer(new InstancePointer(bound));
		}
		boolean returnValue = isVisible(boundParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean isVisible_CVector3_FrustumPlane_callback(long vert, long culledBy)
	{
		com.earthview.world.spatial.math.Vector3 vertParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vertParamValue.setDelegate(true);
		vertParamValue.setInstancePointer(new InstancePointer(vert));
		IClassFactory vertParamValueClassFactory = GlobalClassFactoryMap.get(vertParamValue.getCppInstanceTypeName());
		if (vertParamValueClassFactory != null)
		{
			vertParamValue.setDelegate(true);
			vertParamValue = (com.earthview.world.spatial.math.Vector3)vertParamValueClassFactory.create();
			vertParamValue.setDelegate(true);
			vertParamValue.setInstancePointer(new InstancePointer(vert));
		}
		EnumPointer culledByParamValue = (culledBy == 0L ? null : new EnumPointer(new InstancePointer(culledBy)));
		boolean returnValue = isVisible(vertParamValue, culledByParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isVisible_CVector3_FrustumPlane(long pNativeObject, long vert, long culledBy);
	/**
	 * 测试给定的顶点是否在视椎体中
	 * @param vert 顶点
	 * @param culledBy 锥体面指针
	 * @return 如果成功，可见
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

	protected  boolean isVisible_CVector3_callback(long vert)
	{
		com.earthview.world.spatial.math.Vector3 vertParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vertParamValue.setDelegate(true);
		vertParamValue.setInstancePointer(new InstancePointer(vert));
		IClassFactory vertParamValueClassFactory = GlobalClassFactoryMap.get(vertParamValue.getCppInstanceTypeName());
		if (vertParamValueClassFactory != null)
		{
			vertParamValue.setDelegate(true);
			vertParamValue = (com.earthview.world.spatial.math.Vector3)vertParamValueClassFactory.create();
			vertParamValue.setDelegate(true);
			vertParamValue.setInstancePointer(new InstancePointer(vert));
		}
		boolean returnValue = isVisible(vertParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获得类型标志信息
	 * @param  
	 * @return 标志
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTypeFlags_void_NoVirtual(long pNativeObject);
	protected long getTypeFlags_NoVirtual()
	{
		long returnValue = getTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获得外包围盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		long returnValue = getBoundingBox_void(this.nativeObject.pointer);
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
	native private long getBoundingBox_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox_NoVirtual()
	{
		long returnValue = getBoundingBox_void_NoVirtual(this.nativeObject.pointer);
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

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获得外包围盒半径
	 * @param  
	 * @return 范围
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

	native private void _updateRenderQueue_CRenderQueue(long pNativeObject, long queue);
	/**
	 * 更新渲染队列
	 * @param queue 渲染队列
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_NoVirtual(long pNativeObject, long queue);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		_updateRenderQueue_CRenderQueue_NoVirtual(this.nativeObject.pointer, queueParamValue);
	}

	native private String getMovableType_void(long pNativeObject);
	/**
	 * 获取移动对象类型的名称
	 * @param  
	 * @return 名称
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

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long cam);
	/**
	 * 渲染时通报当前摄像机内部方法
	 * @param cam 摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	protected  void setProjectionType_ProjectionType_callback(int pt)
	{
		com.earthview.world.graphic.ProjectionType ptParamValue = com.earthview.world.graphic.ProjectionType.toEnum(pt);
		setProjectionType(ptParamValue);
	}

	native private void setProjectionType_ProjectionType(long pNativeObject, int pt);
	/**
	 * 设置投影类型默认为透视投影
	 * @param pt 投影类型
	 */
	public void setProjectionType(com.earthview.world.graphic.ProjectionType pt)
	{
		int ptParamValue = pt.getValue();
		setProjectionType_ProjectionType(this.nativeObject.pointer, ptParamValue);
	}
	native private void setProjectionType_ProjectionType_NoVirtual(long pNativeObject, int pt);
	protected void setProjectionType_NoVirtual(com.earthview.world.graphic.ProjectionType pt)
	{
		int ptParamValue = pt.getValue();
		setProjectionType_ProjectionType_NoVirtual(this.nativeObject.pointer, ptParamValue);
	}

	protected  int getProjectionType_void_callback()
	{
		com.earthview.world.graphic.ProjectionType returnValue = getProjectionType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getProjectionType_void(long pNativeObject);
	/**
	 * 获取当前使用投影类型正射投影或者透视投影
	 * @param  
	 */
	public com.earthview.world.graphic.ProjectionType getProjectionType()
	{
		int returnValue = getProjectionType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.ProjectionType.toEnum(returnValue);
	}
	native private int getProjectionType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ProjectionType getProjectionType_NoVirtual()
	{
		int returnValue = getProjectionType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.ProjectionType.toEnum(returnValue);
	}

	protected  void setOrthoWindow_Real_Real_callback(double w, double h)
	{
		double wParamValue = w;
		double hParamValue = h;
		setOrthoWindow(wParamValue, hParamValue);
	}

	native private void setOrthoWindow_Real_Real(long pNativeObject, double w, double h);
	/**
	 * 设置平行投影窗口设置只有在正交渲染的时候使用
	 * @param w 窗口宽
	 * @param h 窗口高
	 */
	public void setOrthoWindow(double w, double h)
	{
		double wParamValue = w;
		double hParamValue = h;
		setOrthoWindow_Real_Real(this.nativeObject.pointer, wParamValue, hParamValue);
	}
	native private void setOrthoWindow_Real_Real_NoVirtual(long pNativeObject, double w, double h);
	protected void setOrthoWindow_NoVirtual(double w, double h)
	{
		double wParamValue = w;
		double hParamValue = h;
		setOrthoWindow_Real_Real_NoVirtual(this.nativeObject.pointer, wParamValue, hParamValue);
	}

	protected  void setOrthoWindowHeight_Real_callback(double h)
	{
		double hParamValue = h;
		setOrthoWindowHeight(hParamValue);
	}

	native private void setOrthoWindowHeight_Real(long pNativeObject, double h);
	/**
	 * 设置平行投影窗口高度值设置只有在正交渲染的时候使用窗口宽度由窗口比例计算出
	 * @param h 在世界单位下视图窗口的高度值
	 */
	public void setOrthoWindowHeight(double h)
	{
		double hParamValue = h;
		setOrthoWindowHeight_Real(this.nativeObject.pointer, hParamValue);
	}
	native private void setOrthoWindowHeight_Real_NoVirtual(long pNativeObject, double h);
	protected void setOrthoWindowHeight_NoVirtual(double h)
	{
		double hParamValue = h;
		setOrthoWindowHeight_Real_NoVirtual(this.nativeObject.pointer, hParamValue);
	}

	protected  void setOrthoWindowWidth_Real_callback(double w)
	{
		double wParamValue = w;
		setOrthoWindowWidth(wParamValue);
	}

	native private void setOrthoWindowWidth_Real(long pNativeObject, double w);
	/**
	 * 设置平行投影窗口宽度设置只有在正交渲染的时候使用窗口高度由窗口比例计算出
	 * @param w 窗口宽度
	 */
	public void setOrthoWindowWidth(double w)
	{
		double wParamValue = w;
		setOrthoWindowWidth_Real(this.nativeObject.pointer, wParamValue);
	}
	native private void setOrthoWindowWidth_Real_NoVirtual(long pNativeObject, double w);
	protected void setOrthoWindowWidth_NoVirtual(double w)
	{
		double wParamValue = w;
		setOrthoWindowWidth_Real_NoVirtual(this.nativeObject.pointer, wParamValue);
	}

	protected  double getOrthoWindowHeight_void_callback()
	{
		double returnValue = getOrthoWindowHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOrthoWindowHeight_void(long pNativeObject);
	/**
	 * 得到平行投影窗口高度值
	 * @param  
	 */
	public double getOrthoWindowHeight()
	{
		double returnValue = getOrthoWindowHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOrthoWindowHeight_void_NoVirtual(long pNativeObject);
	protected double getOrthoWindowHeight_NoVirtual()
	{
		double returnValue = getOrthoWindowHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getOrthoWindowWidth_void_callback()
	{
		double returnValue = getOrthoWindowWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOrthoWindowWidth_void(long pNativeObject);
	/**
	 * 得到平行投影窗口宽度值
	 * @param  
	 */
	public double getOrthoWindowWidth()
	{
		double returnValue = getOrthoWindowWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOrthoWindowWidth_void_NoVirtual(long pNativeObject);
	protected double getOrthoWindowWidth_NoVirtual()
	{
		double returnValue = getOrthoWindowWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void enableReflection_CPlane_callback(long p)
	{
		com.earthview.world.spatial.math.Plane pParamValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		pParamValue.setDelegate(true);
		pParamValue.setInstancePointer(new InstancePointer(p));
		IClassFactory pParamValueClassFactory = GlobalClassFactoryMap.get(pParamValue.getCppInstanceTypeName());
		if (pParamValueClassFactory != null)
		{
			pParamValue.setDelegate(true);
			pParamValue = (com.earthview.world.spatial.math.Plane)pParamValueClassFactory.create();
			pParamValue.setDelegate(true);
			pParamValue.setInstancePointer(new InstancePointer(p));
		}
		enableReflection(pParamValue);
	}

	native private void enableReflection_CPlane(long pNativeObject, long p);
	/**
	 * 设置反射的镜面平面,并启用镜面反射
	 * @param p 作为镜面的平面
	 */
	public void enableReflection(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		enableReflection_CPlane(this.nativeObject.pointer, pParamValue);
	}
	native private void enableReflection_CPlane_NoVirtual(long pNativeObject, long p);
	protected void enableReflection_NoVirtual(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		enableReflection_CPlane_NoVirtual(this.nativeObject.pointer, pParamValue);
	}

	protected  void enableReflection_CMovablePlane_callback(long p)
	{
		com.earthview.world.graphic.MovablePlane pParamValue = (p == 0L ? null : new com.earthview.world.graphic.MovablePlane(CreatedWhenConstruct.CWC_NotToCreate));
		if(pParamValue != null)
		{
		pParamValue.setDelegate(true);
		pParamValue.setInstancePointer(new InstancePointer(p));
		IClassFactory pParamValueClassFactory = GlobalClassFactoryMap.get(pParamValue.getCppInstanceTypeName());
		if (pParamValueClassFactory != null)
		{
			pParamValue.setDelegate(true);
			pParamValue = (com.earthview.world.graphic.MovablePlane)pParamValueClassFactory.create();
			pParamValue.setDelegate(true);
			pParamValue.setInstancePointer(new InstancePointer(p));
		}
		}
		enableReflection(pParamValue);
	}

	native private void enableReflection_CMovablePlane(long pNativeObject, long p);
	/**
	 * 设置反射的镜面平面,并启用镜面反射
	 * @param p 作为镜面的可移动平面
	 */
	public void enableReflection(com.earthview.world.graphic.MovablePlane p)
	{
		long pParamValue = (p == null ? 0L : p.nativeObject.pointer);
		enableReflection_CMovablePlane(this.nativeObject.pointer, pParamValue);
	}
	native private void enableReflection_CMovablePlane_NoVirtual(long pNativeObject, long p);
	protected void enableReflection_NoVirtual(com.earthview.world.graphic.MovablePlane p)
	{
		long pParamValue = (p == null ? 0L : p.nativeObject.pointer);
		enableReflection_CMovablePlane_NoVirtual(this.nativeObject.pointer, pParamValue);
	}

	protected  void disableReflection_void_callback()
	{
		disableReflection();
	}

	native private void disableReflection_void(long pNativeObject);
	/**
	 * 禁用镜面平面
	 * @param  
	 */
	public void disableReflection()
	{
		disableReflection_void(this.nativeObject.pointer);
	}
	native private void disableReflection_void_NoVirtual(long pNativeObject);
	protected void disableReflection_NoVirtual()
	{
		disableReflection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isReflected_void_callback()
	{
		boolean returnValue = isReflected();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isReflected_void(long pNativeObject);
	/**
	 * 判断是否启用了镜面反射
	 * @param  
	 */
	public boolean isReflected()
	{
		boolean returnValue = isReflected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isReflected_void_NoVirtual(long pNativeObject);
	protected boolean isReflected_NoVirtual()
	{
		boolean returnValue = isReflected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getReflectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getReflectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getReflectionMatrix_void(long pNativeObject);
	/**
	 * 获取视椎体的反射矩阵
	 * @param  
	 * @return 反射矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getReflectionMatrix()
	{
		long returnValue = getReflectionMatrix_void(this.nativeObject.pointer);
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
	native private long getReflectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getReflectionMatrix_NoVirtual()
	{
		long returnValue = getReflectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getReflectionPlane_void_callback()
	{
		com.earthview.world.spatial.math.Plane returnValue = getReflectionPlane();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getReflectionPlane_void(long pNativeObject);
	/**
	 * 获取视椎体的反射平面
	 * @param  
	 * @return 反射平面
	 */
	public com.earthview.world.spatial.math.Plane getReflectionPlane()
	{
		long returnValue = getReflectionPlane_void(this.nativeObject.pointer);
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
	native private long getReflectionPlane_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Plane getReflectionPlane_NoVirtual()
	{
		long returnValue = getReflectionPlane_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean projectSphere_CSphere_Real_Real_Real_Real_callback(long sphere, long left, long top, long right, long bottom)
	{
		com.earthview.world.spatial.math.Sphere sphereParamValue = new com.earthview.world.spatial.math.Sphere(CreatedWhenConstruct.CWC_NotToCreate);
		sphereParamValue.setDelegate(true);
		sphereParamValue.setInstancePointer(new InstancePointer(sphere));
		IClassFactory sphereParamValueClassFactory = GlobalClassFactoryMap.get(sphereParamValue.getCppInstanceTypeName());
		if (sphereParamValueClassFactory != null)
		{
			sphereParamValue.setDelegate(true);
			sphereParamValue = (com.earthview.world.spatial.math.Sphere)sphereParamValueClassFactory.create();
			sphereParamValue.setDelegate(true);
			sphereParamValue.setInstancePointer(new InstancePointer(sphere));
		}
		DoublePointer leftParamValue = (left == 0L ? null : new DoublePointer(new InstancePointer(left)));
		DoublePointer topParamValue = (top == 0L ? null : new DoublePointer(new InstancePointer(top)));
		DoublePointer rightParamValue = (right == 0L ? null : new DoublePointer(new InstancePointer(right)));
		DoublePointer bottomParamValue = (bottom == 0L ? null : new DoublePointer(new InstancePointer(bottom)));
		boolean returnValue = projectSphere(sphereParamValue, leftParamValue, topParamValue, rightParamValue, bottomParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean projectSphere_CSphere_Real_Real_Real_Real(long pNativeObject, long sphere, long left, long top, long right, long bottom);
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

	protected  void enableCustomNearClipPlane_CMovablePlane_callback(long plane)
	{
		com.earthview.world.graphic.MovablePlane planeParamValue = (plane == 0L ? null : new com.earthview.world.graphic.MovablePlane(CreatedWhenConstruct.CWC_NotToCreate));
		if(planeParamValue != null)
		{
		planeParamValue.setDelegate(true);
		planeParamValue.setInstancePointer(new InstancePointer(plane));
		IClassFactory planeParamValueClassFactory = GlobalClassFactoryMap.get(planeParamValue.getCppInstanceTypeName());
		if (planeParamValueClassFactory != null)
		{
			planeParamValue.setDelegate(true);
			planeParamValue = (com.earthview.world.graphic.MovablePlane)planeParamValueClassFactory.create();
			planeParamValue.setDelegate(true);
			planeParamValue.setInstancePointer(new InstancePointer(plane));
		}
		}
		enableCustomNearClipPlane(planeParamValue);
	}

	native private void enableCustomNearClipPlane_CMovablePlane(long pNativeObject, long plane);
	/**
	 * 启用自定义近裁剪面
	 * @param plane 裁剪面，当摄像机关联此面时，它必须存在，不能在视椎体之前销毁它
	 */
	public void enableCustomNearClipPlane(com.earthview.world.graphic.MovablePlane plane)
	{
		long planeParamValue = (plane == null ? 0L : plane.nativeObject.pointer);
		enableCustomNearClipPlane_CMovablePlane(this.nativeObject.pointer, planeParamValue);
	}
	native private void enableCustomNearClipPlane_CMovablePlane_NoVirtual(long pNativeObject, long plane);
	protected void enableCustomNearClipPlane_NoVirtual(com.earthview.world.graphic.MovablePlane plane)
	{
		long planeParamValue = (plane == null ? 0L : plane.nativeObject.pointer);
		enableCustomNearClipPlane_CMovablePlane_NoVirtual(this.nativeObject.pointer, planeParamValue);
	}

	protected  void enableCustomNearClipPlane_CPlane_callback(long plane)
	{
		com.earthview.world.spatial.math.Plane planeParamValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		planeParamValue.setDelegate(true);
		planeParamValue.setInstancePointer(new InstancePointer(plane));
		IClassFactory planeParamValueClassFactory = GlobalClassFactoryMap.get(planeParamValue.getCppInstanceTypeName());
		if (planeParamValueClassFactory != null)
		{
			planeParamValue.setDelegate(true);
			planeParamValue = (com.earthview.world.spatial.math.Plane)planeParamValueClassFactory.create();
			planeParamValue.setDelegate(true);
			planeParamValue.setInstancePointer(new InstancePointer(plane));
		}
		enableCustomNearClipPlane(planeParamValue);
	}

	native private void enableCustomNearClipPlane_CPlane(long pNativeObject, long plane);
	public void enableCustomNearClipPlane(com.earthview.world.spatial.math.Plane plane)
	{
		long planeParamValue = plane.nativeObject.pointer;
		enableCustomNearClipPlane_CPlane(this.nativeObject.pointer, planeParamValue);
	}
	native private void enableCustomNearClipPlane_CPlane_NoVirtual(long pNativeObject, long plane);
	protected void enableCustomNearClipPlane_NoVirtual(com.earthview.world.spatial.math.Plane plane)
	{
		long planeParamValue = plane.nativeObject.pointer;
		enableCustomNearClipPlane_CPlane_NoVirtual(this.nativeObject.pointer, planeParamValue);
	}

	protected  void disableCustomNearClipPlane_void_callback()
	{
		disableCustomNearClipPlane();
	}

	native private void disableCustomNearClipPlane_void(long pNativeObject);
	/**
	 * 禁用自定义近裁剪面
	 * @param  
	 */
	public void disableCustomNearClipPlane()
	{
		disableCustomNearClipPlane_void(this.nativeObject.pointer);
	}
	native private void disableCustomNearClipPlane_void_NoVirtual(long pNativeObject);
	protected void disableCustomNearClipPlane_NoVirtual()
	{
		disableCustomNearClipPlane_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isCustomNearClipPlaneEnabled_void_callback()
	{
		boolean returnValue = isCustomNearClipPlaneEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCustomNearClipPlaneEnabled_void(long pNativeObject);
	/**
	 * 自定义近裁剪面是否被使用
	 * @param  
	 */
	public boolean isCustomNearClipPlaneEnabled()
	{
		boolean returnValue = isCustomNearClipPlaneEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCustomNearClipPlaneEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isCustomNearClipPlaneEnabled_NoVirtual()
	{
		boolean returnValue = isCustomNearClipPlaneEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染对象允许迭代器遍历渲染实例，当被询问时，移动对象将被添加到渲染队列
	 * @param visitor 
	 * @param debugRenderables 为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括
	 */
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void visitRenderables_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		visitRenderables_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor(this.nativeObject.pointer, visitorParamValue);
	}
	native private void visitRenderables_CVisitor_NoVirtual(long pNativeObject, long visitor);
	protected void visitRenderables_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		visitRenderables_CVisitor_NoVirtual(this.nativeObject.pointer, visitorParamValue);
	}

	native private static double get_INFINITE_FAR_PLANE_ADJUST_void();
	public static double get_INFINITE_FAR_PLANE_ADJUST()
	{
		double jniValue = get_INFINITE_FAR_PLANE_ADJUST_void();
		
		return jniValue;
	}
	
	protected  long getPositionForViewUpdate_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getPositionForViewUpdate();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPositionForViewUpdate_void(long pNativeObject);
	/**
	 * 获取视椎体派生位置
	 * @param  
	 * @return 三维矢量
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

	protected  long getOrientationForViewUpdate_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getOrientationForViewUpdate();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOrientationForViewUpdate_void(long pNativeObject);
	/**
	 * 获取视椎体派生四元数
	 * @param  
	 * @return 四元数
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

	native private long getPlaneBoundedVolume_void(long pNativeObject);
	/**
	 * 获取封闭视椎体的世界空间面列表
	 * @param  
	 */
	public com.earthview.world.spatial.math.PlaneBoundedVolume getPlaneBoundedVolume()
	{
		long returnValue = getPlaneBoundedVolume_void(this.nativeObject.pointer);
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
	native private void setOrientationMode_OrientationMode(long pNativeObject, int orientationMode);
	/**
	 * 设置视椎体定向模式，默认为EV_NO_VIEWPORT_ORIENTATIONMODE=0此函数只有在iPhone上可用，在其他平台作为例外被抛出
	 * @param  
	 */
	public void setOrientationMode(com.earthview.world.graphic.OrientationMode orientationMode)
	{
		int orientationModeParamValue = orientationMode.getValue();
		setOrientationMode_OrientationMode(this.nativeObject.pointer, orientationModeParamValue);
	}
	native private int getOrientationMode_void(long pNativeObject);
	/**
	 * 得到视椎体定向模式此函数只有在iPhone上可用，在其他平台作为例外被抛出
	 * @param  
	 * @return 返回本身
	 */
	public com.earthview.world.graphic.OrientationMode getOrientationMode()
	{
		int returnValue = getOrientationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.OrientationMode.toEnum(returnValue);
	}
	native private long caculateOrthoProjMatrix_Real_Real_Real_Real_Real_Real(long pNativeObject, double left, double right, double top, double bottom, double nearClip, double farClip);
	/**
	 * 计算正交投影矩阵
	 * @param left 
	 * @param right 
	 * @param top 
	 * @param bottom 
	 * @param nearClip 
	 * @param farClip 
	 */
	public com.earthview.world.spatial.math.Matrix4 caculateOrthoProjMatrix(double left, double right, double top, double bottom, double nearClip, double farClip)
	{
		double leftParamValue = left;
		double rightParamValue = right;
		double topParamValue = top;
		double bottomParamValue = bottom;
		double nearClipParamValue = nearClip;
		double farClipParamValue = farClip;
		long returnValue = caculateOrthoProjMatrix_Real_Real_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, rightParamValue, topParamValue, bottomParamValue, nearClipParamValue, farClipParamValue);
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
	public Frustum(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Frustum(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Frustum fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Frustum obj = null;
 		if(baseObj instanceof Frustum)
		{
			obj = (Frustum)baseObj;
		} else {
			obj = new Frustum(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFrustum");
			obj.increaseCast();
		}

		return obj;
	}
}
